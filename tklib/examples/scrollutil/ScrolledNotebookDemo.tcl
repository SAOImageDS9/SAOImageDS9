#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the use of the scrollutil::scrollednotebook widget.  Uses an
# image based on the icon
#
#   https://icons8.com/icon/mEF_vyjYlnE3/file
#
# Copyright (c) 2021-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require scrollutil_tile
set dir [file dirname [info script]]
source [file join $dir styleUtil.tcl]

wm title . "Ttk Library Scripts"

scrollutil::addclosetab My.TNotebook

#
# Create an image corresponding to the display's DPI scaling level
#
if {$tk_version >= 8.7 || [catch {package require tksvg}] == 0} {
    set fmt $scrollutil::svgfmt
    image create photo fileImg -file [file join $dir file.svg] -format $fmt
} else {
    set pct $scrollutil::scalingpct
    image create photo fileImg -file [file join $dir file$pct.gif] -format gif
}

#
# Create a scrollednotebook widget having closable (and, per default,
# movable) tabs and populate it with panes that contain scrolled
# text widgets displaying the contents of the Ttk library files
#
set f  [ttk::frame .f]
set nb [scrollutil::scrollednotebook $f.nb -style My.TNotebook \
	-forgetcommand condCopySel -leavecommand saveSel]
set currentTheme [styleutil::getCurrentTheme]
set panePadding [expr {$currentTheme eq "aqua" ? 0 : "7p"}]
cd [expr {[info exists ttk::library] ? $ttk::library : $tile::library}]
##nagelfar ignore
foreach fileName [lsort [glob *.tcl]] {
    set baseName [string range $fileName 0 end-4]
    set sa [scrollutil::scrollarea $nb.sa_$baseName -lockinterval 10]
    if {$currentTheme eq "vista"} {
	$sa configure -relief solid
    }
    set txt [text $sa.txt -font TkFixedFont -takefocus 1 -wrap none]
    catch {$txt configure -tabstyle wordprocessor}	;# for Tk 8.5 and later
    scrollutil::addMouseWheelSupport $txt	;# old-school wheel support
    $sa setwidget $txt

    set chan [open $fileName]
    $txt insert end [read -nonewline $chan]
    close $chan
    $txt configure -state disabled
    bind $txt <Button-1> { focus %W }	;# for Tk versions < 8.6.11/8.7a4

    $nb add $sa -text $fileName -image fileImg -compound left \
		-padding $panePadding
}

proc condCopySel {nb widget} {
    set txt $widget.txt
    if {[llength [$txt tag nextrange sel 1.0 end]] == 0} {
	return 1
    }

    set btn [tk_messageBox -title "Copy Selection?" -icon question \
	     -message "Do you want to copy the selection to the clipboard?" \
	     -type yesnocancel]
    switch $btn {
	yes	{ tk_textCopy $txt; return 1 }
	no	{ return 1 }
	cancel	{ return 0 }
    }
}

proc saveSel {nb widget} {
    set selRange [$widget.txt tag nextrange sel 1.0 end]
    if {[llength $selRange] == 0} {
	$nb unsettabattrib $widget "selRange"
    } else {
	$nb tabattrib $widget "selRange" $selRange
    }

    return 1
}

#
# Create bindings for moving and closing the tabs interactively,
# as well as for the virtual event <<NotebookTabChanged>>
#
bind $nb <<MenuItemsRequested>> { populateMenu %W %d }
bind $nb <<NotebookTabChanged>> { restoreSel %W }

proc populateMenu {nb data} {
    foreach {menu tabIdx} $data {}
    set tabCount [$nb index end]
    set prevIdx [expr {($tabIdx - 1) % $tabCount}]
    set nextIdx [expr {($tabIdx + 1) % $tabCount}]
    set widget [lindex [$nb tabs] $tabIdx]

    $menu add command -label "Move Tab Left"  -command \
	[list $nb insert $prevIdx $widget]
    $menu add command -label "Move Tab Right" -command \
	[list $nb insert $nextIdx $widget]
    $menu add separator
    $menu add command -label "Close Tab" -command \
	[list $nb forget $tabIdx]
}

proc restoreSel nb {
    set widget [$nb select]
    if {$widget ne "" && [$nb hastabattrib $widget "selRange"]} {
	set txt $widget.txt
	$txt tag remove sel 1.0 end
	$txt tag add sel {*}[$nb tabattrib $widget "selRange"]
    }
}

#
# Create a ttk::button widget
#
set b [ttk::button $f.b -text "Close" -command exit]

pack $b  -side bottom -pady {0 7p}
pack $nb -side top -expand yes -fill both -padx 7p -pady 7p
pack $f  -expand yes -fill both

#
# Set the scrollednotebook's -height and -width options to the
# maximum requested height and width of all panes, respectively
#
after 150 [list resizeNb $nb]

proc resizeNb nb {
    update idletasks	;# makes sure that the vertical scrollbars are mapped
    $nb adjustsize
}
