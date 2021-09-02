#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PrefsDef {} {
    global prefs
    global iprefs
    global ds9

    set iprefs(top) .pf
    set iprefs(mb) .pfmb

    set prefs(ext) {.prf}
    set prefs(version) [lindex $ds9(version) 0]
    set prefs(dir) [file join [GetEnvHome] ".$ds9(app)"]
    set prefs(fn) [file join $prefs(dir) "$ds9(app).$prefs(version)$prefs(ext)"]
}

proc LoadPrefs {} {
    global ds9
    global prefs

    if {[file exist $prefs(dir)] && [file isdirectory $prefs(dir)]} {
	# new style
	# look for current version
	switch -- [SourceInitFile $prefs(fn)] {
	    1 {
		# success
		FixPrefs $prefs(version)
	    }
	    0 {
		# found and failed to execute
	    }
	    -1 {
		# look for prev version
		if {$prefs(version) == "8.0"} {
		    # special case for version 8.0
		    set major 7
		    set minor 6
		} else {
		    # everybody else
		    set major [lindex [split $prefs(version) {.}] 0]
		    set minor [lindex [split $prefs(version) {.}] 1]
		    if {$minor>0} {
			set minor [expr $minor-1]
		    } else {
			set major [expr $major-1]
			set minor 9
		    }
		}
		set fn [file join $prefs(dir) "$ds9(app).${major}.${minor}$prefs(ext)"]
		if {[SourceInitFile $fn] == 1} {
		    FixPrefs $prefs(version)
		}
	    }
	}
    } else {
	# ok, try old style
	if {[SourceInitFileDir $prefs(ext)]} {
	    # ok, this is a major kludge to fix a major booboo. 
	    # Beta versions generated prefs with version set to 
	    # something like '7.4b7'. We need to remove the 'b7' part.
	    set ll [string first {b} $prefs(version)]
	    if {$ll != -1} {
		set ll [expr $ll -1]
		set prefs(version) [string range $prefs(version) 0 $ll]
	    }
	    FixPrefs $prefs(version)
	}
    }
}

proc CheckPrefs {} {
    global ds9
    global prefs

    set rr [string compare $prefs(version) [lindex $ds9(version) 0]]
    switch $rr {
	-1 {
	    if {[tk_messageBox -type yesno -icon question -message [msgcat::mc {DS9 has detected an older preferences file, do you wish to update?}]] == {yes}} {
		SavePrefs
	    }
	}
	0 {}
	1 {
	    tk_messageBox -type ok -icon warning -message [msgcat::mc {DS9 has detected a newer version of a preferences file.}]
	}
    }
}

proc ClearPrefs {} {
    global ds9
    global prefs

    if {[file exist $prefs(dir)] && [file isdirectory $prefs(dir)]} {
	# clear new style
	if {[file exist $prefs(fn)]} {
	    catch {file delete -force $prefs(fn)}
	}
    } else {
	# make sure old prefs files are removed
	foreach pp {{.} {}} {
	    set fn $pp$ds9(app)$prefs(ext)
	    foreach dir [list {.} [GetEnvHome]] {
		set ff [file join $dir $fn]
		if {[file exist $ff]} {
		    catch {file delete -force $ff}
		    return
		}
	    }
	}
    }
}

