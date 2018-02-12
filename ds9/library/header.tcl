#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc DisplayHeaderMenu {} {
    global current

    # possible cases
    #  image primary
    #  image xtension
    #  compressed primary
    #  compressed xtension
    #  bin table xtension
    #  hpx xtension
    #  cube primary
    #  cube xtension
    #  multiple xtension cube
    #  multiple file cube
    #  mosaic extension
    #  mosaic image xtension
    #  mosaic cube xtension
    #  mosaic image cube xtension

    set cnt [$current(frame) get fits count]

    if {$cnt > 0} {
	set slb(count) 0

	# check for primary
	set fn [$current(frame) get fits file name 1]
	set xten \
	    [string trim [$current(frame) get fits header 1 keyword {XTENSION}]]
	if {$xten != {}} {
	    set bb [string first {[} $fn]
	    if {$bb>0} {
		set pn [string range $fn 0 [expr $bb-1]]
	    } else {
		set pn "primary"
	    }
	    incr slb(count)
	    set slb($slb(count),item) $pn
	    set slb($slb(count),value) -1
	}

	set last {}
	for {set ii 1} {$ii <= $cnt} {incr ii} {
	    set fn [$current(frame) get fits file name $ii]
	    set bb [string first {[} $fn]
	    if {$bb<0} {
		set nn [$current(frame) get fits ext $ii]
		if {$nn > 0} {
		  set fn "$fn\[\]"
		}
	    }
	    
	    if {$fn != $last} {
		incr slb(count)
		set slb($slb(count),item) $fn
		set slb($slb(count),value) $ii
		set last $fn
	    }
	}

	if {$slb(count) <= 1} {
	    DisplayHeader $current(frame) 1 $fn
	} else {
	    if {[SLBDialog slb {Select Header} 40]} {
		DisplayHeader $current(frame) $slb(value) $slb(item)
	    }
	}
    }
}

proc DisplayHeader {frame id title} {
    global current

    set varname "hd-$frame-$id"
    upvar #0 $varname var
    global $varname

    SimpleTextDialog $varname $title 80 40 insert top \
	[$current(frame) get fits header $id]

    # create a special text tag for keywords
    $var(text) tag configure keyword -foreground blue
    
    # color tag keywords
    set stop [$var(text) index end]
    for {set ii 1.0} {$ii<$stop} {set ii [expr $ii+1]} {
	$var(text) tag add keyword $ii "$ii +8 chars"
    }
}

proc UpdateHeaderDialog {} {
    global current

    set frame $current(frame)
    set cnt 1
    if {[$frame has fits mosaic]} {
	set cnt [$frame get fits count]
    }

    for {set id 1} {$id <= $cnt} {incr id} {
	set varname "hd-$frame-$id"
	upvar #0 $varname var
	global $varname
	if {![info exists var(top)]} {
	    continue
	}
	if {![winfo exists $var(top)]} {
	    continue
	}

	$var(text) delete 1.0 end
	$var(text) insert end [$frame get fits header $id]

	# color tag keywords
	set stop [$var(text) index end]
	for {set ii 1.0} {$ii<$stop} {set ii [expr $ii+1]} {
	    $var(text) tag add keyword $ii "$ii +8 chars"
	}    
    }
}

proc DestroyHeader {frame} {
    set cnt 1
    if {[$frame has fits mosaic]} {
	set cnt [$frame get fits count]
    }

    for {set id 1} {$id <= $cnt} {incr id} {
	set varname "hd-$frame-$id"
	upvar #0 $varname var
	global $varname

	if {[info exists $varname]} {
	    if {[winfo exists $var(top)]} {
		SimpleTextDestroy $varname
	    }
	}
    }
}

proc ProcessHeaderCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    set item [string tolower [lindex $var $i]]
    switch -- $item {
	close -
	save {incr i}
    }

    if {[lindex $var $i] != {} && [string is integer [lindex $var $i]]} {
	set jj [lindex $var $i]
	incr i
    } else {
	set jj 1
    }

    global current
    if {$current(frame) != {}} {
	switch -- $item {
	    close {
		set vvarname "hd[string range $current(frame) end end]-$jj"
		upvar #0 $vvarname vvar
		global $vvarname

		if {[info exists vvar(top)]} {
		    SimpleTextDestroy $vvarname
		}
		incr i -1
	    }
	    save {
		set fn [lindex $var $i]
		if {$fn != {}} {
		    if {[catch {set ch [open "| cat > \"$fn\"" w]}]} {
			Error [msgcat::mc {An error has occurred while saving}]
			return
		    }
		    puts -nonewline $ch [$current(frame) get fits header $jj]
		    close $ch
		}
	    }
	    default {
		catch {DisplayHeader $current(frame) $jj \
			   [$current(frame) get fits file name $jj]}
		incr i -1
	    }
	}
    }
}

