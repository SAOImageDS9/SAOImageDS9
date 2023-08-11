#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateImageCreate {xx yy fn {ww 0} {hh 0}} {
    global iillustrate
    global ds9

    if {[catch {image create photo -file $fn} photo]} {
	Error [msgcat::mc {An error has occurred while loading}]
	return
    }
    if {$ww == 0} {
	set ww [image width $photo]
    }
    if {$hh == 0} {
	set hh [image height $photo]
    }
    set ph [resizePhoto $photo $ww $hh]

    set id [$ds9(canvas) create image \
		$xx $yy \
		-image $ph \
		-tags {image graphic}]

    set ivarname ${iillustrate(prefix,img)}${id}
    global $ivarname
    upvar #0 $ivarname ivar

    set ivar(photo) $photo
    set ivar(fn) $fn
    set ivar(width) $ww
    set ivar(height) $hh

    IllustrateBaseCreateHandles $id white
    return $id
}

proc IllustrateImageDefault {id} {
}

proc IllustrateImageDup {param} {
    global iillustrate
    global ds9
    
    foreach {coords ophoto fn ww hh} $param {
	set photo [image create photo]
	$photo copy $ophoto
	set ph [resizePhoto $photo $ww $hh]

	set id [$ds9(canvas) create image \
		    $coords \
		    -image $ph \
		    -tags {image graphic}]

	set ivarname ${iillustrate(prefix,img)}${id}
	global $ivarname
	upvar #0 $ivarname ivar

	set ivar(photo) $photo
	set ivar(fn) $fn
	set ivar(width) $ww
	set ivar(height) $hh
    }

    IllustrateBaseCreateHandles $id white
    return $id
}

proc IllustrateImageSaveSelection {id} {
    global ds9

    return [list $id {} {} {} {}]
}

proc IllustrateImageCopy {id} {
    global iillustrate
    global ds9

    set ivarname ${iillustrate(prefix,img)}${id}
    global $ivarname
    upvar #0 $ivarname ivar

    set coords [$ds9(canvas) coords $id]
    return [list image [list $coords $ivar(photo) $ivar(fn) $ivar(width) $ivar(height)]]
}

proc IllustrateImageSet {id param} {
    global iillustrate
    global ds9

    set ivarname ${iillustrate(prefix,img)}${id}
    global $ivarname
    upvar #0 $ivarname ivar

    foreach {coords photo fn ww hh} $param {
	$ds9(canvas) coords $id $coords

	set ph [resizePhoto $photo $ww $hh]
    
	set old [$ds9(canvas) itemcget $id -image]
	$ds9(canvas) itemconfigure $id -image $ph
	image delete $old

	set ivar(width) $ww
	set ivar(height) $hh
    }

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline white -fill white
    }

    IllustrateBaseUpdateHandle $id
}

proc IllustrateImageList {id} {
    global iillustrate
    global ds9

    set ivarname ${iillustrate(prefix,img)}${id}
    global $ivarname
    upvar #0 $ivarname ivar

    set coords [$ds9(canvas) coords $id]

    set rr "image $coords \"$ivar(fn)\" $ivar(width) $ivar(height)"

    return $rr
}

proc IllustrateImageEdit {id xx yy ratio} {
    global ds9
    global iillustrate
    
    if {$iillustrate(handle)} {
	foreach {bbx1 bby1 bbx2 bby2} [$ds9(canvas) bbox $id] {}
	set xc [expr double($bbx2-$bbx1)/2+$bbx1]
	set yc [expr double($bby2-$bby1)/2+$bby1]

	switch $iillustrate(handle) {
	    1 {
		set aa [expr abs(double($bbx1)/double($xx))]
		set bb [expr abs(double($bby1)/double($yy))]
	    }
	    2 {
		set aa [expr abs(double($xx)/double($bbx2))]
		set bb [expr abs(double($bby1)/double($yy))]
	    }
	    3 {
		set aa [expr abs(double($xx)/double($bbx2))]
		set bb [expr abs(double($yy)/double($bby2))]
	    }
	    4 {
		set aa [expr abs(double($bbx1)/double($xx))]
		set bb [expr abs(double($yy)/double($bby2))]
	    }
	}

	set ivarname ${iillustrate(prefix,img)}${id}
	global $ivarname
	upvar #0 $ivarname ivar

	set old [$ds9(canvas) itemcget $id -image]

	if {$ratio} {
	    set ww [expr int([image width $old]*$aa)]
	    set hh [expr int([image height $old]*$aa)]
	} else {
	    set ww [expr int([image width $old]*$aa)]
	    set hh [expr int([image height $old]*$bb)]
	}
	
	if {$ww < 10} {
	    set ww 10
	}
	if {$hh < 10} {
	    set hh 10
	}
	set ph [resizePhoto $ivar(photo) $ww $hh]
    
	set old [$ds9(canvas) itemcget $id -image]
	$ds9(canvas) itemconfigure $id -image $ph
	image delete $old

	set ivar(width) $ww
	set ivar(height) $hh
    }
}

proc IllustrateImageAntsOn {id} {
}

proc IllustrateImageAntsOff {gr} {
}

# Dialog

