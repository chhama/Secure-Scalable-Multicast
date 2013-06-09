# Create scheduler
#Create an event scheduler wit multicast turned on
package require TclOO
source "keytree.tcl"

set ns [new Simulator -multicast on]
$ns multicast

global NODECOUNT 
set NODECOUNT 0

global nummsg
set nummsg 1
#Turn on Tracing
set tf [open output.tr w]
$ns trace-all $tf

# Turn on nam Tracing
set fd [open randmcast.nam w]
$ns namtrace-all $fd


# Create nodes
set OLDCOMM {
	set n(0) [$ns node]
set n(1) [$ns node]
set n(2) [$ns node]
set n(3) [$ns node]
set n(4) [$ns node]
set n(5) [$ns node]
set n(6) [$ns node]
set n(7) [$ns node]
}
global n
set NUMNODES 80
global NUMNODES
#set i 0
for {set i 0} {$i < $NUMNODES} {incr i} {
	set n($i) "[$ns node]"
}

#maintains list of leaving nodes
global llist
for {set i 0} {$i < $NUMNODES} {incr i} {
	set llist($i) 0
}
 
# Create links
$ns duplex-link $n(0) $n(1) 1.5Mb 10ms DropTail
$ns duplex-link $n(0) $n(2) 1.5Mb 10ms DropTail


#create the rest of the links
for {set i 1} {$i < 40} {incr i} {
      $ns duplex-link $n($i) $n([expr 2*($i)%$NUMNODES]) 1Mb 10ms DropTail
      $ns duplex-link $n($i) $n([expr (2*($i)+1)%$NUMNODES]) 1Mb 10ms DropTail
}

#create GOD

# Routing protocol: say distance vector
#Protocols: CtrMcast, DM, ST, BST
set mproto DM
set mrthandle [$ns mrtproto $mproto {}]

# Allocate group addresses
set group1 [Node allocaddr]
set group2 [Node allocaddr]

# UDP Transport agent for the traffic source
set udp0 [new Agent/UDP]
$ns attach-agent $n(0) $udp0
$udp0 set dst_addr_ $group1
$udp0 set dst_port_ 0
set cbr1 [new Application/Traffic/CBR]
$cbr1 attach-agent $udp0

# Transport agent for the traffic source
set udp1 [new Agent/UDP]
$ns attach-agent $n(1) $udp1
$udp1 set dst_addr_ $group2
$udp1 set dst_port_ 0
set cbr2 [new Application/Traffic/CBR]
$cbr2 attach-agent $udp1


#$ns at 0.2 "Graph"
set g [open randgraph.tr w]
set g1 [open randgraph1.tr w]
set g2 [open graph2.tr w]
proc Graph {} {
	global ns g g1 g2 nummsg
	set time 1.0
	set now [$ns now]
	puts $::nummsg
	puts $g "$now [expr log($nummsg)] $nummsg"
	puts $g1 "$now [expr $nummsg] $nummsg"
	puts $g2 "$now [expr $nummsg/2] $nummsg"
	#puts $g1 "[expr rand()*8] [expr rand()*6]"
	$ns at [expr $now+$time] "Graph"

}

proc increase {jnode} {
	global ns g g1 nummsg NODECOUNT
	incr nummsg
	puts "increment"
	tree insert $jnode 
	incr NODECOUNT
	set ipfl [open bptinput a+]
	puts $ipfl "11111111"
	puts $ipfl $jnode
	close $ipfl
	puts [exec "~/bpt" 4 "bptinput"]
}

proc decrease {lnode} {
	global ns g g1 nummsg NODECOUNT llist
	incr nummsg -1
	puts "decrement"
	puts "NODECOUNT is $NODECOUNT"
	set temp  [expr {int(rand()*100)%($NODECOUNT/2)+1}]
	set delnode  [expr {(($NODECOUNT/2)+$temp)}]
	puts "temp is $temp"
	puts "delnode is $delnode"
	set ipfl [open bptinput a+]
	puts $ipfl "22222222"
	puts $ipfl $lnode
	close $ipfl
	puts [exec "~/bpt" 4 "bptinput"]
	# if {$llist($delnode)==1} {
	# 	tree delete $delnode
	# }
}

proc sendmsg {nodeid} {
	puts "Message from $nodeid"
}


SSM::Tree create tree
set j 1
set m 1
set tvalue 0
#joining phase
for {set i 1} {$i < 160} {incr i} {
	puts "$i SECONDS...."
	
	#attach an agent if the new agent's value is less than the total nodes
	if {$j < $NUMNODES} {
			set rcvr($j) [new Agent/Null]
			$ns attach-agent $n($j) $rcvr($j)
		}
	if {[expr {int(rand()*10)}] < 2} {
		if {$j <= 10} {
			set k [expr {int(rand()*10)}]
		} else {
			set k [expr {int(rand()*100)%$j}]	
		}
		set l [expr {(abs($j - $k)%$j)+1}]
		puts "$j - $k"
		
		#if there is already a node numbered l, let it leave.
		if {$llist($l) == 1} {
			$ns at $i.0 "$n($l) leave-group $rcvr($l) $group1"
			puts "n$l left group1"
			$ns at $i.0 "decrease $l"
		}
	} else {
		#otherwise let a new node join 
		if {$j < $NUMNODES} {
			$ns at $i.0 "$n($j) join-group $rcvr($j) $group1"
			puts "n$j joined group1"
			$ns at $i.0 "increase $j"
			tree insert ($NUMNODES+1)
			#setValue [expr {int(rand()*5)}]
			set llist($j) 1
			ns at $i "send $j"
			incr j
			}
		}
	
	
}

