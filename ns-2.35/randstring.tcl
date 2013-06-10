 #
 # Proc to generate a string of (given) characters
 # Range defaults to "ABCDEF...wxyz'
 #
 proc randomRangeString {length {chars "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"}} {
    set range [expr {[string length $chars]-1}]

    set txt ""
    for {set i 0} {$i < $length} {incr i} {
       set pos [expr {int(rand()*$range)}]
       append txt [string range $chars $pos $pos]
    }
    return $txt
 }

 
 #
 # Time the performance
 #
 # puts [time {set x [randomDelimString 100]} 10000]
 # puts [time {set x [randomRangeString 100]} 10000]

 