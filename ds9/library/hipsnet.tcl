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
#  - without order=: one Allsky.fits, the deepest of orders 3..0 that
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
}

# Is fn (with or without [options]) a remote HiPS? file:// is local.
proc HiPSIsURL {fn} {
    return [regexp -nocase {^https?://} $fn]
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
    global prefs

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
    return [file join $prefs(dir) hips {*}$out]
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

    if {[catch {file mkdir $dir} err]} {
	set hipsnet(error) "[msgcat::mc {can't create the HiPS cache}] $dir: $err"
	return {}
    }

    # properties: always fetched, so an updated HiPS is noticed; a cached
    # copy serves when the server can't be reached
    set pf [file join $dir properties]
    set old {}
    if {[file isfile $pf] && ![catch {HiPSReadProperties $dir} pp]} {
	set old [HiPSProp $pp hips_release_date]
    }
    set code [HiPSGet $url/properties $pf.new]
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

    # a new release: what is cached is stale
    set new [HiPSProp $props hips_release_date]
    if {$old != {} && $new != $old} {
	foreach ff [glob -nocomplain -directory $dir Norder* Moc.fits] {
	    catch {file delete -force $ff}
	}
    }

    if {[HiPSProp $props dataproduct_type image] == {catalog}} {
	set hipsnet(error) [msgcat::mc {catalogue HiPS are not supported}]
	return {}
    }
    set formats [string tolower [HiPSProp $props hips_tile_format fits]]
    if {[lsearch -exact $formats fits] < 0} {
	set hipsnet(error) "[msgcat::mc {only FITS tiles can be read, this HiPS has}] $formats"
	return {}
    }
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

# Fetch NorderK/Allsky.fits (unless cached). Returns the width of its
# tiles, or 0 if there is none (or it can't be read).
proc HiPSFetchAllsky {url dir kk} {
    set od [file join $dir Norder$kk]
    set af [file join $od Allsky.fits]
    set none [file join $od .noallsky]
    if {[file exists $none]} {
	return 0
    }
    if {![file isfile $af]} {
	file mkdir $od
	set code [HiPSGet $url/Norder$kk/Allsky.fits $af.new]
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

    set ai [HiPSFitsInfo $af]
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
	set code [HiPSGet $url/Moc.fits $mf.new]
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

    set bitpix [HiPSProp $props hips_pixel_bitpix -32]
    if {![string is integer -strict $bitpix] || $bitpix == 0} {
	set bitpix -32
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
    return [file join $dir Norder$kk Dir$dd Npix$nn.fits]
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
    HiPSGetAsync "$hipsnet(url)/Norder$kk/Dir$dd/Npix$nn.fits" $fn.new \
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
		lappend hipsnet(failed) [list $nn [HiPSCodeText $code]]
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