proc SavePrefs {} {
    global tcl_platform
    global ds9
    global prefs

    ClearPrefs

    # new style prefs file
    # mkdir if needed
    catch {file mkdir $prefs(dir)}
    if {![file exist $prefs(dir)] || ![file isdirectory $prefs(dir)]} {
	# something is wrong, just bail
	Error [msgcat::mc {An error has occurred while saving}]
	return
    }

    # open prefs file
    if {[catch {set ch [open $prefs(fn) w]}]} {
	Error [msgcat::mc {An error has occurred while saving}]
	return
    }

    switch $tcl_platform(platform) {
	unix {file attributes $prefs(fn) -permissions "rw-r--r--"}
	windows {}
    }

    puts $ch "global ds9"
    puts $ch "global prefs"
    puts $ch "set prefs(version) [lindex $ds9(version) 0]"

    # check for wrong prefs
    puts $ch "\# this is a check for to ensure a match between the"
    puts $ch "\# current ds9 version matches the prefs version"
    puts $ch "if {\[string compare \$prefs(version) \[lindex \$ds9(version)\ 0\]] == 1} {"
    puts $ch "    return"
    puts $ch "}"

    # Basic

    global pds9
    puts $ch "global pds9"
    puts $ch "array set pds9 \{ [array get pds9] \}"

    global current
    global pcurrent
    puts $ch "global current"
    puts $ch "global pcurrent"
    puts $ch "array set pcurrent \{ [array get pcurrent] \}"
    puts $ch {array set current [array get pcurrent]}

    global view
    global pview
    puts $ch "global view"
    puts $ch "global pview"
    puts $ch "array set pview \{ [array get pview] \}"
    puts $ch {array set view [array get pview]}

    global phttp
    puts $ch "global phttp"
    puts $ch "array set phttp \{ [array get phttp] \}"

    global pbuttons
    puts $ch "global pbuttons"
    puts $ch "array set pbuttons \{ [array get pbuttons] \}"

    global ppanner
    puts $ch "global ppanner"
    puts $ch "array set ppanner \{ [array get ppanner] \}"

    global pmagnifier
    puts $ch "global pmagnifier"
    puts $ch "array set pmagnifier \{ [array get pmagnifier] \}"

    # File

    global ps
    global pps
    puts $ch "global ps"
    puts $ch "global pps"
    puts $ch "array set pps \{ [array get pps] \}"
    puts $ch {array set ps [array get pps]}

    global pr
    global ppr
    puts $ch "global pr"
    puts $ch "global ppr"
    puts $ch "array set ppr \{ [array get ppr] \}"
    puts $ch {array set pr [array get ppr]}

    # Frame

    global blink
    global pblink
    puts $ch "global blink"
    puts $ch "global pblink"
    puts $ch "array set pblink \{ [array get pblink] \}"
    puts $ch {array set blink [array get pblink]}

    global tile
    global ptile
    puts $ch "global tile"
    puts $ch "global ptile"
    puts $ch "array set ptile \{ [array get ptile] \}"
    puts $ch {array set tile [array get ptile]}

    global threed
    global pthreed
    puts $ch "global threed"
    puts $ch "global pthreed"
    puts $ch "array set pthreed \{ [array get pthreed] \}"
    puts $ch {array set threed [array get pthreed]}

    # Bin

    global bin
    global pbin
    puts $ch "global bin"
    puts $ch "global pbin"
    puts $ch "array set pbin \{ [array get pbin] \}"
    puts $ch {array set bin [array get pbin]}

    # Zoom

    global panzoom
    global ppanzoom
    puts $ch "global panzoom"
    puts $ch "global ppanzoom"
    puts $ch "array set ppanzoom \{ [array get ppanzoom] \}"
    puts $ch {array set panzoom [array get ppanzoom]}

    # Scale

    global scale
    global pscale
    puts $ch "global scale"
    puts $ch "global pscale"
    puts $ch "array set pscale \{ [array get pscale] \}"
    puts $ch {array set scale [array get pscale]}

    global minmax
    global pminmax
    puts $ch "global minmax"
    puts $ch "global pminmax"
    puts $ch "array set pminmax \{ [array get pminmax] \}"
    puts $ch {array set minmax [array get pminmax]}

    global zscale
    global pzscale
    puts $ch "global zscale"
    puts $ch "global pzscale"
    puts $ch "array set pzscale \{ [array get pzscale] \}"
    puts $ch {array set zscale [array get pzscale]}

    # Region
    
    global marker
    global pmarker
    puts $ch "global marker"
    puts $ch "global pmarker"
    puts $ch "array set pmarker \{ [array get pmarker] \}"
    puts $ch {array set marker [array get pmarker]}

    # WCS

    global wcs
    global pwcs
    puts $ch "global wcs"
    puts $ch "global pwcs"
    puts $ch "array set pwcs \{ [array get pwcs] \}"
    puts $ch {array set wcs [array get pwcs]}

    # Analysis

    global graph
    global pgraph
    puts $ch "global graph"
    puts $ch "global pgraph"
    puts $ch "array set pgraph \{ [array get pgraph] \}"
    puts $ch {array set graph [array get pgraph]}

    global pcoord
    puts $ch "global pcoord"
    puts $ch "array set pcoord \{ [array get pcoord] \}"

    global pexamine
    puts $ch "global pexamine"
    puts $ch "array set pexamine \{ [array get pexamine] \}"

    global pixel
    global ppixel
    puts $ch "global pixel"
    puts $ch "global ppixel"
    puts $ch "array set ppixel \{ [array get ppixel] \}"
    puts $ch {array set pixel [array get ppixel]}

    global mask
    global pmask
    puts $ch "global mask"
    puts $ch "global pmask"
    puts $ch "array set pmask \{ [array get pmask] \}"
    puts $ch {array set mask [array get pmask]}

    global contour
    global pcontour
    puts $ch "global contour"
    puts $ch "global pcontour"
    puts $ch "array set pcontour \{ [array get pcontour] \}"
    puts $ch {array set contour [array get pcontour]}

    global grid
    global pgrid
    puts $ch "global grid"
    puts $ch "global pgrid"
    puts $ch "array set pgrid \{ [array get pgrid] \}"
    puts $ch {array set grid [array get pgrid]}

    global block
    global pblock
    puts $ch "global block"
    puts $ch "global pblock"
    puts $ch "array set pblock \{ [array get pblock] \}"
    puts $ch {array set block [array get pblock]}

    global smooth
    global psmooth
    puts $ch "global smooth"
    puts $ch "global psmooth"
    puts $ch "array set psmooth \{ [array get psmooth] \}"
    puts $ch {array set smooth [array get psmooth]}

    global pnres
    puts $ch "global pnres"
    puts $ch "array set pnres \{ [array get pnres] \}"

    global pcat
    puts $ch "global pcat"
    puts $ch "array set pcat \{ [array get pcat] \}"

    global pvo
    puts $ch "global pvo"
    puts $ch "array set pvo \{ [array get pvo] \}"

    global pap
    puts $ch "global pap"
    puts $ch "array set pap \{ [array get pap] \}"

    global panalysis
    puts $ch "global panalysis"
    puts $ch "array set panalysis \{ [array get panalysis] \}"

    # Other

    puts $ch ""
    puts $ch "\# Colorbar prefs"
    global colorbar
    global pcolorbar
    puts $ch "global colorbar"
    puts $ch "global pcolorbar"
    puts $ch "array set pcolorbar \{ [array get pcolorbar] \}"
    puts $ch {array set colorbar [array get pcolorbar]}

    # and close
    close $ch
}

