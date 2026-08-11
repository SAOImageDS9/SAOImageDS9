#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc BookmarksDef {} {
    global ibookmarks
    global current

    set ibookmarks(top) .bookmarks
    set ibookmarks(mb) .bookmarksmb
    set ibookmarks(frame) {}
    unset -nocomplain ibookmarks(update)
    catch {trace remove variable current(frame) write BookmarksFrameTrace}
    trace add variable current(frame) write BookmarksFrameTrace
}

proc BookmarksInitFrame {which} {
    global bookmarks
    set bookmarks($which) {}
    set bookmarks(next,$which) 1
}

proc BookmarksClearFrame {which} {
    global bookmarks
    if {$which != {}} {
	set bookmarks($which) {}
	set bookmarks(next,$which) 1
	UpdateBookmarksDialog
    }
}

proc BookmarksDeleteFrame {which} {
    global bookmarks
    unset -nocomplain bookmarks($which) bookmarks(next,$which)
    UpdateBookmarksDialog
}

proc BookmarkAdd {which {requestedName {}}} {
    global bookmarks current wcs

    if {$which == {} || ![$which has fits]} {
	return
    }
    if {![info exists bookmarks($which)]} {
	BookmarksInitFrame $which
    }

    set system $wcs(system)
    set sky $wcs(sky)
    set format $wcs(skyformat)
    if {$current(mode) == {crosshair}} {
	set coord [$which get crosshair $system $sky $format]
    } else {
	set coord [$which get cursor $system $sky $format]
    }

    set slices [BookmarkGetSlices $which]

    if {$requestedName == {}} {
	if {![info exists bookmarks(next,$which)]} {
	    set bookmarks(next,$which) [expr {[llength $bookmarks($which)] + 1}]
	}
	set name "Bookmark $bookmarks(next,$which)"
	incr bookmarks(next,$which)
    } else {
	set name $requestedName
    }
    lappend bookmarks($which) \
	[list $name $coord $system $sky $format [$which get zoom] \
	     [$which get rotate] [$which get orient] $slices]
    UpdateBookmarksDialog
}

proc BookmarkCurrentAdd {{name {}}} {
    global current
    if {$current(frame) == {}} {
	error "No current frame."
    }
    BookmarkAdd $current(frame) $name
}

proc BookmarkCurrentDelete {number} {
    global bookmarks current
    set index [BookmarkCurrentIndex $number]
    set bookmarks($current(frame)) \
	[lreplace $bookmarks($current(frame)) $index $index]
    UpdateBookmarksDialog
}

proc BookmarkCurrentClear {} {
    global current
    if {$current(frame) == {}} {
	error "No current frame."
    }
    BookmarksClearFrame $current(frame)
}

proc BookmarkCurrentGoto {number} {
    global current
    set index [BookmarkCurrentIndex $number]
    BookmarkRestore $current(frame) $index
    BookmarksSelectRow $current(frame) $index
}

proc BookmarkCurrentSave {filename} {
    global current
    if {$current(frame) == {}} {
	error "No current frame."
    }
    BookmarksSaveFile $current(frame) $filename
}

proc BookmarkCurrentLoad {filename} {
    global current
    if {$current(frame) == {}} {
	error "No current frame."
    }
    BookmarksLoadFile $current(frame) $filename
}

proc BookmarkCurrentIndex {number} {
    global bookmarks current
    if {$current(frame) == {} ||
	![info exists bookmarks($current(frame))]} {
	error "No current frame."
    }
    if {$number < 1 || $number > [llength $bookmarks($current(frame))]} {
	error "Bookmark number must be from 1 to [llength $bookmarks($current(frame))]."
    }
    return [expr {$number - 1}]
}

proc BookmarkSendCmd {{number {}}} {
    global bookmarks current parse
    if {$current(frame) == {}} {
	error "No current frame."
    }
    if {![info exists bookmarks($current(frame))]} {
	set bookmarks($current(frame)) {}
    }
    if {$number == {}} {
	$parse(proc) $parse(id) "[llength $bookmarks($current(frame))]\n"
	return
    }
    set row [lindex $bookmarks($current(frame)) [BookmarkCurrentIndex $number]]
    set fields {}
    foreach field $row {
	lappend fields [list $field]
    }
    $parse(proc) $parse(id) "[join $fields \t]\n"
}

