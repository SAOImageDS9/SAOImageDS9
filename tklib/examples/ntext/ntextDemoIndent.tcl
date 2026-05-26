#! /usr/bin/env tclsh

package require Tk 8.5-

# Copyright (c) 2005-2023 Keith Nash.
#
# See the file "license.terms" for information on usage and redistribution
# of this file, and for a DISCLAIMER OF ALL WARRANTIES.

### This demo explores ntext indentation.  It also demonstrates the ntext
### facilities for coloring tabs.

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

	This paragraph is indented by a tab. Again, the display lines are all indented to match the first.  Note that ntext can color tabs to distinguish them from ordinary spaces.

    The indents themselves can be colored in Tk 8.6.6 and above.  To remove coloring, set the color to the empty string.

 Try any text-widget operation, and test whether ntext's handling of display line indentation is satisfactory.  Ntext is part of Tklib - please report any bugs to:

 https://core.tcl-lang.org/tklib/reportlist
}
# End of string for widget text.

package require ntext 1.0

### (1) Indentation is disabled by default.  Set this variable to 0 to enable it:
set ::ntext::classicWrap        0

#  Activate the traditional "extra" bindings so these can be tested too:
set ::ntext::classicExtras      1

# ------------------------------------------------------------------------------
# Now begin constructing the GUI.
# ------------------------------------------------------------------------------

set col #e0dfde
. configure -bg $col

pack [frame .f -bg $col] -side right -anchor e
pack [frame .cp -bg $col -bd 2p -relief ridge] -anchor ne -in .f
pack [label .cp2 -bg $col -text "(These options are applied only\n to the right-hand text widget)"] -anchor n -pady 4p -in .f

pack [frame .rhf -bg $col] -side right -anchor nw
pack [text .rhf.new ] -padx 2

### (2) Set the widget's binding tags to use 'Ntext' instead of the default 'Text':
bindtags .rhf.new {.rhf.new Ntext . all}

### (3) Set the widget to '-wrap word' mode:
.rhf.new configure -wrap word -undo 1
.rhf.new configure -width 44 -height 32 -font TkFixedFont -bg white
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
.lhf.classic configure -width 44 -height 32 -wrap word -undo 1 -font TkFixedFont -bg #FFFFCC
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

::ntext::syncTabColor .rhf.new

# ------------------------------------------------------------------------------
# The code below populates frame .cp and implements the
# control panel for selecting ntext configuration options.
# ------------------------------------------------------------------------------

font configure TkDefaultFont -size $siz
set fam [font actual TkDefaultFont -family]
set TitleVariableFont [list $fam $siz bold]

label .cp.ttl -text "Options for ntext indentation" -font $TitleVariableFont -bg #f0f0f0
frame .cp.tog -bg $col
frame .cp.grd -bg $col
pack .cp.ttl -fill x -anchor n -ipadx 4p -ipady 4p
pack .cp.tog   -fill x -anchor n -padx  4p -pady  4p
pack .cp.grd   -fill x -anchor n


### (5) When indentation is switched on or off, call ::ntext::wrapIndent to
### calculate or clear indentation for the entire widget:
radiobutton .cp.tog.off -bg $col -highlightthickness 0 -padx 4p -pady 2p -anchor w -text "Indent Off" -variable ::ntext::classicWrap -value 1 -command {::ntext::wrapIndent .rhf.new}
radiobutton .cp.tog.on  -bg $col -highlightthickness 0 -padx 4p -pady 2p -anchor w -text "Indent On"  -variable ::ntext::classicWrap -value 0 -command {::ntext::wrapIndent .rhf.new}
label  .cp.tog.l -anchor e -bg $col -text "Switch indentation on/off: " -pady 2p
pack .cp.tog.off .cp.tog.on .cp.tog.l -side right -pady 2p
pack configure .cp.tog.l -fill x -expand 1

label  .cp.grd.l1 -anchor center -bg $col -text "Click a button to use the value in the adjacent box:"
grid .cp.grd.l1 -sticky ew -padx 4p -pady 4p -columnspan 2


