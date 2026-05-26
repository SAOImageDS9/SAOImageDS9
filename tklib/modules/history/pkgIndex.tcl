if { ![package vsatisfies [package provide Tcl] 8.4-] } { return }
package ifneeded history 0.3 [list source [file join $dir history.tcl]]

