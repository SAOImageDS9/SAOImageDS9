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
#  - tiles in the format the reader will use (hipsinfo format: fits, else
#    png, else jpg)
#  - without norder=: one Allsky, the deepest of orders 3..0 that
#    exists (a quick look, a few MB); if there is none, the tiles of the
#    deepest order up to NSIDE hipsnet(autonside)
#  - with norder=K: that order's Allsky.fits if it holds full-size tiles,
#    otherwise its tiles, minus the cells Moc.fits says are empty
# The reader is then given norder=K explicitly, so what it reads doesn't
# depend on what else is in the cache.

proc HiPSNetDef {} {
    global hipsnet

    # parallel requests; be polite to public servers
    set hipsnet(parallel) 6
    # without norder=, tiles (when there is no Allsky) up to this NSIDE
    set hipsnet(autonside) 512
    # the largest map the reader makes (HIPS_NSIDE_MAX, fitsy/hips.C):
    # the tiles of a deeper norder= are not fetched
    set hipsnet(nsidemax) 8192
    # refuse to download more than this many bytes of tiles in one load
    set hipsnet(maxbytes) [expr {wide(1)<<30}]
    # redirects followed per request
    set hipsnet(redirects) 5
    # the cached MocServer list of HiPS is refreshed after a day
    set hipsnet(listage) 86400

    # the loads being fetched (ids; each has its own context, the
    # array hipsfetch<id>, see HiPSFetchStart)
    set hipsnet(fetches) {}
    # a load's progress line shows after this many ms
    set hipsnet(progressdelay) 300

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
# empty for frame 0 and for images: slice= in opts (1-based, so frame
# slice-1), else hips_cube_firstframe (0-based), as the reader
# (FitsHiPS) picks
proc HiPSSliceSuffix {props opts} {
    if {![string match cube* [HiPSProp $props dataproduct_type image]]} {
	return {}
    }
    if {[dict exists $opts slice]} {
	set ss [dict get $opts slice]
	if {![string is integer -strict $ss]} {
	    return {}
	}
	incr ss -1
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

# The list of an order's tiles known to be missing (404), in its cache
# directory od: one per cube frame (sfx) and tile format (a HiPS may
# have FITS tiles where it has no PNG ones)
proc HiPSMissingFile {od sfx ext} {
    return [file join $od .missing$sfx.$ext]
}

proc HiPSGetPath {id path fn} {
    upvar #0 hipsfetch$id ctx

    set code 0
    foreach base $ctx(bases) {
	set code [HiPSGet $base/$path $fn]
	if {$code == 200 || $code == 404 || $ctx(cancel)} {
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
# an RGB frame) or being loaded, normalized
proc HiPSCacheInUse {} {
    global ds9
    global hipsnet

    set rr {}
    foreach id $hipsnet(fetches) {
	if {[info exists ::hipsfetch${id}(dir)]} {
	    lappend rr [file normalize [set ::hipsfetch${id}(dir)]]
	}
    }
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
    # all but the HiPS shown in a frame or being loaded (their windows
    # read tiles from here, and deep ones and loads keep fetching into it)
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

# Loads of remote HiPS. Each load runs as a coroutine (HiPSFetchRun)
# with a context of its own, the global array hipsfetch<id>: the URL,
# cache directory and options, the tile format and cube suffix, the
# mirrors, its tile queue and counts, its cancel flag and its error.
# While it waits for a download it yields (HiPSGet), so loads never wait
# inside one another, and any number can run at once, each with its own
# progress line and Cancel. When it ends, its ondone command is called
# with the local name for the reader (cache directory plus options, with
# norder= made explicit), or {} and why not.
#
# HiPSFetch waits for its load (XPA, the command line, restore, SAMP:
# the frame is loaded when the command returns, as with fits <url>);
# HiPSLoadAsync (dialogs, Open Recent) returns at once.
namespace eval ::hipsfetch {}

proc HiPSFetchStart {fn done} {
    global hipsnet

    set id [incr hipsnet(fetchid)]
    upvar #0 hipsfetch$id ctx
    set url [string trimright [HiPSRoot $fn] /]
    array set ctx [list \
		       id $id \
		       fn $fn \
		       url $url \
		       dir [HiPSCacheDir $url] \
		       opts [HiPSOptions $fn] \
		       ext fits \
		       sfx {} \
		       bases [list $url] \
		       cancel 0 \
		       error {} \
		       local {} \
		       ondone $done \
		       msg "[msgcat::mc {Reading}] $url/properties" \
		      ]
    lappend hipsnet(fetches) $id
    set ctx(timer) [after $hipsnet(progressdelay) [list HiPSProgress $id]]
    coroutine ::hipsfetch::co$id HiPSFetchRun $id
    return $id
}

proc HiPSFetchRun {id} {
    global hipsnet
    upvar #0 hipsfetch$id ctx

    # anything that throws (a full disk, an unwritable cache) is an
    # error of this load
    if {[catch {HiPSFetchDo $id} kk]} {
	set ctx(error) $kk
	set kk {}
    }
    if {$ctx(cancel)} {
	set ctx(error) [msgcat::mc {cancelled}]
	set kk {}
    }
    if {$kk != {} && [catch {
	set dir $ctx(dir)
	HiPSCachePrune $dir
	# deep windows fetch more of it later (HiPSDeepWant)
	set hipsnet(url,[file normalize $dir]) $ctx(url)
	# norder=K, explicit, for the reader
	set ext [string range $ctx(fn) [string length [HiPSRoot $ctx(fn)]] end]
	if {[dict exists $ctx(opts) norder]} {
	    set ctx(local) "$dir$ext"
	} elseif {$ext == {}} {
	    set ctx(local) "$dir\[norder=$kk\]"
	} else {
	    set ctx(local) "$dir\[norder=$kk,[string range $ext 1 end]"
	}
    } err]} {
	set ctx(local) {}
	set ctx(error) $err
    }
    # done runs outside the coroutine: a load it starts must not take
    # this load's waits for its own
    after 0 [list HiPSFetchFinish $id]
}

proc HiPSFetchFinish {id} {
    global hipsnet
    upvar #0 hipsfetch$id ctx

    after cancel $ctx(timer)
    HiPSProgressRemove $id
    set ii [lsearch -exact $hipsnet(fetches) $id]
    set hipsnet(fetches) [lreplace $hipsnet(fetches) $ii $ii]
    set done $ctx(ondone)
    set local $ctx(local)
    set err $ctx(error)
    if {$local == {} && $err == {}} {
	set err [msgcat::mc {failed}]
    }
    unset ctx
    HiPSClearErrorInfo
    {*}$done $local $err
}

# Fetch what loading the remote HiPS fn needs, and wait for it. Returns
# the local name for the reader; throws why not (failure or cancel).
proc HiPSFetch {fn} {
    global hipsnet

    set var ::hipsnet(wait,[incr hipsnet(waitid)])
    set $var {}
    HiPSFetchStart $fn [list HiPSFetchWaited $var]
    while {[set $var] == {}} {
	vwait $var
    }
    lassign [set $var] local err
    unset $var
    if {$local == {}} {
	error $err
    }
    return $local
}

proc HiPSFetchWaited {var local err} {
    set $var [list $local $err]
}

# stop a load
proc HiPSFetchCancel {id} {
    upvar #0 hipsfetch$id ctx

    if {![array exists ctx]} {
	return
    }
    set ctx(cancel) 1
    set ctx(queue) {}
    HiPSJobsCancel $id
}

# throws if load id has been cancelled
proc HiPSFetchCheck {id} {
    upvar #0 hipsfetch$id ctx

    if {$ctx(cancel)} {
	error [msgcat::mc {cancelled}]
    }
}

# the order to read; throws why not
proc HiPSFetchDo {id} {
    global hipsnet
    upvar #0 hipsfetch$id ctx

    set url $ctx(url)
    set dir $ctx(dir)
    set opts $ctx(opts)
    set props [HiPSFetchProperties $url $dir]
    HiPSFetchCheck $id
    # what the reader will make of it: its tiles, or its error (a
    # catalogue, a bad option or format)
    set ctx(name) "$dir[string range $ctx(fn) [string length [HiPSRoot $ctx(fn)]] end]"
    set ctx(ext) [hipsinfo format $ctx(name)]
    set ctx(bases) [HiPSBases $url $props]
    set ctx(sfx) [HiPSSliceSuffix $props $opts]
    set width [HiPSProp $props hips_tile_width 512]
    set maxorder [HiPSProp $props hips_order -1]
    set minorder [HiPSProp $props hips_order_min 0]
    if {![string is integer -strict $width] || $width < 1 ||
	![string is integer -strict $maxorder] || $maxorder < 0} {
	error [msgcat::mc {bad hips_order or hips_tile_width in properties}]
    }
    if {![string is integer -strict $minorder] || $minorder < 0} {
	set minorder 0
    }

    if {[dict exists $opts norder]} {
	set kk [dict get $opts norder]
	if {![string is integer -strict $kk] || $kk < 0} {
	    # not an order; the reader complains
	    return 0
	}
	if {$kk > $maxorder} {
	    # the reader names the problem
	    return $kk
	}
	# a full-size Allsky is the same data in one file
	set aw 0
	if {$kk <= 3} {
	    set aw [HiPSFetchAllsky $id $kk]
	}
	if {$aw == $width} {
	    return $kk
	}
	# too deep for a map: the reader says so (or reads a reduced
	# Allsky); listing its tiles alone could take minutes
	if {(wide($width)<<$kk) > $hipsnet(nsidemax)} {
	    return $kk
	}
	HiPSFetchTiles $id $kk $width $props
	return $kk
    }

    # quick look: the deepest Allsky of orders 3..0
    for {set kk [expr {$maxorder<3 ? $maxorder : 3}]} {$kk >= 0} {incr kk -1} {
	HiPSFetchCheck $id
	if {[HiPSFetchAllsky $id $kk] > 0} {
	    return $kk
	}
    }

    # no Allsky: the tiles of the deepest order up to hipsnet(autonside)
    set kk $minorder
    while {$kk < $maxorder && (wide($width)<<($kk+1)) <= $hipsnet(autonside)} {
	incr kk
    }
    HiPSFetchTiles $id $kk $width $props
    return $kk
}

# Fetch url/properties into the cache directory dir, and return them as
# a dict (throws on failure). Always fetched, so an
# updated HiPS is noticed (a new hips_release_date empties the cached
# tiles); a cached copy serves when the server can't be reached.
proc HiPSFetchProperties {url dir} {
    if {[catch {file mkdir $dir} err]} {
	error "[msgcat::mc {can't create the HiPS cache}] $dir: $err"
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
	    error "[msgcat::mc {can't read}] $url/properties ([HiPSCodeText $code])"
	}
    }
    if {[catch {HiPSReadProperties $dir} props]} {
	error "[msgcat::mc {can't read}] $url/properties"
    }
    # what the reader goes by: a cache holds only the tiles fetched, so
    # an order's tiles there count only when they are all there
    # (FitsHiPS::allTiles), unlike a local HiPS's
    set rf [file join $dir .remote]
    if {![file isfile $rf]} {
	catch {set ch [open $rf w]; puts $ch $url; close $ch}
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
proc HiPSFetchAllsky {id kk} {
    upvar #0 hipsfetch$id ctx

    set od [file join $ctx(dir) Norder$kk]
    set ext $ctx(ext)
    set sfx $ctx(sfx)
    set af [file join $od Allsky$sfx.$ext]
    set none [file join $od .noallsky$sfx.$ext]
    if {[file exists $none]} {
	return 0
    }
    if {![file isfile $af]} {
	file mkdir $od
	set tmp [HiPSTemp $af]
	set ctx(msg) "[msgcat::mc {Fetching}] Norder$kk/Allsky$sfx.$ext"
	set code [HiPSGetPath $id Norder$kk/Allsky$sfx.$ext $tmp]
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

    # one the reader can't use (truncated, the wrong size) is removed
    # and remembered like a 404, until a new release empties the cache:
    # kept, it was never fetched again
    set ww 0
    catch {lassign [hipsinfo allsky $ctx(name) $kk] ww}
    if {!$ww} {
	catch {file delete -force $af}
	catch {close [open $none w]}
    }
    return $ww
}

# Fetch the tiles of order kk that Moc.fits says hold data (all of them
# if there is no MOC), skipping those already cached or known to be
# missing (missing tiles are not an error). Throws on failure or cancel.
proc HiPSFetchTiles {id kk width props} {
    global hipsnet
    upvar #0 hipsfetch$id ctx

    set dir $ctx(dir)
    # Moc.fits, if the HiPS has one
    set mf [file join $dir Moc.fits]
    if {![file isfile $mf]} {
	set tmp [HiPSTemp $mf]
	set ctx(msg) "[msgcat::mc {Fetching}] Moc.fits"
	if {[HiPSGetPath $id Moc.fits $tmp] == 200} {
	    HiPSKeep $tmp $mf
	} else {
	    catch {file delete -force $tmp}
	}
    }
    HiPSFetchCheck $id
    # (a MOC the reader can't read, or not a NUNIQ one, limits nothing)
    set tiles {}
    if {[file isfile $mf]} {
	catch {set tiles [hipsinfo moc $mf $kk]}
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
    set mfn [HiPSMissingFile $od $ctx(sfx) $ctx(ext)]
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
	if {![file isfile [HiPSTilePath $dir $kk $nn $ctx(sfx) $ctx(ext)]]} {
	    lappend need $nn
	}
    }

    # png/jpg are compressed; count them as a byte a pixel
    set bitpix [HiPSProp $props hips_pixel_bitpix -32]
    if {![string is integer -strict $bitpix] || $bitpix == 0 ||
	$ctx(ext) != {fits}} {
	set bitpix 8
    }
    set bytes [expr {wide([llength $need])*$width*$width*abs($bitpix)/8}]
    if {$bytes > $hipsnet(maxbytes)} {
	error "[msgcat::mc {order}] $kk [msgcat::mc {needs}] [llength $need] [msgcat::mc {tiles}] ([expr {$bytes>>20}] MB), [msgcat::mc {more than the limit of}] [expr {$hipsnet(maxbytes)>>20}] MB"
    }
    if {$need == {}} {
	return
    }

    # a small pool of asynchronous requests; this coroutine waits until
    # the pool has finished (HiPSTileNext wakes it)
    array unset ctx try,*
    set ctx(queue) $need
    set ctx(running) 0
    set ctx(done) 0
    set ctx(total) [llength $need]
    set ctx(failed) {}
    set ctx(gone) {}
    set ctx(finished) 0
    set ctx(order) $kk
    set ctx(waiter) [info coroutine]
    HiPSTileMsg $id
    for {set ii 0} {$ii < $hipsnet(parallel)} {incr ii} {
	HiPSTileNext $id
    }
    while {!$ctx(finished)} {
	yield
    }

    # remember the 404s
    if {$ctx(gone) != {}} {
	set ch [open $mfn a]
	foreach nn $ctx(gone) {
	    puts $ch $nn
	}
	close $ch
    }

    HiPSFetchCheck $id
    if {$ctx(failed) != {}} {
	set nn [lindex $ctx(failed) 0]
	error "[llength $ctx(failed)] [msgcat::mc {tiles could not be fetched, e.g.}] [lindex $nn 0] ([lindex $nn 1])"
    }
}

proc HiPSTilePath {dir kk nn sfx ext} {
    set dd [expr {($nn/10000)*10000}]
    return [file join $dir Norder$kk Dir$dd Npix$nn$sfx.$ext]
}

proc HiPSTileMsg {id} {
    upvar #0 hipsfetch$id ctx

    set ctx(msg) "[msgcat::mc {Fetching HiPS tiles}]: order $ctx(order), $ctx(done) / $ctx(total)"
}

# start load id's next queued tile, or finish
proc HiPSTileNext {id} {
    upvar #0 hipsfetch$id ctx

    if {$ctx(cancel)} {
	set ctx(queue) {}
    }
    if {$ctx(queue) == {}} {
	if {$ctx(running) == 0 && !$ctx(finished)} {
	    set ctx(finished) 1
	    HiPSWake $ctx(waiter)
	}
	return
    }
    set nn [lindex $ctx(queue) 0]
    set ctx(queue) [lrange $ctx(queue) 1 end]

    set kk $ctx(order)
    set dd [expr {($nn/10000)*10000}]
    set fn [HiPSTilePath $ctx(dir) $kk $nn $ctx(sfx) $ctx(ext)]
    # if this fails, so does the download, and that is reported
    catch {file mkdir [file dirname $fn]}
    incr ctx(running)
    # the mirror this tile is on (it moves on when one fails)
    set ii 0
    if {[info exists ctx(try,$nn)]} {
	set ii $ctx(try,$nn)
    }
    set base [lindex $ctx(bases) $ii]
    if {$base == {}} {
	set base $ctx(url)
    }
    set tmp [HiPSTemp $fn]
    HiPSGetAsync "$base/Norder$kk/Dir$dd/Npix$nn$ctx(sfx).$ctx(ext)" $tmp \
	[list HiPSTileDone $id $nn $fn $tmp] $id
}

proc HiPSTileDone {id nn fn tmp code} {
    upvar #0 hipsfetch$id ctx

    if {![array exists ctx]} {
	catch {file delete -force $tmp}
	return
    }
    incr ctx(running) -1
    incr ctx(done)
    # a file that can't be kept is a failure like any other
    if {$code == 200 && ![HiPSKeep $tmp $fn]} {
	set code 0
    }
    switch -- $code {
	200 {}
	404 {
	    catch {file delete -force $tmp}
	    lappend ctx(gone) $nn
	}
	default {
	    catch {file delete -force $tmp}
	    if {!$ctx(cancel)} {
		# no answer or a server error: the next mirror, if any
		set ii 0
		if {[info exists ctx(try,$nn)]} {
		    set ii $ctx(try,$nn)
		}
		incr ii
		if {$ii < [llength $ctx(bases)]} {
		    set ctx(try,$nn) $ii
		    incr ctx(done) -1
		    set ctx(queue) [linsert $ctx(queue) 0 $nn]
		} else {
		    lappend ctx(failed) [list $nn [HiPSCodeText $code]]
		}
	    }
	}
    }
    HiPSTileMsg $id
    HiPSTileNext $id
}

# GET of url into fn, following redirects, returning when it is done.
# Returns the HTTP status (200, 404, ...), or 0 if the request failed or
# was cancelled. In a load's coroutine it yields meanwhile (the load is
# its owner, so cancelling the load ends it); elsewhere (the dialogs'
# properties, the coverage overlay, MocServer queries) it waits on a
# variable of its own, so another wait the event loop runs meanwhile
# can't take its answer.
proc HiPSGet {url fn} {
    global hipsnet

    set co [info coroutine]
    if {[string match ::hipsfetch::co* $co]} {
	# a cancelled load asks for nothing more
	set id [string range [namespace tail $co] 2 end]
	if {[set ::hipsfetch${id}(cancel)]} {
	    return 0
	}
	HiPSGetAsync $url $fn [list HiPSWake $co] $id
	set code [yield]
    } else {
	set id [incr hipsnet(syncid)]
	set var ::hipsnet(sync,$id)
	set $var {}
	HiPSGetAsync $url $fn [list set $var]
	if {[set $var] == {}} {
	    vwait $var
	}
	set code [set $var]
	unset $var
    }
    HiPSClearErrorInfo
    return $code
}

# resume coroutine co with value, from the event loop (never from inside
# itself), unless it has ended
proc HiPSWake {co {value {}}} {
    after 0 [list HiPSResume $co $value]
}

proc HiPSResume {co value} {
    if {[llength [info commands $co]]} {
	$co $value
    }
}

# The http package catches errors of its own, which leaves errorInfo
# set; XPA's error check (XPACatchError) would report that as a failure
# (url.tcl clears it the same way)
proc HiPSClearErrorInfo {} {
    global errorInfo
    set errorInfo {}
}

# Asynchronous GET of url into fn; done is called with the HTTP status
# (0 if the request failed or was cancelled), after following redirects.
# owner (a load's id, or deep) is what HiPSJobsCancel cancels by.
#
# The requests run in worker threads (Thread package). In the main
# thread, Tcl's https blocks the event loop during each TLS handshake: a
# slow server (eROSITA's took ~5 s a handshake) froze ds9 for 52 s while
# a deep window fetched 10 tiles. A worker makes one blocking request at
# a time and posts the result back, so the display and XPA stay live.
# Without the Thread package, the in-process path (HiPSGetAsyncHttp).
proc HiPSGetAsync {url fn done {owner {}}} {
    global hipsnet

    if {![HiPSWorkersReady]} {
	HiPSGetAsyncHttp $url $fn $done $owner
	return
    }
    set id [incr hipsnet(jobid)]
    set hipsnet(job,$id) $done
    set hipsnet(owner,$id) $owner
    lappend hipsnet(jobs) [list $id $url $fn]
    HiPSWorkerDispatch
}

# Cancel owner's requests: those waiting for a worker fail now, those in
# a worker are aborted there (the worker resets its request from inside
# geturl's event loop, which runs the message), and in-process ones are
# reset. Each one's done gets 0.
proc HiPSJobsCancel {owner} {
    global hipsnet

    if {[info exists hipsnet(jobs)]} {
	set keep {}
	foreach jj $hipsnet(jobs) {
	    set jid [lindex $jj 0]
	    if {[info exists hipsnet(owner,$jid)] &&
		$hipsnet(owner,$jid) eq $owner} {
		if {[info exists hipsnet(job,$jid)]} {
		    after idle [list {*}$hipsnet(job,$jid) 0]
		    unset hipsnet(job,$jid)
		}
		unset hipsnet(owner,$jid)
	    } else {
		lappend keep $jj
	    }
	}
	set hipsnet(jobs) $keep
	foreach key [array names hipsnet on,*] {
	    set jid [string range $key 3 end]
	    if {[info exists hipsnet(owner,$jid)] &&
		$hipsnet(owner,$jid) eq $owner &&
		[thread::exists $hipsnet($key)]} {
		thread::send -async $hipsnet($key) [list cancel $jid]
	    }
	}
    }
    foreach key [array names hipsnet tok,*] {
	if {$hipsnet($key) eq $owner} {
	    catch {http::reset [string range $key 4 end] cancelled}
	}
    }
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
	# end the request in progress (fetch is inside geturl's event
	# loop, which runs these) and follow no redirect: abort when ds9
	# is exiting, cancel when its request (job id) is cancelled
	set stop 0
	set cur {}
	set killed {}
	proc reset {} {
	    foreach tok [info vars ::http::\[0-9\]*] {
		if {[array exists $tok]} {
		    catch {http::reset $tok}
		}
	    }
	}
	proc abort {} {
	    set ::stop 1
	    reset
	}
	proc cancel {id} {
	    if {$::cur eq $id} {
		set ::killed $id
		reset
	    }
	}
	proc fetch {main id url fn headers} {
	    set ::cur $id
	    set code 0
	    for {set hops 0} {$hops <= @REDIRECTS@} {incr hops} {
		if {$::stop || $::killed eq $id ||
		    [catch {open $fn wb} ch]} {
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
	    if {$::killed eq $id} {
		set code 0
	    }
	    set ::cur {}
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
    array unset hipsnet owner,*
    array unset hipsnet on,*
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
	set hipsnet(on,$id) $tid
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
    unset -nocomplain hipsnet(on,$id) hipsnet(owner,$id)
    HiPSWorkerDispatch
    if {[info exists hipsnet(job,$id)]} {
	set done $hipsnet(job,$id)
	unset hipsnet(job,$id)
	{*}$done $code
    }
}

# the in-process path, without worker threads
proc HiPSGetAsyncHttp {url fn done owner {hops 0}} {
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
		    -command [list HiPSGetDone $url $fn $ch $done $owner $hops]} \
	     token]} {
	catch {close $ch}
	after idle [list {*}$done 0]
	return
    }
    set hipsnet(tok,$token) $owner
}

proc HiPSGetDone {url fn ch done owner hops token} {
    global hipsnet

    catch {close $ch}
    set reset [expr {[http::status $token] == {reset}}]
    unset -nocomplain hipsnet(tok,$token)

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
	$hops < $hipsnet(redirects) && !$reset} {
	if {![regexp -nocase {^[a-z]+://} $loc]} {
	    ParseURL $url rr
	    if {[string index $loc 0] == {/}} {
		set loc "$rr(scheme)://$rr(authority)$loc"
	    } else {
		set loc "[string range $url 0 [string last / $url]]$loc"
	    }
	}
	HiPSGetAsyncHttp $loc $fn $done $owner [expr {$hops+1}]
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

# stop every load being fetched
proc HiPSCancel {} {
    global hipsnet

    foreach id $hipsnet(fetches) {
	HiPSFetchCancel $id
    }
}

# Progress: a small window with a line per load still running after
# hipsnet(progressdelay) ms, each with its Cancel
proc HiPSProgress {id} {
    global ds9
    upvar #0 hipsfetch$id ctx

    if {![array exists ctx]} {
	return
    }
    set w {.hipsprogress}
    if {![winfo exists $w]} {
	if {![info exists ds9(top)] || ![winfo exists $ds9(top)]} {
	    return
	}
	toplevel $w
	wm title $w [msgcat::mc {HiPS}]
	wm transient $w $ds9(top)
	wm protocol $w WM_DELETE_WINDOW HiPSCancel
    }
    set f $w.f$id
    if {![winfo exists $f]} {
	ttk::frame $f
	ttk::label $f.msg -textvariable hipsfetch${id}(msg) -width 60
	ttk::button $f.cancel -text [msgcat::mc {Cancel}] \
	    -command [list HiPSFetchCancel $id]
	pack $f.msg -side left -padx 8 -pady 4 -fill x -expand true
	pack $f.cancel -side left -padx 4 -pady 4
	pack $f -side top -fill x
    }
}

proc HiPSProgressRemove {id} {
    set w {.hipsprogress}
    catch {destroy $w.f$id}
    if {[winfo exists $w] && ![llength [winfo children $w]]} {
	destroy $w
    }
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
    # the tiles the frame's HiPS reads (format= or the reader's choice)
    if {[catch {hipsinfo format [HiPSLocalName [HiPSFrameName $frame]]} ext]} {
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
	set mfn [HiPSMissingFile $od $sfx $ext]
	if {[file isfile $mfn]} {
	    set ch [open $mfn r]
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

    # the next request whose frame still shows its HiPS (one cleared,
    # deleted or loaded with something else since wants nothing)
    while {1} {
	if {![llength $hipsdeep(queue)]} {
	    return
	}
	lassign [lindex $hipsdeep(queue) 0] frame root url order nn ext sfx
	set hipsdeep(queue) [lrange $hipsdeep(queue) 1 end]
	if {[HiPSDeepShows $frame $root]} {
	    break
	}
	unset -nocomplain "hipsdeep(want,$root $order $nn$sfx)"
	incr hipsdeep(total) -1
    }

    set dd [expr {($nn/10000)*10000}]
    set fn [file join $root Norder$order Dir$dd Npix$nn$sfx.$ext]
    catch {file mkdir [file dirname $fn]}
    incr hipsdeep(running)
    set tmp [HiPSTemp $fn]
    HiPSGetAsync "$url/Norder$order/Dir$dd/Npix$nn$sfx.$ext" $tmp \
	[list HiPSDeepDone $hipsdeep(gen) $frame $root $order $nn $fn $tmp $sfx] \
	deep
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
		set ch [open [HiPSMissingFile [file join $root Norder$order] \
				  $sfx [string range [file extension $fn] 1 end]] a]
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

# frame shows the HiPS whose cache is root (normalized)
proc HiPSDeepShows {frame root} {
    if {![llength [info commands $frame]] ||
	[catch {HiPSFrameName $frame} fn] || $fn == {}} {
	return 0
    }
    return [expr {[file normalize [HiPSRoot [HiPSLocalName $fn]]] == $root}]
}

# frame was cleared or deleted (ClearFrame): drop its waiting requests
# and its pending redraw
proc HiPSDeepFrameGone {frame} {
    global hipsdeep

    if {![info exists hipsdeep(queue)]} {
	return
    }
    HiPSDeepDrop $frame
    if {[info exists hipsdeep(timer,$frame)]} {
	after cancel $hipsdeep(timer,$frame)
	unset hipsdeep(timer,$frame)
    }
    HiPSDeepStatus
}

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

# tiles still to come: waiting, or in a worker and not cancelled
proc HiPSDeepPending {} {
    global hipsdeep

    return [expr {[llength $hipsdeep(queue)] + $hipsdeep(running) -
		  $hipsdeep(stale)}]
}

# Cancel (the status line's button, hips cancel): drop the waiting
# requests, abort those in progress, and drop the pending redraws,
# leaving every window as it is. The next pan or zoom asks for its
# tiles again.
proc HiPSDeepCancel {} {
    global hipsdeep

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
    # and the requests themselves, waiting or in progress
    HiPSJobsCancel deep
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
# serves xpaget hips list, the HiPS window (File > Open as > HiPS), and resolves IDs
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
# the name unchanged if it is not an ID. Throws if the ID can't be
# resolved.
proc HiPSResolveName {fn} {
    if {![HiPSIsID $fn]} {
	return $fn
    }
    set url [HiPSResolveID [HiPSIDOf $fn]]
    return "$url[string range $fn [string length [HiPSRoot $fn]] end]"
}

# The hips_service_url of HiPS id: from this session's answers, the
# cached list, else a MocServer query. Throws if unknown.
proc HiPSResolveID {id} {
    global hipsnet

    if {[info exists hipsnet(id,$id)]} {
	return $hipsnet(id,$id)
    }
    set recs [HiPSListRecords 0 1]
    set url [HiPSRecordURL $recs $id]
    if {$url == {}} {
	set fn [file join [HiPSCacheRoot] mocserver-id.txt]
	set rc [catch {HiPSMocServerQuery [list ID $id get record] $fn} recs]
	catch {file delete -force $fn}
	if {$rc} {
	    error $recs
	}
	set url [HiPSRecordURL $recs $id]
    }
    if {$url == {}} {
	error "[msgcat::mc {no HiPS with the ID}] $id"
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
# "key = value" lines) goes to fn and is returned parsed. Throws if no
# server answers.
proc HiPSMocServerQuery {query fn} {
    global phpxopen

    if {[catch {file mkdir [file dirname $fn]} err]} {
	error "[msgcat::mc {can't create the HiPS cache}]: $err"
    }
    set code 0
    set server {}
    set tmp [HiPSTemp $fn]
    foreach server $phpxopen(mocserver) {
	set code [HiPSGet "$server?[http::formatQuery {*}$query]" $tmp]
	if {$code == 200} {
	    break
	}
    }
    if {$code != 200 || ![HiPSKeep $tmp $fn]} {
	catch {file delete -force $tmp}
	error "[msgcat::mc {can't query}] $server ([HiPSCodeText $code])"
    }
    if {[catch {HiPSReadRecords $fn} recs]} {
	error "[msgcat::mc {can't read}] $fn"
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
# With cached, only what is cached, never a query ({} if none). Throws if
# there is no list.
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
	if {[catch {HiPSMocServerQuery [list dataproduct_type $type \
	    hips_service_url * get record fields $fields] $fn.$type} recs]} {
	    set err $recs
	    foreach tt {image cube} {
		catch {file delete -force $fn.$tt}
	    }
	    # a stale list rather than none
	    if {$have && ![catch {HiPSReadRecords $fn} recs]} {
		return [HiPSListKeep $fn $recs]
	    }
	    error $err
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
proc HiPSListText {update pattern} {
    set rc [catch {HiPSListRecords $update} recs]
    HiPSClearErrorInfo
    if {$rc} {
	Error "HiPS list: $recs"
	return {}
    }
    set out {}
    foreach rec [HiPSListMatch $recs $pattern] {
	lappend out "[HiPSProp $rec ID]\t[HiPSProp $rec obs_title]"
    }
    return [join $out \n]
}
