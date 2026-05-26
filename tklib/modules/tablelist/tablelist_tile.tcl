#==============================================================================
# Main Tablelist_tile package module.
#
# Copyright (c) 2000-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require -exact tablelist::common 7.4.1

if {$::tk_version < 8.5 || [regexp {^8\.5a[1-5]$} $::tk_patchLevel]} {
    package require tile 0.6[::tablelist::-]
}

package provide tablelist_tile $::tablelist::version
package provide Tablelist_tile $::tablelist::version

::tablelist::useTile 1
::tablelist::createBindings

namespace eval ::tablelist {
    #
    # Commands related to tile themes:
    #
    namespace export	getThemes getCurrentTheme setTheme setThemeDefaults
}
