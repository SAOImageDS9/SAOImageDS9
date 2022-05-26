#!/bin/sh
# the next line restarts using tclsh \
exec tclsh "$0" "$@"

package require Tk

# Copyright (c) 2005-2018 Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

### This demo explores vertical scrolling on the Mac

### For a short example, see ntextExample.tcl
### To explore ntext indentation, try ntextDemoIndent.tcl
### To explore the ntext options, try ntextDemoBindings.tcl
### For corner cases in scrolling, try ntextDemoScroll.tcl


# This string defines the text that will be displayed in each widget:
set message {Ntext tries to offer a user experience that is as close as possible to the native "look and feel" of each platform.

This example demonstrates the Mac bindings for keyboard navigation, and in particular the use of the keyboard for vertical scrolling.  The description below will not agree with the behavior of the application unless you are running it on a Mac.

If you are using a Mac, one of the sets of radiobuttons at the bottom of the window will not be disabled (this set of buttons is not present on non-Mac platforms).  These radiobuttons allow you to set the value of ::ntext::classicParagraphs, which controls the response to the keyboard events described in (5) below.

The key names are those used in Tk bindings (see the Tk manual page for the bind command).

The "modifiers" Shift, Control, Option, or Command are applied to an event if the corresponding "modifier key" is held down while an ordinary key is pressed.

The keys that generate each modifier are:

Shift    - left or right shift key
Control  - left or right "ctrl" key
Option   - left or right "alt ⌥" key
Command  - left or right "⌘" key

The ordinary (non-modifier) keys relevant here are  Up, Down, Prior, Next, Home, and End.

On a full Apple keyboard, these navigation keys are in the block that lies between the main part of the keyboard, and the numeric keypad.

The layout of this part of the keyboard is:

      F14   F15   F16
       fn    ↖     ⇞
       ⌦    ↘     ⇟

             ↑
       ←     ↓     →

The "fn" key may instead be labeled "help".  The "⌦" key is also labeled "delete".

The same layout, but now using the Tk names for the keys, is:

    F14      F15    F16
    Help     Home   Prior
    Delete   End    Next

              Up
    Left     Down   Right


On reduced Apple keyboards, the nine keys F14 to Next are absent; the four cursor keys Up, Left, Down, Right are squeezed into the lower right of the keyboard.


There are five sets of bindings that use the keyboard for vertical scrolling.

(1) Prior and Next keys

    <Prior> and <Next> scroll the text widget vertically without moving the insert mark (the "cursor").

    <Control-Prior> and <Control-Next> scroll the text widget vertically, AND move the insert mark.

    <Shift-Prior> and <Shift-Next> scroll the text widget vertically, AND move the insert mark, AND extend the selection.

    <Option-Prior> and <Option-Next> scroll the text widget vertically, AND move the insert mark - the same as <Control-Prior> and <Control-Next> respectively.

    <Command-Prior> and <Command-Next> do nothing.

    The Shift modifier has no effect in any cases except <Shift-Prior> and <Shift-Next>.

(2) Home and End keys

    <Home> and <End> scroll to the top and bottom of the text widget respectively, without moving the insert mark.

    <Shift-Home> and <Shift-End> scroll to the top and bottom of the text widget respectively, AND move the insert mark, AND extend the selection.

    <Control-Home> and <Control-End> do nothing.
    <Command-Home> and <Command-End> do nothing.
    <Option-Home>  and <Option-End>  do nothing.

(3) Up and Down keys, with Command modifier

    <Command-Up> and <Command-Down> scroll to the top and bottom of the text widget respectively, AND move the insert mark.

    <Command-Shift-Up> and <Command-Shift-Down> scroll to the top and bottom of the text widget respectively, AND move the insert mark, AND extend the selection.

    On other platforms these operations are bound to the keys <Control-Home>, <Control-End>, <Control-Shift-Home>, <Control-Shift-End> respectively.

(4) Up and Down keys, with Control modifier

    On recent versions of OS X, these keystrokes are intercepted by the windowing system.  To avoid confusion, Ntext defines these keystrokes to have no effect on any version of OS X.

(5) Up and Down keys, with Option modifier

if {::ntext::classicParagraphs == 0} (the default value)

    <Option-Up>         goes to the previous SLL.
    <Shift-Option-Up>   goes to the previous SLL, AND also extends the selection.
    <Option-Down>       goes to the next ELL.
    <Shift-Option-Down> goes to the next ELL, AND also extends the selection.

    where
      SLL = start of a logical line
      ELL = end of a logical line
      and a logical line is a single line of text that may have been wrapped around (when the text widget has option -wrap word or -wrap char) into multiple "display lines"

    This behavior is the same as for the Mac application TextEdit.

if {::ntext::classicParagraphs == 1}

    The behavior differs from that of other Mac applications.

    <Option-Up>, <Option-Down> scroll the text widget up and down, AND move the insert mark to the start of the previous/next "paragraph".

    <Shift-Option-Up>, <Shift-Option-Down> scroll the text widget up and down, AND move the insert mark to the start of the previous/next "paragraph", AND extend the selection.

    The start of a paragraph is the first non-blank character after a blank line.

    On non-Mac platforms, these actions are bound in Ntext and Text to the events <Control-Up>, <Control-Down>, <Shift-Control-Up>, <Shift-Control-Down>.  The Control- bindings are also defined in the Text binding tag on the Mac, although on recent versions of OS X these keystrokes are intercepted by the windowing system).

}
# End of string for widget text.

