#==============================================================================
# Main Mentry_tile package module.
#
# Copyright (c) 1999-2019  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk 8.4
if {$::tk_version < 8.5 || [regexp {^8\.5a[1-5]$} $::tk_patchLevel]} {
    package require tile 0.6
}
package require -exact mentry::common 3.10

package provide mentry_tile $::mentry::version
package provide Mentry_tile $::mentry::version

::mentry::useTile 1
::mentry::createBindings

namespace eval ::mentry {
    #
    # Commands related to tile themes:
    #
    namespace export	getThemes getCurrentTheme setTheme setThemeDefaults
}
