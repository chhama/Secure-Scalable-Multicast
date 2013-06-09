package require TclOO

namespace eval SSM {
    # Class for the overall tree; manages real public API
    oo::class create Tree {
	variable root nil class
	constructor {{nodeClass SSM::Node}} {
	    set class [oo::class create Node [list superclass $nodeClass]]
 
	    # Create a nil instance to act as a leaf sentinel
	    set nil [my NewNode ""]
	    set root [$nil ref]
 
	    # Make nil be special
	    oo::objdefine $nil {
		method height {} {return 0}
		method key {} {error "no key possible"}
		method value {} {error "no value possible"}
		method destroy {} {
		    # Do nothing (doesn't prohibit destruction entirely)
		}
		method print {indent increment} {
		    # Do nothing
		}
	    }
	}
 
	# Creating a new key node
	method NewNode {key} {
	    if {![info exists nil]} {set nil ""}
	    $class new $key $nil [list [namespace current]::my NewNode]
	}
 
	# Create a new node in the tree and return it
	method insert {key} {
	    set node [my NewNode $key]
	    if {$root eq $nil} {
		set root $node
	    } else {
		$root insert $node
	    }
	    return $node
	}
 	

 	method delete {key} {
	   $root delete $key
	}
	

	# Find the node for a particular key
	method lookup {key} {
	    for {set node $root} {$node ne $nil} {} {
		if {[$node key] == $key} {
		    return $node
		} elseif {[$node key] > $key} {
		    set node [$node left]
		} else {
		    set node [$node right]
		}
	    }
	    error "no such node"
	}
 
	# Print a tree out, one node per line
	method print {{indent 0} {increment 1}} {
	    $root print $indent $increment
	    return
	}
    }
 
    # Class of an individual node; may be subclassed
    oo::class create Node {
	variable key value left right 0 refcount newNode
	constructor {n nil instanceFactory} {
	    set newNode $instanceFactory
	    set 0 [expr {$nil eq "" ? [self] : $nil}]
	    set key $n
	    set value {}
	    set left [set right $0]
	    set refcount 0
	}
	method ref {} {
	    incr refcount
	    return [self]
	}
	method destroy {} {
	    if {[incr refcount -1] < 1} next
	}
	method New {key value} {
	    set n [{*}$newNode $key]
	    $n setValue $value
	    return $n
	}
 
	# Getters
	method key {} {return $key}
	method value {} {return $value}
	method left {} {return $left}
	method right {args} {return $right}
 
	# Setters
	method setValue {newValue} {
	    set value $newValue
	}
	method setLeft {node} {
	    # Non-trivial because of reference management
	    $node ref
	    $left destroy
	    set left $node
	    return
	}
	method setRight {node} {
	    # Non-trivial because of reference management
	    $node ref
	    $right destroy
	    set right $node
	    return
	}
 
	# Print a node and its descendents
	method print {indent increment} {
	    puts [format "%s%s => %s" [string repeat " " $indent] $key $value]
	    incr indent $increment
	    $left print $indent $increment
	    $right print $indent $increment
	}
 
	method height {} {
	    return [expr {max([$left height], [$right height]) + 1}]
	}
	method balanceFactor {} {
	    expr {[$left height] - [$right height]}
	}
 	
	method delete {key} {
		#delete a node
	    #for {set node $root} {$node ne $nil} {} {
	    set leftChild [my left]
	    set rightChild [my right]

	    if {[$leftChild key] == $key} {
	    	my setLeft $0
	    } elseif {[$rightChild key] == $key} {
	    	my setRight $0
	    } elseif {[my key] > $key} {
		    $leftChild delete $key
		} else {
		    $rightChild delete $key
		}	    
	#}
	}


	method insert {node} {
	    # Simple insertion
	    
	    if {$key > [$node key]} {
		if {$left eq $0} {
		    my setLeft $node
		} else {
		    $left insert $node
		}
	    } else {
		if {$right eq $0} {
		    my setRight $node
		} else {
		    $right insert $node
		}
	    }
 
	    # Rebalance this node
	    if {[my balanceFactor] > 1} {
		if {[$left balanceFactor] < 0} {
		    $left rotateLeft
		}
		my rotateRight
	    } elseif {[my balanceFactor] < -1} {
		if {[$right balanceFactor] > 0} {
		    $right rotateRight
		}
		my rotateLeft
	    }
	}

	 

	# SSM Rotations
	method rotateLeft {} {
	    set new [my New $key $value]
	    set key [$right key]
	    set value [$right value]
	    $new setLeft $left
	    $new setRight [$right left]
	    my setLeft $new
	    my setRight [$right right]
	}
 
	method rotateRight {} {
	    set new [my New $key $value]
	    set key [$left key]
	    set value [$left value]
	    $new setLeft [$left right]
	    $new setRight $right
	    my setLeft [$left left]
	    my setRight $new
	}
    }
}

# Create an SSM tree
SSM::Tree create tree
 
# Populate it with some semi-random data
for {set i 33} {$i < 50} {incr i} {
    #[tree insert $i] setValue [string repeat [format %c $i] [expr {1+int(rand()*5)}]]
	[tree insert $i] setValue [expr {int(rand()*5)}]
	set out [open "node_created" a+]
	    puts $out $i
	    close $out
	#[tree insert 1] setValue 0
	#[tree insert 2] setValue 0
	#[tree insert 3] setValue 0
	#[tree insert 4] setValue 0
	#[tree insert 5] setValue 0
	#[tree insert 6] setValue 0
	#[tree insert 7] setValue 0
	#[tree insert 8] setValue 0
}
#unset 3 
# Print it out
tree print
puts "-------------------------------------------------------"
tree delete 39
tree delete 35

tree print
#puts [[tree lookup 45] value]
# Look up a few values in the tree
# for {set i 0} {$i < 10} {incr i} {
#     set k [expr {33+int((127-33)*rand())}]
#     puts $k=>[[tree lookup $k] value]
#  }


# Destroy the tree and all its nodes
tree destroy

puts [exec "~/bpt" 4 "/home/chhama/inputfile"]