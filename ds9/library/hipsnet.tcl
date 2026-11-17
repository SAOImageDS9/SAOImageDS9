#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Remote HiPS (HiPS 1.0 sec. 6.2: the base URL plus the same relative
# paths as on disk). The files a load needs are fetched here, in Tcl,
# into an on-disk cache that mirrors the HiPS layout, and the HiPS reader
# (fitsy/hips.C) then reads the cache like any local HiPS. Networking
# stays in Tcl, where ds9 already handles TLS, proxies and its
# User-Agent. See TODO_HIPS.md, Phase 3.
#
# What a load fetches:
#  - always properties (small; a changed hips_release_date empties the
#    cached tiles), and Moc.fits when tiles are needed
#  - tiles in the format the reader will use (HiPSTileExt: fits, else
#    png, else jpg)
#  - without order=: one Allsky, the deepest of orders 3..0 that
#    exists (a quick look, a few MB); if there is none, the tiles of the
#    deepest order up to NSIDE hipsnet(autonside)
#  - with order=K: that order's Allsky.fits if it holds full-size tiles,
#    otherwise its tiles, minus the cells Moc.fits says are empty
# The reader is then given order=K explicitly, so what it reads doesn't
# depend on what else is in the cache.

proc HiPSNetDef {} {
    global hipsnet

    # parallel requests; be polite to public servers
    set hipsnet(parallel) 6
    # without order=, tiles (when there is no Allsky) up to this NSIDE
    set hipsnet(autonside) 512
    # refuse to download more than this many bytes of tiles in one load
    set hipsnet(maxbytes) [expr {wide(1)<<30}]
    # redirects followed per request
    set hipsnet(redirects) 5
    # the cached MocServer list of HiPS is refreshed after a day
    set hipsnet(listage) 86400

    # state of the fetch in progress
    set hipsnet(busy) 0
    set hipsnet(cancel) 0
    set hipsnet(tokens) {}
    set hipsnet(error) {}
    set hipsnet(ext) fits
    set hipsnet(sfx) {}
    set hipsnet(bases) {}

    # deep windows' background tile fetching (HiPSDeepWant)
    global hipsdeep
    set hipsdeep(queue) {}
    set hipsdeep(running) 0
    set hipsdeep(fetched) 0
    set hipsdeep(refreshes) 0
    # a cancel starts a new generation: requests of an older one still in
    # a worker finish into the cache, but no longer redraw (stale)
    set hipsdeep(gen) 0
    set hipsdeep(stale) 0
    # this batch (since the queue was last empty), for the status line
    set hipsdeep(total) 0
    set hipsdeep(done) 0
    # the status line shows after this many ms of fetching
    set hipsdeep(statusdelay) 500
    # a tile that failed (not 200 or 404: a server error, no network) is
    # not asked for again for this many seconds; without this the
    # refresh after the failure would ask for it straight away, forever
    set hipsdeep(retry) 60
}

# A cube's frame suffix for file names, "_n" (HiPS 1.0 sec. 4.2.3),
# empty for frame 0 and for images: slice= in opts, else
# hips_cube_firstframe, as the reader (FitsHiPS) picks
proc HiPSSliceSuffix {props opts} {
    if {![string match cube* [HiPSProp $props dataproduct_type image]]} {
	return {}
    }
    if {[dict exists $opts slice]} {
	set ss [dict get $opts slice]
    } else {
	set ss [HiPSProp $props hips_cube_firstframe 0]
    }
    if {![string is integer -strict $ss] || $ss <= 0} {
	return {}
    }
    return _$ss
}

# The base URLs to fetch a HiPS from: url first, then the mirrors its
# properties list (hips_service_url, hips_service_url_1, ...), each once
proc HiPSBases {url props} {
    set url [string trimright $url /]
    set rr [list $url]
    set keys [lsort -dictionary [lsearch -all -inline -glob \
				    [dict keys $props] hips_service_url*]]
    foreach key $keys {
	set mm [string trimright [dict get $props $key] /]
	if {[HiPSIsURL $mm] && [lsearch -exact $rr $mm] < 0} {
	    lappend rr $mm
	}
    }
    return $rr
}

# GET <base>/path into fn from the first base that answers (200 or 404;
# a failed request or a server error moves on to the next mirror).
# Returns the last HTTP status.
# A file is downloaded to a temporary name next to it, then renamed:
# a unique one, as two requests for the same file (a load and a deep
# window, two frames) may run at once
proc HiPSTemp {fn} {
    global hipsnet

    return "$fn.[incr hipsnet(tmpseq)].new"
}

# keep the downloaded tmp as fn; 0 (tmp removed) if it can't be
proc HiPSKeep {tmp fn} {
    if {[catch {file rename -force $tmp $fn}]} {
	catch {file delete -force $tmp}
	return 0
    }
    return 1
}

proc HiPSGetPath {path fn} {
    global hipsnet

    set code 0
    foreach base $hipsnet(bases) {
	set code [HiPSGet $base/$path $fn]
	if {$code == 200 || $code == 404 || $hipsnet(cancel)} {
	    break
	}
    }
    return $code
}

