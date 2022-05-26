#==============================================================================
# Populates the content frame of the iwidgets::scrolledframe widget created in
# the demo script ScrolledFrmDemo2.tcl.
#
# Copyright (c) 2019-2020  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Add some entries to the Tk option database
#
tablelist::setThemeDefaults
if {$ttk::currentTheme eq "aqua"} {
    option add *Listbox.selectBackground \
	       $tablelist::themeDefaults(-selectbackground)
    option add *Listbox.selectForeground \
	       $tablelist::themeDefaults(-selectforeground)
}
option add *selectBorderWidth  $tablelist::themeDefaults(-selectborderwidth)

#
# Create some widgets in the content frame
#

#
# A scrolled text widget with old-school mouse wheel support
#
set row 0
set l [ttk::label $cf.l$row -text \
       "Contents of the Tablelist distribution file \"CHANGES.txt\":"]
grid $l -row $row -column 0 -columnspan 3 -sticky w -padx 10 -pady {10 0}
incr row
set sa [scrollutil::scrollarea $cf.sa$row]
set txt [text $sa.txt -font TkFixedFont -width 73]
scrollutil::addMouseWheelSupport $txt
$sa setwidget $txt
grid $sa -row $row -column 0 -columnspan 3 -sticky w -padx 10 -pady {5 0}

#
# A scrolled listbox widget
#
incr row
set l [ttk::label $cf.l$row -text "Tablelist releases:"]
grid $l -row $row -column 0 -sticky w -padx {10 0} -pady {10 0}
incr row
set sa [scrollutil::scrollarea $cf.sa$row]
set lb [listbox $sa.lb -width 0]
$sa setwidget $lb
grid $sa -row $row -rowspan 6 -column 0 -sticky w -padx {10 0} -pady {5 0}

#
# A ttk::combobox widget
#
set l [ttk::label $cf.l$row -text "Release:"]
grid $l -row $row -column 1 -sticky w -padx {10 0} -pady {5 0}
set cb [ttk::combobox $cf.cb -state readonly -width 14]
grid $cb -row $row -column 2 -sticky w -padx {5 10} -pady {5 0}

#
# A ttk::spinbox widget
#
incr row
set l [ttk::label $cf.l$row -text "Changes:"]
grid $l -row $row -column 1 -sticky w -padx {10 0} -pady {10 0}
set sb [ttk::spinbox $cf.sb -from 0 -to 20 -state readonly -width 4]
grid $sb -row $row -column 2 -sticky w -padx {5 10} -pady {10 0}

#
# A ttk::entry widget
#
incr row
set l [ttk::label $cf.l$row -text "Comment:"]
grid $l -row $row -column 1 -sticky w -padx {10 0} -pady {10 0}
set e [ttk::entry $cf.e -width 32]
grid $e -row $row -column 2 -sticky w -padx {5 10} -pady {10 0}

#
# A ttk::separator widget
#
incr row
set sep [ttk::separator $cf.sep]
grid $sep -row $row -column 1 -columnspan 2 -sticky we -padx 10 -pady {10 0}

#
# A mentry widget of type "Date"
#
incr row
set l [ttk::label $cf.l$row -text "Date of first release:"]
grid $l -row $row -column 1 -sticky w -padx {10 0} -pady {10 0}
set me [mentry::dateMentry $cf.me Ymd -]
grid $me -row $row -column 2 -sticky w -padx {5 10} -pady {10 0}

incr row
grid rowconfigure $cf $row -weight 1

#
# A scrolled tablelist widget
#
incr row
set l [ttk::label $cf.l$row -text \
       "Tablelist release statistics, displayed in a tablelist widget:"]
grid $l -row $row -column 0 -columnspan 3 -sticky w -padx 10 -pady {10 0}
incr row
set sa [scrollutil::scrollarea $cf.sa$row]
set tbl [tablelist::tablelist $sa.tbl \
	 -columns {0 "Release" left  0 "Changes" right  0 "Comment" left} \
	 -height 16 -width 0 -showseparators yes -stripebackground #f0f0f0 \
	 -incrarrowtype down -labelcommand tablelist::sortByColumn]
