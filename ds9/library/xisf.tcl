#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Native XISF loading (PixInsight's format) - TODO_XISF.md Phase 5.
#
# Everything about the format is in C++: fitsy/xisf.C reads the container,
# decodes the image and builds its FITS header and WCS, and the frame
# reaches it through `load xisf'. What is here is the UI and scripting
# surface, modelled on asdf.tcl's, and the two things the Tcl side needs
# from a file without loading it, both through tclfitsy over the same
# reader: what images it holds (the image chooser) and its XML header (the
# header viewer).
#
# Unlike ASDF, refusals are not re-checked here. ProcessLoad passes the
# frame's own reason through for xisf loads (load.tcl), so the C++ reader
# is the single place that decides - which matters because some refusals,
# a bad checksum or a subblock that decodes short, only show up while the
# block is being read.

# One row per <Image>, from the C++ reader:
#   {index id width height depth channels sampleFormat colorSpace
#    imageType loadable why}
proc XisfImages {fn} {
    return [fitsy xisf images $fn]
}

# The key that names an image on a load: its id if it has one, else its
# index - the same two forms FitsXisfFile::find accepts.
proc XisfImageKey {row} {
    lassign $row index id
    if {$id ne {}} {
	return $id
    }
    return $index
}

proc XisfImageLabel {row} {
    lassign $row index id ww hh dd nc fmt color type
    set geom "${ww}x${hh}"
    if {$dd > 1} {
	append geom "x$dd"
    }
    set label "#$index"
    if {$id ne {}} {
	append label " $id"
    }
    append label "  $geom"
    if {$nc > 1} {
	append label "  $nc channels"
    }
    append label "  $color $fmt"
    if {$type ne {}} {
	append label "  $type"
    }
    return $label
}

# Asks which image to load and sets `varname' to its key. Returns 1 to
# proceed, 0 to cancel - the convention OpenDialog expects, as for
# AsdfPathDialog. A file with one loadable image selects it without
# asking; one with none says why, from the reader's own reasons.
proc XisfImageDialog {fn varname} {
    upvar $varname var

    # empty: the first image, which a bare file name loads anyway
    set var {}

    if {[catch {XisfImages $fn} rows]} {
	Error "[msgcat::mc {Unable to load}] $fn: $rows"
	return 0
    }

    set loadable {}
    set reasons {}
    foreach row $rows {
	if {[lindex $row 9]} {
	    lappend loadable [list [XisfImageKey $row] [XisfImageLabel $row]]
	} else {
	    lappend reasons "[XisfImageLabel $row]: [lindex $row 10]"
	}
    }

    switch -- [llength $loadable] {
	0 {
	    if {$rows == {}} {
		Error "[msgcat::mc {XISF: the file contains no images}] $fn"
	    } else {
		Error "[msgcat::mc {XISF: no loadable images}] $fn\n[join $reasons \n]"
	    }
	    return 0
	}
	1 {
	    # the only one; named only if it is not the first image
	    set key [lindex [lindex $loadable 0] 0]
	    if {$key ne [XisfImageKey [lindex $rows 0]]} {
		set var $key
	    }
	    return 1
	}
    }

    set rr [DisplayHeaderListDialog $loadable [msgcat::mc {Select Image}] 60]
    if {$rr == {}} {
	return 0
    }
    set var [lindex $rr 0]
    return 1
}

proc LoadXisfFile {fn layer mode} {
    # "<file>:<image>", split the way AsdfSplitPath splits "<file>:<array>":
    # only if what precedes the last colon is a file, so a Windows drive
    # letter is never taken for a selector
    lassign [AsdfSplitPath $fn] base key
    return [XisfLoadImage $base $key $layer]
}

# Loads one image of an XISF file into the current frame through the
# frame's `load xisf' command. `key' is an image id or index; empty is
# the first image. Returns 1 on success, 0 on failure, like ProcessLoad.
proc XisfLoadImage {fn {key {}} {layer {}}} {
    global current
    global loadParam

    if {$current(frame) == {}} {
	CreateFrame
    }

    # What the Info panel, the filename display and `xpaget ds9 file' show:
    # the file, plus the image when one was chosen - the question a file
    # with several images raises, as ASDF's arrays do.
    set dispname [file tail $fn]
    if {$key ne {}} {
	append dispname ":$key"
    }

    # Provenance for Backup rides along in loadParam, which ProcessLoad
    # saves per frame (see BackupFrameLoad). Absolute, because a backup
    # may be written from any working directory.
    set loadParam(file,type) xisf
    set loadParam(file,mode) {}
    set loadParam(load,type) xisf
    set loadParam(file,name) $dispname
    set loadParam(load,layer) $layer
    set loadParam(xisf,file) [file normalize $fn]
    set loadParam(xisf,key) $key

    # An RGB frame loads an RGB image into its red, green and blue channels
    # at once (FrameRGB::loadXisfCmd); record that as the `rgb cube' load
    # it is, so ProcessLoad saves it against the frame rather than the
    # current channel. The rule is the C++ one, asked rather than copied.
    if {$layer eq {} && [$current(frame) get type] eq {rgb} &&
	![catch {fitsy xisf isrgb $fn $key} isrgb] && $isrgb} {
	set loadParam(file,mode) {rgb cube}
    }

    set rr [ProcessLoad]

    # The header viewer appends the file's XML header to the FITS header
    # FitsXisf built. Only for the image layer: a mask is an overlay, and
    # the frame keeps reporting the image as its file. After ProcessLoad,
    # which clears it for every load.
    if {$rr && $layer eq {}} {
	XisfSetFile $current(frame) [file normalize $fn]
    }
    return $rr
}

# The XISF file behind a frame, for the header viewer.
proc XisfSetFile {frame fn} {
    global xisf
    if {$frame != {}} {
	set xisf(file,$frame) $fn
    }
}

proc XisfClearFile {frame} {
    global xisf
    if {$frame != {}} {
	unset -nocomplain xisf(file,$frame)
    }
}

# The XML header of the frame's XISF file, indented and with long data
# elided (FitsXisfFile::prettyHeader), or {} for any other frame. Read
# afresh, not cached: it is only wanted when the viewer opens.
proc XisfHeaderText {frame} {
    global xisf

    if {$frame == {} || ![info exists xisf(file,$frame)]} {
	return {}
    }
    if {[catch {fitsy xisf header $xisf(file,$frame)} hh]} {
	return {}
    }
    return $hh
}

# --------------------------------------------------------------------
# Scripting surface: XPA, SAMP and the command line, as for ASDF.
# Grammar in ds9/parsers/xisfparser.tac + xisflex.fcl.

proc ProcessXisfCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    xisf::YY_FLUSH_BUFFER
    xisf::yy_scan_string [lrange $var $i end]
    xisf::yyparse
    incr i [expr $xisf::yycnt-1]
}

# No socket/stdin variant: the reader seeks to each data block by its
# absolute position, so it needs the file itself, not a stream.
proc XisfCmdLoad {param layer} {
    if {$param == {}} {
	Error [msgcat::mc {XISF: a filename is required}]
	return
    }

    LoadXisfFile $param $layer {}
    FinishLoad
}
