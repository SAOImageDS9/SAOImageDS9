#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MovieDef {} {
    global imovie
    global movie

    global tcl_platform

    set imovie(top) .moviestatus
    set imovie(mb) .moviestatusmb

    set movie(type) gif
    set movie(action) slice
    set movie(delay) 0

    set movie(num) 24
    set movie(az,from) 45
    set movie(az,to) -45
    set movie(el,from) 30
    set movie(el,to) 30
    set movie(sl,from) 1
    set movie(sl,to) 1
    set movie(zm,from) 1
    set movie(zm,to) 1
    set movie(repeat) oscillate
    set movie(repeat,num) 0

    set movie(status) 0
    set movie(abort) 0
    set movie(first) 0
}

proc MovieDialog {} {
    global imovie
    global movie
    global mpegfbox
    global giffbox
    global ed
    global current

    set w {.movie}

    set ed(ok) 0
    set ed(type) $movie(type)
    set ed(action) $movie(action)
    set ed(delay) $movie(delay)

    DialogCreate $w [msgcat::mc {Create Movie}] ed(ok)

    # Type of Movie
    set f [ttk::labelframe $w.type -text [msgcat::mc {Type}]]

    ttk::label $f.title -text [msgcat::mc {Type}]
    ttk::radiobutton $f.mpeg -text {MPEG} \
	-variable ed(type) -value mpeg
    ttk::radiobutton $f.gif -text {Animated Gif} \
	-variable ed(type) -value gif

    grid $f.mpeg -padx 2 -pady 2 -sticky w
    grid $f.gif -padx 2 -pady 2 -sticky w

    # Param
    set f [ttk::labelframe $w.param -text [msgcat::mc {Format}]]

    ttk::label $f.title -text [msgcat::mc {Format}]
    ttk::radiobutton $f.frame -text {Frames Movie} \
	-variable ed(action) -value frame
    ttk::radiobutton $f.slice -text {Slice Movie} \
	-variable ed(action) -value slice
    ttk::radiobutton $f.3d -text {3D Movie} \
	-variable ed(action) -value 3d

    grid $f.slice -padx 2 -pady 2 -sticky w
    grid $f.frame -padx 2 -pady 2 -sticky w
    grid $f.3d -padx 2 -pady 2 -sticky w

    switch [$current(frame) get type] {
	base -
	rgb {$f.3d configure -state disabled}
	3d {$f.3d configure -state normal}
    }

    # Param
    set f [ttk::labelframe $w.delay -text [msgcat::mc {Delay}]]

    ttk::entry $f.delay -textvariable ed(delay) -width 7
    ttk::label $f.tdelay -text [msgcat::mc {hundredths second}]

    grid $f.delay $f.tdelay -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    grid $w.type -sticky news
    grid $w.param -sticky news
    grid $w.delay -sticky news
    grid $w.buttons -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid rowconfigure $w 1 -weight 1
    grid columnconfigure $w 0 -weight 1

    DialogWait $w ed(ok)
    destroy $w

    if {$ed(ok)} {
	set movie(action) $ed(action)
	set movie(type) $ed(type)
	set movie(delay) $ed(delay)
	
	switch $movie(type) {
	    mpeg {set fn [SaveFileDialog mpegfbox]}
	    gif {set fn [SaveFileDialog giffbox]}
	}

	if {$fn != {}} {
	    set ok 1
	    switch $movie(action) {
		slice -
		frame {}
		3d {set ok [Movie3dDialog]}
	    }

	    if {$ok} {
		MovieCreate $fn
	    }
	}
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc MovieCreate {fn} {
    global ds9
    global movie
    global current
    global saveimage

    if {$fn == {}} {
	return
    }
    set movie(fn) $fn

    # besure we are on top
    raise $ds9(top)

    set geom [MacOSPhotoFix $ds9(top) 0 1]

    switch $movie(action) {
	frame {MovieFrame}
	slice {MovieSlice}
	3d {Movie3d}
    }

    # close
    switch $movie(type) {
	mpeg {mpeg close}
	gif {agif close}
    }

    # reset if needed
    MacOSPhotoRestore $ds9(top) $geom
}

proc MovieFrame {} {
    global ds9
    global current
    global movie

    # we need single mode
    if {$ds9(display) != {single}} {
	set modesav $ds9(display)
	set current(display) single
	DisplayMode
    }

    # loop thru all active frames
    set movie(first) 1
    set framesav $current(frame)

    foreach ff $ds9(active) {
	GotoFrame $ff
	if {[MoviePhoto]} {
	    break
	}
    }

    GotoFrame $framesav

    if {[info exists modesav]} {
	set current(display) $modesav
	DisplayMode
    }
}

proc MovieSlice {} {
    global ds9
    global current
    global movie

    # we need single mode
    if {$ds9(display) != {single}} {
	set modesav $ds9(display)
	set current(display) single
	DisplayMode
    }

    set depth [$current(frame) get fits depth]
    set slice [$current(frame) get fits slice]

    set ss [$current(frame) get crop 3d image]
    set from [lindex $ss 0]
    set to [lindex $ss 1]

    # loop thru cube
    set movie(first) 1
    for {set ii $from} {$ii <= $to} {incr ii} {
	$current(frame) update fits slice $ii
	if {[MoviePhoto]} {
	    break
	}
    }

    # reset current slice
    $current(frame) update fits slice $slice

    if {[info exists modesav]} {
	set current(display) $modesav
	DisplayMode
    }
}

proc Movie3d {} {
    global ds9
    global movie
    global current

    # we need single or tile mode
    if {$ds9(display) == {blink}} {
	set modesav $ds9(display)
	set current(display) single
	DisplayMode
    }

    switch $ds9(display) {
	single {
	    set zoom [$current(frame) get zoom]
	    set slice [$current(frame) get fits slice]
	    set vp [$current(frame) get 3d view]
	}
	tile {
	    $current(frame) highlite off
	    foreach ff $ds9(active) {
		set zoom($ff) [$ff get zoom]
		set slice($ff) [$ff get fits slice]
		set vp($ff) [$ff get 3d view]
	    }
	}
	blink {
	    # should not be here
	}
    }

    set azincr [expr 1.*($movie(az,to)-$movie(az,from))/$movie(num)]
    set elincr [expr 1.*($movie(el,to)-$movie(el,from))/$movie(num)]
    set slincr [expr 1.*($movie(sl,to)-$movie(sl,from))/$movie(num)]
    set zmincr [expr 1.*($movie(zm,to)-$movie(zm,from))/$movie(num)]

    # loop over az/el/slice
    set movie(status) 0
    set movie(abort) 0
    set movie(first) 1

    set az $movie(az,from)
    set el $movie(el,from)
    set sl $movie(sl,from)
    set zm $movie(zm,from)

    for {set rr 0} {$rr<=$movie(repeat,num)} {incr rr} {
	for {set nn 0} {$nn<=$movie(num)} {incr nn} {
	    MovieStatusDialog

	    if {$movie(abort)} {
		break
	    }
	    set movie(status) [expr 1.*$nn/$movie(num)*100]

	    global debug
	    if {$debug(tcl,idletasks)} {
		puts stderr "Movie3d"
	    }
	    update idletasks

	    switch $ds9(display) {
		single {
		    $current(frame) zoom to $zm $zm
		    $current(frame) 3d view $az $el
		    $current(frame) update fits slice [expr int($sl)]
		}
		tile {
		    foreach ff $ds9(active) {
			$ff zoom to $zm $zm
			$ff 3d view $az $el
			$ff update fits slice [expr int($sl)]
		    }
		}
		blink {
		    # should not be here
		}
	    }

	    if {[MoviePhoto]} {
		break
	    }

	    set az [expr $az+$azincr]
	    set el [expr $el+$elincr]
	    set sl [expr $sl+$slincr]
	    set zm [expr $zm+$zmincr]
	}
	switch $movie(repeat) {
	    repeat {
		set az $movie(az,from)
		set el $movie(el,from)
		set sl $movie(sl,from)
		set zm $movie(zm,from)
	    }
	    oscillate {
		set azincr [expr -$azincr]
		set elincr [expr -$elincr]
		set slincr [expr -$slincr]
		set zmincr [expr -$zmincr]
	    }
	}
    }

    MovieStatusDestroyDialog

    # reset
    switch $ds9(display) {
	single {
	    $current(frame) zoom to $zoom
	    $current(frame) 3d view $vp
	    $current(frame) update fits slice $slice
	}
	tile {
	    $current(frame) highlite on
	    foreach ff $ds9(active) {
		$ff zoom to $zoom($ff)
		$ff 3d view $vp($ff)
		$ff update fits slice $slice($ff)
	    }
	}
	blink {
	    # should not be here
	}
    }

    Update3DDialog
    UpdateCubeDialog

    if {[info exists modesav]} {
	set current(display) $modesav
	DisplayMode
    }
}

# Support

proc MoviePhoto {} {
    global movie

    switch $movie(type) {
	mpeg {return [MoviePhotoMPEG]}
	gif {return [MoviePhotoGIF]}
    }
    return 1
}

proc MoviePhotoMPEG {} {
    global ds9
    global movie
    global current

    # yes, we need this
    UpdateDS9
    RealizeDS9

    set rr [catch {image create photo -format window -data $ds9(canvas)} ph]
    if {$rr} {
	Error [msgcat::mc {An error has occurred while creating}]
	return $rr
    }

    if {$movie(first)} {
	set ww [image width $ph]
	set hh [image height $ph]
	# quality must be >=5, or sometimes will generate bad data
	mpeg create "$movie(fn)" $ww $hh 25 1 5
	set movie(first) 0
    }
    mpeg add $ph
    image delete $ph

    return 0
}

proc MoviePhotoGIF {} {
    global ds9
    global movie
    global current
    global colorbar

    # yes, we need this
    UpdateDS9
    RealizeDS9

    set rr [catch {image create photo -format window -data $ds9(canvas)} ph]
    if {$rr} {
	Error [msgcat::mc {An error has occurred while creating}]
	return $rr
    }

    if {$movie(first)} {
	agif create $movie(fn) [image width $ph] [image height $ph] \
	    $movie(delay)
	set movie(first) 0
    }
    agif add $ph
    image delete $ph

    return 0
}

proc Movie3dDialog {} {
    global movie
    global ed2
    global current

    set w {.movie3d}

    set ed2(ok) 0
    set ed2(num) $movie(num)
    set ed2(az,from) $movie(az,from)
    set ed2(az,to) $movie(az,to)
    set ed2(el,from) $movie(el,from)
    set ed2(el,to) $movie(el,to)
    set ed2(sl,from) [$current(frame) get fits slice]
    set ed2(sl,to) $ed2(sl,from)
    set ed2(zm,from) [lindex [$current(frame) get zoom] 0]
    set ed2(zm,to) $ed2(zm,from)
    set ed2(repeat) $movie(repeat)
    set ed2(repeat,num) $movie(repeat,num)

    DialogCreate $w [msgcat::mc {Save 3D Movie}] ed2(ok)

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.tnum -text [msgcat::mc {Number}]
    ttk::entry $f.num -textvariable ed2(num) -width 7
    ttk::label $f.tframes -text [msgcat::mc {Frames}]

    ttk::label $f.taz -text [msgcat::mc {Azimuth}]
    ttk::label $f.tazfrom -text [msgcat::mc {From}]
    ttk::entry $f.azfrom -textvariable ed2(az,from) -width 7
    ttk::label $f.tazto -text [msgcat::mc {To}]
    ttk::entry $f.azto -textvariable ed2(az,to) -width 7

    ttk::label $f.tel -text [msgcat::mc {Elevation}]
    ttk::label $f.telfrom -text [msgcat::mc {From}]
    ttk::entry $f.elfrom -textvariable ed2(el,from) -width 7
    ttk::label $f.telto -text [msgcat::mc {To}]
    ttk::entry $f.elto -textvariable ed2(el,to) -width 7

    ttk::label $f.tsl -text [msgcat::mc {Slice}]
    ttk::label $f.tslfrom -text [msgcat::mc {From}]
    ttk::entry $f.slfrom -textvariable ed2(sl,from) -width 7
    ttk::label $f.tslto -text [msgcat::mc {To}]
    ttk::entry $f.slto -textvariable ed2(sl,to) -width 7

    ttk::label $f.tzm -text [msgcat::mc {Zoom}]
    ttk::label $f.tzmfrom -text [msgcat::mc {From}]
    ttk::entry $f.zmfrom -textvariable ed2(zm,from) -width 7
    ttk::label $f.tzmto -text [msgcat::mc {To}]
    ttk::entry $f.zmto -textvariable ed2(zm,to) -width 7

    ttk::radiobutton $f.repeat -text [msgcat::mc {Repeat}] \
	-variable ed2(repeat) -value repeat
    ttk::radiobutton $f.oscillate -text [msgcat::mc {Oscillate}] \
	-variable ed2(repeat) -value oscillate
    ttk::entry $f.repeatnum -textvariable ed2(repeat,num) -width 7
    ttk::label $f.ttimes -text [msgcat::mc {Times}]

    grid $f.tnum x $f.num $f.tframes -padx 2 -pady 2 -sticky w
    grid $f.taz $f.tazfrom $f.azfrom $f.tazto $f.azto -padx 2 -pady 2 -sticky w
    grid $f.tel $f.telfrom $f.elfrom $f.telto $f.elto -padx 2 -pady 2 -sticky w
    grid $f.tsl $f.tslfrom $f.slfrom $f.tslto $f.slto -padx 2 -pady 2 -sticky w
    grid $f.tzm $f.tzmfrom $f.zmfrom $f.tzmto $f.zmto -padx 2 -pady 2 -sticky w
    grid $f.oscillate x $f.repeatnum $f.ttimes -padx 2 -pady 2 -sticky w
    grid $f.repeat -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed2(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed2(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed2(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed2(ok)
    destroy $w

    if {$ed2(ok)} {
	set movie(num) $ed2(num)
	set movie(az,from) $ed2(az,from)
	set movie(az,to) $ed2(az,to)
	set movie(el,from) $ed2(el,from)
	set movie(el,to) $ed2(el,to)
	set movie(sl,from) $ed2(sl,from)
	set movie(sl,to) $ed2(sl,to)
	set movie(zm,from) $ed2(zm,from)
	set movie(zm,to) $ed2(zm,to)
	set movie(repeat) $ed2(repeat)
	set movie(repeat,num) $ed2(repeat,num)
    }

    set rr $ed2(ok)
    unset ed2
    return $rr
}

proc MovieStatusDialog {} {
    global imovie
    global movie

    # see if we already have a window visible
    if {[winfo exists $imovie(top)]} {
	raise $imovie(top)
	return
    }

    # create the 3d window
    set w $imovie(top)
    set mb $imovie(mb)

    Toplevel $w $mb 6 [msgcat::mc {Movie}] MovieStatusDestroyDialog
    raise $imovie(top)

    # Status
    set f [ttk::frame $w.param]
    ttk::label $f.tstatus -text [msgcat::mc {Status}]
    ttk::progressbar $f.status -variable movie(status) -length 350
    grid $f.tstatus $f.status -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.abort -text [msgcat::mc {Abort}] \
	-command MovieStatusAbortDialog
    pack $f.abort -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill x
}

proc MovieStatusDestroyDialog {} {
    global movie
    global imovie

    if {[winfo exists $imovie(top)]} {
	destroy $imovie(top)
	destroy $imovie(mb)
    }
}

proc MovieStatusAbortDialog {} {
    global movie
    set movie(abort) 1
}

# Process Cmds

proc ProcessMovieCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    # already implemented
    # ProcessRealizeDS9

    movie::YY_FLUSH_BUFFER
    movie::yy_scan_string [lrange $var $i end]
    movie::yyparse
    incr i [expr $movie::yycnt-1]
}

