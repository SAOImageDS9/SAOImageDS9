#!/bin/sh
# the next line restarts using tclsh \
exec tclsh "$0" "$@"

# Copyright (c) 2017-2018 Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

# This script is a demo of Undo/Redo in the widgetPlus widgets (entryPlus etc) and
# in the text widget.

package require Tk
package require snit
package require widgetPlus
namespace import widgetPlus::*

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

# Select, create and map a widgetPlus widget.

CreateDemo .wpdemo
pack .wpdemo

# Choose options: whether to use persistentSelection, ntext.
set PS 0
set NT 0

# Create and map a text widget.

text .top -height 17 -bg white -wrap word -undo 1 -maxundo 0
pack .top

set RR \u00ae

.top insert end "Try Undo/Redo on the widget modified with widgetPlus (above) and the text widget (here).

On X11 systems (Linux$RR, BSD$RR, Solaris$RR ...)
    <<Undo>>	is mapped to <Control-z>
    <<Redo>>	is mapped to	<Control-Shift-z>

On Windows$RR systems
    <<Undo>>	is mapped to <Control-z>
    <<Redo>>	is mapped to	<Control-y>

On Aqua$RR systems (i.e. Apple$RR macOS$RR or OS X$RR)
    <<Undo>>	is mapped to <Command-z>
    <<Redo>>	is mapped to	<Command-Shift-z>
"

if $PS {
    .top insert end "\nAlso try using the persistent PRIMARY selection."
}

.top edit reset

if $NT {
    # Create and map a ntext widget.
    package require ntext
    text .mid -height 5 -bg white -wrap word -undo 1 -maxundo 0
    pack .mid -pady {10 0}
    bindtags .mid {.mid Ntext . all}
    if $PS {
        .mid insert end "Also try the persistent PRIMARY selection, and Undo/Redo, on this ntext widget."
    } else {
        .mid insert end "Also try Undo/Redo on this ntext widget."
    }
    .mid edit reset
}

if $PS {
    # Append this code to test persistentSelection.
    package require persistentSelection
    persistentSelection::fixText
    bind Text     <<Selection>>   {persistentSelection::report text %W}
    bind Ntext     <<Selection>>   {persistentSelection::report text %W}
    bind EntryPlus  <<Selection>>   {persistentSelection::report entry %W}
    bind TEntryPlus  <<Selection>>   {persistentSelection::report entry %W}
    bind SpinboxPlus  <<Selection>>   {persistentSelection::report entry %W}
    bind TSpinboxPlus  <<Selection>>   {persistentSelection::report entry %W}
    bind TComboboxPlus  <<Selection>>   {persistentSelection::report entry %W}
}
