#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the use of embedded windows in tablelist widgets.
#
# Copyright (c) 2004-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require tablelist_tile

wm title . "Tile Library Scripts"

#
# Add some entries to the Tk option database
#
set dir [file dirname [info script]]
source [file join $dir option_tile.tcl]

#
# Create the font TkFixedFont if not yet present
#
catch {font create TkFixedFont -family Courier -size 9}

#
# Create an image corresponding to the display's DPI scaling
# level, to be displayed in buttons embedded in a tablelist widget
#
if {$tk_version >= 8.7 || [catch {package require tksvg}] == 0} {
    set fmt $tablelist::svgfmt
    image create photo viewImg -file [file join $dir view.svg] -format $fmt
} else {
    set pct $tablelist::scalingpct
    image create photo viewImg -file [file join $dir view$pct.gif] -format gif
}

if {$currentTheme ne "aqua"} {
    #
    # Make the embedded buttons as small as possible.  Recall that in most
    # themes, the tile buttons consist of the following element hierarchy:
    #
    # Button.border
    #     Button.focus	      (one of its options is -focusthickness)
    #         Button.padding  (two of its options are -padding and -shiftrelief)
    #             Button.label
    #
    if {[info commands "::ttk::style"] ne ""} {
	interp alias {} styleConfig {} ttk::style configure
    } elseif {[string compare $tile::version "0.7"] >= 0} {
	interp alias {} styleConfig {} style configure
    } else {
	interp alias {} styleConfig {} style default
    }
    styleConfig Embedded.TButton -focusthickness 0 -padding 0 -shiftrelief 0
}

#
# Create a vertically scrolled tablelist widget with 5
# dynamic-width columns and interactive sort capability
#
set tf .tf
ttk::frame $tf -class ScrollArea
set tbl $tf.tbl
set vsb $tf.vsb
tablelist::tablelist $tbl \
    -columns {0 "File Name" left
	      0 "Bar Chart" center
	      0 "File Size" right
	      0 "View"      center
	      0 "Seen"      center} \
    -setgrid no -yscrollcommand [list $vsb set] -width 0
if {[$tbl cget -selectborderwidth] == 0} {
    $tbl configure -spacing 1
}
$tbl columnconfigure 0 -name fileName
$tbl columnconfigure 1 -formatcommand emptyStr -sortmode integer \
    -stretchwindow yes
$tbl columnconfigure 2 -name fileSize -sortmode integer
$tbl columnconfigure 4 -name seen
ttk::scrollbar $vsb -orient vertical -command [list $tbl yview]

proc emptyStr val { return "" }

#
# Create a bold font
#
set tblFont [$tbl cget -font]
set size [font actual $tblFont -size]
if {$size == 0} {					;# e.g., on Ubuntu
    set size 9
}
eval font create BoldFont [font actual $tblFont] -size $size -weight bold

#
# Populate the tablelist widget
#
if {[info exists ttk::library]} {
    cd $ttk::library
} else {
    cd $tile::library
}
set totalSize 0
set maxSize 0
##nagelfar ignore
foreach fileName [lsort [glob *.tcl]] {
    set fileSize [file size $fileName]
    $tbl insert end [list $fileName $fileSize $fileSize "" no]

    incr totalSize $fileSize
    if {$fileSize > $maxSize} {
	set maxSize $fileSize
    }
}
if {$tk_version >= 8.5} {
    $tbl header insert 0 [list "[$tbl size] *.tcl files" "" $totalSize "" ""]
    $tbl header rowconfigure 0 -foreground blue

    if {$currentTheme eq "awdark" || $currentTheme eq "awbreezedark" ||
	$currentTheme eq "black" || $currentTheme eq "breeze-dark" ||
	$currentTheme eq "sun-valley-dark"} {
	$tbl header rowconfigure 0 -foreground SkyBlue
    } elseif {$currentTheme eq "aqua" &&
	[package vcompare $tk_patchLevel "8.6.10"] >= 0} {
	if {[tk::unsupported::MacWindowStyle isdark .]} {
	    $tbl header rowconfigure 0 -foreground SkyBlue
	}
	bind . <<LightAqua>> { $tbl header rowconfigure 0 -foreground blue }
	bind . <<DarkAqua>>  { $tbl header rowconfigure 0 -foreground SkyBlue }
    }
}

