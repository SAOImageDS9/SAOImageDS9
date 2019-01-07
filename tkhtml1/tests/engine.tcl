# This file contains the test driver for the html widget.  It defines
# a special version of the test procedure to use for testing the
# html widget.
#

# Initialize variables
#
namespace eval tcltest {
  set mode run
  set current {}
  set passed 0
  set failed 0
  set total 0
  set status {}
}

# Arguments:
#
#   tag      A symbolic tag for this test.  Ex:  html-1.0
#
#   desc     A human-readable description of what this test does.
#
#   script   Tcl code to implement the test
#
#   result   The expected result from this test.  If the actual result
#            is different the test fails.
#
proc ::tcltest::test {tag desc script result} {
  ::tcltest::change-desc $tag $desc
  if {[info exists ::tcltest::idle]} {
    catch {after cancel $::tcltest::idle}
    catch {unset ::tcltest::idle}
  }
  set rc [catch {uplevel #0 $script} msg]
  set r [list $rc $msg]
  if {$r==$result} {
    incr ::tcltest::passed
    puts "---- Test $tag passed"
  } else {
    incr ::tcltest::failed
    puts "**** Test $tag failed"
    puts "Expected: [list $result]"
    puts "Got: [list $r]"
  }
  incr ::tcltest::total
  ::tcltest::update-status
  set ::tcltest::idle [after 100 ::tcltest::testing-complete]
}

# Create the test control window
#
proc ::tcltest::mainwin {} {
  set w .testinfo
  toplevel $w
  wm title $w {Html Widget Test Information}
  wm iconname $w {Html-Test}
  set f $w.f1
  frame $f
  pack $f -side top -fill x
  label $f.l -text {Status: }
  label $f.v -textvariable ::tcltest::status
  pack $f.l $f.v -side left
  set f $w.f2
  frame $f
  pack $f -side top -fill x
  label $f.l -text {Current Test: }
  label $f.v -textvariable ::tcltest::current
  pack $f.l $f.v -side left
  set f $w.b
  frame $f
  pack $f -side bottom -fill x
  button $f.pause -text Pause -command ::tcltest::pause
  button $f.pass -text {Pass} -command {::tcltest::set-result pass}
  button $f.fail -text {Fail} -command {::tcltest::set-result fail}
  button $f.exit -text Exit -command exit
  pack $f.pause $f.pass $f.fail $f.exit -side right -pady 10 -expand 1
  scrollbar $w.sb -orient vertical -command "$w.t yview"
  pack $w.sb -side right -fill y
  html $w.t -yscrollcommand "$w.sb set" -width 400 -height 150 \
     -bd 2 -relief sunken -padx 5 -pady 5
  pack $w.t -side right -fill both -expand 1 
  ::tcltest::update-status
}

# Change the test description in the control window
#
proc ::tcltest::change-desc {tag desc} {
  if {![winfo exists .testinfo]} ::tcltest::mainwin
  .testinfo.t clear
  .testinfo.t parse $desc\n
  set ::tcltest::current $tag
}

# Update the status line
#
proc ::tcltest::update-status {} {
  set v "$::tcltest::passed passed  $::tcltest::failed failed  "
  append v "$::tcltest::total total"
  set ::tcltest::status $v
}

# Wait for the user to press either the pass or failed buttons.
#
proc ::tcltest::user-result {} {
  .testinfo.b.pass config -state normal
  .testinfo.b.fail config -state normal
  update
  raise .testinfo
  focus .testinfo.b.pass
  set ::tcltest::result {}
  vwait ::tcltest::result
  .testinfo.b.pass config -state disabled
  .testinfo.b.fail config -state disabled
  return $::tcltest::result
}

# Called when the user presses either the failed or passed buttons.
#
proc ::tcltest::set-result v {
  set ::tcltest::result $v
}

# Call this routine at the end of all tests
#
proc ::tcltest::testing-complete {} {
  ::tcltest::change-desc {} {Testing is now complete}
}

# Construct an HTML widget to use for testing.
#
proc tkhtml_test_widget {} {
  set w .tkhtml_test
  if {[winfo exists $w]} {
    return $w.h
  }
  toplevel $w
  wm title $w {TkHtml Test Widget}
  wm iconname $w {TkHtml Test}
  scrollbar $w.sb -orient vertical -command "$w.h yview"
  pack $w.sb -side right -fill y
  html $w.h -yscrollcommand "$w.sb set"
  pack $w.h -side right -fill both -expand 1
  return $w.h
}