proc ProcessBookmarkCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    bookmark::YY_FLUSH_BUFFER
    bookmark::yy_scan_string [lrange $var $i end]
    bookmark::yyparse
    incr i [expr {$bookmark::yycnt - 1}]
}

proc ProcessSendBookmarkCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    bookmarksend::YY_FLUSH_BUFFER
    bookmarksend::yy_scan_string $param
    bookmarksend::yyparse
}

proc BookmarkGetSlices {which} {
    switch -- [$which get type] {
	rgb {set command rgb; set channels {red green blue}}
	hsv {set command hsv; set channels {hue saturation value}}
	hls {set command hls; set channels {hue lightness saturation}}
	default {set command {}; set channels {{}}}
    }

    if {$command != {}} {
	set saved [$which get $command channel]
    }
    set result {}
    foreach channel $channels {
	if {$command != {}} {
	    $which $command channel $channel
	}
	set values {}
	if {[$which has fits]} {
	    set naxes [$which get fits naxes]
	    for {set axis 2} {$axis < $naxes} {incr axis} {
		lappend values [$which get fits slice $axis]
	    }
	}
	lappend result [list $channel $values]
    }
    if {$command != {}} {
	$which $command channel $saved
    }
    return $result
}

proc BookmarkSetSlices {which slices} {
    switch -- [$which get type] {
	rgb {set command rgb}
	hsv {set command hsv}
	hls {set command hls}
	default {set command {}}
    }

    if {$command != {}} {
	set saved [$which get $command channel]
    }
    foreach channelSlices $slices {
	lassign $channelSlices channel values
	if {$command != {}} {
	    $which $command channel $channel
	}
	set axis 2
	foreach value $values {
	    $which update fits slice $axis $value
	    incr axis
	}
    }
    if {$command != {}} {
	$which $command channel $saved
    }
}

proc BookmarkRestore {which index} {
    global bookmarks current

    if {$which == {} || [info commands $which] == {} ||
	![info exists bookmarks($which)] ||
	$index < 0 || $index >= [llength $bookmarks($which)]} {
	return
    }

    lassign [lindex $bookmarks($which) $index] \
	name coord system sky format zoom rotate orient slices

    BookmarkSetSlices $which $slices

    switch -- $system {
	image -
	physical -
	amplifier -
	detector {$which pan to $system $coord}
	default {$which pan to $system $sky $coord}
    }
    $which zoom to $zoom
    $which rotate to $rotate
    $which orient $orient

    if {$which == $current(frame)} {
	set current(zoom) [$which get zoom]
	set current(rotate) [$which get rotate]
	set current(orient) [$which get orient]
	UpdatePanZoomDialog
	UpdateCubeDialog
	UpdateZoomMenu
    }
}

proc BookmarksDialog {} {
    global ds9 ibookmarks

    if {[winfo exists $ibookmarks(top)]} {
	raise $ibookmarks(top)
	UpdateBookmarksDialog
	return
    }

    set w $ibookmarks(top)
    set mb $ibookmarks(mb)
    if {[winfo exists $mb]} {
	destroy $mb
    }
    Toplevel $w $mb 7 [msgcat::mc {Bookmarks}] BookmarksDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Open}] \
	-command BookmarksLoadDialog
    $mb.file add command -label [msgcat::mc {Save}] \
	-command BookmarksSaveDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command BookmarksDestroyDialog

    set f [ttk::frame $w.table]
    ttk::scrollbar $f.yscroll -command "$f.tree yview"
    ttk::scrollbar $f.xscroll -orient horizontal -command "$f.tree xview"
    set ibookmarks(tree) [ttk::treeview $f.tree \
	-columns {coordinates wcs zoom rotation orientation slice} \
	-show {tree headings} -selectmode browse \
	-yscrollcommand "$f.yscroll set" \
	-xscrollcommand "$f.xscroll set"]
    foreach {column label width} {
	#0 Name 130 coordinates Coordinates 190 wcs WCS 100 zoom Zoom 75
	rotation Rotation 75 orientation Orientation 85 slice Slice 100
    } {
	$f.tree heading $column -text [msgcat::mc $label]
	$f.tree column $column -width $width
    }
    bind $f.tree <<TreeviewSelect>> BookmarksSelect
    bind $f.tree <Double-1> [list BookmarksEditName %x %y]

    grid $f.tree $f.yscroll -sticky news
    grid $f.xscroll -row 1 -column 0 -sticky ew
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    set b [ttk::frame $w.buttons]
    ttk::button $b.add -text [msgcat::mc {Add}] \
	-command BookmarksAddCurrent
    ttk::button $b.delete -text [msgcat::mc {Delete}] \
	-command BookmarksDeleteSelected
    ttk::button $b.clear -text [msgcat::mc {Clear}] \
	-command BookmarksClearCurrent
    ttk::button $b.close -text [msgcat::mc {Close}] \
	-command BookmarksDestroyDialog
    pack $b.add $b.delete $b.clear $b.close \
	-side left -expand true -padx 4 -pady 4

    pack $f -fill both -expand true -padx 4 -pady 4
    pack $b -fill x
    UpdateBookmarksDialog
}

