#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SaveImageDef {} {
    global saveimage

    set saveimage(jpeg,quality) 75
    set saveimage(tiff,compress) none
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

    if {$fn == {}} {
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
    global tcl_platform
    global saveimage

    set geom [MacOSPhotoFix $ds9(top) 0 1]

    set rr [catch {image create photo -format window -data $ds9(canvas)} ph]
    if {$rr} {
	MacOSPhotoRestore $ds9(top) $geom
	Error [msgcat::mc {An error has occurred while creating}]
	return
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

    # reset if needed
    MacOSPhotoRestore $ds9(top) $geom
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

    saveimage::YY_FLUSH_BUFFER
    saveimage::yy_scan_string [lrange $var $i end]
    saveimage::yyparse
    incr i [expr $saveimage::yycnt-1]
}

proc SaveImageCmdLoad {format fn} {
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

proc SaveImageCmdMPEG {fn na} {
    global movie

    set movie(action) slice
    MovieCreate $fn
}