proc IllustrateImageDialog {id} {
    global illustrate
    global iillustrate
    global ds9

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    set ivarname ${iillustrate(prefix,img)}${id}
    global $ivarname
    upvar #0 $ivarname ivar

    set var(id) $id
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set var(fn) $ivar(fn)
    set var(width) $ivar(width)
    set var(height) $ivar(height)

    # set by EditCB
    set var(xx) 0 
    set var(yy) 0

    # window
    Toplevel $var(top) $var(mb) 6 [msgcat::mc {Image}] \
	[list IllustrateBaseClose $varname]

    $var(mb) add cascade -label [msgcat::mc {File}] -menu $var(mb).file
    $var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit

    ThemeMenu $var(mb).file
    $var(mb).file add command -label [msgcat::mc {Apply}] \
	-command [list IllustrateImageApply $varname]
    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Close}] \
	-command [list IllustrateBaseClose $varname] \
	-accelerator "${ds9(ctrl)}W"
    bind $var(top) <<Close>> [list IllustrateBaseClose $varname]

    EditMenu $var(mb) $varname

    set f $var(top).param

    # Param
    set f [ttk::frame $var(top).param]
    ttk::label $f.tid -text [msgcat::mc {Number}]
    ttk::label $f.id -text "$var(id)"
    grid $f.tid $f.id -padx 2 -pady 2 -sticky w

    # Center
    ttk::label $f.tcenter -text [msgcat::mc {Center}]
    ttk::entry $f.xx -textvariable ${varname}(xx) -width 13
    ttk::entry $f.yy -textvariable ${varname}(yy) -width 13
    grid $f.tcenter $f.xx $f.yy -padx 2 -pady 2 -sticky w

    # Size
    ttk::label $f.tsize -text [msgcat::mc {Size}]
    ttk::entry $f.ww -textvariable ${varname}(width) -width 13
    ttk::entry $f.hh -textvariable ${varname}(height) -width 13
    grid $f.tsize $f.ww $f.hh -padx 2 -pady 2 -sticky w

    # Filename
    ttk::label $f.tfn -text [msgcat::mc {Filename}]
    ttk::entry $f.fn -textvariable ${varname}(fn) -width 40
    ttk::button $f.bfn -text [msgcat::mc {Browse}] \
	-command [list IllustrateImageFilename $varname]
    grid $f.tfn $f.fn - $f.bfn -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $var(top).buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command [list IllustrateImageApply $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list IllustrateBaseClose $varname]
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    bind $var(top) <Return> [list IllustrateImageApply $varname]

    # Fini
    ttk::separator $var(top).sep -orient horizontal
    pack $var(top).buttons $var(top).sep -side bottom -fill x
    pack $var(top).param -side top -fill both -expand true
    
    # init
    IllustrateImageEditCB $var(id)
}

proc IllustrateImageApply {varname} {
    global iillustrate
    global ds9

    upvar #0 $varname var
    global $varname

    set id $var(id)
    
    set ivarname ${iillustrate(prefix,img)}${id}
    global $ivarname
    upvar #0 $ivarname ivar

    if {$var(xx) != {} && $var(yy) != {} &&
	$var(width) != {} && $var(height) != {}} {
	IllustrateSaveUndo edit $var(id)

	$ds9(canvas) coords $var(id) $var(xx) $var(yy)

	set ph [resizePhoto $ivar(photo) $var(width) $var(height)]
    
	set old [$ds9(canvas) itemcget $id -image]
	$ds9(canvas) itemconfigure $id -image $ph
	image delete $old

	set ivar(width) $var(width)
	set ivar(height) $var(height)

	IllustrateBaseUpdateHandle $var(id)
    }
}

proc IllustrateImageFilename {varname} {
    global iillustrate
    global ds9

    upvar #0 $varname var
    global $varname

    set id $var(id)

    set ivarname ${iillustrate(prefix,img)}${id}
    global $ivarname
    upvar #0 $ivarname ivar

    set fn [OpenFileDialog photofbox]
    if {$fn == {}} {
	return
    }

    if {[catch {image create photo -file $fn} photo]} {
	Error [msgcat::mc {An error has occurred while loading}]
	return
    }
    set ph [image create photo]
    $ph copy $photo
    
    set old [$ds9(canvas) itemcget $id -image]
    $ds9(canvas) itemconfigure $id -image $ph
    
    image delete $old
    image delete $ivar(photo)

    set ivar(photo) $photo
    set ivar(fn) $fn
    set ivar(width) [image width $photo]
    set ivar(height) [image height $photo]

    set var(fn) $fn

    IllustrateBaseUpdateHandle $var(id)
}


# callbacks

proc IllustrateImageEditCB {id} {
    global iillustrate
    global ds9

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    set id $var(id)
    
    set ivarname ${iillustrate(prefix,img)}${id}
    global $ivarname
    upvar #0 $ivarname ivar

    foreach {xx yy} [$ds9(canvas) coords $id] {}
    set var(xx) $xx
    set var(yy) $yy

    set var(width) $ivar(width)
    set var(height) $ivar(height)
}

proc IllustrateImageDeleteCB {id} {
    global iillustrate
    global ds9

    IllustrateBaseDeleteCB $id

    set ph [$ds9(canvas) itemcget $id -image]
    image delete $ph
    
    set ivarname ${iillustrate(prefix,img)}${id}
    global $ivarname
    upvar #0 $ivarname ivar

    image delete $ivar(photo)

    unset $ivarname
}
