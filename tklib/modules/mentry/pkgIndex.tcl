#==============================================================================
# Mentry and Mentry_tile package index file.
#
# Copyright (c) 1999-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Regular packages:
#
package ifneeded mentry         4.3.1 \
	[list source [file join $dir mentry.tcl]]
package ifneeded mentry_tile    4.3.1 \
	[list source [file join $dir mentry_tile.tcl]]

#
# Aliases:
#
package ifneeded Mentry         4.3.1 \
	[list package require -exact mentry      4.3.1]
package ifneeded Mentry_tile    4.3.1 \
	[list package require -exact mentry_tile 4.3.1]

#
# Code common to all packages:
#
package ifneeded mentry::common 4.3.1 \
	[list source [file join $dir mentryCommon.tcl]]