proc BookmarksAddCurrent {} {
    global current
    if {$current(frame) != {}} {
	BookmarkAdd $current(frame)
    }
}

proc BookmarksClearCurrent {} {
    global current
    if {$current(frame) != {}} {
	BookmarksClearFrame $current(frame)
    }
}

proc BookmarksDestroyDialog {} {
    global ibookmarks
    if {[winfo exists $ibookmarks(top)]} {
	destroy $ibookmarks(top)
    }
    if {[winfo exists $ibookmarks(mb)]} {
	destroy $ibookmarks(mb)
    }
    set ibookmarks(frame) {}
    unset -nocomplain ibookmarks(tree)
    unset -nocomplain ibookmarks(selecting)
}

proc BookmarksFrameTrace {name1 name2 op} {
    global ibookmarks

    if {![info exists ibookmarks(top)] ||
	[info commands winfo] == {} ||
	![winfo exists $ibookmarks(top)] ||
	[info exists ibookmarks(update)]} {
	return
    }

    set ibookmarks(update) [after idle UpdateBookmarksDialog]
}

proc UpdateBookmarksDialog {} {
    global bookmarks current ibookmarks

    unset -nocomplain ibookmarks(update)

    if {![info exists ibookmarks(top)] ||
	![winfo exists $ibookmarks(top)] ||
	![info exists ibookmarks(tree)] ||
	![winfo exists $ibookmarks(tree)]} {
	return
    }

    set tree $ibookmarks(tree)
    set ibookmarks(frame) $current(frame)
    $tree delete [$tree children {}]
    if {$current(frame) == {} ||
	![info exists bookmarks($current(frame))]} {
	return
    }

    set index 0
    foreach row $bookmarks($current(frame)) {
	lassign $row name coord system sky format zoom rotate orient slices
	if {[llength $zoom] == 2 && [lindex $zoom 0] == [lindex $zoom 1]} {
	    set zoom [lindex $zoom 0]
	}
	set ww $system
	if {[string match wcs* $system]} {
	    append ww " $sky"
	}
	set sliceDisplay {}
	foreach channelSlices $slices {
	    lassign $channelSlices channel values
	    if {$values != {}} {
		if {$channel == {}} {
		    lappend sliceDisplay $values
		} else {
		    lappend sliceDisplay "$channel: $values"
		}
	    }
	}
	$tree insert {} end -id "bookmark$index" -text $name \
	    -values [list $coord $ww $zoom $rotate $orient $sliceDisplay]
	incr index
    }
}

proc BookmarksSelectRow {which index} {
    global ibookmarks

    if {![info exists ibookmarks(top)] ||
	![winfo exists $ibookmarks(top)] ||
	![info exists ibookmarks(tree)] ||
	![winfo exists $ibookmarks(tree)]} {
	return
    }

    if {$ibookmarks(frame) != $which} {
	UpdateBookmarksDialog
    }
    if {$ibookmarks(frame) != $which} {
	return
    }

    set tree $ibookmarks(tree)
    set item "bookmark$index"
    if {![$tree exists $item]} {
	return
    }

    # Selecting the row generates <<TreeviewSelect>>.  The bookmark has
    # already been restored by BookmarkCurrentGoto, so suppress that event.
    set ibookmarks(selecting) $item
    $tree selection set $item
    $tree focus $item
    $tree see $item
}

proc BookmarksSelect {} {
    global ibookmarks
    if {![winfo exists $ibookmarks(top)]} {
	return
    }
    set selection [$ibookmarks(tree) selection]
    if {[info exists ibookmarks(selecting)]} {
	set selecting $ibookmarks(selecting)
	unset ibookmarks(selecting)
	if {[llength $selection] == 1 &&
	    [lindex $selection 0] == $selecting} {
	    return
	}
    }
    if {[llength $selection] == 1 &&
	[scan [lindex $selection 0] "bookmark%d" index] == 1} {
	BookmarkRestore $ibookmarks(frame) $index
    }
}