# Is fn (with or without [options]) a remote HiPS? file:// is local.
proc HiPSIsURL {fn} {
    return [regexp -nocase {^https?://} $fn]
}

# The cache: <prefs dir>/hips, one directory per HiPS (the one holding
# its properties). Each use stamps the HiPS (.used); after a fetch the
# least recently used ones are removed, whole, until the cache is within
# phpxopen(hipscache) MB (Preferences > HEALPix). The HiPS just loaded
# is never removed.
proc HiPSCacheRoot {} {
    global prefs
    return [file join $prefs(dir) hips]
}

proc HiPSCacheTouch {dir} {
    catch {close [open [file join $dir .used] w]}
}

# the cached HiPS directories (those holding a properties file)
proc HiPSCacheList {{dir {}}} {
    if {$dir == {}} {
	set dir [HiPSCacheRoot]
    }
    if {[file isfile [file join $dir properties]]} {
	return [list $dir]
    }
    set rr {}
    foreach dd [glob -nocomplain -types d -directory $dir *] {
	set rr [concat $rr [HiPSCacheList $dd]]
    }
    return $rr
}

proc HiPSDirSize {dir} {
    set size 0
    foreach ff [glob -nocomplain -types f -directory $dir *] {
	incr size [file size $ff]
    }
    foreach dd [glob -nocomplain -types d -directory $dir *] {
	incr size [HiPSDirSize $dd]
    }
    return $size
}

# the cache directories of the HiPS shown in any frame (each channel of
# an RGB frame), normalized
proc HiPSCacheInUse {} {
    global ds9

    set rr {}
    foreach ff $ds9(frames) {
	set names {}
	if {[catch {$ff get type} type]} {
	    continue
	}
	if {$type == {rgb}} {
	    foreach ch {red green blue} {
		upvar #0 ${ff}$ch var
		if {[info exists var(file,type)] && $var(file,type) == {hips}} {
		    lappend names $var(file,name)
		}
		unset -nocomplain var
	    }
	} else {
	    lappend names [HiPSFrameName $ff]
	}
	foreach fn $names {
	    if {$fn != {} && [HiPSIsURL [HiPSRoot $fn]]} {
		lappend rr [file normalize [HiPSRoot [HiPSLocalName $fn]]]
	    }
	}
    }
    return $rr
}

# keep the cache within its limit, oldest use first; keep (the HiPS
# being loaded) and every HiPS shown in a frame stay
proc HiPSCachePrune {keep} {
    global phpxopen

    if {![string is double -strict $phpxopen(hipscache)] ||
	$phpxopen(hipscache) <= 0} {
	return
    }
    set limit [expr {wide($phpxopen(hipscache)*1024*1024)}]
    set ll {}
    set total 0
    foreach dd [HiPSCacheList] {
	set used 0
	catch {set used [file mtime [file join $dd .used]]}
	set size [HiPSDirSize $dd]
	incr total $size
	lappend ll [list $used $size $dd]
    }
    set inuse [concat [list [file normalize $keep]] [HiPSCacheInUse]]
    foreach rr [lsort -integer -index 0 $ll] {
	if {$total <= $limit} {
	    break
	}
	lassign $rr used size dd
	if {[lsearch -exact $inuse [file normalize $dd]] >= 0} {
	    continue
	}
	if {![catch {file delete -force $dd}]} {
	    incr total -$size
	}
    }
}

# Preferences > HEALPix > Clear HiPS Cache
proc HiPSCacheClear {} {
    global hipsnet

    if {$hipsnet(busy)} {
	return
    }
    # all but the HiPS shown in a frame (their windows read tiles from
    # here, and deep ones keep fetching into it)
    set inuse [HiPSCacheInUse]
    if {![llength $inuse]} {
	catch {file delete -force [HiPSCacheRoot]}
	return
    }
    foreach dd [HiPSCacheList] {
	if {[lsearch -exact $inuse [file normalize $dd]] < 0} {
	    catch {file delete -force $dd}
	}
    }
    catch {file delete -force [HiPSListFile]}
    HiPSCacheTidy [HiPSCacheRoot]
}

# remove the directories under dir that hold no HiPS (left by a deleted
# one, or by a load that failed); returns 1 if dir itself went
proc HiPSCacheTidy {dir} {
    if {[file isfile [file join $dir properties]]} {
	return 0
    }
    set left 0
    foreach dd [glob -nocomplain -types d -directory $dir *] {
	if {![HiPSCacheTidy $dd]} {
	    set left 1
	}
    }
    if {$left || [llength [glob -nocomplain -types f -directory $dir *]]} {
	return 0
    }
    return [expr {![catch {file delete -force $dir}]}]
}

# file:///path -> /path, anything else unchanged
proc HiPSFileURL {fn} {
    if {[regexp -nocase {^file://(.*)$} $fn {} path]} {
	return $path
    }
    return $fn
}

# The cache directory for a HiPS base URL: <prefs dir>/hips/<host>/<path>
proc HiPSCacheDir {url} {
    set url [string trimright $url /]
    ParseURL $url rr
    set parts [list $rr(authority)]
    foreach pp [split $rr(path) /] {
	if {$pp == {} || $pp == {.} || $pp == {..}} {
	    continue
	}
	lappend parts $pp
    }
    set out {}
    foreach pp $parts {
	# keep it a plain, safe file name
	regsub -all {[^A-Za-z0-9._-]} $pp _ pp
	lappend out $pp
    }
    return [file join [HiPSCacheRoot] {*}$out]
}

# The local name for a HiPS name: a URL becomes its cache directory
# (fetching nothing), a file:// URL its path, a directory itself.
# Options are kept.
proc HiPSLocalName {fn} {
    set root [HiPSRoot $fn]
    set ext [string range $fn [string length $root] end]
    if {[HiPSIsURL $root]} {
	return "[HiPSCacheDir $root]$ext"
    }
    return "[HiPSFileURL $root]$ext"
}

# Parse the options of a HiPS name into a dict (lower-case keys)
proc HiPSOptions {fn} {
    set opts {}
    set ext [string range $fn [string length [HiPSRoot $fn]] end]
    set ext [string trim $ext {[]}]
    foreach kv [split $ext ,] {
	set id [string first = $kv]
	if {$id > 0} {
	    dict set opts [string tolower [string trim \
		[string range $kv 0 [expr $id-1]]]] \
		[string trim [string range $kv [expr $id+1] end]]
	}
    }
    return $opts
}

# Fetch what loading the remote HiPS fn (URL plus options) needs, and
# return the local name for the reader (cache directory plus options,
# with order= made explicit). Returns {} and sets hipsnet(error) on
# failure or cancel.
proc HiPSFetch {fn} {
    global hipsnet

    set hipsnet(error) {}
    set url [string trimright [HiPSRoot $fn] /]
    set ext [string range $fn [string length [HiPSRoot $fn]] end]
    set dir [HiPSCacheDir $url]
    set opts [HiPSOptions $fn]

    if {$hipsnet(busy)} {
	set hipsnet(error) [msgcat::mc {another HiPS is being fetched}]
	return {}
    }
    set hipsnet(busy) 1
    set hipsnet(cancel) 0

    # anything that throws (a full disk, an unwritable cache) is an
    # error of this load, and must not leave hipsnet(busy) set
    if {[catch {
	set rr [HiPSFetchDo $url $dir $opts]
	if {$rr != {}} {
	    HiPSCachePrune $dir
	    # deep windows fetch more of it later (HiPSDeepWant)
	    set hipsnet(url,[file normalize $dir]) $url
	}
    } err]} {
	set rr {}
	set hipsnet(error) $err
	foreach token $hipsnet(tokens) {
	    catch {http::reset $token cancelled}
	}
    }

    set hipsnet(busy) 0
    HiPSProgressDone
    HiPSClearErrorInfo
    if {$rr == {}} {
	return {}
    }

    # order=K, explicit, for the reader
    if {[dict exists $opts order]} {
	return "$dir$ext"
    }
    if {$ext == {}} {
	return "$dir\[order=$rr\]"
    }
    return "$dir\[order=$rr,[string range $ext 1 end]"
}

# returns the order to read, or {} (hipsnet(error) says why)
proc HiPSFetchDo {url dir opts} {
    global hipsnet

    set props [HiPSFetchProperties $url $dir]
    if {$props == {}} {
	return {}
    }
    if {[HiPSProp $props dataproduct_type image] == {catalog}} {
	set hipsnet(error) [msgcat::mc {catalogue HiPS are not supported}]
	return {}
    }
    set ext [HiPSTileExt $props $opts]
    if {$ext == {}} {
	set hipsnet(error) [HiPSTileExtError $props $opts]
	return {}
    }
    set hipsnet(ext) $ext
    set hipsnet(bases) [HiPSBases $url $props]
    set hipsnet(sfx) [HiPSSliceSuffix $props $opts]
    set width [HiPSProp $props hips_tile_width 512]
    set maxorder [HiPSProp $props hips_order -1]
    set minorder [HiPSProp $props hips_order_min 0]
    if {![string is integer -strict $width] || $width < 1 ||
	![string is integer -strict $maxorder] || $maxorder < 0} {
	set hipsnet(error) [msgcat::mc {bad hips_order or hips_tile_width in properties}]
	return {}
    }
    if {![string is integer -strict $minorder] || $minorder < 0} {
	set minorder 0
    }

    if {[dict exists $opts order]} {
	set kk [dict get $opts order]
	if {![string is integer -strict $kk] || $kk < 0} {
	    # not a HiPS order (e.g. order=nested); the reader complains
	    return 0
	}
	if {$kk > $maxorder} {
	    # the reader names the problem
	    return $kk
	}
	# a full-size Allsky is the same data in one file
	if {$kk <= 3 && [HiPSFetchAllsky $url $dir $kk] == $width} {
	    return $kk
	}
	if {![HiPSFetchTiles $url $dir $kk $width $props]} {
	    return {}
	}
	return $kk
    }

    # quick look: the deepest Allsky of orders 3..0
    for {set kk [expr {$maxorder<3 ? $maxorder : 3}]} {$kk >= 0} {incr kk -1} {
	if {$hipsnet(cancel)} {
	    set hipsnet(error) [msgcat::mc {cancelled}]
	    return {}
	}
	if {[HiPSFetchAllsky $url $dir $kk] > 0} {
	    return $kk
	}
    }

    # no Allsky: the tiles of the deepest order up to hipsnet(autonside)
    set kk $minorder
    while {$kk < $maxorder && (wide($width)<<($kk+1)) <= $hipsnet(autonside)} {
	incr kk
    }
    if {![HiPSFetchTiles $url $dir $kk $width $props]} {
	return {}
    }
    return $kk
}

# Fetch url/properties into the cache directory dir, and return them as
# a dict ({} and hipsnet(error) on failure). Always fetched, so an
# updated HiPS is noticed (a new hips_release_date empties the cached
# tiles); a cached copy serves when the server can't be reached.
proc HiPSFetchProperties {url dir} {
    global hipsnet

    if {[catch {file mkdir $dir} err]} {
	set hipsnet(error) "[msgcat::mc {can't create the HiPS cache}] $dir: $err"
	return {}
    }
    set pf [file join $dir properties]
    set old {}
    if {[file isfile $pf] && ![catch {HiPSReadProperties $dir} pp]} {
	set old [HiPSProp $pp hips_release_date]
    }
    set tmp [HiPSTemp $pf]
    set code [HiPSGet $url/properties $tmp]
    # no answer: try the mirrors a cached copy lists
    if {$code != 200 && $code != 404 && [file isfile $pf] &&
	![catch {HiPSReadProperties $dir} pp]} {
	foreach base [lrange [HiPSBases $url $pp] 1 end] {
	    set code [HiPSGet $base/properties $tmp]
	    if {$code == 200} {
		break
	    }
	}
    }
    if {$code != 200 || ![HiPSKeep $tmp $pf]} {
	catch {file delete -force $tmp}
	if {![file isfile $pf]} {
	    set hipsnet(error) "[msgcat::mc {can't read}] $url/properties ([HiPSCodeText $code])"
	    return {}
	}
    }
    if {[catch {HiPSReadProperties $dir} props]} {
	set hipsnet(error) "[msgcat::mc {can't read}] $url/properties"
	return {}
    }
    set new [HiPSProp $props hips_release_date]
    if {$old != {} && $new != $old} {
	foreach ff [glob -nocomplain -directory $dir Norder* Moc.fits] {
	    catch {file delete -force $ff}
	}
    }
    HiPSCacheTouch $dir
    return $props
}

# Fetch NorderK/Allsky.fits (unless cached). Returns the width of its
# tiles, or 0 if there is none (or it can't be read).
proc HiPSFetchAllsky {url dir kk} {
    set od [file join $dir Norder$kk]
    global hipsnet
    set ext $hipsnet(ext)
    set sfx $hipsnet(sfx)
    set af [file join $od Allsky$sfx.$ext]
    set none [file join $od .noallsky$sfx.$ext]
    if {[file exists $none]} {
	return 0
    }
    if {![file isfile $af]} {
	file mkdir $od
	set tmp [HiPSTemp $af]
	set code [HiPSGetPath Norder$kk/Allsky$sfx.$ext $tmp]
	if {$code != 200} {
	    catch {file delete -force $tmp}
	    # remember a 404 so it isn't asked for again
	    if {$code == 404} {
		close [open $none w]
	    }
	    return 0
	}
	if {![HiPSKeep $tmp $af]} {
	    return 0
	}
    }

    set ai [HiPSImageInfo $af $ext]
    if {$ai == {} || ![dict get $ai ok]} {
	return 0
    }
    set total [expr {12*(1<<(2*$kk))}]
    set ncol [expr {int(sqrt($total))}]
    set ww [expr {[dict get $ai width]/$ncol}]
    if {$ww < 1 || $ww*$ncol != [dict get $ai width]} {
	return 0
    }
    return $ww
}

# Fetch the tiles of order kk that Moc.fits says hold data (all of them
# if there is no MOC), skipping those already cached or known to be
# missing. Returns 1 on success (missing tiles are not an error).
proc HiPSFetchTiles {url dir kk width props} {
    global hipsnet

    # Moc.fits, if the HiPS has one
    set mf [file join $dir Moc.fits]
    if {![file isfile $mf]} {
	set tmp [HiPSTemp $mf]
	if {[HiPSGetPath Moc.fits $tmp] == 200} {
	    HiPSKeep $tmp $mf
	} else {
	    catch {file delete -force $tmp}
	}
    }
    set tiles {}
    if {[file isfile $mf]} {
	set tiles [HiPSMocTiles $mf $kk]
    }
    if {$tiles == {}} {
	set total [expr {12*(wide(1)<<(2*$kk))}]
	for {set nn 0} {$nn < $total} {incr nn} {
	    lappend tiles $nn
	}
    }

    # what is still needed
    set od [file join $dir Norder$kk]
    file mkdir $od
    set missing {}
    set mfn [file join $od .missing$hipsnet(sfx)]
    if {[file isfile $mfn]} {
	set ch [open $mfn r]
	foreach nn [split [read $ch] \n] {
	    if {$nn != {}} {
		set gone($nn) 1
	    }
	}
	close $ch
    }
    set need {}
    foreach nn $tiles {
	if {[info exists gone($nn)]} {
	    continue
	}
	if {![file isfile [HiPSTilePath $dir $kk $nn]]} {
	    lappend need $nn
	}
    }

    # png/jpg are compressed; count them as a byte a pixel
    set bitpix [HiPSProp $props hips_pixel_bitpix -32]
    if {![string is integer -strict $bitpix] || $bitpix == 0 ||
	$hipsnet(ext) != {fits}} {
	set bitpix 8
    }
    set bytes [expr {wide([llength $need])*$width*$width*abs($bitpix)/8}]
    if {$bytes > $hipsnet(maxbytes)} {
	set hipsnet(error) "[msgcat::mc {order}] $kk [msgcat::mc {needs}] [llength $need] [msgcat::mc {tiles}] ([expr {$bytes>>20}] MB), [msgcat::mc {more than the limit of}] [expr {$hipsnet(maxbytes)>>20}] MB"
	return 0
    }
    if {$need == {}} {
	return 1
    }

    # a small pool of asynchronous requests
    array unset hipsnet try,*
    set hipsnet(queue) $need
    set hipsnet(running) 0
    set hipsnet(done) 0
    set hipsnet(total) [llength $need]
    set hipsnet(failed) {}
    set hipsnet(gone) {}
    set hipsnet(finished) 0
    set hipsnet(url) $url
    set hipsnet(dir) $dir
    set hipsnet(order) $kk

    HiPSProgress
    for {set ii 0} {$ii < $hipsnet(parallel)} {incr ii} {
	HiPSTileNext
    }
    if {!$hipsnet(finished)} {
	vwait hipsnet(finished)
    }

    # remember the 404s
    if {$hipsnet(gone) != {}} {
	set ch [open $mfn a]
	foreach nn $hipsnet(gone) {
	    puts $ch $nn
	}
	close $ch
    }

    if {$hipsnet(cancel)} {
	set hipsnet(error) [msgcat::mc {cancelled}]
	return 0
    }
    if {$hipsnet(failed) != {}} {
	set nn [lindex $hipsnet(failed) 0]
	set hipsnet(error) "[llength $hipsnet(failed)] [msgcat::mc {tiles could not be fetched, e.g.}] [lindex $nn 0] ([lindex $nn 1])"
	return 0
    }
    return 1
}

proc HiPSTilePath {dir kk nn} {
    set dd [expr {($nn/10000)*10000}]
    global hipsnet
    return [file join $dir Norder$kk Dir$dd Npix$nn$hipsnet(sfx).$hipsnet(ext)]
}

# start the next queued tile, or finish
proc HiPSTileNext {} {
    global hipsnet

    if {$hipsnet(cancel)} {
	set hipsnet(queue) {}
    }
    if {$hipsnet(queue) == {}} {
	if {$hipsnet(running) == 0 && !$hipsnet(finished)} {
	    set hipsnet(finished) 1
	}
	return
    }
    set nn [lindex $hipsnet(queue) 0]
    set hipsnet(queue) [lrange $hipsnet(queue) 1 end]

    set kk $hipsnet(order)
    set dd [expr {($nn/10000)*10000}]
    set fn [HiPSTilePath $hipsnet(dir) $kk $nn]
    # if this fails, so does the download, and that is reported
    catch {file mkdir [file dirname $fn]}
    incr hipsnet(running)
    # the mirror this tile is on (it moves on when one fails)
    set ii 0
    if {[info exists hipsnet(try,$nn)]} {
	set ii $hipsnet(try,$nn)
    }
    set base [lindex $hipsnet(bases) $ii]
    if {$base == {}} {
	set base $hipsnet(url)
    }
    set tmp [HiPSTemp $fn]
    HiPSGetAsync "$base/Norder$kk/Dir$dd/Npix$nn$hipsnet(sfx).$hipsnet(ext)" $tmp \
	[list HiPSTileDone $nn $fn $tmp]
}

proc HiPSTileDone {nn fn tmp code} {
    global hipsnet

    incr hipsnet(running) -1
    incr hipsnet(done)
    # a file that can't be kept is a failure like any other
    if {$code == 200 && ![HiPSKeep $tmp $fn]} {
	set code 0
    }
    switch -- $code {
	200 {}
	404 {
	    catch {file delete -force $tmp}
	    lappend hipsnet(gone) $nn
	}
	default {
	    catch {file delete -force $tmp}
	    if {!$hipsnet(cancel)} {
		# no answer or a server error: the next mirror, if any
		set ii 0
		if {[info exists hipsnet(try,$nn)]} {
		    set ii $hipsnet(try,$nn)
		}
		incr ii
		if {$ii < [llength $hipsnet(bases)]} {
		    set hipsnet(try,$nn) $ii
		    incr hipsnet(done) -1
		    set hipsnet(queue) [linsert $hipsnet(queue) 0 $nn]
		} else {
		    lappend hipsnet(failed) [list $nn [HiPSCodeText $code]]
		}
	    }
	}
    }
    HiPSProgress
    HiPSTileNext
}

# The tiles of order kk that a MOC (FITS, NUNIQ) covers: a deeper cell
# needs its order-kk parent, a shallower one all its order-kk children.
# Returns {} if the MOC can't be read.
proc HiPSMocTiles {fn kk} {
    if {[catch {open $fn rb} ch]} {
	return {}
    }
    set data [read $ch]
    close $ch

    # the binary table HDU after the primary header
    set hdr 0
    set pos 0
    set len [string length $data]
    array set kw {}
    set nhdu 0
    while {$pos < $len} {
	set card [string range $data $pos [expr {$pos+79}]]
	set key [string trim [string range $card 0 7]]
	if {$nhdu == 1 && [string index $card 8] == {=}} {
	    set vv [string trim [lindex [split [string range $card 10 end] /] 0]]
	    set kw($key) [string trim $vv { '}]
	}
	incr pos 80
	if {$key == {END}} {
	    set pos [expr {(($pos+2879)/2880)*2880}]
	    incr nhdu
	    if {$nhdu == 2} {
		break
	    }
	}
    }
    foreach kk2 {NAXIS1 NAXIS2 TFORM1} {
	if {![info exists kw($kk2)]} {
	    return {}
	}
    }
    switch -- [string toupper [string trim $kw(TFORM1)]] {
	1J - J {set fmt I; set size 4}
	1K - K {set fmt W; set size 8}
	default {return {}}
    }
    set rowlen $kw(NAXIS1)
    set nrow $kw(NAXIS2)

    set out {}
    for {set rr 0} {$rr < $nrow} {incr rr} {
	set off [expr {$pos + $rr*$rowlen}]
	if {$off+$size > $len} {
	    break
	}
	binary scan $data @${off}$fmt uniq
	if {$uniq < 4} {
	    continue
	}
	# order = floor(log4(uniq/4)), npix = uniq - 4*4^order
	set oo 0
	while {(wide(4) << (2*($oo+1))) <= $uniq} {
	    incr oo
	}
	set npix [expr {$uniq - (wide(4) << (2*$oo))}]
	if {$oo >= $kk} {
	    set have([expr {$npix >> (2*($oo-$kk))}]) 1
	} else {
	    set first [expr {$npix << (2*($kk-$oo))}]
	    set last [expr {($npix+1) << (2*($kk-$oo))}]
	    for {set nn $first} {$nn < $last} {incr nn} {
		set have($nn) 1
	    }
	}
    }
    return [lsort -integer [array names have]]
}

# Synchronous GET of url into fn, following redirects. Returns the HTTP
# status (200, 404, ...), or 0 if the request failed.
proc HiPSGet {url fn} {
    global hipsnet

    set hipsnet(sync) {}
    HiPSGetAsync $url $fn [list set ::hipsnet(sync)]
    if {$hipsnet(sync) == {}} {
	vwait hipsnet(sync)
    }
    HiPSClearErrorInfo
    return $hipsnet(sync)
}

# The http package catches errors of its own, which leaves errorInfo
# set; XPA's error check (XPACatchError) would report that as a failure
# (url.tcl clears it the same way)
proc HiPSClearErrorInfo {} {
    global errorInfo
    set errorInfo {}
}

# Asynchronous GET of url into fn; done is called with the HTTP status
# (0 if the request failed), after following redirects.
#
# The requests run in worker threads (Thread package). In the main
# thread, Tcl's https blocks the event loop during each TLS handshake: a
# slow server (eROSITA's took ~5 s a handshake) froze ds9 for 52 s while
# a deep window fetched 10 tiles. A worker makes one blocking request at
# a time and posts the result back, so the display and XPA stay live.
# Without the Thread package, the in-process path (HiPSGetAsyncHttp).
proc HiPSGetAsync {url fn done {hops 0}} {
    global hipsnet

    if {![HiPSWorkersReady]} {
	HiPSGetAsyncHttp $url $fn $done $hops
	return
    }
    set id [incr hipsnet(jobid)]
    set hipsnet(job,$id) $done
    lappend hipsnet(jobs) [list $id $url $fn]
    HiPSWorkerDispatch
}

# the worker pool: hipsnet(parallel) threads, made when first needed;
# 0 if threads can't be used
proc HiPSWorkersReady {} {
    global hipsnet
    global ihttp
    global phttp

    if {[info exists hipsnet(workers)]} {
	return [expr {[llength $hipsnet(workers)] > 0}]
    }
    set hipsnet(workers) {}
    set hipsnet(idle) {}
    set hipsnet(jobs) {}
    set hipsnet(jobid) 0
    if {[catch {package require Thread}]} {
	return 0
    }

    # a worker: http with ds9's settings (ConfigHTTP), one request at a
    # time, following redirects, the status posted back to the main thread
    set proxy {}
    if {[info exists phttp(proxy)] && $phttp(proxy)} {
	set proxy [list $phttp(proxy,host) $phttp(proxy,port)]
    }
    set init [string map [list @TIMEOUT@ $ihttp(timeout) \
			      @PROXY@ [list $proxy] \
			      @REDIRECTS@ $hipsnet(redirects)] {
	package require http
	load {} tls
	http::register https 443 [list ::tls::socket -autoservername 1 \
				      -require 1 -alpn http/1.1]
	http::config -useragent ds9
	set proxy @PROXY@
	if {$proxy != {}} {
	    http::config -proxyhost [lindex $proxy 0] \
		-proxyport [lindex $proxy 1]
	}
	# ds9 is exiting: end the request in progress (fetch is inside
	# geturl's event loop, which runs this) and follow no redirect
	set stop 0
	proc abort {} {
	    set ::stop 1
	    foreach tok [info vars ::http::\[0-9\]*] {
		if {[array exists $tok]} {
		    catch {http::reset $tok}
		}
	    }
	}
	proc fetch {main id url fn headers} {
	    set code 0
	    for {set hops 0} {$hops <= @REDIRECTS@} {incr hops} {
		if {$::stop || [catch {open $fn wb} ch]} {
		    break
		}
		set loc {}
		if {![catch {http::geturl $url -channel $ch -binary 1 \
				 -timeout @TIMEOUT@ -headers $headers} tok]} {
		    if {[http::status $tok] == {ok}} {
			set code [http::ncode $tok]
			foreach {key val} [http::meta $tok] {
			    if {[string tolower $key] == {location}} {
				set loc $val
			    }
			}
		    }
		    http::cleanup $tok
		}
		close $ch
		if {$code < 300 || $code >= 400 || $loc == {}} {
		    break
		}
		# a redirect: absolute, or relative to url
		if {![regexp -nocase {^[a-z]+://} $loc]} {
		    regexp {^([a-z]+://[^/]+)} $url {} site
		    if {[string index $loc 0] == {/}} {
			set loc $site$loc
		    } else {
			set loc [string range $url 0 [string last / $url]]$loc
		    }
		}
		set url $loc
		set code 0
	    }
	    thread::send -async $main [list HiPSWorkerDone [thread::id] $id $code]
	}
	thread::wait
    }]
    for {set ii 0} {$ii < $hipsnet(parallel)} {incr ii} {
	if {[catch {thread::create $init} tid]} {
	    break
	}
	lappend hipsnet(workers) $tid
	lappend hipsnet(idle) $tid
    }
    return [expr {[llength $hipsnet(workers)] > 0}]
}

# before ds9 exits: end the workers. Tcl's exit doesn't wait for other
# threads, and tls's exit handler frees the BIO methods every thread's
# connections use, so a worker still reading would crash. Drop the
# queue, abort the requests in progress, and wait (up to 5 s; a
# handshake or DNS lookup can block) for the threads to end
proc HiPSWorkersStop {} {
    global hipsnet

    if {![info exists hipsnet(workers)] || $hipsnet(workers) == {}} {
	return
    }
    set hipsnet(jobs) {}
    array unset hipsnet job,*
    set tids $hipsnet(workers)
    set hipsnet(workers) {}
    set hipsnet(idle) {}
    foreach tid $tids {
	if {[thread::exists $tid]} {
	    thread::send -async $tid abort
	    thread::release $tid
	}
    }
    for {set ii 0} {$ii < 50} {incr ii} {
	set alive 0
	foreach tid $tids {
	    if {[thread::exists $tid]} {
		incr alive
	    }
	}
	if {!$alive} {
	    break
	}
	after 100 [list set hipsnet(stopping) 1]
	vwait hipsnet(stopping)
    }
}

# start queued jobs on idle workers
proc HiPSWorkerDispatch {} {
    global hipsnet

    while {[llength $hipsnet(idle)] && [llength $hipsnet(jobs)]} {
	set tid [lindex $hipsnet(idle) 0]
	set hipsnet(idle) [lrange $hipsnet(idle) 1 end]
	lassign [lindex $hipsnet(jobs) 0] id url fn
	set hipsnet(jobs) [lrange $hipsnet(jobs) 1 end]
	thread::send -async $tid \
	    [list fetch [thread::id] $id $url $fn [ProxyHTTP]]
    }
}

proc HiPSWorkerDone {tid id code} {
    global hipsnet

    # (not after HiPSWorkersStop)
    if {[lsearch -exact $hipsnet(workers) $tid] >= 0} {
	lappend hipsnet(idle) $tid
    }
    HiPSWorkerDispatch
    if {[info exists hipsnet(job,$id)]} {
	set done $hipsnet(job,$id)
	unset hipsnet(job,$id)
	{*}$done $code
    }
}

# the in-process path, without worker threads
proc HiPSGetAsyncHttp {url fn done {hops 0}} {
    global ihttp
    global hipsnet

    if {[catch {open $fn wb} ch]} {
	after idle [list {*}$done 0]
	return
    }
    if {[catch {http::geturl $url \
		    -channel $ch \
		    -binary 1 \
		    -timeout $ihttp(timeout) \
		    -headers "[ProxyHTTP]" \
		    -command [list HiPSGetDone $url $fn $ch $done $hops]} \
	     token]} {
	catch {close $ch}
	after idle [list {*}$done 0]
	return
    }
    lappend hipsnet(tokens) $token
}

proc HiPSGetDone {url fn ch done hops token} {
    global hipsnet

    catch {close $ch}
    set ii [lsearch -exact $hipsnet(tokens) $token]
    if {$ii >= 0} {
	set hipsnet(tokens) [lreplace $hipsnet(tokens) $ii $ii]
    }

    set code 0
    set loc {}
    if {[http::status $token] == {ok}} {
	set code [http::ncode $token]
	foreach {key val} [http::meta $token] {
	    if {[string tolower $key] == {location}} {
		set loc $val
	    }
	}
    }
    HTTPLog $token
    http::cleanup $token

    # follow a redirect
    if {$code >= 300 && $code < 400 && $loc != {} &&
	$hops < $hipsnet(redirects) && !$hipsnet(cancel)} {
	if {![regexp -nocase {^[a-z]+://} $loc]} {
	    ParseURL $url rr
	    if {[string index $loc 0] == {/}} {
		set loc "$rr(scheme)://$rr(authority)$loc"
	    } else {
		set loc "[string range $url 0 [string last / $url]]$loc"
	    }
	}
	HiPSGetAsyncHttp $loc $fn $done [expr {$hops+1}]
	return
    }
    {*}$done $code
}

proc HiPSCodeText {code} {
    switch -- $code {
	0 {return [msgcat::mc {no response}]}
	404 {return [msgcat::mc {not found}]}
	default {return "HTTP $code"}
    }
}

# stop the fetch in progress
proc HiPSCancel {} {
    global hipsnet

    set hipsnet(cancel) 1
    # jobs waiting for a worker fail now; one already in a worker finishes
    # (a blocking request can't be interrupted) and is ignored by its
    # fetcher, which sees hipsnet(cancel)
    if {[info exists hipsnet(jobs)]} {
	set jobs $hipsnet(jobs)
	set hipsnet(jobs) {}
	foreach jj $jobs {
	    set id [lindex $jj 0]
	    if {[info exists hipsnet(job,$id)]} {
		set done $hipsnet(job,$id)
		unset hipsnet(job,$id)
		after idle [list {*}$done 0]
	    }
	}
    }
    if {![info exists hipsnet(tokens)]} {
	return
    }
    foreach token $hipsnet(tokens) {
	catch {http::reset $token cancelled}
    }
}

# Progress: a small window while tiles are fetched, with Cancel
proc HiPSProgress {} {
    global hipsnet
    global ds9

    set w {.hipsprogress}
    if {![winfo exists $w]} {
	if {![info exists ds9(top)] || ![winfo exists $ds9(top)]} {
	    return
	}
	toplevel $w
	wm title $w [msgcat::mc {HiPS}]
	wm transient $w $ds9(top)
	ttk::label $w.msg -textvariable hipsnet(msg) -width 50
	ttk::button $w.cancel -text [msgcat::mc {Cancel}] -command HiPSCancel
	pack $w.msg -side top -padx 8 -pady 6
	pack $w.cancel -side top -pady 6
	wm protocol $w WM_DELETE_WINDOW HiPSCancel
    }
    set hipsnet(msg) "[msgcat::mc {Fetching HiPS tiles}]: order $hipsnet(order), $hipsnet(done) / $hipsnet(total)"
}

proc HiPSProgressDone {} {
    catch {destroy .hipsprogress}
}

# Deep windows (TODO_HIPS.md Phase 5). After a deep HiPS window is
# rebuilt, the frame (Base::hpxRequestTiles) passes the tiles of the order
# it shows that it didn't have. For a remote HiPS they are fetched in the
# background, a few at a time, into its cache, and the window is rebuilt
# around the same view as they arrive (the coarse map shows through
# until then). A local HiPS's missing tiles are just missing.
proc HiPSDeepWant {frame root order tiles {slice 0}} {
    global hipsdeep
    global hipsnet

    set root [file normalize $root]
    if {![info exists hipsnet(url,$root)]} {
	return
    }
    set url $hipsnet(url,$root)
    if {[catch {HiPSReadProperties $root} props]} {
	return
    }
    # format= of the HiPS in this frame
    set ext [HiPSTileExt $props [HiPSOptions [HiPSFrameName $frame]]]
    if {$ext == {}} {
	return
    }
    # a cube frame's files: NpixN_n (no suffix for frame 0)
    set sfx [expr {$slice > 0 ? "_$slice" : {}}]

    # this view replaces the frame's earlier requests still waiting (those
    # in flight finish, and land in the cache)
    HiPSDeepDrop $frame

    # first the ancestors one and two orders up (a quarter and a
    # sixteenth as many tiles): the window shows the deepest cached one
    # until its own tiles arrive (FitsHPXReproj::build)
    set first {}
    set mine {}
    for {set dk 2} {$dk >= 0} {incr dk -1} {
	set oo [expr {$order - $dk}]
	if {$oo < 0} {
	    continue
	}
	# known to be missing (404s remembered by either fetcher)
	array unset gone
	set od [file join $root Norder$oo]
	if {[file isfile [file join $od .missing$sfx]]} {
	    set ch [open [file join $od .missing$sfx] r]
	    foreach nn [split [read $ch] \n] {
		if {$nn != {}} {
		    set gone($nn) 1
		}
	    }
	    close $ch
	}
	set seen {}
	foreach nn $tiles {
	    set aa [expr {$nn >> (2*$dk)}]
	    if {[dict exists $seen $aa]} {
		continue
	    }
	    dict set seen $aa 1
	    set dd [expr {($aa/10000)*10000}]
	    if {[info exists gone($aa)] ||
		[file isfile [file join $od Dir$dd Npix$aa$sfx.$ext]]} {
		continue
	    }
	    set key "$root $oo $aa$sfx"
	    if {[info exists hipsdeep(want,$key)]} {
		continue
	    }
	    if {[info exists hipsdeep(failed,$key)]} {
		if {[clock seconds] < $hipsdeep(failed,$key)} {
		    continue
		}
		unset hipsdeep(failed,$key)
	    }
	    set hipsdeep(want,$key) 1
	    lappend mine [list $frame $root $url $oo $aa $ext $sfx]
	}
    }
    incr hipsdeep(total) [llength $mine]
    set hipsdeep(queue) [concat $mine $hipsdeep(queue)]
    while {$hipsdeep(running) < $hipsnet(parallel) &&
	   [llength $hipsdeep(queue)]} {
	HiPSDeepNext
    }
    HiPSDeepStatus
    # starting requests leaves the http package's errorInfo, which the
    # command that rebuilt the window (zoom, pan, ...) would report
    HiPSClearErrorInfo
}

proc HiPSDeepNext {} {
    global hipsdeep

    if {![llength $hipsdeep(queue)]} {
	return
    }
    lassign [lindex $hipsdeep(queue) 0] frame root url order nn ext sfx
    set hipsdeep(queue) [lrange $hipsdeep(queue) 1 end]

    set dd [expr {($nn/10000)*10000}]
    set fn [file join $root Norder$order Dir$dd Npix$nn$sfx.$ext]
    catch {file mkdir [file dirname $fn]}
    incr hipsdeep(running)
    set tmp [HiPSTemp $fn]
    HiPSGetAsync "$url/Norder$order/Dir$dd/Npix$nn$sfx.$ext" $tmp \
	[list HiPSDeepDone $hipsdeep(gen) $frame $root $order $nn $fn $tmp $sfx]
}

proc HiPSDeepDone {gen frame root order nn fn tmp sfx code} {
    global hipsdeep

    incr hipsdeep(running) -1
    # requested before a cancel: kept if it arrived, nothing else
    set stale [expr {$gen != $hipsdeep(gen)}]
    if {$stale} {
	incr hipsdeep(stale) -1
    } else {
	unset -nocomplain "hipsdeep(want,$root $order $nn$sfx)"
	incr hipsdeep(done)
    }
    if {$code == 200 && ![HiPSKeep $tmp $fn]} {
	set code 0
    }
    switch -- $code {
	200 {
	    incr hipsdeep(fetched)
	    # in use: the last to go when the cache is pruned
	    HiPSCacheTouch $root
	    if {!$stale} {
		HiPSDeepRefreshSoon $frame
	    }
	}
	404 {
	    catch {file delete -force $tmp}
	    catch {
		set ch [open [file join $root Norder$order .missing$sfx] a]
		puts $ch $nn
		close $ch
	    }
	}
	default {
	    catch {file delete -force $tmp}
	    # not again until hipsdeep(retry) has passed (a cancelled
	    # request is stale, and is asked for again by the next view)
	    if {!$stale} {
		set "hipsdeep(failed,$root $order $nn$sfx)" \
		    [expr {[clock seconds] + $hipsdeep(retry)}]
	    }
	}
    }
    HiPSClearErrorInfo
    HiPSDeepNext
    # the last one: a final refresh
    if {!$stale && ![HiPSDeepPending]} {
	HiPSDeepRefreshSoon $frame 0
    }
    HiPSDeepStatus
}

# tiles still to come: waiting, or in a worker and not cancelled
# drop the requests still waiting for frame
proc HiPSDeepDrop {frame} {
    global hipsdeep

    set keep {}
    foreach qq $hipsdeep(queue) {
	if {[lindex $qq 0] == $frame} {
	    lassign $qq ff rr uu oo nn ee sx
	    unset -nocomplain "hipsdeep(want,$rr $oo $nn$sx)"
	    incr hipsdeep(total) -1
	} else {
	    lappend keep $qq
	}
    }
    set hipsdeep(queue) $keep
}

proc HiPSDeepPending {} {
    global hipsdeep

    return [expr {[llength $hipsdeep(queue)] + $hipsdeep(running) -
		  $hipsdeep(stale)}]
}

# Cancel (the status line's button, hips cancel): drop the waiting
# requests and the pending redraws, leaving every window as it is. A
# request already in a worker can't be interrupted; it finishes into the
# cache without a redraw. The next pan or zoom asks for its tiles again.
proc HiPSDeepCancel {} {
    global hipsdeep
    global hipsnet

    set hipsdeep(queue) {}
    array unset hipsdeep want,*
    # and the tiles that failed may be asked for again
    array unset hipsdeep failed,*
    foreach tt [array names hipsdeep timer,*] {
	after cancel $hipsdeep($tt)
	unset hipsdeep($tt)
    }
    set hipsdeep(stale) $hipsdeep(running)
    incr hipsdeep(gen)
    # ours still waiting for a worker fail now
    if {[info exists hipsnet(jobs)]} {
	set keep {}
	foreach jj $hipsnet(jobs) {
	    set id [lindex $jj 0]
	    if {[info exists hipsnet(job,$id)] &&
		[lindex $hipsnet(job,$id) 0] == {HiPSDeepDone}} {
		after idle [list {*}$hipsnet(job,$id) 0]
		unset hipsnet(job,$id)
	    } else {
		lappend keep $jj
	    }
	}
	set hipsnet(jobs) $keep
    }
    # the in-process fetcher (no Thread package) can stop its requests,
    # unless a load's are among them
    if {!$hipsnet(busy)} {
	foreach token $hipsnet(tokens) {
	    catch {http::reset $token cancelled}
	}
    }
    HiPSDeepStatus
}

# The status line: a small label over the image's lower left corner,
# "Fetching HiPS tiles: done of total", with Cancel, while a deep
# window's tiles are fetched for more than hipsdeep(statusdelay) ms. It
# is a widget of its own, not a canvas item, so it isn't in saveimage,
# print or movies.
proc HiPSDeepStatus {} {
    global hipsdeep
    global ds9

    if {![HiPSDeepPending]} {
	set hipsdeep(total) 0
	set hipsdeep(done) 0
	if {[info exists hipsdeep(statustimer)]} {
	    after cancel $hipsdeep(statustimer)
	    unset hipsdeep(statustimer)
	}
	# not catch: its error would stay in errorInfo, which XPA reports
	if {[HiPSDeepStatusShown]} {
	    place forget $ds9(image).hipsdeep
	}
	return
    }
    set hipsdeep(msg) "[msgcat::mc {Fetching HiPS tiles}]: $hipsdeep(done) / $hipsdeep(total)"
    if {![HiPSDeepStatusShown] && ![info exists hipsdeep(statustimer)]} {
	set hipsdeep(statustimer) \
	    [after $hipsdeep(statusdelay) HiPSDeepStatusShow]
    }
}

proc HiPSDeepStatusShow {} {
    global hipsdeep
    global ds9

    unset -nocomplain hipsdeep(statustimer)
    if {[info exists hipsdeep(suspended)] || ![HiPSDeepPending] || ![info exists ds9(image)] ||
	![winfo exists $ds9(canvas)]} {
	return
    }
    set w $ds9(image).hipsdeep
    if {![winfo exists $w]} {
	ttk::frame $w -relief solid -borderwidth 1 -padding {6 2}
	ttk::label $w.msg -textvariable hipsdeep(msg)
	ttk::button $w.cancel -text [msgcat::mc {Cancel}] \
	    -command HiPSDeepCancel
	pack $w.msg -side left
	pack $w.cancel -side left -padx {6 0}
    }
    place $w -in $ds9(canvas) -relx 0 -rely 1 -x 4 -y -4 -anchor sw
    raise $w
}

# out of the way while the canvas is grabbed (saveimage, movies): on
# macOS the grab includes widgets over it
proc HiPSDeepStatusSuspend {} {
    global hipsdeep
    global ds9

    if {[HiPSDeepStatusShown]} {
	place forget $ds9(image).hipsdeep
	set hipsdeep(suspended) 1
	# the canvas repaints where the label was (as RealizeDS9 does)
	update
    }
}

proc HiPSDeepStatusResume {} {
    global hipsdeep

    if {[info exists hipsdeep(suspended)]} {
	unset hipsdeep(suspended)
	HiPSDeepStatusShow
    }
}

proc HiPSDeepStatusShown {} {
    global ds9

    if {![info exists ds9(image)] || ![winfo exists $ds9(image).hipsdeep]} {
	return 0
    }
    return [expr {[winfo manager $ds9(image).hipsdeep] == {place}}]
}

# rebuild frame's window with the tiles that have arrived: at most every
# 300 ms while tiles are arriving, and once more when they are all in
proc HiPSDeepRefreshSoon {frame {delay 300}} {
    global hipsdeep

    if {[info exists hipsdeep(timer,$frame)]} {
	if {$delay} {
	    return
	}
	after cancel $hipsdeep(timer,$frame)
    }
    set hipsdeep(timer,$frame) [after $delay [list HiPSDeepRefresh $frame]]
}

proc HiPSDeepRefresh {frame} {
    global hipsdeep

    unset -nocomplain hipsdeep(timer,$frame)
    if {![llength [info commands $frame]]} {
	return
    }
    if {![catch {$frame update fits center}]} {
	incr hipsdeep(refreshes)
    }
    HiPSClearErrorInfo
}


# HiPS by ID (HiPS 1.0 sec. 5.2): an ID such as CDS/P/DSS2/color (the
# creator_did without ivo://) is looked up in the MocServer registry
# (phpxopen(mocserver), a list of query URLs tried in turn), and the HiPS
# is then loaded from its hips_service_url like any URL. The list of
# image and cube HiPS (ID, title, type, URL) is fetched once into the
# cache, mocserver.txt, refreshed after hipsnet(listage) seconds; it
# serves xpaget hips list, File > Open HiPS from List, and resolves IDs
# without a query of its own. A name is an ID only if it is not a local
# file or directory.

proc HiPSIsID {fn} {
    set root [HiPSRoot $fn]
    if {[regexp -nocase {^ivo://} $root]} {
	return 1
    }
    if {[HiPSIsURL $root] || [regexp -nocase {^file://} $root] ||
	[file exists $root]} {
	return 0
    }
    return [regexp {^[A-Za-z0-9][^/\s]*/[A-Za-z]/\S+$} $root]
}

# the ID of a name: without ivo:// and the options
proc HiPSIDOf {fn} {
    set id [HiPSRoot $fn]
    regsub -nocase {^ivo://} $id {} id
    return [string trimright $id /]
}

# A HiPS name with its ID replaced by the HiPS's URL (options kept), or
# the name unchanged if it is not an ID. {} and hipsnet(error) if the ID
# can't be resolved.
proc HiPSResolveName {fn} {
    if {![HiPSIsID $fn]} {
	return $fn
    }
    set url [HiPSResolveID [HiPSIDOf $fn]]
    if {$url == {}} {
	return {}
    }
    return "$url[string range $fn [string length [HiPSRoot $fn]] end]"
}

# The hips_service_url of HiPS id: from this session's answers, the
# cached list, else a MocServer query. {} and hipsnet(error) if unknown.
proc HiPSResolveID {id} {
    global hipsnet

    set hipsnet(error) {}
    if {[info exists hipsnet(id,$id)]} {
	return $hipsnet(id,$id)
    }
    set recs [HiPSListRecords 0 1]
    set url [HiPSRecordURL $recs $id]
    if {$url == {}} {
	set fn [file join [HiPSCacheRoot] mocserver-id.txt]
	set recs [HiPSMocServerQuery [list ID $id get record] $fn]
	catch {file delete -force $fn}
	if {$recs == {} && $hipsnet(error) != {}} {
	    return {}
	}
	set url [HiPSRecordURL $recs $id]
    }
    if {$url == {}} {
	set hipsnet(error) "[msgcat::mc {no HiPS with the ID}] $id"
	return {}
    }
    set hipsnet(id,$id) $url
    return $url
}

# the service URL of record id in recs (exact ID, else any case)
proc HiPSRecordURL {recs id} {
    foreach nocase {0 1} {
	foreach rr $recs {
	    set rid [HiPSProp $rr ID]
	    if {$nocase ? [string equal -nocase $rid $id] : $rid eq $id} {
		set url [string trimright [HiPSProp $rr hips_service_url] /]
		if {[HiPSIsURL $url]} {
		    return $url
		}
	    }
	}
    }
    return {}
}

# Ask the MocServer: query is a key value list; the answer (records of
# "key = value" lines) goes to fn and is returned parsed. {} and
# hipsnet(error) if no server answers.
proc HiPSMocServerQuery {query fn} {
    global hipsnet
    global phpxopen

    set hipsnet(error) {}
    if {[catch {file mkdir [file dirname $fn]} err]} {
	set hipsnet(error) "[msgcat::mc {can't create the HiPS cache}]: $err"
	return {}
    }
    set code 0
    set server {}
    foreach server $phpxopen(mocserver) {
	set code [HiPSGet "$server?[http::formatQuery {*}$query]" $fn]
	if {$code == 200} {
	    break
	}
    }
    if {$code != 200} {
	catch {file delete -force $fn}
	set hipsnet(error) "[msgcat::mc {can't query}] $server ([HiPSCodeText $code])"
	return {}
    }
    if {[catch {HiPSReadRecords $fn} recs]} {
	set hipsnet(error) "[msgcat::mc {can't read}] $fn"
	return {}
    }
    return $recs
}

# MocServer records: "key = value" lines, a record ending at a blank
# line or the next ID. A list of dicts, the first of repeated keys
# winning (as in properties).
proc HiPSReadRecords {fn} {
    set ch [open $fn r]
    fconfigure $ch -encoding utf-8
    set recs {}
    set rr {}
    while {[gets $ch line] >= 0} {
	set line [string trim $line]
	if {$line == {}} {
	    if {$rr != {}} {
		lappend recs $rr
		set rr {}
	    }
	    continue
	}
	if {[string index $line 0] == "#"} {
	    continue
	}
	set id [string first = $line]
	if {$id <= 0} {
	    continue
	}
	set key [string trim [string range $line 0 [expr $id-1]]]
	set val [string trim [string range $line [expr $id+1] end]]
	if {$key == {ID} && [dict exists $rr ID]} {
	    lappend recs $rr
	    set rr {}
	}
	if {![dict exists $rr $key]} {
	    dict set rr $key $val
	}
    }
    close $ch
    if {$rr != {}} {
	lappend recs $rr
    }
    return $recs
}

proc HiPSListFile {} {
    return [file join [HiPSCacheRoot] mocserver.txt]
}

# The image and cube HiPS the MocServer lists, as records (ID,
# obs_title, dataproduct_type, hips_service_url), sorted by ID. The
# cached list is used while younger than hipsnet(listage) seconds
# (update forces a query); a stale one serves when no server answers.
# With cached, only what is cached, never a query. {} and hipsnet(error)
# if there is no list.
proc HiPSListRecords {{update 0} {cached 0}} {
    global hipsnet

    set fn [HiPSListFile]
    set have [file isfile $fn]
    set fresh 0
    if {$have} {
	set fresh [expr {[clock seconds]-[file mtime $fn] < $hipsnet(listage)}]
    }
    if {$have && ($cached || ($fresh && !$update))} {
	if {[info exists hipsnet(list)] &&
	    $hipsnet(list,mtime) == [file mtime $fn]} {
	    return $hipsnet(list)
	}
	if {![catch {HiPSReadRecords $fn} recs]} {
	    return [HiPSListKeep $fn $recs]
	}
    }
    if {$cached} {
	return {}
    }

    # images and cubes, not catalogues (a much longer list)
    set fields ID,obs_title,dataproduct_type,hips_service_url
    set all {}
    foreach type {image cube} {
	set recs [HiPSMocServerQuery [list dataproduct_type $type \
	    hips_service_url * get record fields $fields] $fn.$type]
	if {$recs == {} && $hipsnet(error) != {}} {
	    foreach tt {image cube} {
		catch {file delete -force $fn.$tt}
	    }
	    # a stale list rather than none
	    if {$have && ![catch {HiPSReadRecords $fn} recs]} {
		set hipsnet(error) {}
		return [HiPSListKeep $fn $recs]
	    }
	    return {}
	}
	set all [concat $all $recs]
    }
    foreach tt {image cube} {
	catch {file delete -force $fn.$tt}
    }
    set all [lsort -dictionary -command HiPSRecordCompare $all]

    # written back as records, so the file reads as it was fetched
    set tmp [HiPSTemp $fn]
    set ch [open $tmp w]
    fconfigure $ch -encoding utf-8
    foreach rr $all {
	dict for {key val} $rr {
	    puts $ch "$key = $val"
	}
	puts $ch {}
    }
    close $ch
    HiPSKeep $tmp $fn
    return [HiPSListKeep $fn $all]
}

proc HiPSListKeep {fn recs} {
    global hipsnet

    set hipsnet(list) $recs
    set hipsnet(list,mtime) [file mtime $fn]
    return $recs
}

proc HiPSRecordCompare {a b} {
    return [string compare -nocase [HiPSProp $a ID] [HiPSProp $b ID]]
}

# The records whose ID or title matches pattern (a glob, any case; a
# plain word matches anywhere)
proc HiPSListMatch {recs pattern} {
    set pattern [string trim $pattern]
    if {$pattern == {}} {
	return $recs
    }
    if {![regexp {[*?\[]} $pattern]} {
	set pattern "*$pattern*"
    }
    set rr {}
    foreach rec $recs {
	if {[string match -nocase $pattern [HiPSProp $rec ID]] ||
	    [string match -nocase $pattern [HiPSProp $rec obs_title]]} {
	    lappend rr $rec
	}
    }
    return $rr
}

# xpaget hips list [update] [pattern]: one HiPS a line, ID, a tab, its title
proc HiPSListText {args} {
    global hipsnet

    set update 0
    if {[string tolower [lindex $args 0]] == {update}} {
	set update 1
	set args [lrange $args 1 end]
    }
    set recs [HiPSListRecords $update]
    HiPSClearErrorInfo
    if {$recs == {}} {
	if {$hipsnet(error) != {}} {
	    Error "HiPS list: $hipsnet(error)"
	}
	return {}
    }
    set out {}
    foreach rec [HiPSListMatch $recs [join $args { }]] {
	lappend out "[HiPSProp $rec ID]\t[HiPSProp $rec obs_title]"
    }
    return [join $out \n]
}
