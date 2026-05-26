#!/usr/bin/env tclsh
#
# Name:		Make Test Files From CSV Files
# Version:	0.3
# Date:		March 9, 2024
# Author:	Brian O'Hagan
# Email:	brian199@comcast.net
# Legal Notice:	(c) Copyright 2020 by Brian O'Hagan
#		Released under the Apache v2.0 license. I would appreciate a copy of any modifications
#		made to this package for possible incorporation in a future release.
#

#
# Parse CSV line
#
proc parse_csv {ch data} {
    set buffer ""
    set result [list]
    set start 0
    set end [string length $data]

    while {$start < $end} {
	if {[string index $data $start] eq "\""} {
	    # Quoted
	    if {[set index [string first "\"" $data [incr start]]] > -1} {
		set next [string index $data [expr {$index + 1}]]
		if {$next eq "\""} {
		    # Quote
		    append buffer [string range $data $start $index]
		    set start [incr index]

		} else {
		    # End of quoted data
		    append buffer [string range $data $start [incr index -1]]
		    set start [incr index 3]
		    lappend result $buffer
		    set buffer ""
		}

	    } else {
		# Multi-line
		append buffer [string range $data $start end] "\n"
		gets $ch new
		set data "\""
		append data $new
		set start 0
		set end [string length $data]
	    }

	} else {
	    # Not quoted, so no embedded NL, quotes, or commas
	    set index [string first "," $data $start]
	    if {$index > -1} {
		lappend result [string range $data $start [incr index -1]]
		set start [incr index 2]
	    } else {
		lappend result [string range $data $start end]
		set start [string length $data]
	    }
	}
    }
    return $result
}

#
# Convert test case file into test files
#
proc process_config_file {filename} {
    set prev ""
    set test 0

    # Open file with test case indo
    set in [open $filename r]
    array set cases [list]

    # Open output test file
    set out [open [format %s.test [file rootname $filename]] w]
    fconfigure $out -encoding utf-8 -translation {auto lf}
    array set cases [list]

    # Add setup commands to test file
    puts $out [format "# Auto generated test cases for %s" [file tail $filename]]
    #puts $out [format "# Auto generated test cases for %s created on %s" [file tail $filename] [clock format [clock seconds]]]

    # Package requires
    puts $out "\n# Load Tcl Test package"
    puts $out [subst -nocommands {if {[lsearch [namespace children] ::tcltest] < 0} {\n\tpackage require tcltest\n\tnamespace import ::tcltest::*\n}\n}]
    puts $out {set ::auto_path [concat [list [file dirname [file dirname [info script]]]] $::auto_path]}
    puts $out ""

    # Generate test cases and add to test file
    while {[gets $in data] > -1} {
	# Skip comments
	set data [string trim $data]
	if {[string match "#*" $data] || [string match "\"#*" $data]} continue
	# Split comma separated fields with quotes
	set list [parse_csv $in $data]

	# Get command or test case
	foreach {group name constraints setup body cleanup match result output errorOutput returnCodes} $list {
	    if {$group eq "command"} {
		puts $out $name

	    } elseif {$group ne "" && $body ne ""} {
		# Remove illegal characters
		set group [string map [list " " "_" "-" "_"] $group]
		set name [string map [list "-" "_"] $name]

		# Define test number
		if {$group ne $prev} {
		    incr test
		    set prev $group
		    puts $out ""
		}

		# Create test case
		if {[string index $name 0] ne {$}} {
		    set buffer [format "\ntest %s-%d.%d {%s}" $group $test [incr cases($group)] $name]
		} else {
		    set buffer [format "\ntest %s-%d.%d %s" $group $test [incr cases($group)] $name]
		}

		# Add test case arguments
		foreach opt [list -constraints -setup -body -cleanup -match -result -output -errorOutput -returnCodes] {
		    set cmd [string trim [set [string trimleft $opt "-"]]]
		    if {$cmd ne ""} {
			if {$opt in [list -setup -body -cleanup]} {
			    append buffer " " $opt " \{\n"
			    foreach line [split $cmd ";"] {
				append buffer \t [string trim $line] \n
			    }
			    append buffer "    \}"
			} elseif {$opt in [list -output -errorOutput]} {
			    append buffer " " $opt " {" $cmd \n "}"
			} elseif {$opt in [list -result]} {
			    if {[string index $cmd 0] in [list \[ \" \{ \$]} {
				append buffer " " $opt " " $cmd
			    } elseif {[string match {*[\\$]*} $cmd]} {
				append buffer " " $opt " \"" [string map [list \\\\\" \\\"] [string map [list \" \\\" ] $cmd]] "\""
			    } else {
				append buffer " " $opt " {" $cmd "}"
			    }
			} else {
			    append buffer " " $opt " {" $cmd "}"
			}
		    }
		}
		puts $out $buffer

	    } else {
		# Empty line
		puts $out ""
	    }
	    break
	}
    }

    # Output clean-up commands
    puts $out "\n# Cleanup\n::tcltest::cleanupTests\nreturn"
    close $out
    close $in
}

#
# Call script
#
foreach file [glob *.csv] {
puts $file
    process_config_file $file
}
exit
