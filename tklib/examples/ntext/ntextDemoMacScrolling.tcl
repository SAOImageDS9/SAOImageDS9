#! /usr/bin/env tclsh

package require Tk 8.5-

# Copyright (c) 2005-2023 Keith Nash.
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

If you are using a Mac, one of the sets of radiobuttons in the control panel (right) will not be disabled (this set of buttons is not present on non-Mac platforms).  These radiobuttons allow you to set the value of ::ntext::classicParagraphs, which controls the response to the keyboard events described in (5) below.

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

    On recent versions of macOS, these keystrokes are intercepted by the windowing system.  To avoid confusion, Ntext defines these keystrokes to have no effect on any version of macOS.

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

    On non-Mac platforms, these actions are bound in Ntext and Text to the events <Control-Up>, <Control-Down>, <Shift-Control-Up>, <Shift-Control-Down>.  The Control- bindings are also defined in the Text binding tag on the Mac, although on recent versions of macOS these keystrokes are intercepted by the windowing system).

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


# ------------------------------------------------------------------------------
# Now begin constructing the GUI.
# ------------------------------------------------------------------------------

set col #e0dfde
. configure -bg $col

pack [frame .f -bg $col] -side right -anchor e
pack [frame .cp -bg $col -bd 2p -relief ridge] -anchor ne -in .f
pack [label .cp2 -bg $col -text "(These options are applied only\n to the right-hand text widget)"] -anchor n -pady 4p -in .f

pack [frame .rhf   -bg $col] -side right -anchor nw
pack [scrollbar .rhf.scroll -bg $col] -side right -anchor nw -expand 1 -fill y
pack [text  .rhf.new ] -padx 2 -side right -anchor nw
bindtags .rhf.new {.rhf.new Ntext . all}

.rhf.new configure -wrap word -undo 1 -yscrollcommand {.rhf.scroll set}
.rhf.new configure -width 61 -height 29 -font TkFixedFont -bg white
.rhf.new insert end "  I use the Ntext bindings.\n\n$message"
.rhf.new edit separator
.rhf.scroll configure -command {.rhf.new yview}

pack [frame .lhf   -bg $col] -side left -anchor ne
pack [scrollbar .lhf.scroll -bg $col] -side left -anchor nw -expand 1 -fill y
pack [text .lhf.classic ] -padx 2 -side left -anchor nw
.lhf.classic configure -width 61 -height 29 -wrap word -undo 1 -font TkFixedFont -bg #FFFFCC -yscrollcommand {.lhf.scroll set}
.lhf.classic insert end "  I use the (default) Text bindings.\n\n$message"
.lhf.classic edit separator
.lhf.scroll configure -command {.lhf.classic yview}

# What is the largest font such that the demo will fit on the screen?
# Allow 100 pixels or 1 inch for desktop panels that are not counted in wm maxsize.
# Reduce the font if necessary.
set siz    [font actual TkFixedFont -size]
set maxPts [expr { ([lindex [wm maxsize .] 1] - 6 - max (100., 72. * [tk scaling])) * $siz / ([winfo reqheight .lhf.classic] - 6) }]
set siz    [expr { int(min($siz, $maxPts)) }]
font configure TkFixedFont -size $siz

set fam [font actual TkFixedFont -family]
set TitleFixedFont [list $fam $siz bold]

.lhf.classic tag add red  1.0 2.0
.rhf.new     tag add blue 1.0 2.0
.lhf.classic tag configure red  -foreground #A00000 -font $TitleFixedFont
.rhf.new     tag configure red  -foreground #A00000 -font $TitleFixedFont
.rhf.new     tag configure blue -foreground #0000A0 -font $TitleFixedFont

# ------------------------------------------------------------------------------
# Highlight names of bindings and modifiers in the text.
# ------------------------------------------------------------------------------

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
        set place [.rhf.new search -- $term $nextPlace end-1c]
        if {$place eq {}} {
            break
        }
        set nextPlace ${place}+${lenny}c
        if {$first && $term in {F14 F15 F16}} {
            # The first use of these terms is not as a binding name.
        } else {
            .lhf.classic tag add red $place $nextPlace
            .rhf.new     tag add red $place $nextPlace
        }
        set first 0
    }
}

# ------------------------------------------------------------------------------
# The code below populates frame .cp and implements the
# control panel for selecting ntext configuration options.
# ------------------------------------------------------------------------------

