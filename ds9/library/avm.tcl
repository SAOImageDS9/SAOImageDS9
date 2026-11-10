#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Astronomy Visualization Metadata (AVM)
# https://noirlab.edu/public/media/archives/techdocs/pdf/techdoc114.pdf
# AVM tags live in an XMP packet embedded in the image file. If the
# Spatial.* tags describe a full WCS, build a FITS WCS from them and
# apply it to a photo just loaded into the current frame.

# Called after a photo has been loaded into the current frame
# data is the raw bytes of the image file
proc AVMLoadPhoto {data} {
    global wcs
    global current
    global debug

    if {!$wcs(avm) || $current(frame) == {}} {
	return
    }

    set xmp [AVMExtractXMP $data]
    if {$xmp == {}} {
	return
    }

    set varname avmtags
    global $varname
    if {![AVMParseXMP $xmp $varname]} {
	return
    }

    set dims [$current(frame) get fits size]
    set hdr [AVMToWCS $varname [lindex $dims 0] [lindex $dims 1]]
    if {$hdr == {}} {
	return
    }

    if {$debug(tcl,avm)} {
	puts stderr "AVMLoadPhoto\n$hdr"
    }

    set cmd "$current(frame) wcs replace text 1 \{\{$hdr\}\}"
    if {[catch {
	switch [$current(frame) get type] {
	    rgb {
		set ch [$current(frame) get rgb channel]
		foreach cc {red green blue} {
		    $current(frame) rgb channel $cc
		    eval $cmd
		}
		$current(frame) rgb channel $ch
	    }
	    default {eval $cmd}
	}
    } err]} {
	if {$debug(tcl,avm)} {
	    puts stderr "AVMLoadPhoto Error: $err"
	}
	return
    }

    UpdateWCS
    CATUpdateWCS
    FPUpdateWCS
}

proc AVMReadFile {fn} {
    if {[catch {
	set ch [open $fn rb]
	set data [read $ch]
	close $ch
    }]} {
	return {}
    }
    return $data
}

# Return the XMP packet (as a string) embedded in the image bytes, or {}
proc AVMExtractXMP {data} {
    if {[string range $data 0 7] == "\x89PNG\r\n\x1a\n"} {
	set xmp [AVMExtractXMPPNG $data]
    } elseif {[string range $data 0 1] == "\xff\xd8"} {
	set xmp [AVMExtractXMPJPEG $data]
    } else {
	set xmp {}
    }

    # fall back to scanning for the packet (TIFF, GIF, ...)
    if {$xmp == {}} {
	set xmp [AVMExtractXMPScan $data]
    }

    if {$xmp == {}} {
	return {}
    }
    return [encoding convertfrom utf-8 $xmp]
}

# PNG: iTXt chunk with keyword 'XML:com.adobe.xmp'
proc AVMExtractXMPPNG {data} {
    set key "XML:com.adobe.xmp"
    set len [string length $data]
    set pos 8
    while {$pos+8 <= $len} {
	if {[binary scan $data @${pos}Iua4 size type] != 2} {
	    return {}
	}
	set start [expr {$pos+8}]
	set end [expr {$start+$size-1}]
	if {$end >= $len} {
	    return {}
	}

	switch -- $type {
	    iTXt {
		set chunk [string range $data $start $end]
		# keyword\0 flag method lang\0 tkey\0 text
		set nn [string first "\0" $chunk]
		if {$nn > 0 && [string range $chunk 0 $nn-1] == $key} {
		    binary scan $chunk @[expr {$nn+1}]cucu flag method
		    set ll [string first "\0" $chunk $nn+3]
		    set tt [string first "\0" $chunk $ll+1]
		    if {$ll < 0 || $tt < 0} {
			return {}
		    }
		    set text [string range $chunk $tt+1 end]
		    if {$flag} {
			if {[catch {zlib decompress $text} text]} {
			    return {}
			}
		    }
		    return $text
		}
	    }
	    IEND {return {}}
	}

	# length type data crc
	set pos [expr {$end+5}]
    }
    return {}
}

# JPEG: APP1 segment starting with 'http://ns.adobe.com/xap/1.0/\0'
proc AVMExtractXMPJPEG {data} {
    set sig "http://ns.adobe.com/xap/1.0/\0"
    set siglen [string length $sig]
    set len [string length $data]
    set pos 2
    while {$pos+4 <= $len} {
	binary scan $data @${pos}cucu ff marker
	if {$ff != 0xff} {
	    return {}
	}
	# fill bytes
	if {$marker == 0xff} {
	    incr pos
	    continue
	}
	# standalone markers
	if {$marker == 0x01 || ($marker >= 0xd0 && $marker <= 0xd7)} {
	    incr pos 2
	    continue
	}
	# SOS/EOI: XMP must come before image data
	if {$marker == 0xda || $marker == 0xd9} {
	    return {}
	}

	binary scan $data @[expr {$pos+2}]Su size
	set start [expr {$pos+4}]
	set end [expr {$pos+2+$size-1}]
	if {$marker == 0xe1 && \
		[string range $data $start [expr {$start+$siglen-1}]] == $sig} {
	    return [string range $data $start+$siglen $end]
	}
	set pos [expr {$end+1}]
    }
    return {}
}

