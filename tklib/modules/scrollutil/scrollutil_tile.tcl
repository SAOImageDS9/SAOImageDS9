#==============================================================================
# Main Scrollutil_tile package module.
#
# Copyright (c) 2019-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require -exact scrollutil::common 2.4

if {$::tk_version < 8.5 || [regexp {^8\.5a[1-5]$} $::tk_patchLevel]} {
    package require tile 0.6[::scrollutil::-]
}

package provide scrollutil_tile $::scrollutil::version
package provide Scrollutil_tile $::scrollutil::version

::scrollutil::useTile 1

::scrollutil::sa::createBindings
::scrollutil::ss::createBindings
::scrollutil::sf::createBindings
::scrollutil::pm::createBindings
::scrollutil::snb::createBindings
::scrollutil::pnb::createBindings
::scrollutil::createBindings

namespace eval ::scrollutil {
    #
    # Creates a new scrollednotebook/plainnotebook widget:
    #
    namespace export	scrollednotebook plainnotebook

    #
    # Commands related to the closetab style element:
    #
    namespace export	addclosetab removeclosetab closetabstate
}
