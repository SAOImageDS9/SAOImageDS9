#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# File -> Open for HEALPix tables: before loading, offer the HEALPix
# file name options (col=, proj=, lon0=, lat0=, fov=, order=, system=,
# layout=, quad=), and load the file with the ones chosen appended, e.g.
# foo.fits[proj=tan,lon0=83.6,lat0=22]. Only the interactive Open dialog
# comes here; XPA, SAMP, the command line, Open Recent and backups load
# the file name as given. Options are only written when they differ from
# what a plain load would do, so the name stays as short as possible.

proc HPXOpenDef {} {
    global hpxopen
    global phpxopen

    # prefs: ask on open, and the projection the dialog starts with
    set phpxopen(ask) 1
    set phpxopen(proj) hpx

    # the last values chosen, for the rest of the session
    set hpxopen(proj) {}
    set hpxopen(lon0) {}
    set hpxopen(lat0) {}
    set hpxopen(fov) {}
    set hpxopen(layout) equatorial
    set hpxopen(quad) 1

    # code kind label [lat0 default, fov default, fov max]
    # (fitshpxreproj.C, HPXReprojInfo); {} is a menu separator
    set hpxopen(projs) {
	{hpx native {HEALPix}}
	{}
	{ait allsky {Hammer-Aitoff}}
	{mol allsky {Mollweide}}
	{car allsky {Plate Carree}}
	{sfl allsky {Sanson-Flamsteed}}
	{par allsky {Parabolic}}
	{cea allsky {Lambert Cylindrical Equal Area}}
	{}
	{tan zenithal {Gnomonic} 0 90 170}
	{sin zenithal {Orthographic} 0 180 180}
	{stg zenithal {Stereographic} 0 180 340}
	{arc zenithal {Zenithal Equidistant} 0 360 360}
	{zea zenithal {Zenithal Equal Area} 0 360 360}
	{}
	{cop conic {Conic Perspective} 45 360 720}
	{coe conic {Conic Equal Area} 45 360 720}
	{cod conic {Conic Equidistant} 45 360 720}
	{coo conic {Conic Orthomorphic} 45 360 720}
	{bon conic {Bonne} 45 360 720}
    }
}

# Called from OpenDialog with the name of the variable holding the file
# name. Returns 0 if the user cancelled, else 1 (fn may have options
# appended).
proc HPXOpenDialog {varname} {
    upvar $varname fn
    global current
    global phpxopen

    if {!$phpxopen(ask) || $current(frame) == {}} {
	return 1
    }
    # the user already typed options
    if {[HPXOpenHasOptions $fn]} {
	return 1
    }
    if {[catch {$current(frame) fitsy info "\"$fn\""} info]} {
	return 1
    }
    if {![dict exists $info type]} {
	return 1
    }
    switch -- [dict get $info type] {
	healpix -
	moc {}
	default {return 1}
    }

    set vals [HPXOpenParamsDialog $fn $info]
    if {$vals == {}} {
	return 0
    }
    set fn [HPXOpenFileName $fn $info $vals]
    return 1
}

