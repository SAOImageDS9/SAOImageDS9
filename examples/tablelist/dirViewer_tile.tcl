#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates how to use a tablelist widget for displaying the content of a
# directory.  Uses images based on the following icons:
#
#   https://icons8.com/icon/JXYalxb9XWWd/folder
#   https://icons8.com/icon/RdCT0UIsKOIp/opened-folder
#   https://icons8.com/icon/mEF_vyjYlnE3/file
#
# Copyright (c) 2010-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require tablelist_tile

#
# Add some entries to the Tk option database
#
set dir [file dirname [info script]]
source [file join $dir option_tile.tcl]

#
# Create three images corresponding to the display's DPI scaling level
#
if {$tk_version >= 8.7 || [catch {package require tksvg}] == 0} {
    set pct ""; set sfx "svg"; set fmt $tablelist::svgfmt
} else {
    set pct $tablelist::scalingpct; set sfx "gif"; set fmt "gif"
}
foreach name {clsdFolder openFolder file} {
    set imgFile $name$pct.$sfx		;# e.g., "file.svg" or "file150.gif"
    image create photo ${name}Img -file [file join $dir $imgFile] -format $fmt
}

#------------------------------------------------------------------------------
# displayContents
#
# Displays the content of the directory dir in a tablelist widget.
#------------------------------------------------------------------------------
proc displayContents dir {
    #
    # Create a scrolled tablelist widget with 3 dynamic-
    # width columns and interactive sort capability
    #
    set tf .tf
    ttk::frame $tf -class ScrollArea
    set tbl $tf.tbl
    set vsb $tf.vsb
    set hsb $tf.hsb
    tablelist::tablelist $tbl \
	-columns {0 "Name"	    left
		  0 "Size"	    right
		  0 "Date Modified" left} \
	-height 16 -width 80 -movablecolumns no -setgrid no \
	-showseparators yes -expandcommand expandCmd \
	-xscrollcommand [list $hsb set] -yscrollcommand [list $vsb set]
    if {[$tbl cget -selectborderwidth] == 0} {
	$tbl configure -spacing 1
    }
    $tbl columnconfigure 0 -formatcommand formatString -sortmode dictionary
    $tbl columnconfigure 1 -formatcommand formatSize -sortmode integer
    $tbl columnconfigure 2 -formatcommand formatString
    ttk::scrollbar $vsb -orient vertical   -command [list $tbl yview]
    ttk::scrollbar $hsb -orient horizontal -command [list $tbl xview]

    #
    # On X11 configure the tablelist according
    # to the display's DPI scaling level
    #
    global isAwTheme
    if {[tk windowingsystem] eq "x11" && !$isAwTheme} {
	global currentTheme pct				;# ""|100|125|...|200
	if {$currentTheme eq "black" || $currentTheme eq "breeze-dark" ||
	    $currentTheme eq "sun-valley-dark"} {
	    $tbl configure -treestyle white$pct
	} else {
	    $tbl configure -treestyle bicolor$pct
	}
    }

    bind $tbl <<TablelistYViewChanged>> [list addImages $tbl]

    #
    # Create a pop-up menu with one command entry; bind the script
    # associated with its entry to the <Double-1> event, too
    #
    set menu .menu
    menu $menu -tearoff no
    $menu add command -label "Display Contents" \
		      -command [list putContentsOfSelFolder $tbl]
    if {$isAwTheme} {
	global currentTheme
	ttk::theme::${currentTheme}::setMenuColors $menu
    }
    set bodyTag [$tbl bodytag]
    bind $bodyTag <<Button3>>  [bind TablelistBody <Button-1>]
    bind $bodyTag <<Button3>> +[bind TablelistBody <ButtonRelease-1>]
    bind $bodyTag <<Button3>> +[list postPopupMenu %X %Y]
    bind $bodyTag <Double-1>   [list putContentsOfSelFolder $tbl]

    #
    # Create three buttons within a frame child of the main widget
    #
    set bf .bf
    ttk::frame $bf
    set b1 $bf.b1
    set b2 $bf.b2
    set b3 $bf.b3
    ttk::button $b1 -width 10 -text "Refresh"
    ttk::button $b2 -width 10 -text "Parent"
    ttk::button $b3 -width 10 -text "Close" -command exit

    #
    # Manage the widgets
    #
    grid $tbl -row 0 -rowspan 2 -column 0 -sticky news
    if {[tk windowingsystem] eq "win32"} {
	grid $vsb -row 0 -rowspan 2 -column 1 -sticky ns
    } else {
	grid [$tbl cornerpath] -row 0 -column 1 -sticky ew
	grid $vsb	       -row 1 -column 1 -sticky ns
    }
    grid $hsb -row 2 -column 0 -sticky ew
    grid rowconfigure    $tf 1 -weight 1
    grid columnconfigure $tf 0 -weight 1
    pack $b1 $b2 $b3 -side left -expand yes -pady 7p
    pack $bf -side bottom -fill x
    pack $tf -side top -expand yes -fill both

    #
    # Populate the tablelist with the content of the given directory
    #
    $tbl sortbycolumn 0
    putContents $dir $tbl root
}