proc AVMExtractXMPScan {data} {
    set start [string first "<x:xmpmeta" $data]
    if {$start < 0} {
	return {}
    }
    set tag "</x:xmpmeta>"
    set end [string first $tag $data $start]
    if {$end < 0} {
	return {}
    }
    return [string range $data $start [expr {$end+[string length $tag]-1}]]
}

# Parse an XMP packet. Each property of rdf:Description is stored into
# the global array varname, keyed by its local name (Spatial.Scale, ...).
# Properties may be attributes of rdf:Description, simple elements, or
# elements holding an rdf:Seq/Bag/Alt list.
proc AVMParseXMP {xmp varname} {
    upvar #0 $varname var
    global debug

    unset -nocomplain var

    set xml [xml::parser \
		 -characterdatacommand [list AVMCharCB $varname] \
		 -elementstartcommand [list AVMElemStartCB $varname] \
		 -elementendcommand [list AVMElemEndCB $varname] \
		 -ignorewhitespace 1 \
		]

    # TclXML (libxml2) does not report the end of an empty element
    # <foo/>, which would leave the element stack out of step.
    # Photoshop writes these, i.e. <rdf:li stEvt:action="saved"/>
    regsub -all {<([A-Za-z_][-\w.:]*)(\s[^<>]*)?/>} $xmp {<\1\2></\1>} xmp

    set var(,stack) {}
    set rr 1
    if {[catch {$xml parse $xmp} err]} {
	if {$debug(tcl,avm)} {
	    puts stderr "AVMParseXMP Error: $err"
	}
	set rr 0
    }
    $xml free

    foreach ii [array names var ,*] {
	unset var($ii)
    }
    return $rr
}

proc AVMLocalName {name} {
    regsub {^.*:} $name {} name
    return $name
}

proc AVMElemStartCB {varname name attlist args} {
    upvar #0 $varname var

    set name [AVMLocalName $name]
    set parent [lindex $var(,stack) end]
    lappend var(,stack) $name

    switch -- $name {
	Description {
	    foreach {key val} $attlist {
		set key [AVMLocalName $key]
		switch -- $key {
		    about {}
		    default {set var($key) $val}
		}
	    }
	}
	li {
	    set var(,li) {}
	}
	default {
	    if {$parent == {Description}} {
		set var(,prop) $name
		set var(,text) {}
		set var(,items) {}
	    }
	}
    }
}

proc AVMElemEndCB {varname name args} {
    upvar #0 $varname var

    set name [AVMLocalName $name]
    set var(,stack) [lrange $var(,stack) 0 end-1]

    switch -- $name {
	li {
	    if {[info exists var(,items)]} {
		lappend var(,items) [string trim $var(,li)]
	    }
	    unset -nocomplain var(,li)
	}
	default {
	    if {[info exists var(,prop)] && $name == $var(,prop) && \
		    [lindex $var(,stack) end] == {Description}} {
		if {[llength $var(,items)]} {
		    set var($name) $var(,items)
		} else {
		    set var($name) [list [string trim $var(,text)]]
		}
		unset var(,prop)
		unset -nocomplain var(,items)
	    }
	}
    }
}

proc AVMCharCB {varname data} {
    upvar #0 $varname var

    if {[info exists var(,li)]} {
	append var(,li) $data
    } elseif {[info exists var(,prop)]} {
	append var(,text) $data
    }
}

# Return a list of n reals for an AVM tag, or {}
# Older writers put all values into a single item: '1.0,2.0'
proc AVMGetReals {varname key nn} {
    upvar #0 $varname var

    if {![info exists var($key)]} {
	return {}
    }
    set rr {}
    foreach ii $var($key) {
	foreach vv [split $ii ",; \t\n"] {
	    if {$vv == {}} {
		continue
	    }
	    if {![string is double -strict $vv]} {
		return {}
	    }
	    lappend rr $vv
	}
    }
    if {[llength $rr] != $nn} {
	return {}
    }
    return $rr
}

proc AVMGetString {varname key} {
    upvar #0 $varname var

    if {![info exists var($key)]} {
	return {}
    }
    return [string trim [lindex $var($key) 0]]
}