# Does the file name already carry HEALPix options?
proc HPXOpenHasOptions {fn} {
    return [regexp -nocase \
		{[\[,]\s*(order|system|layout|col|quad|proj|lon0|lat0|fov)\s*=} \
		$fn]
}

# The projection's entry in hpxopen(projs), or {} if unknown
proc HPXOpenProjInfo {proj} {
    global hpxopen

    foreach pp $hpxopen(projs) {
	if {[lindex $pp 0] == $proj} {
	    return $pp
	}
    }
    return {}
}

# "Gnomonic (TAN)"
proc HPXOpenProjLabel {proj} {
    set pi [HPXOpenProjInfo $proj]
    if {$pi == {}} {
	return $proj
    }
    return "[lindex $pi 2] ([string toupper $proj])"
}

proc HPXOpenProjKind {proj} {
    return [lindex [HPXOpenProjInfo $proj] 1]
}

# A number as the file name lexer takes it: no exponent, no +, no
# trailing zeros
proc HPXOpenNum {vv} {
    set ss [string trimright [string trimright [format %.10f $vv] 0] .]
    if {$ss == {-0}} {
	set ss 0
    }
    return $ss
}

# Check the values (a dict, as returned by HPXOpenParamsDialog). Returns
# an error message, or {} if they can be loaded. Empty means default.
proc HPXOpenCheck {vals} {
    set proj [dict get $vals proj]
    set pi [HPXOpenProjInfo $proj]
    if {$pi == {}} {
	return "[msgcat::mc {Unknown projection}] $proj"
    }
    set kind [lindex $pi 1]

    foreach {key label} [list lon0 [msgcat::mc {Longitude}] \
			     lat0 [msgcat::mc {Latitude}] \
			     fov [msgcat::mc {Field of View}]] {
	set vv [string trim [dict get $vals $key]]
	if {$vv != {} && ![string is double -strict $vv]} {
	    return "$label [msgcat::mc {must be a number}]"
	}
    }

    set lat0 [string trim [dict get $vals lat0]]
    set fov [string trim [dict get $vals fov]]
    switch -- $kind {
	zenithal {
	    if {$lat0 != {} && ($lat0 < -90 || $lat0 > 90)} {
		return [msgcat::mc {Latitude must be between -90 and 90}]
	    }
	}
	conic {
	    if {$lat0 != {} && ($lat0 <= -90 || $lat0 >= 90 || $lat0 == 0)} {
		return [msgcat::mc {Reference latitude must be between -90 and 90, and not 0}]
	    }
	}
    }
    switch -- $kind {
	zenithal -
	conic {
	    set max [lindex $pi 5]
	    if {$fov != {} && ($fov <= 0 || $fov > $max)} {
		return "[msgcat::mc {Field of view must be more than 0 and at most}] $max"
	    }
	}
    }
    return {}
}

# The file name with the options in vals that differ from a plain load
proc HPXOpenFileName {fn info vals} {
    set opts {}

    set col [dict get $vals col]
    if {$col != {} && $col != [dict get $info default]} {
	lappend opts "col=$col"
    }
    foreach key {order system} {
	set vv [dict get $vals $key]
	if {$vv != {}} {
	    lappend opts "$key=$vv"
	}
    }

    set proj [dict get $vals proj]
    set pi [HPXOpenProjInfo $proj]
    switch -- [lindex $pi 1] {
	native {
	    if {[dict get $vals layout] != {equatorial}} {
		lappend opts "layout=[dict get $vals layout]"
	    }
	    if {[dict get $vals quad] != 1} {
		lappend opts "quad=[dict get $vals quad]"
	    }
	}
	allsky -
	zenithal -
	conic {
	    lappend opts "proj=$proj"
	    set lon0 [string trim [dict get $vals lon0]]
	    if {$lon0 != {} && $lon0 != 0} {
		lappend opts "lon0=[HPXOpenNum $lon0]"
	    }
	}
    }
    switch -- [lindex $pi 1] {
	zenithal -
	conic {
	    set lat0 [string trim [dict get $vals lat0]]
	    if {$lat0 != {} && $lat0 != [lindex $pi 3]} {
		lappend opts "lat0=[HPXOpenNum $lat0]"
	    }
	    set fov [string trim [dict get $vals fov]]
	    if {$fov != {} && $fov != [lindex $pi 4]} {
		lappend opts "fov=[HPXOpenNum $fov]"
	    }
	}
    }

    if {$opts == {}} {
	return $fn
    }
    return "$fn\[[join $opts ,]\]"
}

# The dialog. Returns the chosen values as a dict (proj lon0 lat0 fov col
# order system layout quad), or {} on cancel.
proc HPXOpenParamsDialog {fn info} {
    global hpxopen
    global phpxopen
    global hpxed

    set w {.hpxopen}

    array unset hpxed
    set hpxed(ok) 0
    set hpxed(info) $info

    set proj $hpxopen(proj)
    if {[HPXOpenProjInfo $proj] == {}} {
	set proj $phpxopen(proj)
    }
    if {[HPXOpenProjInfo $proj] == {}} {
	set proj hpx
    }
    set hpxed(proj) $proj
    set hpxed(lon0) $hpxopen(lon0)
    set hpxed(lat0) $hpxopen(lat0)
    set hpxed(fov) $hpxopen(fov)
    set hpxed(layout) $hpxopen(layout)
    set hpxed(quad) $hpxopen(quad)
    set hpxed(col) [dict get $info default]
    set hpxed(order) {}
    set hpxed(system) {}

    DialogCreate $w [msgcat::mc {HEALPix}] hpxed(ok)

    # File
    set f [ttk::frame $w.file]
    ttk::label $f.name -text [file tail [lindex [split $fn {[}] 0]] \
	-font TkHeadingFont
    ttk::label $f.desc -text [HPXOpenDescribe $info]
    grid $f.name -padx 2 -pady 2 -sticky w
    grid $f.desc -padx 2 -pady 2 -sticky w

    # Data
    set f [ttk::labelframe $w.data -text [msgcat::mc {Data}]]
    ttk::label $f.tcol -text [msgcat::mc {Column}]
    set hpxed(collabel) {}
    ttk::menubutton $f.col -textvariable hpxed(collabel) -menu $f.col.m
    ThemeMenu $f.col.m
    set cols [dict get $info cols]
    foreach cc $cols {
	lassign $cc nn name tform
	$f.col.m add radiobutton -label "$nn: $name ($tform)" \
	    -variable hpxed(col) -value $nn
    }
    if {$cols == {}} {
	$f.col configure -state disabled
    }
    trace add variable hpxed(col) write HPXOpenColLabel
    HPXOpenColLabel
    grid $f.tcol $f.col -padx 2 -pady 2 -sticky w

    # Projection
    set f [ttk::labelframe $w.proj -text [msgcat::mc {Projection}]]
    ttk::label $f.tproj -text [msgcat::mc {Projection}]
    ttk::menubutton $f.proj -textvariable hpxed(projlabel) -menu $f.proj.m
    ThemeMenu $f.proj.m
    foreach pp $hpxopen(projs) {
	if {$pp == {}} {
	    $f.proj.m add separator
	    continue
	}
	set code [lindex $pp 0]
	$f.proj.m add radiobutton -label [HPXOpenProjLabel $code] \
	    -variable hpxed(proj) -value $code -command HPXOpenProjChanged
    }
    ttk::label $f.tlon0 -text [msgcat::mc {Longitude}]
    ttk::entry $f.lon0 -textvariable hpxed(lon0) -width 10
    ttk::label $f.hlon0 -textvariable hpxed(hlon0)
    ttk::label $f.tlat0 -textvariable hpxed(tlat0)
    ttk::entry $f.lat0 -textvariable hpxed(lat0) -width 10
    ttk::label $f.hlat0 -textvariable hpxed(hlat0)
    ttk::label $f.tfov -text [msgcat::mc {Field of View}]
    ttk::entry $f.fov -textvariable hpxed(fov) -width 10
    ttk::label $f.hfov -textvariable hpxed(hfov)

    grid $f.tproj $f.proj - -padx 2 -pady 2 -sticky w
    grid $f.tlon0 $f.lon0 $f.hlon0 -padx 2 -pady 2 -sticky w
    grid $f.tlat0 $f.lat0 $f.hlat0 -padx 2 -pady 2 -sticky w
    grid $f.tfov $f.fov $f.hfov -padx 2 -pady 2 -sticky w
    set hpxed(wproj) $f

    # HPX image
    set f [ttk::labelframe $w.hpx -text [msgcat::mc {HPX Image}]]
    ttk::label $f.tlayout -text [msgcat::mc {Layout}]
    ttk::menubutton $f.layout -textvariable hpxed(layout) -menu $f.layout.m
    ThemeMenu $f.layout.m
    foreach ll {equatorial north south} {
	$f.layout.m add radiobutton -label $ll \
	    -variable hpxed(layout) -value $ll
    }
    ttk::label $f.tquad -text [msgcat::mc {Quadrant}]
    ttk::menubutton $f.quad -textvariable hpxed(quad) -menu $f.quad.m
    ThemeMenu $f.quad.m
    foreach qq {1 2 3 4} {
	$f.quad.m add radiobutton -label $qq -variable hpxed(quad) -value $qq
    }
    grid $f.tlayout $f.layout $f.tquad $f.quad -padx 2 -pady 2 -sticky w
    set hpxed(whpx) $f

    # Header overrides
    set f [ttk::labelframe $w.head -text [msgcat::mc {Override Header}]]
    ttk::label $f.torder -text [msgcat::mc {Order}]
    set hpxed(orderlabel) [HPXOpenHeaderLabel [dict get $info ordering] ring]
    ttk::menubutton $f.order -textvariable hpxed(orderlabel) -menu $f.order.m
    ThemeMenu $f.order.m
    $f.order.m add radiobutton -label $hpxed(orderlabel) \
	-variable hpxed(order) -value {} \
	-command [list set hpxed(orderlabel) $hpxed(orderlabel)]
    $f.order.m add separator
    foreach oo {ring nested} {
	$f.order.m add radiobutton -label $oo \
	    -variable hpxed(order) -value $oo \
	    -command [list set hpxed(orderlabel) $oo]
    }
    # a MOC's NUNIQ indexing isn't an order to choose
    if {[dict get $info type] == {moc}} {
	$f.order configure -state disabled
    }

    ttk::label $f.tsystem -text [msgcat::mc {System}]
    set hpxed(systemlabel) \
	[HPXOpenHeaderLabel [dict get $info coordsys] unknown]
    ttk::menubutton $f.system -textvariable hpxed(systemlabel) \
	-menu $f.system.m
    ThemeMenu $f.system.m
    $f.system.m add radiobutton -label $hpxed(systemlabel) \
	-variable hpxed(system) -value {} \
	-command [list set hpxed(systemlabel) $hpxed(systemlabel)]
    $f.system.m add separator
    foreach ss {equatorial galactic ecliptic unknown} {
	$f.system.m add radiobutton -label $ss \
	    -variable hpxed(system) -value $ss \
	    -command [list set hpxed(systemlabel) $ss]
    }
    grid $f.torder $f.order $f.tsystem $f.system -padx 2 -pady 2 -sticky w

    # Ask
    set f [ttk::frame $w.ask]
    ttk::checkbutton $f.ask -variable phpxopen(ask) \
	-text [msgcat::mc {Show this dialog when opening HEALPix files}]
    grid $f.ask -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command HPXOpenOK \
	-default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] \
	-command {set hpxed(ok) 0}
    ttk::button $f.reset -text [msgcat::mc {Defaults}] \
	-command HPXOpenDefaults
    pack $f.ok $f.cancel $f.reset -side left -expand true -padx 2 -pady 4

    bind $w <Return> HPXOpenOK

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.file -side top -fill x -padx 2 -pady 2
    pack $w.data $w.proj $w.hpx $w.head $w.ask \
	-side top -fill x -padx 4 -pady 2

    set hpxed(oldproj) {}
    HPXOpenProjChanged

    DialogWait $w hpxed(ok)
    destroy $w

    trace remove variable hpxed(col) write HPXOpenColLabel

    set rr {}
    if {$hpxed(ok)} {
	foreach key {proj lon0 lat0 fov col order system layout quad} {
	    dict set rr $key [string trim $hpxed($key)]
	}
	# remember for the next file
	foreach key {proj lon0 lat0 fov layout quad} {
	    set hpxopen($key) [dict get $rr $key]
	}
    }
    array unset hpxed
    return $rr
}

# The column menu's label for hpxed(col); a MOC with no value column
# shows its coverage
proc HPXOpenColLabel {args} {
    global hpxed

    set hpxed(collabel) [msgcat::mc {Coverage}]
    foreach cc [dict get $hpxed(info) cols] {
	lassign $cc nn name tform
	if {$nn == $hpxed(col)} {
	    set hpxed(collabel) "$nn: $name ($tform)"
	}
    }
}

# One line about the file, from fitsy info
proc HPXOpenDescribe {info} {
    set desc {}
    if {[dict get $info type] == {moc}} {
	lappend desc "MOC, [msgcat::mc {order}] [dict get $info mocorder]"
    } else {
	if {[dict get $info nside]} {
	    lappend desc "NSIDE [dict get $info nside]"
	}
	if {[dict get $info ordering] != {}} {
	    lappend desc [dict get $info ordering]
	}
	if {[dict get $info index]} {
	    lappend desc [msgcat::mc {partial}]
	}
    }
    if {[dict get $info coordsys] != {}} {
	lappend desc [dict get $info coordsys]
    } else {
	lappend desc [msgcat::mc {no coordinate system}]
    }
    lappend desc "[dict get $info rows] [msgcat::mc {rows}]"
    if {[dict get $info ext]} {
	set ext [dict get $info extname]
	if {$ext == {}} {
	    set ext [dict get $info ext]
	}
	lappend desc "[msgcat::mc {extension}] $ext"
    }
    return [join $desc {, }]
}

# "Header (ring)", or "Header (default)" when the header doesn't say
proc HPXOpenHeaderLabel {value default} {
    if {$value == {}} {
	return "[msgcat::mc {Header}] ($default)"
    }
    return "[msgcat::mc {Header}] ($value)"
}

# Projection chosen: label, which fields apply, and their defaults. A
# field still at the old projection's default takes the new one's.
proc HPXOpenProjChanged {} {
    global hpxed

    set pi [HPXOpenProjInfo $hpxed(proj)]
    lassign $pi code kind label lat0 fov fovmax
    set hpxed(projlabel) [HPXOpenProjLabel $code]

    set old [HPXOpenProjInfo $hpxed(oldproj)]
    set hpxed(oldproj) $hpxed(proj)
    foreach {key idx} {lat0 3 fov 4} {
	set vv [string trim $hpxed($key)]
	if {$vv == {} || $vv == [lindex $old $idx]} {
	    set hpxed($key) [lindex $pi $idx]
	}
    }
    if {$hpxed(lon0) == {} && $kind != {native}} {
	set hpxed(lon0) 0
    }

    set hpxed(hlon0) {}
    set hpxed(hlat0) {}
    set hpxed(hfov) {}
    set hpxed(tlat0) [msgcat::mc {Latitude}]
    switch -- $kind {
	native {}
	allsky {
	    set hpxed(hlon0) [msgcat::mc {degrees, at the centre}]
	}
	zenithal {
	    set hpxed(hlon0) [msgcat::mc {degrees, at the centre}]
	    set hpxed(hlat0) [msgcat::mc {degrees, at the centre}]
	    set hpxed(hfov) "[msgcat::mc {degrees across, at most}] $fovmax"
	}
	conic {
	    set hpxed(hlon0) [msgcat::mc {degrees, central meridian}]
	    set hpxed(tlat0) [msgcat::mc {Ref Latitude}]
	    set hpxed(hlat0) [msgcat::mc {degrees, not 0}]
	    set hpxed(hfov) "[msgcat::mc {degrees across, at most}] $fovmax"
	}
    }

    set f $hpxed(wproj)
    set lon [expr {$kind == {native} ? {disabled} : {normal}}]
    set win [expr {$kind == {zenithal} || $kind == {conic} \
		       ? {normal} : {disabled}}]
    $f.lon0 configure -state $lon
    $f.lat0 configure -state $win
    $f.fov configure -state $win

    # layout and quadrant only shape the HPX image
    set hpx [expr {$kind == {native} ? {normal} : {disabled}}]
    $hpxed(whpx).layout configure -state $hpx
    $hpxed(whpx).quad configure -state $hpx
}

proc HPXOpenDefaults {} {
    global hpxed
    global phpxopen

    set hpxed(proj) $phpxopen(proj)
    if {[HPXOpenProjInfo $hpxed(proj)] == {}} {
	set hpxed(proj) hpx
    }
    set hpxed(lon0) {}
    set hpxed(lat0) {}
    set hpxed(fov) {}
    set hpxed(layout) equatorial
    set hpxed(quad) 1
    set hpxed(order) {}
    set hpxed(orderlabel) [HPXOpenHeaderLabel \
			       [dict get $hpxed(info) ordering] ring]
    set hpxed(system) {}
    set hpxed(systemlabel) [HPXOpenHeaderLabel \
				[dict get $hpxed(info) coordsys] unknown]
    set hpxed(col) [dict get $hpxed(info) default]
    set hpxed(oldproj) {}
    HPXOpenProjChanged
}

proc HPXOpenOK {} {
    global hpxed

    set vals {}
    foreach key {proj lon0 lat0 fov} {
	dict set vals $key $hpxed($key)
    }
    set err [HPXOpenCheck $vals]
    if {$err != {}} {
	Error $err
	return
    }
    set hpxed(ok) 1
}

proc PrefsDialogHPXOpen {} {
    global dprefs
    global hpxopen
    global phpxopen

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.hpxopen] \
	-text [msgcat::mc {HEALPix}]

    set f [ttk::labelframe $w.hpxopen.params -text [msgcat::mc {Open}]]

    ttk::label $f.task -text [msgcat::mc {Ask for HEALPix Options}]
    ttk::checkbutton $f.ask -variable phpxopen(ask)

    ttk::label $f.tproj -text [msgcat::mc {Default Projection}]
    set hpxopen(prefslabel) [HPXOpenProjLabel $phpxopen(proj)]
    ttk::menubutton $f.proj -textvariable hpxopen(prefslabel) \
	-menu $f.proj.m
    ThemeMenu $f.proj.m
    foreach pp $hpxopen(projs) {
	if {$pp == {}} {
	    $f.proj.m add separator
	    continue
	}
	set code [lindex $pp 0]
	$f.proj.m add radiobutton -label [HPXOpenProjLabel $code] \
	    -variable phpxopen(proj) -value $code \
	    -command [list set hpxopen(prefslabel) [HPXOpenProjLabel $code]]
    }

    grid $f.task $f.ask -padx 2 -pady 2 -sticky w
    grid $f.tproj $f.proj -padx 2 -pady 2 -sticky w

    pack $f -side top -fill both -expand true
}
