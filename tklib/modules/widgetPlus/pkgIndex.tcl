if {![package vsatisfies [package provide Tcl] 8.5-]} {return}
package ifneeded widgetPlus 1.0b2 [list source [file join $dir widgetPlus.tcl]]
