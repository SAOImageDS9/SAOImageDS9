# Tcl package index file, version 1.1

if {![package vsatisfies [package provide Tcl] 8.4]} {return}
package ifneeded ldap 1.9.2 [list source [file join $dir ldap.tcl]]

# the OO level wrapper for ldap
package ifneeded ldapx 1.1 [list source [file join $dir ldapx.tcl]]
