#! /usr/bin/env tclsh

package require Tk 8.5-

# Copyright (c) 2005-2023 Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

### This demo explores the ntext options

### For a short example, see ntextExample.tcl
### To explore ntext indentation, try ntextDemoIndent.tcl
### To explore vertical scrolling on the Mac, try ntextDemoMacScrolling.tcl
### For corner cases in scrolling, try ntextDemoScroll.tcl

# This string defines the text that will be displayed in each widget:
set message {Try editing the text with the keyboard and mouse; compare the bindings for Text (left panel) and Ntext (right panel).

Try word-by-word navigation (Control key with left cursor or right cursor key); try word selection (double click); try these for the different word-break detection options, adjustable in the control panel.

The classicMouseSelect and classicAnchor options are discussed in the man page for ntextBindings.

QOTW:  "C/C++, which is used by 16% of users, is the most popular programming language, but Tcl, used by 0%, seems to be the language of choice for the highest scoring users."

example code {alph {bet {b}} {gam {c}}} {
    # Example code rich in punctuation
    if {!($alph eq "a" && $bet eq "b")} {
        puts "$gam $::messages::demo(d)"
    }
}}
# End of string for widget text.

package require ntext 1.0

# Whether Shift-Button-1 ignores changes made by the kbd to the insert mark:
set ::ntext::classicMouseSelect 0

# Whether Shift-Button-1 has a variable or fixed anchor:
set ::ntext::classicAnchor      0

# Whether the traditional "extra" bindings are activated (default is 0):
set ::ntext::classicExtras      1

# Whether to use new or classic word boundary detection:
set ::ntext::classicWordBreak   0

# Set to 0 to align wrapped display lines with the first display line of the logical line:
set ::ntext::classicWrap        1

# Set to 0 to follow Mac Aqua conventions on placement of the insert mark
# when a selection is cancelled by keyboard navigation:
# Has effect on all platforms.  Default value is 0 on Aqua, 1 on other platforms.
# set ::ntext::classicSelection   1

# ------------------------------------------------------------------------------
# Now begin constructing the GUI.
# ------------------------------------------------------------------------------

set col #e0dfde
. configure -bg $col

pack [frame .f -bg $col] -side right -anchor e
pack [frame .cp -bg $col -bd 2p -relief ridge] -anchor ne -in .f
pack [label .cp2 -bg $col -text "(These options are applied only\n to the right-hand text widget)"] -anchor n -pady 4p -in .f

pack [frame .rhf -bg $col] -side right -anchor ne
pack [text .rhf.new ] -padx 2

.rhf.new configure -wrap word -undo 1
.rhf.new configure -width 42 -height 29 -font TkFixedFont -bg white
.rhf.new insert end "  I use the Ntext bindings.\n\n$message"
.rhf.new edit separator

pack [frame .lhf -bg $col] -side left -anchor ne
pack [text .lhf.classic ] -padx 2
.lhf.classic configure -width 42 -height 29 -wrap word -undo 1 -font TkFixedFont -bg #FFFFCC
.lhf.classic insert end "  I use the (default) Text bindings.\n\n$message"
.lhf.classic edit separator

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
.rhf.new     tag configure blue -foreground #0000A0 -font $TitleFixedFont

# Use the ntext bindings in .rhf.new --
bindtags .rhf.new {.rhf.new Ntext . all}

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

set wordBreakChoice new
label  .cp.j:l -bg $col3 -anchor e -text "classicWordBreak: "
radiobutton3 .cp.j:off  -text "Off"          -variable wordBreakChoice -value "new"     -command setPattern
radiobutton3 .cp.j:unix -text "On (Unix)"    -variable wordBreakChoice -value "unix"    -command setPattern
radiobutton3 .cp.j:wind -text "On (Windows)" -variable wordBreakChoice -value "windows" -command setPattern
frame .cp.j:sp1 -bg $col3
frame .cp.j:sp2 -bg $col3
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
