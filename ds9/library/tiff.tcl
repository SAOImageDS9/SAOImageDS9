#  Copyright (C) 2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# TIFF import (TODO_TIFF16.md). A TIFF loads one of two ways:
#
#   native  fitsy's FitsTiff, through the frame's `load tiff': the samples
#           at the depth they were stored (16 bit, 32 bit, float, ...)
#   photo   tkimg, through a Tk photo image, as GIF/JPEG/PNG do: 8 bits per
#           channel, colour images into an RGB frame
#
# Which one is decided per file by TIFFChoose, from pds9(tiff,mode) or a
# `native'/`photo'/`auto' given with the command:
#
#   auto    native when the native reader can load the file and its samples
#           are deeper than 8 bits or not unsigned; photo otherwise, so an
#           ordinary 8-bit or colour TIFF loads exactly as it always has
#   native  native whenever the native reader can load the file
#   photo   always photo
#
# Slice mode (load as the next slice of a cube) is photo only for now.
# The mask layer is native only: the photo path has no mask load.

proc TIFFChoose {fn how} {
    global pds9

    if {$how == {}} {
	set how $pds9(tiff,mode)
    }
    switch -- $how {
	native -
	auto {}
	default {return photo}
    }

    if {[catch {fitsy tiff loadable $fn} rr]} {
	return photo
    }
    lassign $rr ok deep why
    if {!$ok} {
	return photo
    }
    if {$how == {native} || $deep} {
	return native
    }
    return photo
}

# stdin and XPA/SAMP data arrive as bytes; libtiff wants a file
proc TIFFTempFile {data} {
    global ds9

    set dir $ds9(tmpdir)
    if {$dir == {}} {
	set dir [pwd]
    }
    set fn [file join $dir "ds9tiff[pid][clock microseconds].tif"]
    if {[catch {
	set ch [open $fn w]
	fconfigure $ch -translation binary -encoding iso8859-1
	puts -nonewline $ch $data
	close $ch
    }]} {
	return {}
    }
    return $fn
}

proc TIFFIsStdin {fn} {
    return [expr {[string range $fn 0 4] == "stdin" ||
		  [string range $fn 0 4] == "STDIN" ||
		  [string range $fn 0 0] == "-"}]
}

# Load path natively; fn is the name the frame shows (stdin, or the
# original name of XPA/SAMP data). Returns 1 on success.
proc TIFFLoadNative {path fn layer} {
    global loadParam

    set loadParam(file,type) tiff
    set loadParam(file,mode) {}
    set loadParam(load,type) alloc
    set loadParam(load,layer) $layer
    set loadParam(file,name) $fn
    set loadParam(file,fn) $path

    if {![ProcessLoad]} {
	return 0
    }
    # WCS from AVM/XMP tags, as for a photo load
    AVMLoadPhoto [AVMReadFile $path]
    return 1
}

proc TIFFNoMask {} {
    Error "[msgcat::mc {Unable to load}] TIFF: [msgcat::mc {a mask needs the full-depth reader, and this file can only be read as a photo}]"
}

proc ImportTIFFFile {fn mode {layer {}} {how {}}} {
    if {[TIFFIsStdin $fn]} {
	fconfigure stdin -translation binary -encoding iso8859-1
	set path [TIFFTempFile [read stdin]]
	if {$path == {}} {
	    Error [msgcat::mc {An error has occurred while loading}]
	    return
	}
	ImportTIFFAlloc $path stdin $mode $layer $how
	file delete -force $path
	return
    }

    if {$mode == {slice} || [TIFFChoose $fn $how] == {photo}} {
	if {$layer == {mask}} {
	    TIFFNoMask
	    return
	}
	ImportPhotoFile $fn $mode
	return
    }

    if {[TIFFLoadNative $fn $fn $layer]} {
	RecentAdd tiff $fn layer $layer
    }
}

# path holds the bytes; fn is the name to show (SAMP, stdin, XPA data)
proc ImportTIFFAlloc {path fn mode {layer {}} {how {}}} {
    if {$mode == {slice} || [TIFFChoose $path $how] == {photo}} {
	if {$layer == {mask}} {
	    TIFFNoMask
	    return 0
	}
	ImportPhotoAlloc $path $fn $mode
	return 1
    }
    return [TIFFLoadNative $path $fn $layer]
}

# XPA data on a channel. Returns 0, having loaded nothing, when the
# channel is empty (`xpaset -p ds9 tiff foo.tif' names a file instead).
proc ImportTIFFSocket {ch fn mode {layer {}} {how {}}} {
    fconfigure $ch -translation binary -encoding iso8859-1
    set data [read $ch]
    if {$data == {}} {
	return 0
    }
    set path [TIFFTempFile $data]
    if {$path == {}} {
	return 0
    }
    set rr [ImportTIFFAlloc $path $fn $mode $layer $how]
    file delete -force $path
    return $rr
}

# Process Cmds

proc ProcessTIFFCmd {varname iname ch fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(ch) $ch
    set parse(fn) $fn

    tiff::YY_FLUSH_BUFFER
    tiff::yy_scan_string [lrange $var $i end]
    tiff::yyparse
    incr i [expr $tiff::yycnt-1]
}

proc TIFFCmdLoad {param opts} {
    global parse

    set mode {}
    set layer {}
    set how {}
    foreach oo $opts {
	switch -- $oo {
	    slice {set mode slice}
	    mask {set layer mask}
	    native -
	    photo -
	    auto {set how $oo}
	}
    }

    if {$parse(ch) != {}} {
	# xpa
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    {Windows NT} -
	    Darwin {
		if {![ImportTIFFSocket $parse(ch) $param $mode $layer $how]} {
		    InitError xpa
		    ImportTIFFFile $param $mode $layer $how
		}
	    }
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    ImportTIFFAlloc $parse(fn) $param $mode $layer $how
	} else {
	    ImportTIFFFile $param $mode $layer $how
	}
    }
    FinishLoad
}

# Prefs

proc PrefsDialogTIFFMenu {m} {
    global pds9

    ThemeMenu $m
    $m add radiobutton \
	-label [msgcat::mc {Automatic: full depth when deeper than 8 bits}] \
	-variable pds9(tiff,mode) -value auto
    $m add radiobutton -label [msgcat::mc {Full Depth}] \
	-variable pds9(tiff,mode) -value native
    $m add radiobutton -label [msgcat::mc {8-bit Photo}] \
	-variable pds9(tiff,mode) -value photo
}
