# pkgIndex.tcl --
#     Index script for controlwidget package
#     Note:
#     We could split this into several parts. Now it is presented
#     as a single package.
#
if {![package vsatisfies [package provide Tcl] 8.5]} {
    # PRAGMA: returnok
    return
}

package ifneeded controlwidget 0.1 [list source [file join $dir controlwidget.tcl]]
package ifneeded meter         1.0 [list source [file join $dir vertical_meter.tcl]]
package ifneeded led           1.0 [list source [file join $dir led.tcl]]
package ifneeded rdial         0.7 [list source [file join $dir rdial.tcl]]
package ifneeded tachometer    0.1 [list source [file join $dir tachometer.tcl]]
package ifneeded voltmeter     0.1 [list source [file join $dir voltmeter.tcl]]
package ifneeded radioMatrix   1.0 [list source [file join $dir radioMatrix.tcl]]
package ifneeded bindDown      1.0 [list source [file join $dir bindDown.tcl]]
