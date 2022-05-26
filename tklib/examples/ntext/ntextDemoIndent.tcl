#!/bin/sh
# the next line restarts using tclsh \
exec tclsh "$0" "$@"

package require Tk

# Copyright (c) 2005-2018 Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

### This demo explores ntext indentation

### For a short example, see ntextExample.tcl
### To explore the ntext options, try ntextDemoBindings.tcl
### To explore vertical scrolling on the Mac, try ntextDemoMacScrolling.tcl
### For corner cases in scrolling, try ntextDemoScroll.tcl

### - Points to note when using ntext's indent facilities are commented and
###   numbered (1) to (8).
### - If the text in your widget is manipulated only by the keyboard and mouse,
###   then (1), (2) and (3) are all you need to do.
### - If the text or its layout are manipulated by the script, then you also
###   need to call the function ::ntext::wrapIndent - see comments (4) to (8),
###   and the man page for ntextIndent.

# This string defines the text that will be displayed in each widget:
set message {  This demo shows ntext's indentation facilities.  These are switched off by default, but in this demo they have been switched on.

  To try the demo - place the cursor at the start of a paragraph and change the amount of initial space. The paragraph is a logical line of text; its first display line may have leading whitespace, and ntext indents any subsequent (wrapped) display lines to match the first.

	This paragraph is indented by a tab. Again, the display lines are all indented to match the first.

    Colored indents are possible in Tk 8.6.6 and above.  To remove coloring, set the color to the empty string.

 Try any text-widget operation, and test whether ntext's handling of display line indentation is satisfactory.  Ntext is part of Tklib - please report any bugs to:

 http://core.tcl.tk/tklib/reportlist
}
# End of string for widget text.

package require ntext 1.0

### (1) Indentation is disabled by default.  Set this variable to 0 to enable it:
set ::ntext::classicWrap        0

#  Activate the traditional "extra" bindings so these can be tested too:
set ::ntext::classicExtras      1

set col #e0dfde
. configure -bg $col

pack [frame .rhf -bg $col] -side right -anchor nw
pack [text .rhf.new ] -padx 2

### (2) Set the widget's binding tags to use 'Ntext' instead of the default 'Text':
bindtags .rhf.new {.rhf.new Ntext . all}

### (3) Set the widget to '-wrap word' mode:
.rhf.new configure -wrap word -undo 1
.rhf.new configure -width 42 -height 32 -font {{Courier} -15} -bg white
.rhf.new insert end "  I use the Ntext bindings.\n\n$message"
.rhf.new edit separator

### (4) The script (not the keyboard or mouse) has inserted text.  Because the
###     widget has not yet been drawn, ::ntext::wrapIndent will be called by the
###     <Configure> binding, so it is not really necessary to call it here.  It
###     is necessary in most other cases when the 'insert' command is called by
###     the script.
::ntext::wrapIndent .rhf.new

pack [frame .lhf -bg $col] -side left -anchor ne
pack [text .lhf.classic ] -padx 2
.lhf.classic configure -width 42 -height 32 -wrap word -undo 1 -font {{Courier} -15} -bg #FFFFCC
.lhf.classic insert end "  I use the (default) Text bindings.\n\n$message"
.lhf.classic edit separator
pack [label  .lhf.m -bg $col -text "(The radiobuttons and tab settings do not\napply to the left-hand text widget)"]

pack [frame .rhf.h -bg $col] -fill x
### (5) When indentation is switched on or off, call ::ntext::wrapIndent to
### calculate or clear indentation for the entire widget:
pack [radiobutton .rhf.h.off -bg $col -text "Indent Off" -variable ::ntext::classicWrap -value 1 -command {::ntext::wrapIndent .rhf.new}] -side right
pack [radiobutton .rhf.h.on  -bg $col -text "Indent On"  -variable ::ntext::classicWrap -value 0 -command {::ntext::wrapIndent .rhf.new}] -side right
pack [label  .rhf.h.l -bg $col -text "Switch indentation on/off: "] -side right

pack [frame .rhf.g -bg $col] -anchor ne

label  .rhf.g.l1 -bg $col -text " "
entry  .rhf.g.e1 -width 8 -bg white
button .rhf.g.b1 -bg $col -highlightbackground $col -text "Click to set indent color to value in box" -command changeColor

grid .rhf.g.b1 .rhf.g.e1 .rhf.g.l1 -padx 3 -sticky w

label  .rhf.g.l2 -bg $col -text " "
entry  .rhf.g.e2 -width 3 -bg white
button .rhf.g.b2 -bg $col -highlightbackground $col -text "Click to set tab spacing to value in box" -command changeTabs

grid .rhf.g.b2 .rhf.g.e2 .rhf.g.l2 -padx 3 -sticky w

.rhf.g.e2 insert end 8
.rhf.g.e1 insert end $::ntext::indentColor

proc changeColor {} {
    set col [string trim [.rhf.g.e1 get]]
    if {($col eq {}) || (![catch {winfo rgb .rhf.new $col}])} {
        ### (6) Ensure future tags will use the new color:
        set ::ntext::indentColor $col

        ### (7) Update existing tags to use the new color:
        ::ntext::syncIndentColor .rhf.new
    } else {
        .rhf.g.e1 delete 0 end
        .rhf.g.e1 insert end $::ntext::indentColor
    }
    return
}

proc changeTabs {} {
    set nTabs [string trim [.rhf.g.e2 get]]
    if {[string is integer -strict $nTabs] && ($nTabs > 0)} {
        set font [.rhf.new cget -font]
        .rhf.new configure -tabs "[expr {$nTabs * [font measure $font 0]}] left"
        ### (8) Changing the tabs may change the indentation of the first
        ###     display line of a logical line; if so, the indentation of the
        ###     other display lines must be recalculated:
        ::ntext::wrapIndent .rhf.new
    } else {
        .rhf.g.e2 delete 0 end
        .rhf.g.e2 insert end [.rhf.new cget -tabs]
    }
    return
}
