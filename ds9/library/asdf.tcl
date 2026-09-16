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

# ASDF's first line is a mandatory ASCII magic, "#ASDF <version>" (see the
# asdf-standard file_layout spec). Checked before anything else so that a
# FITS file - or any other non-ASDF file - handed to the ASDF loader is
# told what is actually wrong, rather than failing further down with a
# confusing "could not find ndarray" from the tree walk.
proc AsdfIsAsdf {data} {
    return [string equal -length 6 {#ASDF } $data]
}

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
#
# -16 is not a FITS BITPIX at all - it is fitsy's own private code for
# unsigned 16-bit (fitsy/parser.Y's compact atype rule maps 'u' to it, and
# FitsFile::validParams in fitsy/file.C accepts it alongside the real FITS
# values). The full set fitsy accepts is exactly {8,16,-16,32,64,-32,-64},
# so uint32/uint64/int8/float16 have no representation here and are
# deliberately left unmapped rather than silently coerced to a narrower or
# differently-signed type. Real Roman arrays do hit that gap: a *_segm.asdf
# product's roman.data is uint32, and a *_cal.asdf's roman.var_poisson is
# float16 - see TODO.md Phase 3.
proc AsdfDatatypeToBitpix {datatype} {
    switch -- $datatype {
	float32 {return -32}
	float64 {return -64}
	int16 {return 16}
	uint16 {return -16}
	int32 {return 32}
	int64 {return 64}
	uint8 {return 8}
	default {return {}}
    }
}

# Native ASDF/GWCS WCS attachment (TODO.md Phase 3). Ported from the Phase 1
# Python spike (utils/asdf_gwcs_probe/extract_subtree.py,
# resolve_ndarray.py) - see PHASE3_WCS_HANDOFF.md for the full design and
# why this goes in via the frame's existing `wcs replace <which> <filename>`
# command (a temp file, NOT `wcs replace text ...` - the latter's STRING
# token is unescaped and truncates on YAML's own literal "/{/} characters).

# Finds `$indent$key: ...` (default 2-space indent - a direct child of the
# top-level "roman:" mapping) and returns its dedented, standalone subtree
# text (still tagged with its original key name, not yet renamed to
# "wcs:"). Returns {} if not found. Mirrors extract_subtree.py's
# extract_key_subtree. `indent` is a parameter (not hardcoded to 2 spaces)
# because real Roman files put the WCS at different nesting depths
# depending on product type - see AsdfExtractWcsText below.
proc AsdfExtractKeySubtree {tree key {indent "  "}} {
    set marker "\n$indent$key:"
    set start [string first $marker $tree]
    if {$start < 0} {
	return {}
    }
    set bodyStart [expr {$start + 1}]
    set bodyEnd [string length $tree]
    set nextKeyRe "\n$indent\[A-Za-z_\]\[A-Za-z0-9_\]*:"
    if {[regexp -indices -start $bodyStart -- $nextKeyRe $tree m]} {
	set bodyEnd [lindex $m 0]
    }
    set subtree [string trimright \
		     [string range $tree $bodyStart [expr {$bodyEnd - 1}]]]
    if {[string range $subtree end-2 end] eq "..."} {
	set subtree [string trimright [string range $subtree 0 end-3]]
    }
    set n [string length $indent]
    set lines {}
    foreach line [split $subtree "\n"] {
	if {[string range $line 0 [expr {$n - 1}]] eq $indent} {
	    lappend lines [string range $line $n end]
	} else {
	    lappend lines $line
	}
    }
    return "[join $lines "\n"]\n"
}

# A proper GWCS object's tag is `!<tag:...:gwcs/wcs-...>`; a bare transform
# (e.g. a pre-launch/pysiaf distortion file's coordinate_distortion_transform,
# tagged !transform/...) has no such wrapper and needs one synthesized -
# astRead() rejects a bare transform as a document root outright (TODO.md
# Phase 1).
proc AsdfIsBareTransform {subtree} {
    set firstLine [lindex [split $subtree "\n"] 0]
    return [expr {![string match "*gwcs/wcs*" $firstLine]}]
}

# `key: !<gwcs/wcs-...> ...` -> `wcs: !<gwcs/wcs-...> ...` (rename the
# top-level key only; astRead() dispatches on this shape directly).
proc AsdfAsWcsShell {key subtree} {
    set idx [string first "$key:" $subtree]
    if {$idx < 0} {
	return $subtree
    }
    return [string replace $subtree $idx [expr {$idx + [string length $key]}] \
		"wcs:"]
}

# Wraps a bare `key: !transform/...` value in a minimal synthetic 2-step
# GWCS shell (detector frame carrying the real transform, feeding a bare
# terminal frame) that astRead() does accept. Mirrors
# extract_subtree.py's SHELL_TEMPLATE/as_wrapped_transform exactly.
proc AsdfWrapBareTransform {subtree} {
    set colon [string first ":" $subtree]
    set valueOnly [string trimleft [string range $subtree \
					 [expr {$colon + 1}] end]]
    set lines [split [string trimright $valueOnly "\n"] "\n"]
    set rest {}
    foreach line [lrange $lines 1 end] {
	if {[string trim $line] eq {}} {
	    lappend rest $line
	} else {
	    lappend rest "    $line"
	}
    }
    set reindented "[lindex $lines 0]\n[join $rest "\n"]"

    set template {wcs: !<tag:stsci.edu:gwcs/wcs-1.4.0>
  name: distortion_shell
  steps:
  - !<tag:stsci.edu:gwcs/step-1.3.0>
    frame: !<tag:stsci.edu:gwcs/frame2d-1.2.0>
      axes_names: [x, y]
      axes_order: [0, 1]
      axis_physical_types: ["custom:x", "custom:y"]
      name: detector
      unit: [!unit/unit-1.0.0 pixel, !unit/unit-1.0.0 pixel]
    transform: @TRANSFORM@
  - !<tag:stsci.edu:gwcs/step-1.3.0>
    frame: !<tag:stsci.edu:gwcs/frame2d-1.2.0>
      axes_names: [v2, v3]
      axes_order: [0, 1]
      axis_physical_types: ["custom:v2", "custom:v3"]
      name: output
      unit: [!unit/unit-1.0.0 arcsec, !unit/unit-1.0.0 arcsec]
}
    return [string map [list @TRANSFORM@ $reindented] $template]
}

# ASDF/numpy datatype+byteorder -> a Tcl `binary scan` format spec (see
# tcl9.0/doc/binary.n: lowercase little-endian/uppercase big-endian, `u`
# suffix unsigned, `r`/`R` float32, `q`/`Q` float64 - the same convention
# already established for AsdfReadBlock's header parsing above). Returns
# {} for unsupported types.
proc AsdfBinaryFmt {datatype byteorder count} {
    set big [expr {$byteorder eq "big"}]
    switch -- $datatype {
	float64 {set code [expr {$big ? "Q" : "q"}]}
	float32 {set code [expr {$big ? "R" : "r"}]}
	int64   {set code [expr {$big ? "W" : "w"}]}
	uint64  {set code [expr {$big ? "Wu" : "wu"}]}
	int32   {set code [expr {$big ? "I" : "i"}]}
	uint32  {set code [expr {$big ? "Iu" : "iu"}]}
	int16   {set code [expr {$big ? "S" : "s"}]}
	uint16  {set code [expr {$big ? "Su" : "su"}]}
	int8    {set code "c"}
	uint8   {set code "cu"}
	default {return {}}
    }
    return "$code$count"
}

# Formats a flat list of decoded numeric values as a YAML-nested list
# matching `shape`, indented under `indent`. Mirrors resolve_ndarray.py's
# _nest.
proc AsdfNest {vals shape indent} {
    if {[llength $shape] <= 1} {
	return "\[[join $vals {, }]\]"
    }
    set cols 1
    foreach s [lrange $shape 1 end] {
	set cols [expr {$cols * $s}]
    }
    set lines {}
    for {set r 0} {$r < [lindex $shape 0]} {incr r} {
	set rowVals [lrange $vals [expr {$r*$cols}] [expr {$r*$cols+$cols-1}]]
	if {[llength $shape] == 2} {
	    lappend lines "$indent- \[[join $rowVals {, }]\]"
	} else {
	    lappend lines "$indent- [AsdfNest $rowVals [lrange $shape 1 end] \
					  "$indent  "]"
	}
    }
    return "\n[join $lines "\n"]"
}

# Decodes `decoded` (raw bytes for one already-decompressed block) per
# `datatype`/`byteorder`/`shapelist` and nests it as a YAML `data:` literal.
proc AsdfNestValues {decoded datatype byteorder shapelist indent} {
    set n 1
    foreach s $shapelist {
	set n [expr {$n * $s}]
    }
    set fmt [AsdfBinaryFmt $datatype $byteorder $n]
    if {$fmt eq {}} {
	error "unsupported ndarray datatype: $datatype"
    }
    binary scan $decoded $fmt vals
    return [AsdfNest $vals $shapelist $indent]
}

# Rewrites every block-sourced `!core/ndarray-*` node in `text` (a GWCS
# subtree, already extracted/renamed/wrapped) as an inline `data:` literal,
# using `data`'s (the FULL raw file's) real decoded block bytes - AST's
# YamlChan only accepts inline ndarrays, never block-sourced ones (design
# doc SS7b). Real Roman GWCS documents always use block-sourced ndarrays,
# even for tiny coefficient matrices - this is required, not an edge case
# (TODO.md Phase 1). Mirrors resolve_ndarray.py's resolve().
proc AsdfResolveNdarrays {text data} {
    set offsets [AsdfBlockIndex $data]
    # Two Tcl-regex-specific gotchas fixed here, both confirmed the hard
    # way against a real multi-hundred-line GWCS subtree, not assumed:
    # (1) Tcl's "." matches newlines too, unlike most other regex flavors
    #     (no -line option is in play here) - a naive ".*\n" per mid-line
    #     doesn't stop at end-of-line at all, letting a single "iteration"
    #     swallow arbitrarily many real lines. Fixed by using "[^\n]*"
    #     instead of ".*" so each iteration is truly one physical line.
    # (2) Tcl's ARE engine picks an overall leftmost-LONGEST match (POSIX
    #     semantics), not Perl-style leftmost-shortest, so even a properly
    #     line-bounded but unrestricted "*" mid-loop would still prefer
    #     matching through many more (non-"shape:") lines than intended
    #     before hitting a later, wrong "shape:" occurrence. Fixed with an
    #     explicit "(?!shape:)" negative lookahead so a "shape:" line can
    #     never be consumed by the generic loop in the first place, which
    #     removes the ambiguity outright instead of relying on greediness.
    set re {!core/ndarray-([0-9.]+)\n([ \t]+)source:[ \t]*([0-9]+)[ \t]*\n((?:[ \t]+(?!shape:)[A-Za-z_]+:[^\n]*\n)*)([ \t]+)shape:[ \t]*\[([0-9, ]+)\][ \t]*\n}
    set result {}
    set pos 0
    while {[regexp -indices -start $pos -- $re $text m verIdx indentIdx \
		srcIdx midIdx indent2Idx shapeIdx]} {
	lassign $m mStart mEnd
	append result [string range $text $pos [expr {$mStart - 1}]]

	set ver [string range $text {*}$verIdx]
	set indent [string range $text {*}$indentIdx]
	set source [string range $text {*}$srcIdx]
	set mid [string range $text {*}$midIdx]
	set indent2 [string range $text {*}$indent2Idx]
	set shapeText [string range $text {*}$shapeIdx]

	set datatype float64
	regexp {datatype:[ \t]*([A-Za-z0-9_]+)} $mid -> datatype
	set byteorder little
	regexp {byteorder:[ \t]*([A-Za-z0-9_]+)} $mid -> byteorder

	set shapelist {}
	foreach s [split $shapeText ,] {
	    lappend shapelist [string trim $s]
	}

	set offset [lindex $offsets $source]
	lassign [AsdfReadBlock $data $offset] compression decoded
	set dataRepr [AsdfNestValues $decoded $datatype $byteorder \
			  $shapelist $indent]

	append result "!core/ndarray-$ver\n${indent}data: $dataRepr\n$mid${indent2}shape: \[$shapeText\]\n"
	set pos [expr {$mEnd + 1}]
    }
    append result [string range $text $pos end]
    return $result
}

# Top-level Phase 3 entry point: extracts a standalone, AST-ready `wcs:`
# YAML document from the file's tree text, trying each candidate key in
# turn (the key name/nesting isn't fixed across Roman product types -
# TODO.md Phase 1). Returns {} if none of the candidate keys are found.
# `data` is the full raw file bytes (needed to resolve embedded ndarrays).
#
# Two real, confirmed shapes, tried in order:
#  - `keys`, at 2-space indent directly under "roman:" - the small
#    WCS-only distribution products (e.g. Roman Data Workshop's
#    "*_wcs.asdf" files) use this for wcs_l1/wcs_l2.
#  - `metaKeys`, at 4-space indent nested under "roman: {meta: {...}}" -
#    the design doc's original roman.meta.wcs assumption, confirmed
#    against a real full science-product "*_cal.asdf" file.
proc AsdfExtractWcsText {tree data {keys {wcs wcs_l2 wcs_l1}} {metaKeys wcs}} {
    set subtree {}
    foreach key $keys {
	set subtree [AsdfExtractKeySubtree $tree $key]
	if {$subtree ne {}} {
	    break
	}
    }
    if {$subtree eq {}} {
	foreach key $metaKeys {
	    set subtree [AsdfExtractKeySubtree $tree $key "    "]
	    if {$subtree ne {}} {
		break
	    }
	}
    }
    if {$subtree eq {}} {
	return {}
    }

    if {[AsdfIsBareTransform $subtree]} {
	set doc [AsdfWrapBareTransform $subtree]
    } else {
	set doc [AsdfAsWcsShell $key $subtree]
    }

    # The standalone document needs its own "%TAG !" directive - real GWCS
    # subtrees use the short-form tag shorthand (e.g. !transform/compose-
    # 1.4.0) throughout, not just at the top level, and that shorthand only
    # expands to the full tag:stsci.edu:asdf:... form in the presence of
    # this directive. Mirrors extract_subtree.py's HEADER constant exactly.
    set header "#ASDF 1.0.0\n%YAML 1.1\n%TAG ! tag:stsci.edu:asdf/\n--- !core/asdf-1.1.0\n"

    return [AsdfResolveNdarrays "$header$doc" $data]
}

# --------------------------------------------------------------------
# Header/metadata display (TODO.md Phase 3, design doc SS8 point 4).
#
# An ASDF file's YAML tree *is* its header, and it is already exactly the
# right thing to show verbatim: ASDF never writes an array inline, only a
# `source: N` reference alongside its datatype/shape, so even the 197MB
# Roman cal file's tree is ~60KB of readable YAML. So there is no card
# list to build and no "report arrays by shape/dtype" pass to write - the
# format did that for us.
#
# The text is cached here in Tcl rather than on the C++ side because
# nothing under tksao/ ever sees the ASDF container at all: the frame
# receives only a raw pixel buffer through the array/var load path, with a
# synthetic minimal FITS header that has nothing worth displaying. Keyed
# by frame, and cleared whenever that frame is reloaded or unloaded (see
# AsdfClearTree's callers in load.tcl and frame.tcl) so a FITS file loaded
# over an ASDF one can never show the previous file's tree.

proc AsdfSetTree {frame fn tree} {
    global asdf

    if {$frame == {}} {
	return
    }
    set asdf(tree,$frame) $tree
    set asdf(file,$frame) $fn
}

proc AsdfHasTree {frame} {
    global asdf

    return [expr {$frame != {} && [info exists asdf(tree,$frame)]}]
}

proc AsdfGetTree {frame} {
    global asdf

    if {![AsdfHasTree $frame]} {
	return {}
    }
    return $asdf(tree,$frame)
}

# Closes the viewer window without dropping the cache - what the `header
# close` command wants. DestroyHeader/DestroyHeaderOne in header.tcl only
# know about the hd-* FITS header windows, so this is a separate teardown.
proc AsdfDestroyHeader {frame} {
    if {$frame == {}} {
	return
    }

    set varname "asdf-$frame"
    global $varname
    if {[info exists $varname]} {
	SimpleTextDestroy $varname
    }
}

# Drops the cache and closes the viewer with it, so it can't keep showing
# a file the frame no longer holds.
proc AsdfClearTree {frame} {
    global asdf

    if {$frame == {}} {
	return
    }
    unset -nocomplain asdf(tree,$frame)
    unset -nocomplain asdf(file,$frame)

    AsdfDestroyHeader $frame
}

# Shows the cached tree in the same SimpleTextDialog widget the FITS
# header viewer uses (header.tcl's DisplayHeader), so it inherits that
# window's Save/Print/Find machinery for free. No keyword tagging: that
# loop tags a fixed 8-character column, which is a FITS card convention
# with no YAML equivalent.
proc DisplayAsdfHeader {frame} {
    global asdf

    if {![AsdfHasTree $frame]} {
	return
    }

    set varname "asdf-$frame"
    global $varname

    SimpleTextDialog $varname [file tail $asdf(file,$frame)] 80 40 \
	insert top $asdf(tree,$frame)
}

# Hands an extracted, self-contained GWCS document to the current frame
# through the existing `wcs replace <which> <filename>` command. The YAML
# travels via a temp file, deliberately not through `wcs replace text ...`:
# that overload re-lexes its argument with tksao/frame/lex.L, whose STRING
# token rules ("[^"]*" and {[^}]*}) have no escape mechanism and truncate on
# the literal " { } characters every real GWCS document contains. Only the
# temp file's name - short and delimiter-free - reaches the lexer this way.
# See PHASE3_WCS_HANDOFF.md.
#
# `which` is 1-indexed: Base::findAllFits(int which) loops on `while (ptr &&
# which)`, so 0 means "stop immediately" and always returns NULL, which
# surfaces as an empty-message TCL_ERROR. 1 is also ds9/library/wcs.tcl's
# own dwcs(ext) convention.
#
# Errors propagate to the caller rather than being swallowed here - the
# caller decides whether a WCS failure is fatal.
proc AsdfAttachWcs {yamltext} {
    global current

    set ch [file tempfile tmpfn]
    fconfigure $ch -translation binary -encoding utf-8
    puts -nonewline $ch $yamltext
    close $ch

    try {
	$current(frame) wcs replace 1 $tmpfn
    } finally {
	file delete -force $tmpfn
    }
}

# The Open/OpenDialog-facing entry point (see ds9/library/open.tcl's Open
# switch), deliberately mirroring LoadFitsFile's {fn layer mode} signature
# so ASDF dispatches like any other format rather than needing its own
# path through the dialog code.
#
# `mode` has no ASDF meaning and is accepted only to keep that signature:
# for FITS it selects load variants (slice, mosaic flavors) that are all
# FITS-container concepts. The array key is Roman's fixed `roman.data`;
# arbitrary in-file paths are Phase 4 scope.
proc LoadAsdfFile {fn layer mode} {
    return [AsdfLoadArray $fn data $layer]
}

# --------------------------------------------------------------------
# Scripting surface (TODO.md Phase 3, design doc SS8 point 5) - the XPA /
# SAMP / command-line entry point, parallel to fits.tcl's ProcessFitsCmd.
# Grammar in ds9/parsers/asdfparser.tac + asdflex.fcl (taccle/fickle, the
# in-tree pure-Tcl generators - nothing here goes near bison/flex).

proc ProcessAsdfCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    asdf::YY_FLUSH_BUFFER
    asdf::yy_scan_string [lrange $var $i end]
    asdf::yyparse
    incr i [expr $asdf::yycnt-1]
}

# Unlike FitsCmdLoad there is no socket/stdin variant. The container
# reader resolves an ndarray's `source: N` against the block index written
# at the *end* of the file, so it needs the whole file addressable, not a
# forward-only byte stream - a piped ASDF would have to be spooled to a
# temp file first and gains nothing over naming the file directly. Say so
# rather than silently doing nothing when handed no filename.
proc AsdfCmdLoad {param layer} {
    if {$param == {}} {
	Error [msgcat::mc {ASDF: a filename is required}]
	return
    }

    LoadAsdfFile $param $layer {}
    FinishLoad
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

    if {[catch {
	set fh [open $fn r]
	fconfigure $fh -translation binary -encoding iso8859-1
	set data [read $fh]
	close $fh
    } msg]} {
	Error "[msgcat::mc {Unable to load}] $fn: $msg"
	return 0
    }

    if {![AsdfIsAsdf $data]} {
	Error "[msgcat::mc {ASDF: not an ASDF file}] $fn"
	return 0
    }

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

    # Only rank-2 arrays map onto the array/var load path's xdim/ydim pair.
    # Real Roman files do carry higher-rank siblings - roman.amp33 is
    # [10,4096,128] and roman.border_ref_pix_top is [10,4,4096] - and
    # without this check those load as a wrong 2-d shape instead of
    # failing, since the extra axes simply fall off the end of xdim/ydim.
    if {[llength $shapelist] != 2} {
	Error "[msgcat::mc {ASDF: unsupported ndarray rank}] roman.$key \[[join $shapelist {, }]\]"
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
    if {$blk == {}} {
	Error "[msgcat::mc {ASDF: no binary block at offset}] $offset"
	return 0
    }
    lassign $blk compression decoded

    # ASDF/numpy shape is [ny, nx, ...] (row-major); DS9's array header
    # wants xdim/ydim (fastest-varying axis first).
    set ydim [lindex $shapelist 0]
    set xdim [lindex $shapelist 1]
    set arch [expr {$byteorder eq "big" ? "big" : "little"}]

    # fitsy's array path trusts the declared dimensions and never checks
    # the buffer against them, so a block that decompressed short would
    # otherwise render as real pixels followed by whatever memory follows.
    set want [expr {$xdim * $ydim * (abs($bitpix) / 8)}]
    if {[string length $decoded] < $want} {
	Error "[msgcat::mc {ASDF: block too short for declared shape}] roman.$key"
	return 0
    }

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

    # Cache the YAML tree for the header viewer. Deliberately after
    # ProcessLoad, not before: ProcessLoad clears any previously cached
    # tree for this frame (that is where every format's load funnels
    # through), so setting it first would just be wiped.
    if {$rr} {
	AsdfSetTree $current(frame) $fn $tree
    }

    # Phase 3 WCS attachment: best-effort, never fatal - the pixel data is
    # already loaded at this point and stays loaded whatever happens here.
    #
    # Three outcomes, deliberately distinguished rather than all swallowed
    # by one catch. Finding no WCS subtree at all is normal and silent:
    # Roman's *_segm.asdf segmentation products genuinely carry none. A
    # subtree that is found but that extraction or AST then rejects (an
    # unsupported tag or schema version, a GWCS shape yamlchan.c does not
    # cover) is different - the frame is still usable, but say so rather
    # than leave the user wondering why there is no WCS. Warning, not
    # Error: it routes to ds9(msg) for XPA/SAMP callers and a non-modal
    # notice in the GUI, which is what a non-fatal condition should do.
    if {$rr} {
	if {[catch {AsdfExtractWcsText $tree $data} yamltext]} {
	    Warning "[msgcat::mc {ASDF: unable to extract WCS, loading without it}] $yamltext"
	} elseif {$yamltext ne {}} {
	    if {[catch {AsdfAttachWcs $yamltext} msg]} {
		Warning "[msgcat::mc {ASDF: unable to attach WCS, loading without it}] $msg"
	    }
	}
    }

    return $rr
}
