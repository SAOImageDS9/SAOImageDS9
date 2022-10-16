#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateImageCreate {xx yy fn} {
    global ds9
    global iillustrate

    if {[catch {image create photo -file $fn} ph]} {
	Error [msgcat::mc {An error has occurred while loading}]
	return
    }

    set id [$ds9(canvas) create image \
		$xx $yy \
		-image $ph \
		-tags {image graphic}]

    IllustrateBaseCreateHandles $id white
    return $id
}

proc IllustrateImageDefault {id} {
}

proc IllustrateImageDup {param} {
    global ds9
    
    foreach {coords ph} $param {
	set new [image create photo]
	$new copy $ph

	# try to cleanup
	if {![image inuse $ph]} {
	    image delete $ph
	}

	set id [$ds9(canvas) create image \
		    $coords \
		    -image $new \
		    -tags {image graphic}]
    }

    IllustrateBaseCreateHandles $id white
    return $id
}

proc IllustrateImageSaveSelect {id} {
    global ds9

    return [list $id {} {} {} {}]
}

proc IllustrateImageCopy {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    set ph [$ds9(canvas) itemcget $id -image]

    return [list image [list $coords $ph]]
}

proc IllustrateImageSet {id param} {
    global ds9

    foreach {coords ph} $param {
	$ds9(canvas) coords $id $coords
#	$ds9(canvas) itemconfigure $id -image $ph
    }

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline white -fill white
    }

    IllustrateBaseUpdateHandle $id
}

proc IllustrateImageList {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    set ph [$ds9(canvas) itemcget $id -image]

    set rr "image $coords"

    return $rr
}

proc IllustrateImageEdit {id xx yy} {
}

proc IllustrateImageAntsOn {id} {
}

proc IllustrateImageAntsOff {gr} {
}

# Dialog

proc IllustrateImageDialog {id} {
    global illustrate
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    global ds9

    set var(id) $id
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
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
    ttk::label $f.ttitle -text [msgcat::mc {Center}]
    ttk::entry $f.xx -textvariable ${varname}(xx) -width 13
    ttk::entry $f.yy -textvariable ${varname}(yy) -width 13
    grid $f.ttitle $f.xx $f.yy -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $var(top).buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command [list IllustrateImageApply $varname]
    ttk::button $f.fn -text [msgcat::mc {Select Image}] \
	-command [list IllustrateImageFilename $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list IllustrateBaseClose $varname]
    pack $f.apply $f.fn $f.close -side left -expand true -padx 2 -pady 4

    bind $var(top) <Return> [list IllustrateImageApply $varname]

    # Fini
    ttk::separator $var(top).sep -orient horizontal
    pack $var(top).buttons $var(top).sep -side bottom -fill x
    pack $var(top).param -side top -fill both -expand true
    
    # init
    IllustrateImageEditCB $var(id)
}

proc IllustrateImageApply {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    if {$var(xx) != {} && $var(yy) != {}} {

	$ds9(canvas) coords $var(id) \
	    $var(xx) $var(yy)

	IllustrateBaseUpdateHandle $var(id)
    }
}

proc IllustrateImageFilename {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    set fn [OpenFileDialog photofbox]
    if {$fn == {}} {
	return
    }

    if {[catch {image create photo -file $fn} ph]} {
	Error [msgcat::mc {An error has occurred while loading}]
	return
    }

    set old [$ds9(canvas) itemcget $var(id) -image]
    $ds9(canvas) itemconfigure $var(id) -image $ph
    image delete $old
}


# callbacks

proc IllustrateImageEditCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    global ds9

    foreach {xx yy} [$ds9(canvas) coords $id] {}
    set var(xx) $xx
    set var(yy) $yy
}

proc IllustrateImageDeleteCB {id} {
    global iillustrate
    global ds9

# we need a better clean up method, just ignore for now
#    set ph [$ds9(canvas) itemcget $id -image]
#    image delete $ph
}