#------------------------------------------------------------------------------
# putContents
#
# Outputs the content of the directory dir into the tablelist widget tbl, as
# child items of the one identified by nodeIdx.
#------------------------------------------------------------------------------
proc putContents {dir tbl nodeIdx} {
    #
    # The following check is necessary because this procedure
    # is also invoked by the "Refresh" and "Parent" buttons
    #
    if {$dir ne "" && (![file isdirectory $dir] || ![file readable $dir])} {
	bell
	if {$nodeIdx eq "root"} {
	    set choice [tk_messageBox -title "Error" -icon warning -message \
			"Cannot read directory \"[file nativename $dir]\"\
			-- replacing it with nearest existent ancestor" \
			-type okcancel -default ok]
	    if {$choice eq "ok"} {
		while {![file isdirectory $dir] || ![file readable $dir]} {
		    set dir [file dirname $dir]
		}
	    } else {
		return ""
	    }
	} else {
	    return ""
	}
    }

    if {$nodeIdx eq "root"} {
	if {$dir eq ""} {
	    if {[llength [file volumes]] == 1} {
		wm title . "Contents of the File System"
	    } else {
		wm title . "Contents of the File Systems"
	    }
	} else {
	    wm title . "Contents of the Directory \"[file nativename $dir]\""
	}

	$tbl delete 0 end
	set row 0
    } else {
	set row [expr {$nodeIdx + 1}]
    }

    #
    # Build a list from the data of the subdirectories and
    # files of the directory dir.  Prepend a "D" or "F" to
    # each entry's name and modification date & time, for
    # sorting purposes (it will be removed by formatString).
    #
    set itemList {}
    if {$dir eq ""} {
	foreach volume [file volumes] {
	    lappend itemList [list D[file nativename $volume] -1 D $volume]
	}
    } else {
	foreach entry [glob -nocomplain -types {d f} -directory $dir *] {
	    if {[catch {file mtime $entry} modTime] != 0} {
		continue
	    }

	    if {[file isdirectory $entry]} {
		lappend itemList [list D[file tail $entry] -1 \
		    D[clock format $modTime -format "%Y-%m-%d %H:%M"] $entry]
	    } else {
		lappend itemList [list F[file tail $entry] [file size $entry] \
		    F[clock format $modTime -format "%Y-%m-%d %H:%M"] ""]
	    }
	}
    }

    #
    # Sort the above list and insert it into the tablelist widget
    # tbl as list of children of the row identified by nodeIdx
    #
    set itemList [$tbl applysorting $itemList]
    $tbl insertchildlist $nodeIdx end $itemList

    foreach item $itemList {
	set name [lindex $item end]
	if {$name ne ""} {					;# directory
	    $tbl rowattrib $row pathName $name

	    #
	    # Mark the row as collapsed if the directory is non-empty
	    #
	    if {[file readable $name] && [llength \
		[glob -nocomplain -types {d f} -directory $name *]] != 0} {
		$tbl collapse $row
	    }
	}

	incr row
    }

    if {$nodeIdx eq "root"} {
	#
	# Configure the "Refresh" and "Parent" buttons
	#
	.bf.b1 configure -command [list refreshView $dir $tbl]
	set b2 .bf.b2
	if {$dir eq ""} {
	    $b2 configure -state disabled
	} else {
	    $b2 configure -state normal
	    set p [file dirname $dir]
	    if {$p eq $dir} {
		$b2 configure -command [list putContents "" $tbl root]
	    } else {
		$b2 configure -command [list putContents $p $tbl root]
	    }
	}
    }
}

#------------------------------------------------------------------------------
# formatString
#
# Returns the substring obtained from the specified value by removing its first
# character.
#------------------------------------------------------------------------------
proc formatString val {
    return [string range $val 1 end]
}

#------------------------------------------------------------------------------
# formatSize
#
# Returns an empty string if the specified value is negative and the value
# itself in user-friendly format otherwise.
#------------------------------------------------------------------------------
proc formatSize val {
    if {$val < 0} {
	return ""
    } elseif {$val < 1024} {
	return "$val bytes"
    } elseif {$val < 1048576} {
	return [format "%.1f KB" [expr {$val / 1024.0}]]
    } elseif {$val < 1073741824} {
	return [format "%.1f MB" [expr {$val / 1048576.0}]]
    } else {
	return [format "%.1f GB" [expr {$val / 1073741824.0}]]
    }
}

