# Create scheduler
#Create an event scheduler wit multicast turned on
set ns [new Simulator -multicast on]
$ns multicast

global nummsg
set nummsg 1
#Turn on Tracing
set tf [open "~/output.tr" w]
$ns trace-all $tf

# Turn on nam Tracing
set fd [open "~/linmcast.nam" w]
$ns namtrace-all $fd


global n
#set i 0
for {set i 0} {$i < 80} {incr i} {
	set n($i) "[$ns node]"
}
 
# Create links
$ns duplex-link $n(0) $n(1) 1.5Mb 10ms DropTail
$ns duplex-link $n(0) $n(2) 1.5Mb 10ms DropTail


#create the rest of the links
for {set i 1} {$i < 40} {incr i} {
      $ns duplex-link $n($i) $n([expr 2*($i)%80]) 1Mb 10ms DropTail
      $ns duplex-link $n($i) $n([expr (2*($i)+1)%80]) 1Mb 10ms DropTail
}


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
set g [open lingraph.tr w]
set g1 [open lingraph1.tr w]
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
	global ns g g1 nummsg
	incr nummsg
	puts "increment"
	set ipfl [open bptinput a+]
	puts $ipfl "11111111"
	puts $ipfl $jnode
	close $ipfl
	puts [exec "./bpt" 4 "bptinput"]
}

proc decrease {lnode} {
	global ns g g1 nummsg
	incr nummsg -1
	puts "decrement"
	set ipfl [open bptinput a+]
	puts $ipfl "22222222"
	puts $ipfl $lnode
	close $ipfl
	puts [exec "./bpt" 4 "bptinput"]
}
set j 1
#joining phase
for {set i 1} {$i < 80} {incr i} {
set rcvr($j) [new Agent/Null]
$ns attach-agent $n($i) $rcvr($j)
$ns at $j.0 "$n($i) join-group $rcvr($j) $group1"
$ns at $j.0 "increase $i"
incr j
}

for {set i 79} {$i > 0} {incr i -1} {
#set rcvr($j) [new Agent/Null]
#$ns attach-agent $n($i) $rcvr($j)
$ns at $j.0 "$n($i) leave-group $rcvr($i) $group1"
$ns at $j.0 "decrease $i"
incr j
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
   #exec nam linmcast.nam &
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