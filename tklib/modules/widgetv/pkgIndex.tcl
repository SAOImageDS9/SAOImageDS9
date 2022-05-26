if {![package vsatisfies [package provide Tcl] 8.5]} {return}
package ifneeded widget::validator 0.1 [list source [file join $dir validator.tcl]]
