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
    global current
    global debug

    if {$current(frame) == {}} {
	return
    }

    set varname avmtags
    global $varname
    set found [AVMRead $data $varname]

    # keep the tags for the header dialog, tied to the file loaded
    AVMStoreFrame $current(frame) $varname

    if {!$found} {
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

# avmframe($frame) is {filename tags} for the photo last loaded
proc AVMStoreFrame {frame varname} {
    upvar #0 $varname var
    global avmframe

    unset -nocomplain avmframe($frame)
    if {[array size var]} {
	set id [$frame get fits count]
	set avmframe($frame) \
	    [list [$frame get fits file name $id] [array get var]]
    }
}

proc AVMClearFrame {frame} {
    global avmframe

    unset -nocomplain avmframe($frame)
}

# AVM tags shown after the FITS header, in AVM order:
# {label key} where key is the XMP property name
proc AVMHeaderTags {} {
    return {
	{Creator Source}
	{CreatorURL CiUrlWork}
	{Contact.Name creator}
	{Contact.Email CiEmailWork}
	{Contact.Telephone CiTelWork}
	{Contact.Address CiAdrExtadr}
	{Contact.City CiAdrCity}
	{Contact.StateProvince CiAdrRegion}
	{Contact.PostalCode CiAdrPcode}
	{Contact.Country CiAdrCtry}
	{Rights UsageTerms}
	{Title title}
	{Headline Headline}
	{Description description}
	{Subject.Category Subject.Category}
	{Subject.Name subject}
	{Distance Distance}
	{Distance.Notes Distance.Notes}
	{ReferenceURL ReferenceURL}
	{Credit Credit}
	{Date DateCreated}
	{ID ID}
	{Type Type}
	{Image.ProductQuality Image.ProductQuality}
	{PublicationID PublicationID}
	{ProposalID ProposalID}
	{Facility Facility}
	{Instrument Instrument}
	{Spectral.ColorAssignment Spectral.ColorAssignment}
	{Spectral.Band Spectral.Band}
	{Spectral.Bandpass Spectral.Bandpass}
	{Spectral.CentralWavelength Spectral.CentralWavelength}
	{Spectral.Notes Spectral.Notes}
	{Temporal.StartTime Temporal.StartTime}
	{Temporal.IntegrationTime Temporal.IntegrationTime}
	{DatasetID DatasetID}
	{Spatial.CoordinateFrame Spatial.CoordinateFrame}
	{Spatial.Equinox Spatial.Equinox}
	{Spatial.ReferenceValue Spatial.ReferenceValue}
	{Spatial.ReferenceDimension Spatial.ReferenceDimension}
	{Spatial.ReferencePixel Spatial.ReferencePixel}
	{Spatial.Scale Spatial.Scale}
	{Spatial.Rotation Spatial.Rotation}
	{Spatial.CoordsystemProjection Spatial.CoordsystemProjection}
	{Spatial.Quality Spatial.Quality}
	{Spatial.Notes Spatial.Notes}
	{Spatial.FITSheader Spatial.FITSheader}
	{Spatial.CDMatrix Spatial.CDMatrix}
	{Publisher Publisher}
	{PublisherID PublisherID}
	{ResourceID ResourceID}
	{ResourceURL ResourceURL}
	{RelatedResources RelatedResources}
	{MetadataDate MetadataDate}
	{MetadataVersion MetadataVersion}
    }
}

# Append the AVM tags of the photo in frame (fits id) to text widget txt
proc AVMHeaderInsert {frame id txt} {
    global avmframe

    if {![info exists avmframe($frame)]} {
	return
    }
    lassign $avmframe($frame) fn tags
    if {$fn != [$frame get fits file name $id]} {
	return
    }
    array set var $tags

    set width 30
    set indent [string repeat { } $width]
    $txt tag configure avmkey -foreground [ThemeBold]

    $txt insert end "\nAVM (Astronomy Visualization Metadata)\n" avmkey
    foreach tt [AVMHeaderTags] {
	lassign $tt label key
	if {![info exists var($key)]} {
	    continue
	}
	set val [join $var($key) {; }]
	if {[string trim $val] == {}} {
	    continue
	}
	set lines [AVMWrap $val [expr {80-$width}]]
	$txt insert end [format "%-${width}s" $label] avmkey
	$txt insert end "[lindex $lines 0]\n"
	foreach ll [lrange $lines 1 end] {
	    $txt insert end "$indent$ll\n"
	}
    }
}

# Word wrap str into lines of at most width chars (long words kept)
proc AVMWrap {str width} {
    set rr {}
    foreach para [split [string map {"\r\n" "\n" "\r" "\n"} $str] "\n"] {
	set line {}
	foreach word [regexp -all -inline {\S+} $para] {
	    if {$line == {}} {
		set line $word
	    } elseif {[string length "$line $word"] <= $width} {
		append line " $word"
	    } else {
		lappend rr $line
		set line $word
	    }
	}
	lappend rr $line
    }
    return $rr
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

# Extract and parse the AVM tags in the image bytes into the global
# array varname. Return 1 if any XMP was found and parsed.
proc AVMRead {data varname} {
    upvar #0 $varname var

    unset -nocomplain var
    set rr 0
    foreach xmp [AVMExtractXMP $data] {
	if {[AVMParseXMP $xmp $varname]} {
	    set rr 1
	}
    }
    return $rr
}

# Return the XMP packets (as strings) embedded in the image bytes.
# Usually one; a JPEG may add an ExtendedXMP packet.
proc AVMExtractXMP {data} {
    set head [string range $data 0 7]
    if {$head == "\x89PNG\r\n\x1a\n"} {
	set ll [list [AVMExtractXMPPNG $data]]
    } elseif {[string range $head 0 1] == "\xff\xd8"} {
	set ll [AVMExtractXMPJPEG $data]
    } elseif {[string range $head 0 1] == "II" || \
		  [string range $head 0 1] == "MM"} {
	set ll [list [AVMExtractXMPTIFF $data]]
    } elseif {[string range $head 0 5] == "GIF89a"} {
	set ll [list [AVMExtractXMPGIF $data]]
    } else {
	set ll {}
    }

    # fall back to scanning for the packet
    if {[lindex $ll 0] == {}} {
	set ll [list [AVMExtractXMPScan $data]]
    }

    set rr {}
    foreach xmp $ll {
	if {$xmp != {}} {
	    lappend rr [encoding convertfrom utf-8 $xmp]
	}
    }
    return $rr
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
# A packet over 64K continues in ExtendedXMP APP1 segments
# 'http://ns.adobe.com/xmp/extension/\0' GUID(32) length(4) offset(4) data,
# where GUID is given by xmpNote:HasExtendedXMP in the main packet.
# Return a list: main packet, and extended packet if any
proc AVMExtractXMPJPEG {data} {
    set sig "http://ns.adobe.com/xap/1.0/\0"
    set siglen [string length $sig]
    set ext "http://ns.adobe.com/xmp/extension/\0"
    set extlen [string length $ext]

    set main {}
    set parts {}
    set len [string length $data]
    set pos 2
    while {$pos+4 <= $len} {
	binary scan $data @${pos}cucu ff marker
	if {$ff != 0xff} {
	    break
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
	    break
	}

	binary scan $data @[expr {$pos+2}]Su size
	set start [expr {$pos+4}]
	set end [expr {$pos+2+$size-1}]
	if {$marker == 0xe1} {
	    if {[string range $data $start [expr {$start+$siglen-1}]] == $sig} {
		set main [string range $data $start+$siglen $end]
	    } elseif {[string range $data $start [expr {$start+$extlen-1}]] \
			  == $ext} {
		set ss [expr {$start+$extlen}]
		set guid [string range $data $ss [expr {$ss+31}]]
		binary scan $data @[expr {$ss+32}]IuIu total offset
		lappend parts [list $guid $offset \
				   [string range $data $ss+40 $end]]
	    }
	}
	set pos [expr {$end+1}]
    }

    if {$main == {}} {
	return {}
    }
    set rr [list $main]

    # attribute or element form
    if {[regexp {HasExtendedXMP\s*=\s*["']([0-9A-Fa-f]{32})} $main -> guid] || \
	    [regexp {HasExtendedXMP>\s*([0-9A-Fa-f]{32})} $main -> guid]} {
	set xx {}
	foreach pp [lsort -integer -index 1 $parts] {
	    lassign $pp gg offset chunk
	    if {$gg == $guid && $offset == [string length $xx]} {
		append xx $chunk
	    }
	}
	if {$xx != {}} {
	    lappend rr $xx
	}
    }
    return $rr
}

# TIFF: XMP is tag 700 (XMLPacket) in IFD0. Classic and BigTIFF.
proc AVMExtractXMPTIFF {data} {
    switch -- [string range $data 0 1] {
	II {set s s; set i i; set w w}
	MM {set s S; set i I; set w W}
	default {return {}}
    }
    binary scan $data @2${s}u version
    switch -- $version {
	42 {
	    binary scan $data @4${i}u ifd
	    binary scan $data @${ifd}${s}u num
	    set pos [expr {$ifd+2}]
	    set entry 12
	    set inline 4
	    set fmt "${s}u${s}u${i}u${i}u"
	}
	43 {
	    binary scan $data @8${w}u ifd
	    binary scan $data @${ifd}${w}u num
	    set pos [expr {$ifd+8}]
	    set entry 20
	    set inline 8
	    set fmt "${s}u${s}u${w}u${w}u"
	}
	default {return {}}
    }

    set len [string length $data]
    for {set ii 0} {$ii<$num && $pos+$entry <= $len} {incr ii} {
	binary scan $data @${pos}$fmt tag type count offset
	if {$tag == 700} {
	    # BYTE or UNDEFINED, too large to fit in the entry
	    if {($type == 1 || $type == 7) && $count > $inline && \
		    $offset+$count <= $len} {
		return [string range $data $offset [expr {$offset+$count-1}]]
	    }
	    return {}
	}
	incr pos $entry
    }
    return {}
}

# GIF: application extension 'XMP DataXMP'. The packet is stored raw,
# followed by a 258 byte 'magic trailer' (0x01 0xff 0xfe ... 0x00 0x00)
# so the bytes also parse as sub-blocks.
proc AVMExtractXMPGIF {data} {
    set len [string length $data]

    # logical screen descriptor, global color table
    binary scan $data @10cu flags
    set pos 13
    if {$flags & 0x80} {
	incr pos [expr {3*(1<<(($flags&0x07)+1))}]
    }

    while {$pos < $len} {
	binary scan $data @${pos}cu block
	switch -- $block {
	    33 {
		# extension
		binary scan $data @[expr {$pos+1}]cu label
		set ss [expr {$pos+2}]
		if {$label == 0xff && \
			[string range $data $ss [expr {$ss+11}]] \
			== "\x0bXMP DataXMP"} {
		    set start [expr {$ss+12}]
		    set end [string first "\x01\xff\xfe" $data $start]
		    if {$end < 0} {
			return {}
		    }
		    return [string range $data $start [expr {$end-1}]]
		}
		set pos [AVMSkipGIFSubBlocks $data $ss]
	    }
	    44 {
		# image descriptor, local color table, lzw code size
		binary scan $data @[expr {$pos+9}]cu flags
		incr pos 10
		if {$flags & 0x80} {
		    incr pos [expr {3*(1<<(($flags&0x07)+1))}]
		}
		set pos [AVMSkipGIFSubBlocks $data [expr {$pos+1}]]
	    }
	    default {
		# trailer, or not a block we know
		return {}
	    }
	}
    }
    return {}
}

proc AVMSkipGIFSubBlocks {data pos} {
    set len [string length $data]
    while {$pos < $len} {
	binary scan $data @${pos}cu size
	incr pos
	if {$size == 0} {
	    break
	}
	incr pos $size
    }
    return $pos
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

# Parse an XMP packet. Each property of rdf:Description is added to
# the global array varname, keyed by its local name (Spatial.Scale, ...).
# Properties may be attributes of rdf:Description, simple elements, or
# elements holding an rdf:Seq/Bag/Alt list.
proc AVMParseXMP {xmp varname} {
    upvar #0 $varname var
    global debug

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

# Store the attributes of an element as properties
proc AVMElemAttrs {varname attlist} {
    upvar #0 $varname var

    foreach {key val} $attlist {
	set key [AVMLocalName $key]
	switch -- $key {
	    about -
	    parseType -
	    lang {}
	    default {set var($key) [list $val]}
	}
    }
}

proc AVMElemStartCB {varname name attlist args} {
    upvar #0 $varname var

    set name [AVMLocalName $name]
    set parent [lindex $var(,stack) end]
    lappend var(,stack) $name

    switch -- $name {
	Description {AVMElemAttrs $varname $attlist}
	li {set var(,li) {}}
	Seq -
	Bag -
	Alt {}
	default {
	    if {$parent == {Description}} {
		set var(,prop) $name
		set var(,text) {}
		set var(,items) {}
		# struct with fields as attributes
		AVMElemAttrs $varname $attlist
	    } elseif {[info exists var(,prop)] && $parent == $var(,prop)} {
		# struct field (rdf:parseType="Resource")
		set var(,field) $name
		set var(,ftext) {}
	    }
	}
    }
}

proc AVMElemEndCB {varname name args} {
    upvar #0 $varname var

    set name [AVMLocalName $name]
    set var(,stack) [lrange $var(,stack) 0 end-1]

    if {[info exists var(,field)] && $name == $var(,field)} {
	set var($name) [list [string trim $var(,ftext)]]
	unset var(,field)
	return
    }

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
		set text [string trim $var(,text)]
		if {[llength $var(,items)]} {
		    set var($name) $var(,items)
		} elseif {$text != {} || ![info exists var($name)]} {
		    set var($name) [list $text]
		}
		unset var(,prop)
		unset -nocomplain var(,items)
	    }
	}
    }
}

proc AVMCharCB {varname data} {
    upvar #0 $varname var

    if {[info exists var(,field)]} {
	append var(,ftext) $data
    } elseif {[info exists var(,li)]} {
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