set col2 #f0efee
set col3 #d0cfce
font configure TkDefaultFont -size $siz
set fam [font actual TkDefaultFont -family]
set TitleVariableFont [list $fam $siz bold]

proc radiobutton2 {w args} {
    radiobutton23 $w 2 {*}$args
}
proc radiobutton3 {w args} {
    radiobutton23 $w 3 {*}$args
}
proc radiobutton23 {w num args} {
    if {$num == 2} {
        set bg $::col2
        set ab $::col3
    } else {
        set bg $::col3
        set ab $::col2
    }
    frame $w -bg $bg
    radiobutton $w.rb -bg $bg -activebackground $ab -highlightthickness 0 -padx 4p -pady 2p -anchor w {*}$args
    pack $w.rb -expand 1 -fill both -pady 2p
    return $w
}

label  .cp.n:l -bg $col2 -text "Options for ntext bindings" -font $TitleVariableFont
grid .cp.n:l -ipady 2 -sticky ewn -columnspan 3

label  .cp.h:l -bg $col3 -anchor e -text "classicMouseSelect: "
radiobutton3 .cp.h:off -text "Off" -variable ::ntext::classicMouseSelect -value 0
radiobutton3 .cp.h:on  -text "On " -variable ::ntext::classicMouseSelect -value 1
grid .cp.h:l .cp.h:off .cp.h:on -ipady 2 -sticky ewns

label  .cp.g:l -bg $col2 -anchor e -text "classicAnchor: "
radiobutton2 .cp.g:off -text "Off" -variable ::ntext::classicAnchor -value 0
radiobutton2 .cp.g:on  -text "On " -variable ::ntext::classicAnchor -value 1
grid .cp.g:l .cp.g:off .cp.g:on -ipady 2 -sticky ewns

label .cp.k:l -bg $col3 -anchor e -text "classicExtras: "
radiobutton3 .cp.k:off -text "Off" -variable ::ntext::classicExtras -value 0
radiobutton3 .cp.k:on  -text "On " -variable ::ntext::classicExtras -value 1
grid .cp.k:l .cp.k:off .cp.k:on -ipady 2 -sticky ewns

label  .cp.m:l -bg $col2 -anchor e -text "classicSelection: "
radiobutton2 .cp.m:off -text "Off" -variable ::ntext::classicSelection -value 0
radiobutton2 .cp.m:on  -text "On " -variable ::ntext::classicSelection -value 1
grid .cp.m:l .cp.m:off .cp.m:on -ipady 2 -sticky ewns

if {[tk windowingsystem] eq "aqua"} {
label  .cp.p:l -bg $col3 -text "classicParagraphs: "
radiobutton3 .cp.p:off -text "Off" -variable ::ntext::classicParagraphs -value 0
radiobutton3 .cp.p:on  -text "On " -variable ::ntext::classicParagraphs -value 1
grid .cp.p:l .cp.p:off .cp.p:on -ipady 2 -sticky ewns
}

set wordBreakChoice new
label  .cp.j:l -bg $col2 -anchor e -text "classicWordBreak: "
radiobutton2 .cp.j:off  -text "Off"          -variable wordBreakChoice -value "new"     -command setPattern
radiobutton2 .cp.j:unix -text "On (Unix)"    -variable wordBreakChoice -value "unix"    -command setPattern
radiobutton2 .cp.j:wind -text "On (Windows)" -variable wordBreakChoice -value "windows" -command setPattern
frame .cp.j:sp1 -bg $col2
frame .cp.j:sp2 -bg $col2
grid .cp.j:l   .cp.j:off .cp.j:unix -ipady 2 -sticky ewns
grid .cp.j:sp1 .cp.j:sp2 .cp.j:wind -ipady 2 -sticky ewns

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

# Disable all radiobuttons except .cp.p.on .cp.p.off which are relevant to this demo:
# And all labels except .cp2, .cp.p.l

foreach rb {
    .cp.h:on.rb
    .cp.h:off.rb
    .cp.g:on.rb
    .cp.g:off.rb
    .cp.k:on.rb
    .cp.k:off.rb
    .cp.j:wind.rb
    .cp.j:unix.rb
    .cp.j:off.rb
    .cp.m:on.rb
    .cp.m:off.rb

    .cp.h:l
    .cp.g:l
    .cp.k:l
    .cp.j:l
    .cp.m:l
} {
    $rb configure -state disabled
}