proc BookmarksDeleteSelected {} {
    global bookmarks ibookmarks
    set selection [$ibookmarks(tree) selection]
    if {[llength $selection] != 1 ||
	[scan [lindex $selection 0] "bookmark%d" index] != 1} {
	return
    }
    set which $ibookmarks(frame)
    set bookmarks($which) [lreplace $bookmarks($which) $index $index]
    UpdateBookmarksDialog
}

proc BookmarksEditName {x y} {
    global bookmarks ibookmarks

    set tree $ibookmarks(tree)
    set item [$tree identify item $x $y]
    if {$item == {} || [$tree identify column $x $y] != {#0} ||
	[scan $item "bookmark%d" index] != 1} {
	return
    }

    set which $ibookmarks(frame)
    set ibookmarks(edit,index) $index
    set ibookmarks(edit,frame) $which
    set ibookmarks(edit,name) \
	[lindex [lindex $bookmarks($which) $index] 0]

    set box [$tree bbox $item #0]
    if {$box == {}} {
	return
    }
    lassign $box xx yy ww hh
    set entry $tree.nameedit
    catch {destroy $entry}
    ttk::entry $entry -textvariable ibookmarks(edit,name)
    place $entry -x $xx -y $yy -width $ww -height $hh
    focus $entry
    $entry selection range 0 end
    bind $entry <Return> BookmarksCommitName
    bind $entry <FocusOut> BookmarksCommitName
    bind $entry <Escape> [list destroy $entry]
}

proc BookmarksCommitName {} {
    global bookmarks ibookmarks
    if {![info exists ibookmarks(edit,index)]} {
	return
    }
    set which $ibookmarks(edit,frame)
    set index $ibookmarks(edit,index)
    set row [lindex $bookmarks($which) $index]
    set row [lreplace $row 0 0 $ibookmarks(edit,name)]
    set bookmarks($which) [lreplace $bookmarks($which) $index $index $row]
    catch {destroy $ibookmarks(tree).nameedit}
    unset -nocomplain ibookmarks(edit,index)
    UpdateBookmarksDialog
}

proc BookmarksSaveDialog {} {
    global ibookmarks
    set fn [SaveFileDialog bookmarkfbox $ibookmarks(top)]
    if {$fn != {}} {
	BookmarksSaveFile $ibookmarks(frame) $fn
    }
}

proc BookmarksLoadDialog {} {
    global current ibookmarks
    set fn [OpenFileDialog bookmarkfbox $ibookmarks(top)]
    if {$fn != {} && $current(frame) != {}} {
	BookmarksLoadFile $current(frame) $fn
    }
}

proc BookmarksSaveFile {which fn} {
    global bookmarks
    if {$which == {} || ![info exists bookmarks($which)]} {
	return
    }
    if {[catch {open $fn w} ch]} {
	Error "[msgcat::mc {Unable to open file}] $fn"
	return
    }
    foreach row $bookmarks($which) {
	set fields {}
	foreach field $row {
	    lappend fields [list $field]
	}
	puts $ch [join $fields "\t"]
    }
    close $ch
}

proc BookmarksLoadFile {which fn} {
    global bookmarks
    if {[catch {open $fn r} ch]} {
	Error "[msgcat::mc {Unable to open file}] $fn"
	return
    }
    set rows {}
    set ok 1
    while {[gets $ch line] >= 0} {
	if {$line == {}} {
	    continue
	}
	if {[catch {llength $line} count] || $count != 9} {
	    set ok 0
	    break
	}
	lappend rows $line
    }
    close $ch
    if {!$ok} {
	Error "[msgcat::mc {Unable to load file}] $fn"
	return
    }
    set bookmarks($which) $rows
    set bookmarks(next,$which) [expr {[llength $rows] + 1}]
    UpdateBookmarksDialog
}

proc BookmarksBackup {ch which} {
    global bookmarks
    if {[info exists bookmarks($which)]} {
	puts $ch "global bookmarks"
	puts $ch [list set bookmarks($which) $bookmarks($which)]
	puts $ch [list set bookmarks(next,$which) $bookmarks(next,$which)]
    }
}