if {[$tbl cget -selectborderwidth] == 0} {
    $tbl configure -spacing 1
}
$tbl columnconfigure 0 -name release -sortmode dictionary
$tbl columnconfigure 1 -name changes -sortmode integer
$tbl columnconfigure 2 -name comment
$sa setwidget $tbl
grid $sa -row $row -column 0 -columnspan 3 -sticky w -padx 10 -pady {5 0}

#
# A scrolled ttk::treeview widget
#
incr row
set l [ttk::label $cf.l$row -text \
       "Tablelist release statistics, displayed in a ttk::treeview widget:"]
grid $l -row $row -column 0 -columnspan 3 -sticky w -padx 10 -pady {10 0}
incr row
set sa [scrollutil::scrollarea $cf.sa$row -borderwidth 0]
set tv [ttk::treeview $sa.tv -columns {release changes comment} \
	-show headings -height 16 -selectmode browse]
if {$ttk::currentTheme eq "aqua" &&
    [package vcompare $::tk_patchLevel "8.6.10"] >= 0} {
    $sa configure -borderwidth 1  ;# because in this case $tv has a flat relief
}
$tv heading release -text " Release" -anchor w
$tv heading changes -text "Changes " -anchor e
$tv heading comment -text " Comment" -anchor w
$tv column release -anchor w
$tv column changes -anchor e
$tv column comment -anchor w
$sa setwidget $tv
grid $sa -row $row -column 0 -columnspan 3 -sticky w -padx 10 -pady {5 10}

grid columnconfigure $cf 2 -weight 1

#
# Populate the widgets
#

set chan [open [file join $tablelist::library "CHANGES.txt"]]
set content [read -nonewline $chan]
close $chan
$txt insert end $content

#
# Make the text widget readonly
#
$txt configure -insertwidth 0
wcb::callback $txt before insert cancelEdit
wcb::callback $txt before delete cancelEdit

set lineList [split $content "\n"]
set totalChanges 0
set lineIdx 0
set latest true
foreach line $lineList {
    if {[string match "What *" $line]} {
	if {$lineIdx != 0} {
	    if {$changes == 0} {
		set changes 1
	    }
	    switch $version {
		6.0 { set comment "Added support for header items" }
		5.0 { set comment "Added support for tree functionality" }
		4.0 { set comment "Added support for the tile engine" }
		3.0 { set comment "Added support for interactive cell editing" }
		2.0 { set comment "Added support for embedded images" }
		default {
		    if {$latest} {
			set comment "Latest release"
			set latest false
		    } else {
			set comment ""
		    }
		}
	    }
	    set item [list "Tablelist $version" $changes $comment]
	    $tbl insert end $item
	    $tv insert {} end -values $item
	    incr totalChanges $changes
	}

	set idx [string last " " $line]
	set version [string range $line [incr idx] end-1]
	$lb insert end "Tablelist $version"

	set changes 0
    } elseif {[string match {[1-9]*} $line]} {
	incr changes
    }

    incr lineIdx
}

if {$changes == 0} {
    set changes 1
}
set comment ""
set item [list "Tablelist $version" $changes $comment]
$tbl insert end $item
$tv insert {} end -values $item
incr totalChanges $changes

$lb insert end "Tablelist 0.8"
set item [list "Tablelist 0.8" 0 "First release, on 2000-10-27"]
$tbl insert end $item
$tv insert {} end -values $item

$tbl header insert 0 \
	    [list "All [$tbl size] releases" $totalChanges "Total number"]
$tbl header rowconfigure 0 -foreground blue

$cb configure -values [$lb get 0 end]
$cb current 0

$sb set [$tbl getcells 0,changes]
$e insert 0 [$tbl getcells 0,comment]
$me put 0 2000 10 27

#
# Make the columns of the treeview as wide as those of the tablelist
#
foreach colId [$tv cget -columns] {
    $tv column $colId -width [$tbl columnwidth $colId -total]
}

pack $sf -expand yes -fill both -padx 10 -pady 10

#
# Set the scrolledframe's width, height, and yscrollincrement
#
update idletasks
set vsb [$sf component vertsb]
set width  [expr {[winfo reqwidth $cf] + [winfo reqwidth $vsb] + 2}]
set height [expr {[winfo reqheight $cf.l0] + [winfo reqheight $cf.sa1] + 27}]
$sf configure -width $width -height $height
$canvas configure -yscrollincrement [expr {[winfo reqheight $lb] / 10}]
after 200 [list $sf configure -hscrollmode dynamic]