button .cp.grd.b1 -bg $col -highlightbackground $col -text "Color used for indentation" -command changeColor
entry  .cp.grd.e1 -width 8 -bg white
grid .cp.grd.b1 .cp.grd.e1 -sticky w -padx 4p -pady 4p
grid configure .cp.grd.b1 -sticky ew
bind .cp.grd.e1 <Return> changeColor
.cp.grd.e1 insert end $::ntext::indentColor

set ::tabs 8
button .cp.grd.b2 -bg $col -highlightbackground $col -text "Tab spacing (in characters)" -command changeTabs
entry  .cp.grd.e2 -width 3 -bg white
grid .cp.grd.b2 .cp.grd.e2 -sticky w -padx 4p -pady 4p
grid configure .cp.grd.b2 -sticky ew
bind .cp.grd.e2 <Return> changeTabs
.cp.grd.e2 insert end $::tabs
# Value is adjusted at the end of the script.

button .cp.grd.b3 -bg $col -highlightbackground $col -text "Color of tabs in unselected text" -command changeTabColor
entry  .cp.grd.e3 -width 8 -bg white
grid .cp.grd.b3 .cp.grd.e3 -sticky w -padx 4p -pady 4p
grid configure .cp.grd.b3 -sticky ew
bind .cp.grd.e3 <Return> changeTabColor
.cp.grd.e3 insert end $::ntext::tabColor

button .cp.grd.b4 -bg $col -highlightbackground $col -text "Color of tabs in selected text" -command changeTabSelColor
entry  .cp.grd.e4 -width 8 -bg white
grid .cp.grd.b4 .cp.grd.e4 -sticky w -padx 4p -pady 4p
grid configure .cp.grd.b4 -sticky ew
bind .cp.grd.e4 <Return> changeTabSelColor
.cp.grd.e4 insert end $::ntext::tabSelColor

proc changeColor {} {
    set col [string trim [.cp.grd.e1 get]]
    if {($col eq {}) || (![catch {winfo rgb .rhf.new $col}])} {
        ### (6) Ensure future tags will use the new color:
        set ::ntext::indentColor $col

        ### (7) Update existing tags to use the new color:
        ::ntext::syncIndentColor .rhf.new
    } else {
        .cp.grd.e1 delete 0 end
        .cp.grd.e1 insert end $::ntext::indentColor
    }
    return
}
proc changeTabs {} {
    set nTabs [string trim [.cp.grd.e2 get]]
    if {[string is integer -strict $nTabs] && ($nTabs > 0)} {
        set font [.rhf.new cget -font]
        .rhf.new configure -tabs "[expr {$nTabs * [font measure $font 0]}] left"
        set ::tabs $nTabs
        ### (8) Changing the tabs may change the indentation of the first
        ###     display line of a logical line; if so, the indentation of the
        ###     other display lines must be recalculated:
        ::ntext::wrapIndent .rhf.new
    } else {
        .cp.grd.e2 delete 0 end
        .cp.grd.e2 insert end $::tabs
    }
    return
}
proc changeTabColor {} {
    set col [string trim [.cp.grd.e3 get]]
    if {($col eq {}) || (![catch {winfo rgb .rhf.new $col}])} {
        ### Ensure future tabs will use the new color:
        set ::ntext::tabColor $col

        ### Update existing tabs to use the new color:
        ::ntext::syncTabColor .rhf.new
    } else {
        .cp.grd.e3 delete 0 end
        .cp.grd.e3 insert end $::ntext::tabColor
    }
    return
}
proc changeTabSelColor {} {
    set col [string trim [.cp.grd.e4 get]]
    if {($col eq {}) || (![catch {winfo rgb .rhf.new $col}])} {
        ### Ensure future tabs will use the new color:
        set ::ntext::tabSelColor $col

        ### Update existing tabs to use the new color:
        ::ntext::syncTabColor .rhf.new
    } else {
        .cp.grd.e4 delete 0 end
        .cp.grd.e4 insert end $::ntext::tabSelColor
    }
    return
}

# Change tab spacing from the text widget's default value 8.
.cp.grd.e2 delete 0 end
.cp.grd.e2 insert end 4
changeTabs