# Build a FITS WCS (as KEY = value lines) from the AVM Spatial.* tags,
# for an image of width x height. Return {} if no usable WCS.
#
# AVM pixel coordinates are FITS-like, (1,1) at the center of the
# bottom-left pixel. FitsPhoto flips the image rows on load so the
# bottom row is FITS row 1, so no flip is needed here.
proc AVMToWCS {varname width height} {
    global debug

    # Position only means the WCS is approximate at best
    set quality [string tolower [AVMGetString $varname Spatial.Quality]]
    if {$quality == {position}} {
	if {$debug(tcl,avm)} {
	    puts stderr "AVMToWCS: Spatial.Quality is Position"
	}
	return {}
    }

    set crval [AVMGetReals $varname Spatial.ReferenceValue 2]
    set crpix [AVMGetReals $varname Spatial.ReferencePixel 2]
    set cdelt [AVMGetReals $varname Spatial.Scale 2]
    set cd [AVMGetReals $varname Spatial.CDMatrix 4]
    if {$crval == {} || $crpix == {} || ($cdelt == {} && $cd == {})} {
	if {$debug(tcl,avm)} {
	    puts stderr "AVMToWCS: incomplete Spatial tags"
	}
	return {}
    }

    # coordinate frame (default ICRS)
    set frame [string toupper [AVMGetString $varname Spatial.CoordinateFrame]]
    set radesys {}
    set equinox {}
    switch -- $frame {
	{} -
	ICRS {set axes {RA-- DEC-}; set radesys ICRS}
	FK5 {set axes {RA-- DEC-}; set radesys FK5; set equinox 2000}
	FK4 {set axes {RA-- DEC-}; set radesys FK4; set equinox 1950}
	GAL {set axes {GLON GLAT}}
	SGAL {set axes {SLON SLAT}}
	ECL {set axes {ELON ELAT}; set equinox 2000}
	default {
	    if {$debug(tcl,avm)} {
		puts stderr "AVMToWCS: unknown frame $frame"
	    }
	    return {}
	}
    }

    # deprecated, but override default if present
    if {$equinox != {}} {
	set eq [string toupper [AVMGetString $varname Spatial.Equinox]]
	regsub {^[JB]} $eq {} eq
	if {[string is double -strict $eq]} {
	    set equinox $eq
	}
    }

    # projection (default TAN)
    set proj [string toupper [AVMGetString $varname Spatial.CoordsystemProjection]]
    if {$proj == {}} {
	set proj TAN
    }
    if {![regexp {^[A-Z]{3}$} $proj]} {
	if {$debug(tcl,avm)} {
	    puts stderr "AVMToWCS: unknown projection $proj"
	}
	return {}
    }

    # the WCS may be for a larger (or smaller) version of this image
    set rx 1.
    set ry 1.
    set dim [AVMGetReals $varname Spatial.ReferenceDimension 2]
    if {$dim != {} && [lindex $dim 0]>0 && [lindex $dim 1]>0} {
	set rx [expr {double($width)/[lindex $dim 0]}]
	set ry [expr {double($height)/[lindex $dim 1]}]
	if {abs($rx-$ry) > .02*($rx+$ry)/2.} {
	    if {$debug(tcl,avm)} {
		puts stderr "AVMToWCS: image ${width}x${height} does not match Spatial.ReferenceDimension $dim"
	    }
	    return {}
	}
    }

    # rescale about the pixel edge, (0.5,0.5)
    set crpix1 [expr {([lindex $crpix 0]-.5)*$rx+.5}]
    set crpix2 [expr {([lindex $crpix 1]-.5)*$ry+.5}]

    set rr {}
    append rr "CTYPE1 = '[lindex $axes 0]-$proj'\n"
    append rr "CTYPE2 = '[lindex $axes 1]-$proj'\n"
    if {$radesys != {}} {
	append rr "RADESYS = '$radesys'\n"
    }
    if {$equinox != {}} {
	append rr "EQUINOX = $equinox\n"
    }
    append rr "CRVAL1 = [lindex $crval 0]\n"
    append rr "CRVAL2 = [lindex $crval 1]\n"
    append rr "CRPIX1 = $crpix1\n"
    append rr "CRPIX2 = $crpix2\n"

    # CDMatrix is deprecated, but when present it has proven more
    # reliable than Scale/Rotation, which some writers fill with
    # magnitudes only and a zero rotation. Same choice as pyavm.
    if {$cd != {}} {
	append rr "CD1_1 = [expr {[lindex $cd 0]/$rx}]\n"
	append rr "CD1_2 = [expr {[lindex $cd 1]/$ry}]\n"
	append rr "CD2_1 = [expr {[lindex $cd 2]/$rx}]\n"
	append rr "CD2_2 = [expr {[lindex $cd 3]/$ry}]\n"
    } else {
	set rot [AVMGetReals $varname Spatial.Rotation 1]
	if {$rot == {}} {
	    set rot 0
	}
	# sky parity (east left), as pyavm: positive Scale[1] values
	# in the wild are writer errors, not mirrored images
	set cdelt1 [expr {-abs([lindex $cdelt 0])/$rx}]
	set cdelt2 [expr {abs([lindex $cdelt 1])/$ry}]
	append rr "CDELT1 = $cdelt1\n"
	append rr "CDELT2 = $cdelt2\n"
	append rr "CROTA2 = $rot\n"
    }

    return $rr
}
