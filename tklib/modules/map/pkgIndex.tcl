if {![package vsatisfies [package provide Tcl] 8.6-]} { return }
#
package ifneeded map::area::display        0.1   [list source [file join $dir area-display.tcl]]
package ifneeded map::area::file           0.1   [list source [file join $dir area-file.tcl]]
package ifneeded map::area::map-display    0.1   [list source [file join $dir area-map-display.tcl]]
package ifneeded map::area::store::fs      0.1   [list source [file join $dir area-store-fs.tcl]]
package ifneeded map::area::store::memory  0.1   [list source [file join $dir area-store-mem.tcl]]
package ifneeded map::area::table-display  0.1   [list source [file join $dir area-table-display.tcl]]
#
package ifneeded map::box::display         0.1   [list source [file join $dir box-display.tcl]]
package ifneeded map::box::entry           0.1   [list source [file join $dir box-entry.tcl]]
package ifneeded map::box::file            0.1   [list source [file join $dir box-file.tcl]]
package ifneeded map::box::map-display     0.1   [list source [file join $dir box-map-display.tcl]]
package ifneeded map::box::store::fs       0.1   [list source [file join $dir box-store-fs.tcl]]
package ifneeded map::box::store::memory   0.1   [list source [file join $dir box-store-mem.tcl]]
package ifneeded map::box::table-display   0.1   [list source [file join $dir box-table-display.tcl]]
#
package ifneeded map::display              0.1   [list source [file join $dir display.tcl]]
package ifneeded map::mark                 0.1   [list source [file join $dir mark.tcl]]
package ifneeded map::provider::osm        0.1   [list source [file join $dir provider-osm.tcl]]
#
package ifneeded map::track::display       0.1   [list source [file join $dir track-display.tcl]]
package ifneeded map::track::file          0.1   [list source [file join $dir track-file.tcl]]
package ifneeded map::track::map-display   0.1   [list source [file join $dir track-map-display.tcl]]
package ifneeded map::track::store::fs     0.1   [list source [file join $dir track-store-fs.tcl]]
package ifneeded map::track::store::memory 0.1   [list source [file join $dir track-store-mem.tcl]]
package ifneeded map::track::table-display 0.1   [list source [file join $dir track-table-display.tcl]]
package ifneeded map::track::entry         0.1   [list source [file join $dir track-entry.tcl]]
#
package ifneeded map::point::file          0.1   [list source [file join $dir point-file.tcl]]
package ifneeded map::point::map-display   0.1   [list source [file join $dir point-map-display.tcl]]
package ifneeded map::point::store::fs     0.1   [list source [file join $dir point-store-fs.tcl]]
package ifneeded map::point::store::memory 0.1   [list source [file join $dir point-store-mem.tcl]]
package ifneeded map::point::table-display 0.1   [list source [file join $dir point-table-display.tcl]]
#
return
