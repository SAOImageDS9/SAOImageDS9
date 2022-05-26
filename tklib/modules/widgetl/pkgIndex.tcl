if {![package vsatisfies [package provide Tcl] 8.5]} {return}
package ifneeded widget::listsimple 0.1.2 [list source [file join $dir listsimple.tcl]]
package ifneeded widget::listentry  0.1.2 [list source [file join $dir listentry.tcl]]