package require ntext 1.0

# Whether Shift-Button-1 ignores changes made by the kbd to the insert mark:
set ::ntext::classicMouseSelect 0

# Whether Shift-Button-1 has a variable or fixed anchor:
set ::ntext::classicAnchor      0

# Whether the traditional "extra" bindings are activated (default is 0):
set ::ntext::classicExtras      0

# Whether to use new or classic word boundary detection:
set ::ntext::classicWordBreak   0

# Set to 0 to align wrapped display lines with the first display line of the logical line:
set ::ntext::classicWrap        0

# Set to 0 to follow Mac Aqua conventions on placement of the insert mark
# when a selection is cancelled by keyboard navigation:
# Has effect on all platforms.  Default value is 0 on Aqua, 1 on other platforms.
set ::ntext::classicSelection   0

# Set to 0 to follow Mac Aqua conventions on vertical scrolling with the
# Up/Down cursor keys and Option ("Alt") modifier keys.
# Has effect only on Aqua.
set ::ntext::classicParagraphs  0


set col #e0dfde
. configure -bg $col

pack [frame .rhf   -bg $col] -side right -anchor nw
pack [frame .rhf.f -bg $col]
pack [scrollbar .rhf.f.scroll -bg $col] -side right -anchor nw -expand 1 -fill y
pack [text  .rhf.f.new ] -padx 2 -side right -anchor nw
bindtags .rhf.f.new {.rhf.f.new Ntext . all}

.rhf.f.new configure -wrap word -undo 1 -yscrollcommand {.rhf.f.scroll set}
.rhf.f.new configure -width 61 -height 29 -font {{Courier} -15} -bg white
.rhf.f.new insert end "  I use the Ntext bindings.\n\n$message"
.rhf.f.new edit separator
.rhf.f.scroll configure -command {.rhf.f.new yview}

pack [frame .lhf   -bg $col] -side left -anchor ne
pack [frame .lhf.f -bg $col]
pack [scrollbar .lhf.f.scroll -bg $col] -side left -anchor nw -expand 1 -fill y
pack [text .lhf.f.classic ] -padx 2 -side left -anchor nw
.lhf.f.classic configure -width 61 -height 29 -wrap word -undo 1 -font {{Courier} -15} -bg #FFFFCC -yscrollcommand {.lhf.f.scroll set}
.lhf.f.classic insert end "  I use the (default) Text bindings.\n\n$message"
.lhf.f.classic edit separator
.lhf.f.scroll configure -command {.lhf.f.classic yview}


pack [label  .lhf.m   -bg $col -text "(The radiobutton controls do not\napply to the left-hand text widget)"]

pack [frame .rhf.h -bg $col] -fill x
pack [radiobutton .rhf.h.on  -bg $col -text "On " -variable ::ntext::classicMouseSelect -value 1] -side right
pack [radiobutton .rhf.h.off -bg $col -text "Off" -variable ::ntext::classicMouseSelect -value 0] -side right
pack [label  .rhf.h.l -bg $col -text "classicMouseSelect: "] -side right

