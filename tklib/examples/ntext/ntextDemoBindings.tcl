#!/bin/sh
# the next line restarts using tclsh \
exec tclsh "$0" "$@"

package require Tk

# Copyright (c) 2005-2018 Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

### This demo explores the ntext options

### For a short example, see ntextExample.tcl
### To explore ntext indentation, try ntextDemoIndent.tcl
### To explore vertical scrolling on the Mac, try ntextDemoMacScrolling.tcl
### For corner cases in scrolling, try ntextDemoScroll.tcl

# This string defines the text that will be displayed in each widget:
set message {QOTW:  "C/C++, which is used by 16% of users, is the most popular programming language, but Tcl, used by 0%, seems to be the language of choice for the highest scoring users."

example code {alph {bet {b}} {gam {c}}} {
    # Example code rich in punctuation
    if {!($alph eq "a" && $bet eq "b")} {
        puts "$gam $::messages::demo(d)"
    }
}

Try editing the text with the keyboard and mouse; compare the bindings for Text (left panel) and Ntext (right panel).

Try word-by-word navigation (Control key with left cursor or right cursor key); try word selection (double click); try these for the different word-break detection options (selected below).

The classicMouseSelect and classicAnchor options are discussed in the man page for ntextBindings.}
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


set col #e0dfde
. configure -bg $col

pack [frame .rhf -bg $col] -side right -anchor nw
pack [text .rhf.new ] -padx 2
bindtags .rhf.new {.rhf.new Ntext . all}

.rhf.new configure -wrap word -undo 1
.rhf.new configure -width 42 -height 29 -font {{Courier} -15} -bg white
.rhf.new insert end "  I use the Ntext bindings.\n\n$message"
.rhf.new edit separator

pack [frame .lhf -bg $col] -side left -anchor ne
pack [text .lhf.classic ] -padx 2
.lhf.classic configure -width 42 -height 29 -wrap word -undo 1 -font {{Courier} -15} -bg #FFFFCC
.lhf.classic insert end "  I use the (default) Text bindings.\n\n$message"
.lhf.classic edit separator
pack [label  .lhf.m -bg $col -text "(The radiobutton controls do not\napply to the left-hand text widget)"]

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