#commented out
set cmnt1 {
for {set i 79} {$i > 0} {incr i -1} {
#set rcvr($j) [new Agent/Null]
#$ns attach-agent $n($i) $rcvr($j)
$ns at $j.0 "$n($i) leave-group $rcvr($i) $group1"
$ns at $j.0 "decrease"
incr j
}
}

#commented out
set commnt {
# Create receiver
set rcvr1 [new Agent/Null]
$ns attach-agent $n(5) $rcvr1
$ns at 1.0 "$n(5) join-group $rcvr1 $group1"
$ns at 1.0 "increase"


set rcvr2 [new Agent/Null]
$ns attach-agent $n(6) $rcvr2
$ns at 1.5 "$n(6) join-group $rcvr2 $group1"
$ns at 1.5 "increase"

set rcvr3 [new Agent/Null]
$ns attach-agent $n(7) $rcvr3
$ns at 2.0 "$n(7) join-group $rcvr3 $group1"
$ns at 2.0 "increase"
#$ns duplex-link $n(4) $n(6) 1.5Mb 10ms DropTail


set rcvr4 [new Agent/Null]
$ns attach-agent $n(5) $rcvr1
$ns at 2.5 "$n(5) join-group $rcvr4 $group2"
$ns at 2.5 "increase"

set rcvr5 [new Agent/Null]
$ns attach-agent $n(6) $rcvr2
$ns at 3.0 "$n(6) join-group $rcvr5 $group2"
$ns at 3.0 "increase"
$ns attach-agent $n(79) $rcvr2
$ns at 3.0 "$n(79) join-group $rcvr5 $group2"
$ns at 3.0 "increase"

set rcvr6 [new Agent/Null]
$ns attach-agent $n(7) $rcvr3
$ns at 3.5 "$n(7) join-group $rcvr6 $group2"
$ns at 3.5 "increase"

$ns at 4.0 "$n(5) leave-group $rcvr1 $group1"
$ns at 4.5 "$n(6) leave-group $rcvr2 $group1"
$ns at 5.0 "$n(7) leave-group $rcvr3 $group1"
$ns at 4.0 "increase"
$ns at 4.5 "increase"
$ns at 5.0 "increase"
 
#send a message
$ns at 5.1 "sendmsg 5"

#bring a link down
$ns rtmodel-at 5.2 down $n(1) $n(3)
$ns rtmodel-at 6.2 up $n(1) $n(3)

$ns at 5.5 "$n(5) leave-group $rcvr4 $group2"
$ns at 6.0 "$n(6) leave-group $rcvr5 $group2"
$ns at 6.5 "$n(7) leave-group $rcvr6 $group2"
$ns at 5.5 "increase"
$ns at 6.0 "increase"
$ns at 6.5 "increase"
 }


# Schedule events
$ns at 0.0 "Graph"
$ns at 0.5 "$cbr1 start"
$ns at 160.5 "$cbr1 stop"

$ns at 0.5 "$cbr2 start"
$ns at 160.5 "$cbr2 stop"

#post-processing
$ns at 161.0 "finish"
proc finish {} {
   global ns tf
   global ns g g1 g2
   $ns flush-trace
   close $tf 
   close $g 
   close $g1
   close $g2
   #exec nam randmcast.nam &
   tree print
   set ipfl [open bptinput a+]
	puts $ipfl "33333333"
	close $ipfl
	puts [exec "~/bpt" 4 "bptinput"]
   exit 0
}

# For nam
#Colors for packets from two mcast groups
$ns color 10 red
$ns color 11 green
$ns color 30 purple
$ns color 31 green

# Manual layout: order of the link is significant!
#$ns duplex-link-op $n(0) $n(1) orient right
#$ns duplex-link-op $n(0) $n(2) orient right-up
#$ns duplex-link-op $n(0) $n(3) orient right-down

# Show queue on simplex link n(0)->n(1)
#$ns duplex-link-op $n(2) $n(3) queuePos 0.5

# Group 0 source
$udp0 set fid_ 10
$n(0) color red
$n(0) label "Source 1"

# Group 1 source
$udp1 set fid_ 11
$n(1) color green
$n(1) label "Source 2"

$n(5) label "Receiver 1"
$n(5) color blue
$n(6) label "Receiver 2"
$n(6) color blue
$n(7) label "Receiver 3"
$n(7) color blue 

#$n(2) add-mark m0 red
#$n(2) delete-mark m0"

# Animation rate
$ns set-animation-rate 3.0ms

$ns run
