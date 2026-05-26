#==============================================================================
# Wcb package index file.
#
# Copyright (c) 1999-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Regular package:
#
package ifneeded wcb 4.1.1 [list source [file join $dir wcb.tcl]]

#
# Alias:
#
package ifneeded Wcb 4.1.1 { package require -exact wcb 4.1.1 }
