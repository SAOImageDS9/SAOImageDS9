#==============================================================================
# Main Mentry_tile package module.
#
# Copyright (c) 1999-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require -exact mentry::common 4.3.1

if {$::tk_version < 8.5 || [regexp {^8\.5a[1-5]$} $::tk_patchLevel]} {
    package require tile 0.6[::mentry::-]
}

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
