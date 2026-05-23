#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the use of the scrollutil::pagesman widget having
# scrollutil::plainnotebook widgets as pages.  Uses images based on the
# following icons:
#
#   https://icons8.com/icon/mEF_vyjYlnE3/file
#   https://icons8.com/icon/JXYalxb9XWWd/folder
#
# Copyright (c) 2021-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require scrollutil_tile
set dir [file dirname [info script]]
source [file join $dir styleUtil.tcl]

wm title . "Tk Library Files"

#
# Create two images corresponding to the display's DPI scaling level
#
if {$tk_version >= 8.7 || [catch {package require tksvg}] == 0} {
    set fmt $scrollutil::svgfmt
    image create photo fileImg   -file [file join $dir file.svg]   -format $fmt
    image create photo folderImg -file [file join $dir folder.svg] -format $fmt
} else {
    set pct $scrollutil::scalingpct
    image create photo fileImg   -file [file join $dir file$pct.gif] \
	-format gif
    image create photo folderImg -file [file join $dir folder$pct.gif] \
	-format gif
}

#
# Populates a given plainnotebook widget with panes that display the contents
# of the files of the specified suffix within the current working directory
#
proc populateNotebook {nb sfx} {
    set currentTheme [styleutil::getCurrentTheme]
    set panePadding [expr {$currentTheme eq "aqua" ? 0 : "7p"}]
    ##nagelfar ignore
    foreach fileName [lsort -dictionary [glob *.$sfx]] {
	set baseName [string range $fileName 0 end-4]
	set sa [scrollutil::scrollarea $nb.sa_$baseName]
	if {$sfx eq "gif"} {
	    set canv [canvas $sa.canv -background #c0c0c0]
	    set img [image create photo -file $fileName -format gif]
	    $canv create image 15p 15p -anchor nw -image $img
	    bind $canv <Configure> [list setScrollRegion %W %w %h $img]
	    scrollutil::addMouseWheelSupport $canv
	    $sa setwidget $canv
	} else {
	    $sa configure -lockinterval 10
	    if {$currentTheme eq "vista"} {
		$sa configure -relief solid
	    }
	    set txt [text $sa.txt -font TkFixedFont -height 30 -takefocus 1 \
		     -wrap none]
	    catch {$txt configure -tabstyle wordprocessor}	;# for Tk 8.5+
	    scrollutil::addMouseWheelSupport $txt   ;# old-school wheel support
	    $sa setwidget $txt

	    set chan [open $fileName]
	    $txt insert end [read -nonewline $chan]
	    close $chan
	    $txt configure -state disabled
	    bind $txt <Button-1> { focus %W } ;# for Tk versions < 8.6.11/8.7a4
	}
	$nb add $sa -text $fileName -image fileImg -compound left \
		    -padding $panePadding
    }
}

#
# Create a pagesman widget
#
set f [ttk::frame .f]
set pm [scrollutil::pagesman $f.pm -leavecommand pmLeaveCmd]

#
# Add option database entries for the -closabletabs,
# -forgetcommand, and -leavecommand plainnotebook options
#
option add *Plainnotebook.closableTabs	1
option add *Plainnotebook.forgetCommand	condCopySel
option add *Plainnotebook.leaveCommand	saveSel

#
# Create a plainnotebook child displaying the contents of the Tk library files
#
set nbTk [scrollutil::plainnotebook $pm.nbTk]
$pm add $nbTk
$nbTk addbutton 1 "Image Files"	     folderImg
$nbTk addbutton 2 "Message Catalogs" folderImg
$nbTk addbutton 3 "Ttk Scripts"	     folderImg
$nbTk addseparator
$nbTk addlabel "Tk Scripts"
cd $tk_library
populateNotebook $nbTk "tcl"

#
# Create a plainnotebook child displaying the images for the Tcl (Powered) Logo
#
set nbImgs [scrollutil::plainnotebook $pm.nbImgs -caller 0 -title "Image Files"]
$pm add $nbImgs
cd $tk_library/images
populateNotebook $nbImgs "gif"

#
# Create a plainnotebook child displaying the contents of the message catalogs
#
set nbMsgs [scrollutil::plainnotebook $pm.nbMsgs -caller 0 -title \
	    "Message\nCatalogs"]
$pm add $nbMsgs
cd $tk_library/msgs
populateNotebook $nbMsgs "msg"

#
# Create a plainnotebook child displaying the contents of the Ttk library files
#
set nbTtk [scrollutil::plainnotebook $pm.nbTtk -caller 0 -title "Ttk Scripts"]
$pm add $nbTtk
### cd $tk_library/ttk		;# works for Tk versions 8.5a5 and later only
cd [expr {[info exists ttk::library] ? $ttk::library : $tile::library}]
populateNotebook $nbTtk "tcl"

proc setScrollRegion {canv canvWidth canvHeight img} {
    #
    # Use a margin of 15p around the image
    #
    set pixels [expr {30 * [tk scaling]}]
    set rightX [expr {[image width  $img] + $pixels}]
    set lowerY [expr {[image height $img] + $pixels}]
    if {$rightX < $canvWidth}  { set rightX $canvWidth }
    if {$lowerY < $canvHeight} { set lowerY $canvHeight }
    $canv configure -scrollregion [list 0 0 $rightX $lowerY]
}

proc pmLeaveCmd {pm nb} {
    set widget [$nb select]
    if {$widget eq ""} {
	return 1
    } else {
	return [saveSel $nb $widget]
    }
}

proc condCopySel {nb widget} {
    global nbImgs
    if {$nb eq $nbImgs || [winfo class $widget] ne "Scrollarea"} {
	return 1
    }

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
    global nbImgs
    if {$nb eq $nbImgs || [winfo class $widget] ne "Scrollarea"} {
	return 1
    }

    set selRange [$widget.txt tag nextrange sel 1.0 end]
    if {[llength $selRange] == 0} {
	$nb unsettabattrib $widget "selRange"
    } else {
	$nb tabattrib $widget "selRange" $selRange
    }

    return 1
}

#
# For each plainnotebook create bindings for moving and closing its tabs
# interactively, as well as for the virtual event <<NotebookTabChanged>>
#
foreach nb [$pm pages] {
    bind $nb <<MenuItemsRequested>> { populateMenu %W %d }
    bind $nb <<NotebookTabChanged>> { restoreSel %W }
}

proc populateMenu {nb data} {
    foreach {menu tabIdx} $data {}
    set tabCount [$nb index end]
    set prevIdx [expr {($tabIdx - 1) % $tabCount}]
    set nextIdx [expr {($tabIdx + 1) % $tabCount}]
    set widget [lindex [$nb tabs] $tabIdx]

    $menu add command -label "Move Tab Up"   -command \
	[list $nb insert $prevIdx $widget]
    $menu add command -label "Move Tab Down" -command \
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
pack $pm -side top -expand yes -fill both -padx 7p -pady 7p
pack $f  -expand yes -fill both
