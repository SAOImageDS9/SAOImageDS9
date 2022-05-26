#!/bin/sh
# the next line restarts using tclsh \
exec tclsh "$0" "$@"

# Copyright (c) 2017-2018 Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

# To use the <<Selection>> event, the caller must bind a command to it.
# In this demo, the <<Selection>> event is used by the persistent selection
# module persistentSelection.

# ------------------------------------------------------------------------------
# Demo of the persistent selection module persistentSelection.
# ------------------------------------------------------------------------------
# This demo is for text, ntext and all widgetPlus widgets, and it also provides
# tools for monitoring and debugging.
# ------------------------------------------------------------------------------


# ------------------------------------------------------------------------------
# Load package(s) and create bindings.
# ------------------------------------------------------------------------------

package require Tk

# persistentSelection
package require persistentSelection

# text
persistentSelection::fixText
bind Text      <<Selection>>   {persistentSelection::report text %W}

# ntext
package require ntext
bind Ntext     <<Selection>>   {persistentSelection::report text %W}
if 0 {
# widgetPlus
package require widgetPlus
namespace import widgetPlus::*
bind EntryPlus  <<Selection>>   {persistentSelection::report entry %W}
bind TEntryPlus  <<Selection>>   {persistentSelection::report entry %W}
bind SpinboxPlus  <<Selection>>   {persistentSelection::report entry %W}
bind TSpinboxPlus  <<Selection>>   {persistentSelection::report entry %W}
bind TComboboxPlus  <<Selection>>   {persistentSelection::report entry %W}


# ------------------------------------------------------------------------------
# Create, initialize, and map entryPlus widget.
# ------------------------------------------------------------------------------

# ------------------------------------------------------------------------------
#  Command CreateWidget
# ------------------------------------------------------------------------------
# Command to create a widgetPlus widget, initialize it, and map it.
# If there is an existing widget with the same name it is destroyed.
#
# When debugging, note that the Undo/Redo innards differ if $w has or does not
# have a -textvariable.
#
# The options added by widgetPlus are shown on the first line of each widgetPlus
# command.  The options on continuation lines are those of the widget hull.
# ------------------------------------------------------------------------------

proc CreateWidget {w} {
    destroy $w
    switch -exact -- $::hullType {
        entry         {entryPlus $w -undo 1 -maxundo 0  \
                                    -bg white}

        spinbox       {spinboxPlus $w -undo 1 -maxundo 0  \
                                      -values {1 2 3 4 5}   \
                                      -bg white}

        ttk::entry    {ttkEntryPlus $w -undo 1 -maxundo 0}

        ttk::spinbox  {ttkSpinboxPlus $w -undo 1 -maxundo 0  \
                                         -values {1 2 3 4 5}}

        ttk::combobox {ttkComboboxPlus $w -undo 1 -maxundo 0  \
                                          -values {1 2 3 4 5}}

        default {error {set ::hullType to entry, ttk::entry, spinbox,\
                                   ttk::spinbox, or ttk::combobox}}
    }

    pack $w -side left

    $w delete 0 end
    $w insert end {Initial Text}
    $w edit reset

    return
}


# ------------------------------------------------------------------------------
#  Command CreateDemo
# ------------------------------------------------------------------------------
# Command to create a megawidget with a descriptive label, a radiobutton widget
# selector, and a widgetPlus widget.
# ------------------------------------------------------------------------------

proc CreateDemo {w} {
    frame $w
    label $w.lab -text {Use radiobuttons to choose widget:}
    pack $w.lab -pady 10

    frame $w.f
    radiobutton $w.f.rb0 -value entry         -text entry
    radiobutton $w.f.rb1 -value spinbox       -text spinbox
    radiobutton $w.f.rb2 -value ttk::entry    -text ttk::entry
    radiobutton $w.f.rb3 -value ttk::spinbox  -text ttk::spinbox
    radiobutton $w.f.rb4 -value ttk::combobox -text ttk::combobox

    foreach rb {.f.rb0 .f.rb1 .f.rb2 .f.rb3 .f.rb4} {
        $w$rb configure -variable ::hullType -command [list CreateWidget $w.g.e]
    }
    pack $w.f.rb0 $w.f.rb1 $w.f.rb2 $w.f.rb3 $w.f.rb4 -side left -padx 5
    pack $w.f
    set ::hullType entry

    frame   $w.g
    pack $w.g -padx 20 -pady {20 10}

    frame $w.g.filler -height 30 -width 1
    pack $w.g.filler -side left

    # Start with "entry", specified by ::hullType.
    CreateWidget $w.g.e
    return $w
}

CreateDemo .wpdemo
pack .wpdemo
}

