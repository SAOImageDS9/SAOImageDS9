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

    # state of the fetch in progress
    set hipsnet(busy) 0
    set hipsnet(cancel) 0
    set hipsnet(tokens) {}
    set hipsnet(error) {}
    set hipsnet(ext) fits
    set hipsnet(bases) {}

    # deep windows' background tile fetching (HiPSDeepWant)
    global hipsdeep
    set hipsdeep(queue) {}
    set hipsdeep(running) 0
    set hipsdeep(fetched) 0
    set hipsdeep(refreshes) 0
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

# keep the cache within its limit; keep is the HiPS in use
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
    foreach rr [lsort -integer -index 0 $ll] {
	if {$total <= $limit} {
	    break
	}
	lassign $rr used size dd
	if {[file normalize $dd] == [file normalize $keep]} {
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
    catch {file delete -force [HiPSCacheRoot]}
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

    set rr [HiPSFetchDo $url $dir $opts]
    if {$rr != {}} {
	HiPSCachePrune $dir
	# deep windows fetch more of it later (HiPSDeepWant)
	set hipsnet(url,[file normalize $dir]) $url
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
    set ext [HiPSTileExt $props]
    if {$ext == {}} {
	set hipsnet(error) "[msgcat::mc {no FITS, PNG or JPEG tiles, this HiPS has}] [HiPSProp $props hips_tile_format]"
	return {}
    }
    set hipsnet(ext) $ext
    set hipsnet(bases) [HiPSBases $url $props]
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
    set code [HiPSGet $url/properties $pf.new]
    # no answer: try the mirrors a cached copy lists
    if {$code != 200 && $code != 404 && [file isfile $pf] &&
	![catch {HiPSReadProperties $dir} pp]} {
	foreach base [lrange [HiPSBases $url $pp] 1 end] {
	    set code [HiPSGet $base/properties $pf.new]
	    if {$code == 200} {
		break
	    }
	}
    }
    if {$code == 200} {
	file rename -force $pf.new $pf
    } else {
	catch {file delete -force $pf.new}
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
    set af [file join $od Allsky.$ext]
    set none [file join $od .noallsky.$ext]
    if {[file exists $none]} {
	return 0
    }
    if {![file isfile $af]} {
	file mkdir $od
	set code [HiPSGetPath Norder$kk/Allsky.$ext $af.new]
	if {$code != 200} {
	    catch {file delete -force $af.new}
	    # remember a 404 so it isn't asked for again
	    if {$code == 404} {
		close [open $none w]
	    }
	    return 0
	}
	file rename -force $af.new $af
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
	set code [HiPSGetPath Moc.fits $mf.new]
	if {$code == 200} {
	    file rename -force $mf.new $mf
	} else {
	    catch {file delete -force $mf.new}
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
    set mfn [file join $od .missing]
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
    return [file join $dir Norder$kk Dir$dd Npix$nn.$hipsnet(ext)]
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
    file mkdir [file dirname $fn]
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
    HiPSGetAsync "$base/Norder$kk/Dir$dd/Npix$nn.$hipsnet(ext)" $fn.new \
	[list HiPSTileDone $nn $fn]
}

proc HiPSTileDone {nn fn code} {
    global hipsnet

    incr hipsnet(running) -1
    incr hipsnet(done)
    switch -- $code {
	200 {file rename -force $fn.new $fn}
	404 {
	    catch {file delete -force $fn.new}
	    lappend hipsnet(gone) $nn
	}
	default {
	    catch {file delete -force $fn.new}
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
proc HiPSGetAsync {url fn done {hops 0}} {
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
	HiPSGetAsync $loc $fn $done [expr {$hops+1}]
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
proc HiPSDeepWant {frame root order tiles} {
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
    set ext [HiPSTileExt $props]
    if {$ext == {}} {
	return
    }

    # known to be missing (404s remembered by either fetcher)
    set od [file join $root Norder$order]
    if {[file isfile [file join $od .missing]]} {
	set ch [open [file join $od .missing] r]
	foreach nn [split [read $ch] \n] {
	    if {$nn != {}} {
		set gone($nn) 1
	    }
	}
	close $ch
    }

    foreach nn $tiles {
	set key "$root $order $nn"
	if {[info exists gone($nn)] || [info exists hipsdeep(want,$key)]} {
	    continue
	}
	set hipsdeep(want,$key) 1
	lappend hipsdeep(queue) [list $frame $root $url $order $nn $ext]
    }
    while {$hipsdeep(running) < $hipsnet(parallel) &&
	   [llength $hipsdeep(queue)]} {
	HiPSDeepNext
    }
    # starting requests leaves the http package's errorInfo, which the
    # command that rebuilt the window (zoom, pan, ...) would report
    HiPSClearErrorInfo
}

proc HiPSDeepNext {} {
    global hipsdeep

    if {![llength $hipsdeep(queue)]} {
	return
    }
    lassign [lindex $hipsdeep(queue) 0] frame root url order nn ext
    set hipsdeep(queue) [lrange $hipsdeep(queue) 1 end]

    set dd [expr {($nn/10000)*10000}]
    set fn [file join $root Norder$order Dir$dd Npix$nn.$ext]
    file mkdir [file dirname $fn]
    incr hipsdeep(running)
    HiPSGetAsync "$url/Norder$order/Dir$dd/Npix$nn.$ext" $fn.new \
	[list HiPSDeepDone $frame $root $order $nn $fn]
}

proc HiPSDeepDone {frame root order nn fn code} {
    global hipsdeep

    incr hipsdeep(running) -1
    unset -nocomplain hipsdeep(want,$root $order $nn)
    switch -- $code {
	200 {
	    file rename -force $fn.new $fn
	    incr hipsdeep(fetched)
	    HiPSDeepRefreshSoon $frame
	}
	404 {
	    catch {file delete -force $fn.new}
	    catch {
		set ch [open [file join $root Norder$order .missing] a]
		puts $ch $nn
		close $ch
	    }
	}
	default {catch {file delete -force $fn.new}}
    }
    HiPSClearErrorInfo
    HiPSDeepNext
    # the last one: a final refresh
    if {!$hipsdeep(running) && ![llength $hipsdeep(queue)]} {
	HiPSDeepRefreshSoon $frame 0
    }
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

