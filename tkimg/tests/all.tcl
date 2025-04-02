set bits [expr $tcl_platform(pointerSize) * 8]
puts "Using Tcl version: [info patchlevel] (${bits}-bit)"
puts "Using Tk  version: [package require Tk] (${bits}-bit)"
puts "Using Img version: [package require Img]"

package require tcltest
package require Img

# Hook to determine if any of the tests failed.
# Then we can exit with proper exit code.
proc tcltest::cleanupTestsHook {} {
    variable numTests

    set ::exitCode [expr {$numTests(Failed) > 0}]
}

::tcltest::configure -testdir [file dirname [file normalize [info script]]]
eval ::tcltest::configure $argv

::tcltest::runAllTests

exit $exitCode

