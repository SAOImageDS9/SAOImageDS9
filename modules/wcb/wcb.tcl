#==============================================================================
# Main Wcb package module.
#
# Copyright (c) 1999-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

if {$tcl_version >= 8.5} {
    package require Tk 8.4-
} else {
    package require Tk 8.4
}

namespace eval wcb {
    #
    # Public variables:
    #
    variable version	4.1.1
    variable library	[file dirname [file normalize [info script]]]

    #
    # Basic procedures:
    #
    namespace export	callback cbappend cbprepend cancel canceled \
			extend replace pathname

    #
    # Utility procedures for Tk entry, Ttk entry, BWidget
    # Entry, Tk spinbox, Ttk spinbox, and Ttk combobox widgets:
    #
    namespace export	changeEntryText postInsertEntryLen \
			postInsertEntryText postDeleteEntryText

    #
    # Simple before-insert callback routines for Tk entry, Ttk entry,
    # BWidget Entry, Tk spinbox, Ttk spinbox, and Ttk combobox widgets:
    #
    namespace export	checkStrForRegExp checkStrForAlpha checkStrForNum \
			checkStrForAlnum convStrToUpper convStrToLower

    #
    # Further before-insert callback routines for Tk entry, Ttk entry,
    # BWidget Entry, Tk spinbox, Ttk spinbox, and Ttk combobox widgets:
    #
    namespace export	checkEntryForInt  checkEntryForUInt \
			checkEntryForReal checkEntryForFixed \
			checkEntryLen

    #
    # Simple before-insert callback routines for text and ctext widgets:
    #
    namespace export	checkStrsForRegExp checkStrsForAlpha checkStrsForNum \
			checkStrsForAlnum convStrsToUpper convStrsToLower
}

package provide wcb $wcb::version
package provide Wcb $wcb::version

#
# Everything else needed is lazily loaded on demand, via the dispatcher
# set up in the subdirectory "scripts" (see the file "tclIndex").
#
lappend auto_path [file join $wcb::library scripts]