# ------------------------------------------------------------------------------
# Create, initialize, and map text widget.
# ------------------------------------------------------------------------------

text .top -bg white -height 10 -wrap word -undo 1 -maxundo 0
pack .top

.top insert end {Widget .top, bindtag Text.

Try using the persistent PRIMARY selection with this widget, and with the entryPlus widget (above).

When the selection is cleared in the widget that owns the PRIMARY selection, usually Tk also clears the PRIMARY selection.  The persistentSelection package ensures that, instead, the PRIMARY selection retains the last non-empty selected string.
}
.top edit reset


# ------------------------------------------------------------------------------
# Create, initialize, and map ntext widget.
# ------------------------------------------------------------------------------

text .mid -bg white -height 5 -wrap word -undo 1 -maxundo 0
bindtags .mid {.mid Ntext . all}
pack .mid -pady 5

.mid insert end {Widget .mid, bindtag Ntext.

Try using the persistent PRIMARY selection with the entryPlus widget (top), the text widget (above), and the ntext widget (here).
}
.mid edit reset


# ------------------------------------------------------------------------------
# Monitoring Tools.
# ------------------------------------------------------------------------------
# - These are not necessary for the demo to work, but they show what is
#   happening.
# - This code can be copied to other demos if required.
# ------------------------------------------------------------------------------

label .mon -text {Monitoring Tools} -font TkCaptionFont
pack .mon -pady 10

# 1. Counter for <<Selection>> events.

bind all <<Selection>> {incr ::selCount}
set ::selCount 0
frame .count
label .count.left -text {Number of <<Selection>> events: }
label .count.right -textvariable ::selCount -bg #e0f0e0 -fg red -relief sunken
pack .count.left .count.right -side left
pack .count -pady 5 -padx 20

# 2. Show the PRIMARY selection.

label .desc -text {Contents of the PRIMARY selection (refreshed every 0.5s):}
pack .desc

text .test -bg #e0f0e0 -height 5 -width 80 -exportselection 0
bindtags .test {.test Ntext . all}
pack .test

proc showSelection {delay} {
    set w .test
    $w delete 1.0 end
    set sel {}
    catch {set sel [::tk::GetSelection $w PRIMARY]}
    $w insert 1.0 $sel
    set ::selEvent [after $delay showSelection $delay]
    return
}

showSelection 500

# 3. Show the contents of the Persistent Store(s).

proc ::persistentSelection::Show {} {
    ShowExample .lab
    return
}

label .lab -bg #e0f0e0 -bd 1 -relief sunken
pack .lab -fill x -pady {10 5} -padx 20

::persistentSelection::Show

# 4. Log the processing of <<Selection>> events.

# ------------------------------------------------------------------------------
#  Command LogButtons
# ------------------------------------------------------------------------------
# Command to create a megawidget with a descriptive label, a radiobutton widget
# selector, and a widgetPlus widget.
# ------------------------------------------------------------------------------

proc LogButtons {w} {
    frame $w
    label $w.lab -text {Logger} -font TkHeadingFont
    pack $w.lab -pady {5 0}

    frame $w.f
    label       $w.f.rb0          -text {Choose Log Level:}
    radiobutton $w.f.rb1 -value 0 -text Simple        -variable ::logLevel
    radiobutton $w.f.rb2 -value 1 -text Debug         -variable ::logLevel

    pack $w.f.rb0 $w.f.rb1 $w.f.rb2 -side left -padx 5
    pack $w.f
    set ::logLevel 0

    return $w
}

LogButtons .logbuttons
pack .logbuttons

proc ::persistentSelection::Log {msg} {
    LogExample .log $::logLevel $msg
    return
}

pack [text .log -bg #e0f0e0 -height 30 -width 80 -exportselection 0 -wrap word] -expand 1 -fill both

bindtags .log {.log Ntext . all}

set msg {This window logs <<Selection>> events in windows .top and .mid (above),  and their processing by package persistentSelection.

The log window's contents can be edited.  This is useful for marking the points before and after a GUI event in windows .top and .mid.
}

.log insert end $msg
.log insert end \n
.log see end-1c
