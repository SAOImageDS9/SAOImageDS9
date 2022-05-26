#==============================================================================
# Main Scrollutil_tile package module.
#
# Copyright (c) 2019-2020  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk 8.4
if {$::tk_version < 8.5 || [regexp {^8\.5a[1-5]$} $::tk_patchLevel]} {
    package require tile 0.6
}
package require -exact scrollutil::common 1.5

package provide scrollutil_tile $::scrollutil::version
package provide Scrollutil_tile $::scrollutil::version

::scrollutil::useTile 1

::scrollutil::sa::createBindings
::scrollutil::ss::createBindings
::scrollutil::sf::createBindings
if {[package vcompare $::tk_version "8.4"] >= 0} {
    ::scrollutil::createBindings
}