#------------------------------------------------------------------------------
# createFrame
#
# Creates a frame widget w to be embedded into the specified cell of the
# tablelist widget tbl, as well as a child frame representing the size of the
# file whose name is diplayed in the first column of the cell's row.
#------------------------------------------------------------------------------
proc createFrame {tbl row col w} {
    #
    # Create the frame and replace the binding tag "Frame"
    # with "TablelistBody" in the list of its binding tags
    #
    set height [expr {[font metrics $::tblFont -linespace] * 9 / 10}]
    frame $w -width 72p -height $height -background ivory -borderwidth 1 \
	     -relief solid
    bindtags $w [lreplace [bindtags $w] 1 1 TablelistBody]

    #
    # Create the child frame and replace the binding tag "Frame"
    # with "TablelistBody" in the list of its binding tags
    #
    frame $w.f -background red -borderwidth 1 -relief raised
    bindtags $w.f [lreplace [bindtags $w] 1 1 TablelistBody]

    #
    # Manage the child frame
    #
    set fileSize [$tbl cellcget $row,fileSize -text]
    place $w.f -relheight 1.0 -relwidth [expr {double($fileSize) / $::maxSize}]
}

#------------------------------------------------------------------------------
# createButton
#
# Creates a button widget w to be embedded into the specified cell of the
# tablelist widget tbl.
#------------------------------------------------------------------------------
proc createButton {tbl row col w} {
    set key [$tbl getkeys $row]
    ttk::button $w -style Embedded.TButton -image viewImg -takefocus 0 \
		   -command [list viewFile $tbl $key]
}

#------------------------------------------------------------------------------
# viewFile
#
# Displays the content of the file whose name is contained in the row with the
# given key of the tablelist widget tbl.
#------------------------------------------------------------------------------
proc viewFile {tbl key} {
    set top .top$key
    if {[winfo exists $top]} {
	raise $top
	focus $top
	return ""
    }

    toplevel $top
    set fileName [$tbl cellcget k$key,fileName -text]
    wm title $top "File \"$fileName\""

    #
    # Create a vertically scrolled text widget as a grandchild of the toplevel
    #
    set tf $top.tf
    ttk::frame $tf -class ScrollArea
    set txt $tf.txt
    set vsb $tf.vsb
    text $txt -font TkFixedFont -setgrid yes -yscrollcommand [list $vsb set]
    catch {$txt configure -tabstyle wordprocessor}
    global isAwTheme
    if {$isAwTheme} {
	global currentTheme
	ttk::theme::${currentTheme}::setTextColors $txt
    }
    ttk::scrollbar $vsb -orient vertical -command [list $txt yview]

    #
    # Insert the file's content into the text widget
    #
    set chan [open $fileName]
    $txt insert end [read -nonewline $chan]
    close $chan

    set bf $top.bf
    ttk::frame $bf
    set btn [ttk::button $bf.btn -text "Close" -command [list destroy $top]]

    #
    # Manage the widgets
    #
    grid $txt -row 0 -column 0 -sticky news
    grid $vsb -row 0 -column 1 -sticky ns
    grid rowconfigure    $tf 0 -weight 1
    grid columnconfigure $tf 0 -weight 1
    pack $btn -pady 7p
    pack $bf -side bottom -fill x
    pack $tf -side top -expand yes -fill both

    #
    # Mark the file as seen
    #
    $tbl rowconfigure k$key -font BoldFont
    $tbl cellconfigure k$key,seen -text yes
}

#------------------------------------------------------------------------------

#
# Create embedded windows in the columns no. 1 and 3
#
$tbl fillcolumn 1 -window createFrame
$tbl fillcolumn 3 -window createButton

set bf .bf
ttk::frame $bf
set btn [ttk::button $bf.btn -text "Close" -command exit]

#
# Manage the widgets
#
grid $tbl -row 0 -rowspan 2 -column 0 -sticky news
if {[tk windowingsystem] eq "win32"} {
    grid $vsb -row 0 -rowspan 2 -column 1 -sticky ns
} else {
    grid [$tbl cornerpath] -row 0 -column 1 -sticky ew
    grid $vsb		   -row 1 -column 1 -sticky ns
}
grid rowconfigure    $tf 1 -weight 1
grid columnconfigure $tf 0 -weight 1
pack $btn -pady 7p
pack $bf -side bottom -fill x
pack $tf -side top -expand yes -fill both