pack [frame .rhf.g -bg $col] -anchor ne
pack [radiobutton .rhf.g.on  -bg $col -text "On " -variable ::ntext::classicAnchor -value 1] -side right
pack [radiobutton .rhf.g.off -bg $col -text "Off" -variable ::ntext::classicAnchor -value 0] -side right
pack [label  .rhf.g.l -bg $col -text "classicAnchor: "] -side right

pack [frame .rhf.k -bg $col] -anchor ne
pack [radiobutton .rhf.k.on  -bg $col -text "On " -variable ::ntext::classicExtras -value 1] -side right
pack [radiobutton .rhf.k.off -bg $col -text "Off" -variable ::ntext::classicExtras -value 0] -side right
pack [label  .rhf.k.l -bg $col -text "classicExtras: "] -side right

pack [frame .rhf.j -bg $col] -anchor ne
set wordBreakChoice new
pack [radiobutton .rhf.j.wind -bg $col -text "On (Windows)" -variable wordBreakChoice -value "windows" -command {setPattern}] -side right
pack [radiobutton .rhf.j.unix -bg $col -text "On (Unix)" -variable wordBreakChoice -value "unix" -command {setPattern}] -side right
pack [radiobutton .rhf.j.off  -bg $col -text "Off" -variable wordBreakChoice -value "new" -command {setPattern}] -side right
pack [label  .rhf.j.l -bg $col -text "classicWordBreak: "] -side right

pack [frame .rhf.m -bg $col] -anchor ne
pack [radiobutton .rhf.m.on  -bg $col -text "On " -variable ::ntext::classicSelection -value 1] -side right
pack [radiobutton .rhf.m.off -bg $col -text "Off" -variable ::ntext::classicSelection -value 0] -side right
pack [label  .rhf.m.l -bg $col -text "classicSelection: "] -side right

if {[tk windowingsystem] eq "aqua"} {
pack [frame .rhf.n -bg $col -bg $col] -anchor ne -pady {0 10}
pack [radiobutton .rhf.n.on  -bg $col -text "On " -variable ::ntext::classicParagraphs -value 1] -side right
pack [radiobutton .rhf.n.off -bg $col -text "Off" -variable ::ntext::classicParagraphs -value 0] -side right
pack [label  .rhf.n.l -bg $col -text "classicParagraphs: "] -side right
}

proc setPattern {} {
    global wordBreakChoice
    set platform $::tcl_platform(platform)

    if {$wordBreakChoice eq "unix"} {
        set ::tcl_platform(platform) unix
        set ::ntext::classicWordBreak 1
    } elseif {$wordBreakChoice eq "windows"} {
        set ::tcl_platform(platform) windows
        set ::ntext::classicWordBreak 1
    } else {
        set ::ntext::classicWordBreak 0
    }

    ::ntext::initializeMatchPatterns
    set ::tcl_platform(platform) $platform
}

# Disable all radiobuttons except .rhf.n.on .rhf.n.off which are relevant to this demo:
# And all labels except .lhf.m, .rhf.n.l

foreach rb {
    .rhf.h.on
    .rhf.h.off
    .rhf.g.on
    .rhf.g.off
    .rhf.k.on
    .rhf.k.off
    .rhf.j.wind
    .rhf.j.unix
    .rhf.j.off
    .rhf.m.on
    .rhf.m.off

    .rhf.h.l
    .rhf.g.l
    .rhf.k.l
    .rhf.j.l
    .rhf.m.l
} {
    $rb configure -state disabled
}

foreach term {
    <
    >
    Prior
    Next
    Up
    Down
    Left
    Right
    Home
    End
    Help
    Delete
    F14 F15 F16
    Control
    Command
    Option
    Shift
    Control-
    Command-
    Option-
    Shift-
} {
    set first 1
    set lenny [string length $term]
    set nextPlace 1.0
    while {1} {
        set place [.rhf.f.new search -- $term $nextPlace end-1c]
        if {$place eq {}} {
            break
        }
        set nextPlace ${place}+${lenny}c
        if {$first && $term in {F14 F15 F16}} {
            # The first use of these terms is not as a binding name.
        } else {
            .lhf.f.classic tag add red $place $nextPlace
            .rhf.f.new     tag add red $place $nextPlace
        }
        set first 0
    }
}

.lhf.f.classic tag configure red -foreground #A00000 -font {{Courier} -15 bold}

.rhf.f.new     tag configure red -foreground #A00000 -font {{Courier} -15 bold}