#
# Create two ttk::button widgets within a frame outside the scrolledframe
#
set bf [ttk::frame .bf]
set b1 [ttk::button $bf.b1 -text "Configure Tablelist Widget" \
        -command configTablelist]
set b2 [ttk::button $bf.b2 -text "Close" -command exit]
pack $b2 -side right -padx 10 -pady {0 10}
pack $b1 -side left -padx 10 -pady {0 10}

pack $bf -side bottom -fill x
pack $tf -side top -expand yes -fill both

#------------------------------------------------------------------------------

proc cancelEdit {w args} {
    wcb::cancel
}

#------------------------------------------------------------------------------

proc configTablelist {} {
    set top .top
    if {[winfo exists $top]} {
	raise $top
	focus $top
	return ""
    }

    toplevel $top
    wm title $top "Tablelist Widget Configuration"

    #
    # Create a scrolledframe
    #
    set f  [ttk::frame $top.f]
    set sf [iwidgets::scrolledframe $f.sf -borderwidth 1 -relief sunken \
	    -scrollmargin 0 -hscrollmode none]

    #
    # Unfortunately, the iwidgets::scrolledframe widget has no built-in
    # equivalent of the BWidget ScrollableFrame option -constrainedwidth:
    #
    set canvas [$sf component canvas]
    bind $canvas <Configure> {
	%W itemconfigure frameTag -width %w
    }
    $canvas configure -background $::bg

    #
    # Register the scrolledframe for scrolling by the mouse wheel event
    # bindings created by the scrollutil::createWheelEventBindings command
    #
    scrollutil::enableScrollingByWheel $sf

    #
    # Get the content frame
    #
    set cf [$sf childsite]
    $cf configure -background $::bg

    #
    # Create some widgets in the content frame, corresponding
    # to the configuration options of the tablelist widget
    #
    global tbl
    set row 0
    foreach configSet [$tbl configure] {
	if {[llength $configSet] != 5} {
	    continue
	}

	set opt [lindex $configSet 0]
	set w [ttk::label $cf.l$row -text $opt]
	grid $w -row $row -column 0 -sticky w -padx {5 0} -pady {5 0}

	set w $cf.w$row
	switch -- $opt {
	    -activestyle -
	    -arrowstyle -
	    -incrarrowtype -
	    -labelrelief -
	    -relief -
	    -selectmode -
	    -selecttype -
	    -state -
	    -treestyle {
		ttk::combobox $w -state readonly -width 12

		switch -- $opt {
		    -activestyle { set values {frame none underline} }
		    -arrowstyle {
			set values {flat5x3 flat5x4 flat6x4 flat7x4 flat7x5
			    flat7x7 flat8x4 flat8x5 flat9x5 flat9x6 flat11x6
			    flat15x8 flatAngle7x4 flatAngle7x5 flatAngle9x5
			    flatAngle9x6 flatAngle9x7 flatAngle10x6
			    flatAngle10x7 flatAngle11x6 flatAngle15x8 photo7x4
			    photo7x7 photo9x5 photo11x6 photo15x8 sunken8x7
			    sunken10x9 sunken12x11}
		    }
		    -incrarrowtype { set values {up down} }
		    -labelrelief -
		    -relief {
			set values {flat groove raised ridge solid sunken}
		    }
		    -selectmode {
			set values {single browse multiple extended}
		    }
		    -selecttype { set values {row cell} }
		    -state { set values {disabled normal} }
		    -treestyle {
			set values {adwaita ambiance aqua arc baghira bicolor1
			bicolor2 bicolor3 bicolor4 blueMenta classic1 classic2
			classic3 classic4 dust dustSand gtk klearlooks mate
			menta mint mint2 newWave oxygen1 oxygen2 phase plain1
			plain2 plain3 plain4 plastik plastique radiance ubuntu
			ubuntu2 ubuntu3 ubuntuMate vistaAero vistaClassic
			win7Aero win7Classic win10 winnative winxpBlue
			winxpOlive winxpSilver yuyo}
		    }
		}

		$w configure -values $values
		$w set [$tbl cget $opt]
		bind $w <<ComboboxSelected>> [list applyValue %W $opt]
		grid $w -row $row -column 1 -sticky w -padx 5 -pady {5 0}

		#
		# Adapt the handling of the mouse wheel
		# events for the ttk::combobox widget
		#
		scrollutil::adaptWheelEventHandling $w
	    }

	    -autofinishediting -
	    -autoscan -
	    -customdragsource -
	    -displayondemand -
	    -editselectedonly -
	    -exportselection -
	    -forceeditendcommand -
	    -fullseparators -
	    -instanttoggle -
	    -movablecolumns -
	    -movablerows -
	    -protecttitlecolumns -
	    -resizablecolumns -
	    -setfocus -
	    -setgrid -
	    -showarrow -
	    -showbusycursor -
	    -showeditcursor -
	    -showhorizseparator -
	    -showlabels -
	    -showseparators -
	    -tight {
		ttk::checkbutton $w -command [list applyBoolean $w $opt]
		global $w
		set $w [$tbl cget $opt]
		$w configure -text [expr {[set $w] ? "true": "false"}]
		grid $w -row $row -column 1 -sticky w -padx 5 -pady {5 0}
	    }

	    -borderwidth -
	    -height -
	    -highlightthickness -
	    -labelborderwidth -
	    -labelheight -
	    -labelpady -
	    -selectborderwidth -
	    -spacing -
	    -stripeheight -
	    -titlecolumns -
	    -treecolumn -
	    -width {
		ttk::spinbox $w -from 0 -to 999 -width 4 -command \
		    [list applyValue $w $opt]
		$w set [$tbl cget $opt]
		$w configure -invalidcommand bell -validate key \
		    -validatecommand \
		    {expr {[string length %P] <= 3 && [regexp {^[0-9]*$} %S]}}
		foreach event {<Return> <KP_Enter> <FocusOut>} {
		    bind $w $event [list applyValue %W $opt]
		}
		grid $w -row $row -column 1 -sticky w -padx 5 -pady {5 0}

		#
		# Adapt the handling of the mouse wheel
		# events for the ttk::spinbox widget
		#
		scrollutil::adaptWheelEventHandling $w
	    }

	    default {
		ttk::entry $w -width 20
		$w insert 0 [$tbl cget $opt]
		foreach event {<Return> <KP_Enter> <FocusOut>} {
		    bind $w $event [list applyValue %W $opt]
		}
		grid $w -row $row -column 1 -sticky we -padx 5 -pady {5 0}
	    }
	}

	incr row
    }

    grid rowconfigure    $cf all -uniform AllRows
    grid columnconfigure $cf 1   -weight 1

    #
    # Set the scrolledframe's width, height, and yscrollincrement
    #
    update idletasks
    set vsb [$sf component vertsb]
    set width [expr {[winfo reqwidth $cf] + [winfo reqwidth $vsb] + 2}]
    set rowHeight [expr {[winfo reqheight $cf] / $row}]
    $sf configure -width $width -height [expr {10*$rowHeight + 7}]
    $canvas configure -yscrollincrement $rowHeight

    #
    # Create a ttk::button widget outside the scrolledframe
    #
    set b [ttk::button $f.b -text "Close" -command [list destroy $top]]

    pack $b  -side bottom -pady {0 10}
    pack $sf -side top -expand yes -fill both -padx 10 -pady 10
    pack $f  -expand yes -fill both
}

#------------------------------------------------------------------------------

proc applyValue {w opt} {
    global tbl
    if {[catch {$tbl configure $opt [$w get]} result] != 0} {
	bell
	tk_messageBox -title "Error" -icon error -message $result \
	    -parent [winfo toplevel $w]
	### $w set [$tbl cget $opt]		;# not supported by ttk::entry
	$w delete 0 end
	$w insert 0 [$tbl cget $opt]
    }
}

#------------------------------------------------------------------------------

proc applyBoolean {w opt} {
    global tbl $w
    set val [set $w]
    $tbl configure $opt $val
    $w configure -text [expr {$val ? "true" : "false"}]
}
