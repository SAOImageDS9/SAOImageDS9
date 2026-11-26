#  Copyright (C) 1999-2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Read compressed non-FITS files (regions, catalogs, plot data, contours)
# The format is taken from the file's first bytes, not its name.
# gzip is decoded in-process by Tcl's zlib, so it works on every platform.
# The others still need the matching program on the PATH.

# The whole file is decompressed into memory. [zlib push gunzip] would
# stream, but on a truncated file it never reaches eof, so [read] hangs.

proc DecompressType {fn} {
    if {[catch {open $fn rb} ch]} {
	return {}
    }
    set bb [read $ch 6]
    close $ch

    binary scan $bb H* hex
    switch -glob -- $hex {
	1f8b* {return gzip}
	425a68* {return bzip2}
	1f9d* {return compress}
	28b52ffd* {return zstd}
	04224d18* {return lz4}
	fd377a585a00* {return xz}
    }
    return {}
}

# foo.reg.gz -> foo.reg
proc DecompressStrip {fn} {
    switch -- [string tolower [file extension $fn]] {
	.gz - .bz - .bz2 - .z - .zst - .lz4 - .xz {return [file rootname $fn]}
    }
    return $fn
}

# the decompressed contents of fn, as bytes
proc DecompressData {fn} {
    set type [DecompressType $fn]
    switch -- $type {
	{} -
	gzip {
	    set ch [open $fn rb]
	    set data [read $ch]
	    close $ch
	    if {$type == {gzip}} {
		set data [zlib gunzip $data]
	    }
	    return $data
	}
	bzip2 {set cmds {{bzip2 -dc}}}
	compress {set cmds {{uncompress -c} {gzip -dc}}}
	zstd {set cmds {{zstd -dcq}}}
	lz4 {set cmds {{lz4 -dc}}}
	xz {set cmds {{xz -dc}}}
    }

    foreach cmd $cmds {
	set exe [auto_execok [lindex $cmd 0]]
	if {$exe != {}} {
	    set ch [open |[list {*}$exe {*}[lrange $cmd 1 end] $fn] r]
	    fconfigure $ch -translation binary
	    set data [read $ch]
	    # a failed program reports here
	    close $ch
	    return $data
	}
    }
    error "[msgcat::mc {no decoder for}] $type"
}

# a channel for reading fn as text, as [open $fn r] would give
proc DecompressOpen {fn} {
    global idecompress

    if {[DecompressType $fn] == {}} {
	return [open $fn r]
    }

    set key [incr idecompress(seq)]
    set idecompress(data,$key) [DecompressData $fn]
    set idecompress(pos,$key) 0

    set ch [chan create read [list DecompressChan $key]]
    fconfigure $ch -translation auto -encoding [encoding system]
    return $ch
}

# chan create handler: a read-only channel over idecompress(data,$key)
proc DecompressChan {key cmd chan args} {
    global idecompress

    switch -- $cmd {
	initialize {return {initialize finalize watch read}}
	finalize {
	    unset idecompress(data,$key) idecompress(pos,$key)
	}
	watch {}
	read {
	    set pos $idecompress(pos,$key)
	    set end [expr {$pos+[lindex $args 0]}]
	    set idecompress(pos,$key) $end
	    return [string range $idecompress(data,$key) $pos $end-1]
	}
    }
}

# For readers that need a file name. Returns fn itself if it isn't
# compressed, otherwise a temp file with the same name minus the
# compression suffix (contour set names come from it).
# Pass the result to DecompressCleanup when done.
proc DecompressToTmp {fn} {
    global idecompress

    if {[DecompressType $fn] == {}} {
	return $fn
    }

    set data [DecompressData $fn]

    set dir [tmpnam {}]
    file mkdir $dir
    set out [file join $dir [file tail [DecompressStrip $fn]]]
    set idecompress(tmp,$out) $dir

    if {[catch {
	set ch [open $out wb]
	puts -nonewline $ch $data
	close $ch
    } err]} {
	catch {close $ch}
	DecompressCleanup $out
	error $err
    }

    return $out
}

# only removes what DecompressToTmp made, never the original
proc DecompressCleanup {fn} {
    global idecompress

    if {[info exists idecompress(tmp,$fn)]} {
	catch {file delete -force $idecompress(tmp,$fn)}
	unset idecompress(tmp,$fn)
    }
}

proc DecompressCleanupAll {} {
    global idecompress

    foreach nn [array names idecompress tmp,*] {
	DecompressCleanup [string range $nn 4 end]
    }
}
