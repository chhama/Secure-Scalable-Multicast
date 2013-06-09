set NUMNODES 40
set temp  [expr {int(rand()*100)%($NUMNODES/2)}]
set delnode  [expr {(($NUMNODES/2)+$temp)}]
puts $delnode