#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Native ASDF support (see ASDF_NATIVE_SUPPORT_DESIGN.md, TODO.md Phase 2).
#
# This is the pixel-array half only: locate one block-sourced core/ndarray
# node in an ASDF file's YAML tree, decompress its binary block, and hand
# the decoded buffer to DS9's existing array/var load path (fitsy's
# FitsArrVar - see fitsy/var.C) - no cfitsio/fitsy ASDF-specific parsing,
# no new FitsImage subclass. The WCS half (Phase 1's AST/YamlChan bridge)
# is not wired in here yet - that is Phase 3.
#
# Deliberately reads the whole file into memory rather than seeking/
# streaming - fine for this milestone, but real production code (Phase 3+)
# should read only the tree text and the one target block's bytes instead.

proc AsdfTreeText {data} {
    set idx [string first "\xd3BLK" $data]
    if {$idx < 0} {
	return $data
    }
    return [string range $data 0 [expr {$idx-1}]]
}

# Returns a list of byte offsets, one per ASDF binary block, read from the
# file's trailing "#ASDF BLOCK INDEX" section.
proc AsdfBlockIndex {data} {
    set idx [string first "#ASDF BLOCK INDEX" $data]
    if {$idx < 0} {
	return {}
    }
    set tail [string range $data $idx end]
    set offsets {}
    foreach line [split $tail "\n"] {
	if {[regexp {^\s*-\s*(\d+)\s*$} $line -> off]} {
	    lappend offsets $off
	}
    }
    return $offsets
}

# Finds the core/ndarray node for `key:` at 2-space indent (i.e. a direct
# child of the top-level "roman:" mapping - true for Roman's data/wcs
# products, per real-file inspection in TODO.md Phase 1). Returns a list
# {source datatype byteorder shapelist} or {} if not found or not
# block-sourced.
proc AsdfFindNdarray {tree key} {
    set start [string first "\n  $key: !core/ndarray-" $tree]
    if {$start < 0} {
	return {}
    }
    # bounded to a handful of lines - source/datatype/byteorder/shape are
    # always this close together in practice (see utils/asdf_gwcs_probe)
    set body [string range $tree $start [expr {$start+300}]]

    if {![regexp {source:\s*(\d+)} $body -> source]} {
	return {}
    }
    if {![regexp {datatype:\s*(\w+)} $body -> datatype]} {
	return {}
    }
    set byteorder little
    regexp {byteorder:\s*(\w+)} $body -> byteorder
    if {![regexp {shape:\s*\[([0-9, ]+)\]} $body -> shapetext]} {
	return {}
    }
    set shapelist {}
    foreach s [split $shapetext ,] {
	lappend shapelist [string trim $s]
    }

    return [list $source $datatype $byteorder $shapelist]
}

# Reads and decompresses the ASDF binary block starting at `offset`.
# Returns {compression decodedBytes}, or {} on a parse error.
proc AsdfReadBlock {data offset} {
    if {[string range $data $offset [expr {$offset+3}]] != "\xd3BLK"} {
	return {}
    }
    binary scan [string range $data [expr {$offset+4}] [expr {$offset+5}]] Su hdrsize
    set hdr [string range $data [expr {$offset+6}] [expr {$offset+6+$hdrsize-1}]]

    set compression [string trimright [string range $hdr 4 7] "\x00"]
    binary scan [string range $hdr 8 31] WuWuWu allocated used decoded

    set payloadStart [expr {$offset+6+$hdrsize}]
    set payload [string range $data $payloadStart [expr {$payloadStart+$used-1}]]

    switch -- $compression {
	{} {
	    return [list {} [string range $payload 0 [expr {$decoded-1}]]]
	}
	zlib {
	    return [list zlib [zlib decompress $payload]]
	}
	lz4 {
	    return [list lz4 [AsdfLz4DecompressPayload $payload $decoded]]
	}
	default {
	    error "unsupported ASDF block compression: $compression"
	}
    }
}

# ASDF's lz4 framing (see asdf/_compression.py upstream, and TODO.md
# Phase 1): the payload is a sequence of chunks, each preceded by its own
# 4-byte big-endian compressed length. asdflz4decompress (ds9/unix/ds9.C)
# handles one chunk (which itself carries a leading 4-byte little-endian
# decoded-size prefix, python-lz4's own convention).
proc AsdfLz4DecompressPayload {payload decodedSize} {
    set out {}
    set pos 0
    set len [string length $payload]
    while {$pos < $len && [string length $out] < $decodedSize} {
	binary scan [string range $payload $pos [expr {$pos+3}]] Iu chunklen
	incr pos 4
	set chunk [string range $payload $pos [expr {$pos+$chunklen-1}]]
	incr pos $chunklen
	append out [asdflz4decompress $chunk]
    }
    return $out
}

# ASDF/numpy datatype name -> FITS BITPIX, per fitsy's [xdim=...,bitpix=...]
# array-header grammar (fitsy/parser.Y). Returns {} for unsupported types.
proc AsdfDatatypeToBitpix {datatype} {
    switch -- $datatype {
	float32 {return -32}
	float64 {return -64}
	int16 {return 16}
	int32 {return 32}
	int64 {return 64}
	uint8 {return 8}
	default {return {}}
    }
}

# Loads one ndarray from an ASDF file into the current frame, via the
# existing array/var load path. `key` is a top-level-under-"roman:" key
# name (default "data", Roman's fixed science-array path - see design
# doc). Returns 1 on success, 0 on failure (matching ProcessLoad).
proc AsdfLoadArray {fn {key data} {layer {}}} {
    global current
    global loadParam

    if {$current(frame) == {}} {
	CreateFrame
    }

    set fh [open $fn r]
    fconfigure $fh -translation binary -encoding iso8859-1
    set data [read $fh]
    close $fh

    set tree [AsdfTreeText $data]
    set node [AsdfFindNdarray $tree $key]
    if {$node == {}} {
	Error "[msgcat::mc {ASDF: could not find ndarray}] roman.$key"
	return 0
    }
    lassign $node source datatype byteorder shapelist

    set bitpix [AsdfDatatypeToBitpix $datatype]
    if {$bitpix == {}} {
	Error "[msgcat::mc {ASDF: unsupported ndarray datatype}] $datatype"
	return 0
    }

    set offsets [AsdfBlockIndex $data]
    set offset [lindex $offsets $source]
    if {$offset == {}} {
	Error "[msgcat::mc {ASDF: block index out of range}] $source"
	return 0
    }

    if {[catch {AsdfReadBlock $data $offset} blk]} {
	Error "[msgcat::mc {ASDF}] $blk"
	return 0
    }
    lassign $blk compression decoded

    # ASDF/numpy shape is [ny, nx, ...] (row-major); DS9's array header
    # wants xdim/ydim (fastest-varying axis first).
    set ydim [lindex $shapelist 0]
    set xdim [lindex $shapelist 1]
    set arch [expr {$byteorder eq "big" ? "big" : "little"}]

    global asdfRawVar
    set asdfRawVar $decoded

    set loadParam(file,type) array
    set loadParam(file,mode) {}
    set loadParam(load,type) var
    set loadParam(file,name) "\[xdim=$xdim,ydim=$ydim,bitpix=$bitpix,arch=$arch\]"
    set loadParam(var,name) asdfRawVar
    set loadParam(load,layer) $layer

    set rr [ProcessLoad]
    unset -nocomplain asdfRawVar
    return $rr
}
