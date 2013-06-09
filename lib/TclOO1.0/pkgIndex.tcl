if {[catch {package require Tcl 8.5b1}]} return
package ifneeded TclOO 1.0 \
    [list load [file join $dir libTclOO1.0.so] TclOO]