#------------------------------------------------------------------------------
# expandCmd
#
# Outputs the content of the directory whose leaf name is displayed in the
# first cell of the specified row of the tablelist widget tbl, as child items
# of the one identified by row.
#------------------------------------------------------------------------------
proc expandCmd {tbl row} {
    if {[$tbl childcount $row] == 0} {
	set dir [$tbl rowattrib $row pathName]
	putContents $dir $tbl $row
    }
}

#------------------------------------------------------------------------------
# addImages
#
# Embeds an image into the first cell of each row in the current view.
#------------------------------------------------------------------------------
proc addImages tbl {
    set topRow [$tbl index top]
    set btmRow [$tbl index bottom]
    for {set row $topRow} {$row <= $btmRow} {incr row} {
	if {[$tbl hasrowattrib $row pathName]} {	;# directory item
	    set img [expr {[$tbl isexpanded $row] ?
		    "openFolderImg" : "clsdFolderImg"}]
	} else {					;# file item
	    set img fileImg
	}
	$tbl cellconfigure $row,0 -image $img
    }
}

#------------------------------------------------------------------------------
# putContentsOfSelFolder
#
# Outputs the content of the selected folder into the tablelist widget tbl.
#------------------------------------------------------------------------------
proc putContentsOfSelFolder tbl {
    set row [$tbl curselection]
    if {[$tbl hasrowattrib $row pathName]} {		;# directory item
	set dir [$tbl rowattrib $row pathName]
	if {[file isdirectory $dir] && [file readable $dir]} {
	    if {[llength [glob -nocomplain -types {d f} -directory $dir *]]
		== 0} {
		bell
	    } else {
		putContents $dir $tbl root
	    }
	} else {
	    bell
	    tk_messageBox -title "Error" -icon error -message \
		"Cannot read directory \"[file nativename $dir]\""
	    return ""
	}
    } else {						;# file item
	bell
    }
}

#------------------------------------------------------------------------------
# postPopupMenu
#
# Posts the pop-up menu .menu at the given screen position.  Before posting
# the menu, the procedure enables/disables its only entry, depending upon
# whether the selected item represents a readable directory or not.
#------------------------------------------------------------------------------
proc postPopupMenu {rootX rootY} {
    set tbl .tf.tbl
    set row [$tbl curselection]
    set menu .menu
    if {[$tbl hasrowattrib $row pathName]} {		;# directory item
	set dir [$tbl rowattrib $row pathName]
	if {[file isdirectory $dir] && [file readable $dir]} {
	    if {[llength [glob -nocomplain -types {d f} -directory $dir *]]
		== 0} {
		$menu entryconfigure 0 -state disabled
	    } else {
		$menu entryconfigure 0 -state normal
	    }
	} else {
	    bell
	    tk_messageBox -title "Error" -icon error -message \
		"Cannot read directory \"[file nativename $dir]\""
	    return ""
	}
    } else {						;# file item
	$menu entryconfigure 0 -state disabled
    }

    tk_popup $menu $rootX $rootY
}

#------------------------------------------------------------------------------
# refreshView
#
# Redisplays the content of the directory dir in the tablelist widget tbl and
# restores the expanded states of the folders as well as the vertical view.
#------------------------------------------------------------------------------
proc refreshView {dir tbl} {
    #
    # Save the vertical view and get the path names
    # of the folders displayed in the expanded rows
    #
    set yView [$tbl yview]
    foreach key [$tbl expandedkeys] {
	set pathName [$tbl rowattrib $key pathName]
	set expandedFolders($pathName) 1
    }

    #
    # Redisplay the directory's (possibly changed) content and restore
    # the expanded states of the folders, along with the vertical view
    #
    putContents $dir $tbl root
    restoreExpandedStates $tbl root expandedFolders
    $tbl yview moveto [lindex $yView 0]
}

#------------------------------------------------------------------------------
# restoreExpandedStates
#
# Expands those children of the parent identified by nodeIdx that display
# folders whose path names are the names of the elements of the array specified
# by the last argument.
#------------------------------------------------------------------------------
proc restoreExpandedStates {tbl nodeIdx expandedFoldersName} {
    upvar $expandedFoldersName expandedFolders

    foreach key [$tbl childkeys $nodeIdx] {
	set pathName [$tbl rowattrib $key pathName]
	if {$pathName ne "" && [info exists expandedFolders($pathName)]} {
	    $tbl expand $key -partly
	    restoreExpandedStates $tbl $key expandedFolders
	}
    }
}

displayContents ""