# Backward Compatibility
proc FixVar {varname ovarname} {
    global aa bb
    set aa $varname
    set bb $ovarname

    uplevel #0 {
	if {[info exists $bb]} {
	    set $aa [expr $$bb]
	    unset $bb
	}
    }
}

proc FixVarSet {varname ovarname} {
    global aa bb
    set aa $varname
    set bb $ovarname

    uplevel #0 {
	if {[info exists $bb]} {
	    set $aa [expr $$bb]
	}
    }
}

proc FixVarRm {ovarname} {
    global aa
    set aa $ovarname

    uplevel #0 {
	if {[info exists $aa]} {
	    unset $aa
	}
    }
}

proc FixFontVar {weightname slantname stylename} {
    global aa bb cc
    set aa $weightname
    set bb $slantname
    set cc $stylename

    uplevel #0 {
	if {[info exists $cc]} {
	    switch [expr $$cc] {
		normal {
		    set $aa normal
		    set $bb roman
		}
		bold {
		    set $aa bold
		    set $bb roman
		}
		italic {
		    set $aa normal
		    set $bb italic
		}
	    }
	    unset $cc
	}
    }
}

# we only support 6.x and higher
proc FixPrefs {version} {
    set major [lindex [split $version {.}] 0]
    if {$major == {5}} {
	set version 5.x
    }

    # these old vars may exists in the wild
    # be sure to rm them
    FixPrefsVarOld

    switch $version {
	5.x {
	    FixPrefs5.xto6.0
	    FixPrefs6.0to6.1 
	    FixPrefs6.1to6.2
	    FixPrefs6.2to7.0
	    FixPrefs7.0to7.1
	    FixPrefs7.1to7.2
	    FixPrefs7.2to7.3
	    FixPrefs7.3to7.4
	    FixPrefs7.4to7.5
	    FixPrefs7.5to7.6
	    FixPrefs7.6to8.0
	    FixPrefs8.0to8.1
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	6.0 {
	    FixPrefs6.0to6.1 
	    FixPrefs6.1to6.2
	    FixPrefs6.2to7.0
	    FixPrefs7.0to7.1
	    FixPrefs7.1to7.2
	    FixPrefs7.2to7.3
	    FixPrefs7.3to7.4
	    FixPrefs7.4to7.5
	    FixPrefs7.5to7.6
	    FixPrefs7.6to8.0
	    FixPrefs8.0to8.1
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	6.1 -
	6.1.1 -
	6.1.2 {
	    FixPrefs6.1to6.2
	    FixPrefs6.2to7.0
	    FixPrefs7.0to7.1
	    FixPrefs7.1to7.2
	    FixPrefs7.2to7.3
	    FixPrefs7.3to7.4
	    FixPrefs7.4to7.5
	    FixPrefs7.5to7.6
	    FixPrefs7.6to8.0
	    FixPrefs8.0to8.1
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	6.2 {
	    FixPrefs6.2to7.0
	    FixPrefs7.0to7.1
	    FixPrefs7.1to7.2
	    FixPrefs7.2to7.3
	    FixPrefs7.3to7.4
	    FixPrefs7.4to7.5
	    FixPrefs7.5to7.6
	    FixPrefs7.6to8.0
	    FixPrefs8.0to8.1
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	7.0 {
	    FixPrefs7.0to7.1
	    FixPrefs7.1to7.2
	    FixPrefs7.2to7.3
	    FixPrefs7.3to7.4
	    FixPrefs7.4to7.5
	    FixPrefs7.5to7.6
	    FixPrefs7.6to8.0
	    FixPrefs8.0to8.1
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	7.1 {
	    FixPrefs7.1to7.2
	    FixPrefs7.2to7.3
	    FixPrefs7.3to7.4
	    FixPrefs7.4to7.5
	    FixPrefs7.5to7.6
	    FixPrefs7.6to8.0
	    FixPrefs8.0to8.1
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	7.2 {
	    FixPrefs7.2to7.3
	    FixPrefs7.3to7.4
	    FixPrefs7.4to7.5
	    FixPrefs7.5to7.6
	    FixPrefs7.6to8.0
	    FixPrefs8.0to8.1
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	7.3 -
	7.3.1 -
	7.3.2 {
	    FixPrefs7.3to7.4
	    FixPrefs7.4to7.5
	    FixPrefs7.5to7.6
	    FixPrefs7.6to8.0
	    FixPrefs8.0to8.1
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	7.4 {
	    FixPrefs7.4to7.5
	    FixPrefs7.5to7.6
	    FixPrefs7.6to8.0
	    FixPrefs8.0to8.1
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	7.5 {
	    FixPrefs7.5to7.6
	    FixPrefs7.6to8.0
	    FixPrefs8.0to8.1
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	7.6 {
	    FixPrefs7.6to8.0
	    FixPrefs8.0to8.1
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	8.0 {
	    FixPrefs8.0to8.1
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	8.1 {
	    FixPrefs8.1to8.2
	    FixPrefs8.2to8.3
	}
	8.2 {
	    FixPrefs8.2to8.3
	}
	8.3 {
	    # older betas
	    FixPrefs8.2to8.3
	}
    }
}

proc FixPrefsVarOld {} {
    # these old vars may exists in the wild
    # be sure to rm them
    FixVarRm pbuttons(bin,match)
    FixVarRm pbuttons(scale,match)
    FixVarRm pbuttons(color,match)

    # 5.7
    FixVarRm pbuttons(help,issue)
    
    # 6.2
    FixVarRm pbuttons(file,savefits)
    FixVarRm pbuttons(file,savempeg)
    FixVarRm pbuttons(region,circle3d)

    # 7.0
    FixVarRm pbuttons(file,about)
    FixVarRm pbuttons(help,home)

    # 7.5
    FixVarRm pbuttons(help,keyboard)

    # 8.0
    FixVarRm pbuttons(file,samp)

    # 8.1
    FixVarRm pbuttons(region,mask)

    # 8.2
    FixVar pbuttons(region,delete) pbuttons(region,deleteall)

    # 8.3

    # and fix any previous theme issues
    global pds9
    global ds9
    switch $ds9(wm) {
	x11 -
	win32 {
	    if {[info exists pds9(theme)]} {
		if {[lsearch -nocase $ds9(themes) $pds9(theme)] == -1} {
		    set pds9(theme) default
		}
	    }
	}
	aqua {}
    }
}

proc FixPrefs8.2to8.3 {} {
    global pcolorbar
    switch $pcolorbar(orientation) {
	horizontal {set pcolorbar(orientation) 0}
	vertical {set pcolorbar(orientation) 1}
    }

    global colorbar
    switch $colorbar(orientation) {
	horizontal {set colorbar(orientation) 0}
	vertical {set colorbar(orientation) 1}
    }
}

proc FixPrefs8.1to8.2 {} {
    FixVar pap(canvas,layout) pap(layout)
    FixVar pap(canvas,layout,strip,scale) pap(layout,strip,scale)

    FixVar pap(canvas,foreground) pap(foreground)
    FixVar pap(canvas,background) pap(background)
    FixVar pap(canvas,grid,color) pap(grid,color)

    FixVar pap(canvas,title,family) pap(title,family)
    FixVar pap(canvas,title,size) pap(title,size)
    FixVar pap(canvas,title,weight) pap(title,weight)
    FixVar pap(canvas,title,slant) pap(title,slant)

    FixVar pap(canvas,legend,title,family) pap(legend,title,family)
    FixVar pap(canvas,legend,title,size) pap(legend,title,size)
    FixVar pap(canvas,legend,title,weight) pap(legend,title,weight)
    FixVar pap(canvas,legend,title,slant) pap(legend,title,slant)
    FixVar pap(canvas,legend,font,family) pap(legend,font,family)
    FixVar pap(canvas,legend,font,size) pap(legend,font,size)
    FixVar pap(canvas,legend,font,weight) pap(legend,font,weight)
    FixVar pap(canvas,legend,font,slant) pap(legend,font,slant)

    FixVar pap(canvas,axis,title,family) pap(axis,title,family)
    FixVar pap(canvas,axis,title,size) pap(axis,title,size)
    FixVar pap(canvas,axis,title,weight) pap(axis,title,weight)
    FixVar pap(canvas,axis,title,slant) pap(axis,title,slant)
    FixVar pap(canvas,axis,font,family) pap(axis,font,family)
    FixVar pap(canvas,axis,font,size) pap(axis,font,size)
    FixVar pap(canvas,axis,font,weight) pap(axis,font,weight)
    FixVar pap(canvas,axis,font,slant) pap(axis,font,slant)

    FixVar pap(graph,ds,line,smooth) pap(graph,ds,smooth)
    FixVar pap(graph,ds,line,color) pap(graph,ds,color)
    FixVar pap(graph,ds,line,width) pap(graph,ds,width)
    FixVar pap(graph,ds,line,dash) pap(graph,ds,dash)
    FixVar pap(graph,ds,line,fill) pap(graph,ds,fill)
    FixVar pap(graph,ds,line,fill,color) pap(graph,ds,fill,color)

    FixVar pap(graph,ds,line,shape,symbol) pap(graph,ds,shape,symbol)
    FixVar pap(graph,ds,line,shape,color) pap(graph,ds,shape,color)
    FixVar pap(graph,ds,line,shape,fill) pap(graph,ds,shape,fill)

    FixVarRm pap(graph,ds,bar,relief)
}

proc FixPrefs8.0to8.1 {} {
    FixVar pap(graph,ds,show) pap(show)
    FixVar pap(graph,ds,smooth) pap(smooth)
    FixVar pap(graph,ds,color) pap(color)
    FixVar pap(graph,ds,fill) pap(fill)
    FixVar pap(graph,ds,fill,color) pap(fill,color)
    FixVar pap(graph,ds,width) pap(width)
    FixVar pap(graph,ds,dash) pap(dash)

    FixVar pap(graph,ds,shape,symbol) pap(shape,symbol)
    FixVar pap(graph,ds,shape,fill) pap(shape,fill)
    FixVar pap(graph,ds,shape,color) pap(shape,color)

    FixVar pap(graph,ds,error) pap(error)
    FixVar pap(graph,ds,error,color) pap(error,color)
    FixVar pap(graph,ds,error,width) pap(error,width)
    FixVar pap(graph,ds,error,style) pap(error,style)

    FixVar pap(graph,ds,bar,relief) pap(relief)
}

proc FixPrefs7.6to8.0 {} {
}

proc FixPrefs7.5to7.6 {} {
    global smooth

    set smooth(radius,minor) $smooth(radius)
    set smooth(sigma) [expr int($smooth(radius)/2.)]
    set smooth(sigma,minor) $smooth(sigma)
}

proc FixPrefs7.4to7.5 {} {
    FixVarRm pds9(threads)
}

proc FixPrefs7.3to7.4 {} {
}

proc FixPrefs7.2to7.3 {} {
    global current

    if {$current(mode) == {pointer}} {
	set current(mode) region
    }

    FixVar pbuttons(edit,region) pbuttons(edit,pointer)
    FixVar pbuttons(frame,match,cube,image) pbuttons(frame,match,cube)
    FixVar pbuttons(frame,lock,cube,image) pbuttons(frame,lock,cube)

    FixVar pap(axis,x,grid) pap(graph,x,grid)
    FixVar pap(axis,x,log) pap(graph,x,log)
    FixVar pap(axis,x,flip) pap(graph,x,flip)
    FixVar pap(axis,y,grid) pap(graph,y,grid)
    FixVar pap(axis,y,log) pap(graph,y,log)
    FixVar pap(axis,y,flip) pap(graph,y,flip)

    FixVar pap(graph,title,family) pap(titleFont)
    FixVar pap(graph,title,size) pap(titleSize)
    FixVar pap(graph,title,weight) pap(titleWeight)
    FixVar pap(graph,title,slant) pap(titleSlant)

    FixVar pap(axis,title,family) pap(textlabFont)
    FixVar pap(axis,title,size) pap(textlabSize)
    FixVar pap(axis,title,weight) pap(textlabWeight)
    FixVar pap(axis,title,slant) pap(textlabSlant)

    FixVar pap(axis,font,family) pap(numlabFont)
    FixVar pap(axis,font,size) pap(numlabSize)
    FixVar pap(axis,font,weight) pap(numlabWeight)
    FixVar pap(axis,font,slant) pap(numlabSlant)

    FixVar pap(show) pap(linear)
    FixVar pap(shape,color) pap(discrete,color)
    FixVar pap(shape,fill) pap(discrete,fill)
    FixVar pap(width) pap(linear,width)
    FixVar pap(color) pap(linear,color)

    if {[info exists pap(linear,dash)]} {
	set pap(linear,dash) [FromYesNo $pap(linear,dash)]
    }
    FixVar pap(dash) pap(linear,dash)

    if {[info exists pap(discrete)]} {
	if {$pap(discrete)} {
	    FixVar pap(shape,symbol) pap(discrete,symbol)
	} else {
	    FixVarRm pap(discrete,symbol)
	}
    }

    FixVarRm pap(bar)
    FixVarRm pap(bar,color)

    FixVarRm pap(discrete)
    FixVarRm pap(linear,dash)

    FixVarRm pap(quadratic)
    FixVarRm pap(quadratic,width)
    FixVarRm pap(quadratic,color)
    FixVarRm pap(quadratic,dash)

    FixVarRm pap(step)
    FixVarRm pap(step,color)
    FixVarRm pap(step,dash)
    FixVarRm pap(step,width)
}

proc FixPrefs7.1to7.2 {} {
    FixVar pbuttons(file,xpa,info) pbuttons(file,xpa)
    FixVar pcurrent(align) pwcs(align)
}

proc FixPrefs7.0to7.1 {} {
    global pap

    if {[info exists pap(grid)]} {
	set pap(grid,x) $pap(grid)
	set pap(grid,y) $pap(grid)
	switch $pap(grid,log) {
	    linearlinear {
		set pap(grid,xlog) 0
		set pap(grid,ylog) 0
	    }
	    linearlog {
		set pap(grid,xlog) 0
		set pap(grid,ylog) 1
	    }
	    loglinear {
		set pap(grid,xlog) 1
		set pap(grid,ylog) 0
	    }
	    loglog {
		set pap(grid,xlog) 1
		set pap(grid,ylog) 1
	    }
	}
	unset pap(grid)
	unset pap(grid,log)
    }
}

proc FixPrefs6.2to7.0 {} {
    global ps
    global pps
    switch $pps(scale) {
	scaled -
	fixed {
	    set ps(scale) 100
	    set pps(scale) 100
	}
    }

    global colorbar
    global pcolorbar
    set colorbar(map) [string tolower $colorbar(map)]
    set pcolorbar(map) [string tolower $pcolorbar(map)]

    FixVar pbuttons(frame,match,frame,wcs) pbuttons(frame,matchframe,wcs)
    FixVar pbuttons(frame,match,frame,image) pbuttons(frame,matchframe,image)
    FixVar pbuttons(frame,match,frame,physical) pbuttons(frame,matchframe,physical)
    FixVar pbuttons(frame,match,frame,amplifier) pbuttons(frame,matchframe,amplifier)
    FixVar pbuttons(frame,match,frame,detector) pbuttons(frame,matchframe,detector)

    FixVar pbuttons(frame,match,bin) pbuttons(frame,matchbin)
    FixVar pbuttons(frame,match,scale) pbuttons(frame,matchscale)
    FixVar pbuttons(frame,match,color) pbuttons(frame,matchcolor)

    FixVar ppanner(compass) ppanner(compass,image)
    FixVarRm ppanner(compass,wcs,system)
    FixVarRm ppanner(compass,wcs,sky)

    FixVarRm pmarker(dialog,system)
    FixVarRm pmarker(dialog,sky)
    FixVarRm pmarker(dialog,skyformat)
    FixVarRm pmarker(dialog,dist,system)
    FixVarRm pmarker(dialog,dist,format)

    # mousewheel MacOSX Lion
    global tcl_platform
    global ppanzoom
    global pbin
    switch -- $tcl_platform(os) {
	Darwin {
	    switch [lindex [split $tcl_platform(osVersion) {.}] 0] {
		11 {
		    set ppanzoom(wheel,factor) 1.01
		    set pbin(wheel,factor) 1.01
		}
	    }
	}
    }

    global pcoord
    FixVarRm pcoord(sky)
    FixVarRm pcoord(skyformat)
}

proc FixPrefs6.1to6.2 {} {
    FixVar pbuttons(frame,matchframe,wcs) pbuttons(frame,matchframe)

    global pds9
    switch -- $pds9(font) {
	helvetica -
	courier -
	times {}
	default {set pds9(font) helvetica}
    }
    switch -- $pds9(font,size) {
	10 {set pds9(font,size) 9}
    }
    FixVar pmarker(centroid,auto) pmarker(autocentroid)
    FixVarRm marker(autocentroid)

    FixFontVar pds9(font,weight) pds9(font,slant) pds9(font,style)
    FixFontVar pmarker(font,weight) pmarker(font,slant) pmarker(font,style)
    FixFontVar pcolorbar(font,weight) pcolorbar(font,slant) \
	pcolorbar(font,style)
}

proc FixPrefs6.0to6.1 {} {
    # ds9
    FixVar pds9(automarker) ds9(automarker)
    FixVar pds9(xpa) ds9(xpa)
    FixVar pds9(samp) ds9(samp,auto)
    FixVar pds9(confirm) ds9(confirm)
    FixVar pds9(bg) ds9(bg,color)
    FixVar pds9(nan) ds9(nan,color)
    FixVar pds9(dialog) ds9(dialog)
    FixVar pds9(language) ds9(language)
    FixVar pds9(language,name) ds9(language,name)
    FixVar pds9(language,dir) ds9(language,dir)
    FixVar pds9(font) ds9(font)
    FixVar pds9(font,size) ds9(font,size)
    FixVar pds9(font,style) ds9(font,style)
    FixVar pcurrent(display) ds9(display,user)
    FixVar pcurrent(mode) pds9(mode)

    # note: versions 5.3 to 6.0 have array set ds9 [array get pds9]
    # which will set following ds9(var), so delete
    FixVarRm ds9(samp)
    FixVarRm ds9(backup)
    FixVarRm ds9(bg)
    FixVarRm ds9(nan)

    # analysis
    FixVar panalysis(user)  ds9(analysis,user)
    FixVar panalysis(user2) ds9(analysis,user2)
    FixVar panalysis(user3) ds9(analysis,user3)
    FixVar panalysis(user4) ds9(analysis,user4)
    global analysis
    catch {unset analysis}

    # magnifier
    FixVar pmagnifier(region) magnifier(region)
    FixVar pmagnifier(zoom) magnifier(zoom)
    FixVar pmagnifier(cursor) magnifier(cursor)
    global magnifier
    catch {unset magnifier}

    # panner
    FixVar ppanner(compass,image) panner(compass,image)
    FixVar ppanner(compass,wcs) panner(compass,wcs)
    FixVar ppanner(compass,wcs,system) panner(compass,wcs,system)
    FixVar ppanner(compass,wcs,sky) panner(compass,wcs,sky)
    global panner
    catch {unset panner}

    # examine
    FixVar pexamine(mode) examine(mode)
    FixVar pexamine(zoom) examine(zoom)
    global examine
    catch {unset examine}

    # vo
    FixVar pvo(server) vo(server)
    FixVar pvo(hv) vo(hv)
    FixVar pvo(method) vo(method)
    FixVar pvo(delay) vo(delay)
    global vo
    catch {unset vo}

    # http
    FixVar phttp(proxy) http(proxy)
    FixVar phttp(proxy,host) http(proxy,host)
    FixVar phttp(proxy,port) http(proxy,port)
    FixVar phttp(auth) http(auth)
    FixVar phttp(auth,user) http(auth,user)
    FixVar phttp(auth,passwd) http(auth,passwd)
    global http
    catch {unset http}

    # nres
    FixVar pnres(server) nres(server)

    # graph
    FixVarSet pgraph(horz,grid) graph(horz,grid) 
    FixVarSet pgraph(horz,log) graph(horz,log) 
    FixVarSet pgraph(vert,grid) graph(vert,grid) 
    FixVarSet pgraph(vert,log) graph(vert,log) 

    # cat
    FixVar pcat(server) cat(server)
    FixVar pcat(sym,shape) cat(sym,shape)
    FixVar pcat(sym,color) cat(sym,color)
    FixVar pcat(vot) cat(vot)

    # contour
    FixVarRm pcontour(color,msg)

    # coords
    global coord
    catch {unset coord}

    # scale
    FixVarRm pscale(min)
    FixVarRm pscale(max)
    FixVarRm pscale(xaxis)
    FixVarRm pscale(yaxis)

    # marker
    FixVarRm pmarker(maxdialog)
    FixVarRm pmarker(load)
    FixVarRm pmarker(paste,system)
    FixVarRm pmarker(paste,sky)
    FixVarRm pmarker(system)
    FixVarRm pmarker(sky)
    FixVarRm pmarker(skyformat)
    FixVarRm pmarker(strip)

    FixVarRm marker(dialog,system)
    FixVarRm marker(dialog,sky)
    FixVarRm marker(dialog,skyformat)
    FixVarRm marker(dialog,dist,system)
    FixVarRm marker(dialog,dist,format)

    FixVarRm marker(circle,radius)
    FixVarRm marker(annulus,inner)
    FixVarRm marker(annulus,outer)
    FixVarRm marker(annulus,annuli)
    FixVarRm marker(panda,inner)
    FixVarRm marker(panda,outer)
    FixVarRm marker(panda,annuli)
    FixVarRm marker(panda,ang1)
    FixVarRm marker(panda,ang2)
    FixVarRm marker(panda,angnum)
    FixVarRm marker(ellipse,radius1)
    FixVarRm marker(ellipse,radius2)
    FixVarRm marker(ellipseannulus,radius1)
    FixVarRm marker(ellipseannulus,radius2)
    FixVarRm marker(ellipseannulus,radius3)
    FixVarRm marker(ellipseannulus,annuli)
    FixVarRm marker(epanda,radius1)
    FixVarRm marker(epanda,radius2)
    FixVarRm marker(epanda,radius3)
    FixVarRm marker(epanda,annuli)
    FixVarRm marker(epanda,ang1)
    FixVarRm marker(epanda,ang2)
    FixVarRm marker(epanda,angnum)
    FixVarRm marker(box,radius1)
    FixVarRm marker(box,radius2)
    FixVarRm marker(boxannulus,radius1)
    FixVarRm marker(boxannulus,radius2)
    FixVarRm marker(boxannulus,radius3)
    FixVarRm marker(boxannulus,annuli)
    FixVarRm marker(bpanda,radius1)
    FixVarRm marker(bpanda,radius2)
    FixVarRm marker(bpanda,radius3)
    FixVarRm marker(bpanda,annuli)
    FixVarRm marker(bpanda,ang1)
    FixVarRm marker(bpanda,ang2)
    FixVarRm marker(bpanda,angnum)
    FixVarRm marker(polygon,width)
    FixVarRm marker(polygon,height)
    FixVarRm marker(projection,thick)
    FixVarRm marker(compass,radius)
    FixVarRm marker(point,size)
}

proc FixPrefs5.xto6.0 {} {
    FixVar pap(grid) prefs(ap,grid)
    FixVar pap(grid,log) prefs(ap,grid,log)

    FixVar pap(discrete) prefs(ap,discrete)
    FixVar pap(discrete,symbol) prefs(ap,discrete,symbol)
    FixVar pap(discrete,color) prefs(ap,discrete,color)

    FixVar pap(linear) prefs(ap,linear)
    FixVar pap(linear,width) prefs(ap,linear,width)
    FixVar pap(linear,color) prefs(ap,linear,color)
    FixVar pap(linear,dash) prefs(ap,linear,dash)

    FixVar pap(step) prefs(ap,step)
    FixVar pap(step,width) prefs(ap,step,width)
    FixVar pap(step,color) prefs(ap,step,color)
    FixVar pap(step,dash) prefs(ap,step,dash)

    FixVar pap(quadratic) prefs(ap,quadratic)
    FixVar pap(quadratic,width) prefs(ap,quadratic,width)
    FixVar pap(quadratic,color) prefs(ap,quadratic,color)
    FixVar pap(quadratic,dash) prefs(ap,quadratic,dash)

    FixVar pap(error,color) prefs(ap,error,color)
    FixVar pap(error,width) prefs(ap,error,width)
    FixVar pap(error,style) prefs(ap,error,style)

    FixVar pap(titleFont) prefs(ap,titleFont)
    FixVar pap(titleSize) prefs(ap,titleSize)
    FixVar pap(titleStyle) prefs(ap,titleStyle)

    FixVar pap(textlabFont) prefs(ap,textlabFont)
    FixVar pap(textlabSize) prefs(ap,textlabSize)
    FixVar pap(textlabStyle) prefs(ap,textlabStyle)

    FixVar pap(numlabFont) prefs(ap,numlabFont)
    FixVar pap(numlabSize) prefs(ap,numlabSize)
    FixVar pap(numlabStyle) prefs(ap,numlabStyle)

    FixVar pcurrent(zoom) prefs(zoom)
    FixVar pcurrent(orient) prefs(orient)
    FixVar pcurrent(rotate) prefs(rotate)

    FixVar panalysis(log) prefs(analysis,log)
    FixVar pds9(mode) prefs(ds9,mode)
    FixVar pblink(interval) prefs(blink,interval)
    FixVar ptile(mode) prefs(tile,mode)

    FixVar pcolorbar(map) prefs(colorbar,map)
    FixVar pcolorbar(invert) prefs(colorbar,invert)

    FixVar pmarker(shape) prefs(marker,shape)
    FixVar pmarker(color) prefs(marker,color)
    FixVar pmarker(width) prefs(marker,width)
    FixVar pmarker(fixed) prefs(marker,fixed)
    FixVar pmarker(edit) prefs(marker,edit)
    FixVar pmarker(move) prefs(marker,move)
    FixVar pmarker(rotate) prefs(marker,rotate)
    FixVar pmarker(delete) prefs(marker,delete)
    FixVar pmarker(include) prefs(marker,include)
    FixVar pmarker(source) prefs(marker,source)
    FixVar pmarker(font) prefs(marker,font)
    FixVar pmarker(font,size) prefs(marker,font,size)
    FixVar pmarker(font,style) prefs(marker,font,style)
    FixVar pmarker(format) prefs(marker,format)
    FixVar pmarker(strip) prefs(marker,strip)
    FixVar pmarker(system) prefs(marker,system)
    FixVar pmarker(sky) prefs(marker,sky)
    FixVar pmarker(skyformat) prefs(marker,skyformat)
    FixVarRm prefs(marker,wcs)
    FixVarRm marker(wcs)
    FixVarRm marker(polygon,width)
    FixVarRm marker(polygon,height)

    FixVar pmarker(dialog,system) marker(dialog,system) 
    FixVar pmarker(dialog,sky) marker(dialog,sky) 
    FixVar pmarker(dialog,skyformat) marker(dialog,skyformat) 
    FixVar pmarker(dialog,dist,system) marker(dialog,dist,system) 
    FixVar pmarker(dialog,dist,format) marker(dialog,dist,format) 

    FixVar pmarker(circle,radius) marker(circle,radius) 
    FixVar pmarker(annulus,inner) marker(annulus,inner) 
    FixVar pmarker(annulus,outer) marker(annulus,outer) 
    FixVar pmarker(annulus,annuli) marker(annulus,annuli) 
    FixVar pmarker(panda,inner) marker(panda,inner) 
    FixVar pmarker(panda,outer) marker(panda,outer) 
    FixVar pmarker(panda,annuli) marker(panda,annuli) 
    FixVar pmarker(panda,ang1) marker(panda,ang1) 
    FixVar pmarker(panda,ang2) marker(panda,ang2) 
    FixVar pmarker(panda,angnum) marker(panda,angnum) 
    FixVar pmarker(ellipse,radius1) marker(ellipse,radius1) 
    FixVar pmarker(ellipse,radius2) marker(ellipse,radius2) 
    FixVar pmarker(ellipseannulus,radius1) marker(ellipseannulus,radius1) 
    FixVar pmarker(ellipseannulus,radius2) marker(ellipseannulus,radius2) 
    FixVar pmarker(ellipseannulus,radius3) marker(ellipseannulus,radius3) 
    FixVar pmarker(ellipseannulus,annuli) marker(ellipseannulus,annuli) 
    FixVar pmarker(epanda,radius1) marker(epanda,radius1) 
    FixVar pmarker(epanda,radius2) marker(epanda,radius2) 
    FixVar pmarker(epanda,radius3) marker(epanda,radius3) 
    FixVar pmarker(epanda,annuli) marker(epanda,annuli) 
    FixVar pmarker(epanda,ang1) marker(epanda,ang1) 
    FixVar pmarker(epanda,ang2) marker(epanda,ang2) 
    FixVar pmarker(epanda,angnum) marker(epanda,angnum) 
    FixVar pmarker(box,radius1) marker(box,radius1) 
    FixVar pmarker(box,radius2) marker(box,radius2) 
    FixVar pmarker(boxannulus,radius1) marker(boxannulus,radius1) 
    FixVar pmarker(boxannulus,radius2) marker(boxannulus,radius2) 
    FixVar pmarker(boxannulus,radius3) marker(boxannulus,radius3) 
    FixVar pmarker(boxannulus,annuli) marker(boxannulus,annuli) 
    FixVar pmarker(bpanda,radius1) marker(bpanda,radius1) 
    FixVar pmarker(bpanda,radius2) marker(bpanda,radius2) 
    FixVar pmarker(bpanda,radius3) marker(bpanda,radius3) 
    FixVar pmarker(bpanda,annuli) marker(bpanda,annuli) 
    FixVar pmarker(bpanda,ang1) marker(bpanda,ang1) 
    FixVar pmarker(bpanda,ang2) marker(bpanda,ang2) 
    FixVar pmarker(bpanda,angnum) marker(bpanda,angnum) 
    FixVar pmarker(projection,thick) marker(projection,thick) 
    FixVar pmarker(point,size) marker(point,size) 

    # buttons
    global buttons
    global pbuttons
    if {[info exists buttons(file,about)]} {
        foreach nn [array names buttons] {
            set aa [split $nn ,]
            if {[lindex $aa 1] != {}} {
                switch [lindex $aa 0] {
                    file -
                    edit -
                    view -
                    frame -
                    bin -
                    zoom -
                    scale -
                    color -
                    region -
                    wcs -
                    help {unset buttons($nn)}
                }
            }
        }

        FixVar pbuttons(scale,995) buttons(scale,99.5)
        FixVar pbuttons(scale,925) buttons(scale,92.5)
        FixVar pbuttons(zoom,i32) buttons(zoom,1/32)
        FixVar pbuttons(zoom,i16) buttons(zoom,1/16)
        FixVar pbuttons(zoom,i8) buttons(zoom,1/8)
        FixVar pbuttons(zoom,i4) buttons(zoom,1/4)
        FixVar pbuttons(zoom,i2) buttons(zoom,1/2)

        FixVarRm pbuttons(scale,92.5)
        FixVarRm pbuttons(scale,99.5)
        FixVarRm pbuttons(zoom,1/32)
        FixVarRm pbuttons(zoom,1/16)
        FixVarRm pbuttons(zoom,1/8)
        FixVarRm pbuttons(zoom,1/4)
        FixVarRm pbuttons(zoom,1/2)
    }
}
