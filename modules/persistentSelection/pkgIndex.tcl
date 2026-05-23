if {![package vsatisfies [package provide Tcl] 8.5-]} {return}
package ifneeded persistentSelection 1.0b1 [list source [file join $dir persistentSelection.tcl]]
