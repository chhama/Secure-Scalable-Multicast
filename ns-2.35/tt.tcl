source tree31.tcl

proc prntvalue {} {
	#puts [::Tree::name]	
	puts yo
}

set myTree [::Tree::create root]
set level1 [::Tree::graft $myTree [::Tree::create node node1]]
set level2 [::Tree::graft $myTree [::Tree::create node node2]]
#::Tree::attribute $level1 type julian
::Tree::graft $level1 [::Tree::create child1 c1]
::Tree::graft $level1 [::Tree::create child2 c2]
::Tree::graft $level1 [::Tree::create child3 c3]
::Tree::graft $level1 [::Tree::create child4 c8]
::Tree::graft $myTree [::Tree::create child5 c4]
::Tree::graft $myTree [::Tree::create child6 c5]
#::Tree::prune $level1
::Tree::graft $level2 $level1
set level3 [::Tree::graft $level2 [::Tree::create node node6]]

::Tree::destroy $level1
set level1 [::Tree::graft $myTree [::Tree::create node node1]]

set level11 [::Tree::graft $level1 [::Tree::create node node11]]
set level12 [::Tree::graft $level1 [::Tree::create node node12]]
set level13 [::Tree::graft $level1 [::Tree::create node node13]]

::Tree::attribute $level11 balance 1
#::Tree::graft $level11 $child
::Tree::graft $level11 [::Tree::create child c2]
::Tree::graft $level11 [::Tree::create child c1]

::Tree::graft $level12 [::Tree::create child c3]
::Tree::graft $level12 [::Tree::create child c8]
puts [::Tree::format $myTree]
puts [::Tree::isLeaf myTree]
puts "Depth is"
if {[::Tree::depth $level2] < 1} {
	puts "good depth"
}
if {[::Tree::isLeaf $level13]} {
	puts "a child!!"
}

puts [::Tree::children  $level2]

puts [::Tree::attribute $level11]

 proc Call { collect tree depth } {                                                                         
 upvar $collect output                                                                                    
 append output [::Tree::name $tree]$depth                                                                 
return ""                                                                                                
 }                                                                                                          
  set output ""                                                                                              
::Tree::walk $myTree depth -preCall "Call output"
