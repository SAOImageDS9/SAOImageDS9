#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SaveImageDef {} {
    global saveimage

    set saveimage(jpeg,quality) 75
    set saveimage(tiff,compress) none

    set aa [msgcat::mc {An error has occurred while creating the image. Please be sure that the entire image window is visible on the screen.}]
    set bb [msgcat::mc {An error has occurred while creating the image. Please be sure that the ds9 window is in the upper left corner of the default screen and the entire window is visible.}]
    set cc [msgcat::mc {This function is not currently supported for this port.}]

    global ds9
    switch $ds9(wm) {
	x11 {
	    global tcl_platform
	    switch $tcl_platform(os) {
		Darwin {
		    switch [lindex [split $tcl_platform(osVersion) {.}] 0] {
			10 -
			11 {set saveimage(error) $bb}
			8 -
			9 -
			default {set saveimage(error) $aa}
		    }
		}
		default {set saveimage(error) $aa}
	    }
	}
	aqua -
	win32 {set saveimage(error) $cc}
    }
}

proc SaveImageDialog {format} {
    global saveimage
    global fitsfbox
    global epsfbox
    global giffbox
    global jpegfbox
    global tifffbox
    global pngfbox

    switch -- $format {
	fits {set fn [SaveFileDialog fitsfbox]}
	eps {set fn [SaveFileDialog epsfbox]}
	gif {set fn [SaveFileDialog giffbox]}
	jpeg {set fn [SaveFileDialog jpegfbox]}
	tiff {set fn [SaveFileDialog tifffbox]}
	png {set fn [SaveFileDialog pngfbox]}
    }

    if {$fn != {}} {
	set ok 1
	switch -- $format {
	    fits -
	    eps -
	    gif -
	    png {}
	    jpeg {set ok [JPEGExportDialog saveimage(jpeg,quality)]}
	    tiff {set ok [TIFFExportDialog saveimage(tiff,compress)]}
	}

	if {$ok} {
	    SaveImage $fn $format
	}
    }
}

proc SaveImage {fn format} {
    global ds9
    global current
    global saveimage
    global cube

    if {$fn == {} || ![$current(frame) has fits]} {
	return
    }

    # besure we are on top
    raise $ds9(top)

    # and no highlite
    $current(frame) highlite off
    # and refresh screen
    RealizeDS9

    switch -- $format {
	fits {$current(frame) save fits resample file "\{$fn\}"}
	eps {EPS $fn}
	gif -
	tiff -
	jpeg -
	png {SaveImagePhoto $fn $format}
    }

    # reset
    switch -- $ds9(display) {
	single -
	blink {}
	tile {$current(frame) highlite on}
    }

    # and refresh screen
    RealizeDS9
}

# Support

proc SaveImagePhoto {fn format} {
    global ds9
    global saveimage

    switch $ds9(wm) {
	x11 {}
	aqua -
	win32 {
	    Error $saveimage(error)
	    return
	}
    }

    set rr [catch {image create photo -format window -data $ds9(canvas)} ph]
    if {$rr != 0} {
	Error $saveimage(error)
    }

    switch -- $format {
	gif -
	png {$ph write $fn -format $format}
	jpeg {$ph write $fn \
		  -format [list $format -quality $saveimage(jpeg,quality)]}
	tiff {$ph write $fn \
		  -format [list $format -compression $saveimage(tiff,compress)]}
    }

    image delete $ph
}

# Process Cmds

proc ProcessSaveImageCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    # yes, really need this
    #    ProcessRealizeDS9
    UpdateDS9
    RealizeDS9

    set format {}
    set param {}
    set fn [lindex $var $i]
    if {$fn == {}} {
	return
    }

    # backward compatibility
    switch $fn {
	fits -
	eps -
	gif -
	tiff -
	jpeg -
	png {
	    set format $fn
	    set fn {}
	    incr i
	}
	jpg {
	    set format jpeg
	    set fn {}
	    incr i
	}
	tif {
	    set format tiff
	    set fn {}
	    incr i
	}
	mpeg {
	    # backward compatibility
	    global movie
	    incr i
	    set fn [lindex $var $i]
	    if {[string is integer -strict $fn]} {
		incr i
		set fn [lindex $var $i]
	    }
	    set movie(action) slice
	    Movie $fn
	}
    }

    # try again
    if {$fn == {}} {
	set fn [lindex $var $i]
	if {$fn == {}} {
	    return
	}

	if {[string is integer -strict $fn] || 
	    $fn == {none} || $fn == {jpeg} || 
	    $fn == {backbits} || $fn == {deflate}} {
	    set param $fn
	    set fn {}
	    incr i
	}
    }

    # one last time
    if {$fn == {}} {
	set fn [lindex $var $i]
	if {$fn == {}} {
	    return
	}
    }

    global saveimage
    if {$format == {}} {
	set format [ExtToFormat $fn]
    }

    if {$param == {}} {
	set param [string tolower [lindex $var [expr $i+1]]]
	switch $format {
	    fits -
	    eps -
	    gif -
	    png {}
	    jpeg {
		if {[string is integer -strict $param]} {
		    set saveimage(jpeg,quality) $param
		    incr i
		}
	    }
	    tiff {
		switch $param {
		    none -
		    jpeg -
		    packbits -
		    deflate {
			set saveimage(tiff,compress) $param
			incr i
		    }
		}
	    }
	}
    }

    global fitsfbox
    global epsfbox
    global giffbox
    global jpegfbox
    global tifffbox
    global pngfbox
    switch -- $format {
	fits {FileLast fitsfbox $fn}
	eps {FileLast epsfbox $fn}
	gif {FileLast giffbox $fn}
	jpeg {FileLast jpegfbox $fn}
	tiff {FileLast tifffbox $fn}
	png {FileLast pngfbox $fn}
    }
    SaveImage $fn $format
}

