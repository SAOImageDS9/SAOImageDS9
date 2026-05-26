# all.tcl --
#
# This file contains a top-level script to run all of the Tcl
# tests.  Execute it by invoking "source all.test" when running tcltest
# in this directory.
#

set path [file normalize [file dirname [file join [pwd] [info script]]]]
set auto_path [linsert $auto_path 0 [file dirname $path] $path]

if {"::tcltest" ni [namespace children]} {
    package require tcltest
    namespace import -force ::tcltest::*
}

# Add user provided args such as -load
tcltest::configure {*}$argv -testdir $path
#tcltest::configure -verbose tpse

# Print stats at end
set ::tcltest::testSingleFile false
#tcltest::configure -singleproc 1

# Get common functions, if any
if {[file exists [file join $path common.tcl]]} {
    source -encoding utf-8 [file join $path common.tcl]
}

#
# Run all tests in current and any sub directories with an all.tcl file.
#
set ::exitCode 0
if {[package vsatisfies [package require tcltest] 2.5-]} {
    if {[::tcltest::runAllTests] == 1} {
	set ::exitCode 1
    }

} else {
    # Hook to determine if any of the tests failed. Then we can exit with the
    # proper exit code: 0=all passed, 1=one or more failed
    proc tcltest::cleanupTestsHook {} {
	variable numTests
	set ::exitCode [expr {$numTests(Total) == 0 || $numTests(Failed) > 0}]
    }
    ::tcltest::runAllTests
}

# Return exit code for use by test frameworks: 0=all passed, 1=one or more failed
if {[info exists env(ERROR_ON_FAILURES)]} {
    exit $::exitCode
} else {
    exit 0
}
