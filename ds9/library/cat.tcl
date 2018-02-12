#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATDef {} {
    global cat
    global icat
    global pcat
    global wcs

    set icat(cats) {}

    set icat(rformat) arcmin
    set icat(width) 15
    set icat(height) 15
    set icat(max) 5000
    set icat(allrows) 1
    set icat(allcols) 0
    set icat(show) 1
    set icat(edit) 0
    set icat(panto) 1

    set icat(minrows) 20
    set icat(mincols) 10

    set icat(key) {}
    set icat(key,update) {}

    set icat(match1) {}
    set icat(match2) {}
    set icat(return) 1and2
    set icat(error) 5
    set icat(eformat) arcsec
    set icat(function) 1and2
    set icat(unique) 1

    set icat(server,menu) { \
	{{CDS, France} cds} \
	{{Tokyo, Japan} adac} \
	{{CADC, Canada} cadc} \
	{{Cambridge, UK} cambridge} \
	{{CFA, USA} sao} \
	{{UKIRT-Hawaii, USA} ukirt} \
	{{IUCAA, India} iucaa} \
	{{Bejing, China} bejing} \
	{{SAAO, South Africa} saao} \
    }

    set icat(def) { \
		       {- {Database} db} \
		       {{NED} catned ned ned} \
		       {{SIMBAD} catsimbad simbad simbad} \
		       {{DENIS} catdenis cds {B/denis}} \
		       {{SkyBot} catskybot skybot skybot} \
		       {- {Optical} opt} \
		       {{AAVSO} cataavso cds {B/vsx}} \
		       {{AC 2000.2} catac cds {I/275/ac2002}} \
		       {{ASCC-2.5} catascss cds {I/280A/ascc01}} \
		       {{Carlsberg Meridian 14} catcmc cds {I/304}}\
		       {{GAIA DR1} catgaia cds {I/337}} \
		       {{GSC 1.2} catgsc1 cds {I/254/out}} \
		       {{GSC 2.2} catgsc2 cds {I/271/out}} \
		       {{GSC 2.3} catgsc3 cds {I/305/out}} \
		       {{NOMAD} catnomad cds {I/297/out}} \
		       {{PPMX} catppmx cds {I/312}} \
		       {{SAO J2000} catsao cds {I/131A/sao}} \
		       {{SDSS Release 5} catsdss5 cds {II/276}} \
		       {{SDSS Release 6} catsdss6 cds {II/282}} \
		       {{SDSS Release 7} catsdss7 cds {II/294}} \
		       {{SDSS Release 8} catsdss8 cds {II/306}} \
		       {{SDSS Release 9} catsdss9 cds {V/139}} \
		       {{Tycho-2} cattycho cds {I/259/tyc2}} \
		       {{USNO-A2.0} catua2 cds {I/252/out}} \
		       {{USNO-B1.0} catub1 cds {I/284/out}} \
		       {{USNO UCAC2} catucac2 cds {I/289/out}} \
		       {{USNO UCAC2 Bright Star Sup} catucac2sup cds {I/294A}} \
		       {{USNO UCAC3} catucac3 cds {I/315}} \
		       {{USNO UCAC4} catucac4 cds {I/322A}} \
		       {{USNO URAT1} caturat1 cds {I/329}} \
		       {- {Infrared} ir} \
		       {{2MASS Point Sources} cat2mass cds {II/246/out}}\
		       {{IRAS Point Sources} catiras cds {II/125}}\
		       {- {High Energy} hea} \
		       {{Chandra Source} catcsc cxc {Current Release}}
		       {{2XMMi Source} catxmm cds {IX/40/xmm2is}} \
		       {{Second ROSAT PSPC} catrosat cds {IX/30}} \
		       {- {Radio} radio} \
		       {{FIRST Survey} catfirst cds {VIII/71/first}} \
		       {{NVSS} catnvss cds {VIII/65/nvss}} \
		       {- {Observation Logs} log} \
		       {{Chandra Archive} catchandralog cds {B/chandra/chandra}} \
		       {{CFHT Exposures} catcfhtlog cds {B/cfht/chfht}} \
		       {{ESO Science Archive} catesolog cds {B/eso/safcat}} \
		       {{HST Archive} cathstlog cds {B/hst/hstlog}} \
		       {{XMM Observation} catxmmlog cds {B/xmm/xmmlog}} \
		   }

    set cat(id) 0
    set cat(sym,font,msg) {}

    # prefs only
    set pcat(server) cds
    set pcat(loc) 500
    set pcat(sym,shape) {circle point}
    set pcat(sym,color) green
    set pcat(sym,width) 1
    set pcat(sym,dash) 0
    set pcat(sym,units) physical
    set pcat(sym,font) helvetica
    set pcat(sym,font,size) 10
    set pcat(sym,font,weight) normal
    set pcat(sym,font,slant) roman
    set pcat(vot) 1
}

# Load via HTTP

proc CATGetURL {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATGetURL $varname $var(url)?$var(query)"
    }

    ARStatus $varname [msgcat::mc {Loading}]

    global ihttp
    if {$var(sync)} {
	if {![catch {set var(token) [http::geturl $var(url) \
					 -query $var(query) \
					 -timeout $ihttp(timeout) \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	    CATGetURLFinish $varname $var(token)
	} else {
	    ARError $varname "[msgcat::mc {Unable to locate URL}] $var(url)"
	}
    } else {
	if {![catch {set var(token) [http::geturl $var(url) \
					 -query $var(query) \
					 -timeout $ihttp(timeout) \
					 -command \
					 [list CATGetURLFinish $varname] \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	} else {
	    ARError $varname "[msgcat::mc {Unable to locate URL}] $var(url)"
	}
    }
}

proc CATGetURLIncr {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATGetURLIncr $varname $var(url)?$var(query)"
    }

    ARStatus $varname [msgcat::mc {Loading}]

    global ihttp
    if {$var(sync)} {
	if {![catch {set var(token) [http::geturl $var(url) \
					 -query $var(query) \
					 -timeout $ihttp(timeout) \
					 -handler \
					 [list $var(proc,reader) $var(catdb)] \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	    CATGetURLFinish $varname $var(token)
	} else {
	    ARError $varname "[msgcat::mc {Unable to locate URL}] $var(url)"
	}
    } else {
	if {![catch {set var(token) [http::geturl $var(url) \
					 -query $var(query) \
					 -timeout $ihttp(timeout) \
					 -handler \
					 [list $var(proc,reader) $var(catdb)] \
					 -command \
					 [list CATGetURLFinish $varname] \
					 -headers "[ProxyHTTP]"]
	}]} {
	    # reset errorInfo (may be set in http::geturl)
	    global errorInfo
	    set errorInfo {}

	    set var(active) 1
	} else {
	    ARError $varname "[msgcat::mc {Unable to locate URL}] $var(url)"
	}
    }
}

proc CATGetURLFinish {varname token} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATGetURLFinish $varname"
    }

    if {!($var(active))} {
	ARCancelled $varname
	return
    }

    upvar #0 $token t

    # Code
    set code [http::ncode $token]

    # Meta
    set meta $t(meta)

    # Log it
    HTTPLog $token

    # Result?
    switch -- $code {
	{} -
	200 -
	203 -
	404 -
	503 {
	    if {[info exist ${varname}(proc,parser)]} {
		eval [list $var(proc,parser) $var(catdb) $token]
	    }

	    ARDone $varname
	    eval $var(proc,done) $varname
	}

	201 -
	300 -
	301 -
	302 -
	303 -
	305 -
	307 {
	    foreach {name value} $meta {
		if {[regexp -nocase ^location$ $name]} {
		    global debug
		    if {$debug(tcl,cat)} {
			puts stderr "CATGetURLFinish redirect $code to $value"
		    }
		    # clean up and resubmit
		    http::cleanup $token
		    unset var(token)

		    set var(url) $value
		    eval $var(proc,load) $varname
		}
	    }
	}

	default {ARError $varname "[msgcat::mc {Error code was returned}] $code"}
    }
}

proc CATLoad {varname} {
    upvar #0 $varname var
    global $varname

    # clear previous db
    global $var(catdb)
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATLoad $varname $var(url)?$var(query)"
    }

    set var(proc,done) CATLoadDone
    set var(proc,load) CATLoad
    CATGetURL $varname
    return
}

proc CATLoadIncr {varname} {
    upvar #0 $varname var
    global $varname

    # clear previous db
    global $var(catdb)
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATLoadIncr $varname $var(url)?$var(query)"
    }

    set var(proc,done) CATLoadDone
    set var(proc,load) CATLoadIncr
    CATGetURLIncr $varname
    return
}

proc CATLoadDone {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATLoadDone $varname"
    }

    CATSortMenu $varname
    CATConfigCols $varname
    CATColsMenu $varname
    CATTable $varname

    CATDialogUpdate $varname
}

# Load via File

proc CATLoadSBFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog catfbox]
    if {$fn != {}} {
	CATLoadFn $varname $fn starbase_read
    }
}

proc CATLoadVOTFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog catvotfbox]
    if {$fn != {}} {
	CATLoadFn $varname $fn VOTRead
    }
}

proc CATLoadTSVFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog cattsvfbox]
    if {$fn != {}} {
	CATLoadFn $varname $fn TSVRead
    }
}

# used by backup
proc CATLoadFn {varname fn reader} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATLoadFn $varname $fn $reader"
    }

    ARStatus $varname [msgcat::mc {Loading Catalog}]

    CATOff $varname
    CATSet $varname {} {} $fn

    set var(name) {}
    set var(x) {}
    set var(y) {}
    set var(width) {}
    set var(height) {}

    if {[file exists $fn]} {
	$reader $var(catdb) $fn
    } else {
	Error "[msgcat::mc {Unable to open file}] $fn"
	return
    }

    ARDone $varname
    CATLoadDone $varname
}

# Save via File

proc CATSaveSBFile {varname} {
    set fn [SaveFileDialog catfbox]
    CATSaveFn $varname $fn starbase_write
}

proc CATSaveVOTFile {varname} {
    set fn [SaveFileDialog catvotfbox]
    CATSaveFn $varname $fn VOTWrite
}

proc CATSaveTSVFile {varname} {
    set fn [SaveFileDialog cattsvfbox]
    CATSaveFn $varname $fn TSVWrite
}

proc CATSaveFn {varname fn writer} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    if {$fn == {}} {
	return
    }

    # do we have a db?
    if {![CATValidDB $var(tbldb)]} {
	return
    }

    $writer $var(tbldb) $fn
    ARDone $varname
}

# Other procedures

proc CATStatusRows {varname rowlist} {
    upvar #0 $varname var
    global $varname

    # rowlist start at 1
    if {[llength $rowlist]>0} {
	ARStatus $varname "[msgcat::mc {Row}] [join $rowlist {,}]"
    } else {
	ARStatus $varname {}
    }
}

proc CATOff {varname} {
    upvar #0 $varname var
    global $varname

    global $var(catdb)
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }
    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }
    set db $var(tbldb)
    set ${db}(Nrows) {}

    $var(tbl) selection clear all

    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    $var(frame) marker catalog $varname delete
	}
    }

    CATSortMenu $varname
    CATColsMenu $varname
    set var(filter) {}
    set var(sort) {}
    set var(colx) {}
    set var(coly) {}

    set var(blink) 0

    # plot window?
    if {$var(plot)} {
	PlotDestroy $var(plot,var)
	set var(plot) 0
	set var(plot,var) {}
	set var(plot,x) {}
	set var(plot,xerr) {}
	set var(plot,y) {}
	set var(plot,yerr) {}
    }

    CATDialogUpdate $varname
}

# used by backup
proc CATTable {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)
    global icat

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATTable $varname"
    }

    if {![CATValidDB $var(catdb)]} {
	return
    }

    # delete any previous tbldb
    set db ${varname}tbldb
    global $db
    if {[info exists $db]} {
	unset $db
    }

    # clear the selection
    $var(tbl) selection clear all

    # clear regions
    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    $var(frame) marker catalog $varname delete
	}
    }

    if {$var(filter) == {} && $var(sort) == {}} {
	set var(tbldb) $var(catdb)
    } else {
	set var(tbldb) ${varname}tbldb
	global $var(tbldb)
	if {![CATFltSort $varname]} {
	    Error "[msgcat::mc {Unable to evaluate filter}] $var(filter)"
	    if {[info exists $var(tbldb)]} {
		unset $var(tbldb)
	    }
	    set var(tbldb) $var(catdb)
	}
    }

    global $var(tbldb)
    $var(tbl) configure -variable $var(tbldb)
    $var(found) configure -textvariable ${var(tbldb)}(Nrows)

#    starbase_writefp $var(catdb) stdout
#    starbase_writefp $var(tbldb) stdout

    if {[starbase_nrows $var(tbldb)] == 0} {
	ARStatus $varname [msgcat::mc {No Items Found}]
	return
    }

    set nc [starbase_ncols $var(tbldb)]
    if { $nc > $icat(mincols)} {
	$var(tbl) configure -cols $nc
    } else {
	$var(tbl) configure -cols $icat(mincols)
    }

    # add header
    set nr [expr [starbase_nrows $var(tbldb)]+1]
    if {$nr > $icat(minrows)} {
	$var(tbl) configure -rows $nr
    } else {
	$var(tbl) configure -rows $icat(minrows)
    }

    CATGenerate $varname

    # regenerate the plot if needed
    if {$var(plot)} {
	CATPlotGenerate $varname
    }

    set nr [starbase_nrows $var(tbldb)]
    if {$nr >= $var(max) && !$var(allrows)} {
	ARStatus $varname "$nr [msgcat::mc {rows of data have been downloaded. More may be available. You may wish to adjust the maximum allowed}]"
    }
}

proc CATGenerate {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATGenerate $varname"
    }

    # do we have a db?
    if {![CATValidDB $var(tbldb)]} {
	return
    }

    ARStatus $varname [msgcat::mc {Plotting Regions}]

    # delete any previous 
    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    $var(frame) marker catalog $varname delete
	}
    }

    if {$var(show)} {
	global reg
	set reg {}
	CATReg $varname {} 1 reg
	if {[info commands $var(frame)] != {}} {
	    if {[$var(frame) has fits]} {
		if {[catch {$var(frame) marker catalog command ds9 var reg}]} {
		    ARError $varname "[msgcat::mc {Internal Parse Error}]"
		    return
		}
	    }
	}
    }

    ARStatus $varname [msgcat::mc Done]
}

proc CATGenerateRegions {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATGenerateRegions $varname"
    }

    # do we have a db?
    if {![CATValidDB $var(tbldb)]} {
	return
    }

    ARStatus $varname [msgcat::mc {Generating Regions}]

    global reg
    set reg {}
    CATReg $varname {} 0 reg
    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    if {[catch {$var(frame) marker command ds9 var reg}]} {
		ARError $varname "[msgcat::mc {Internal Parse Error}]"
		return
	    }
	}
    }

    ARStatus $varname [msgcat::mc Done]
}

proc CATGenerateUpdate {varname row} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATGenerateUpdate $varname $row"
    }

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }
    
    set id [$var(frame) get marker catalog "\{${varname}.${row}\}" id]
    set sel [$var(frame) get marker catalog $id select]
    set hh [$var(frame) get marker catalog $id highlite]

    $var(frame) marker catalog "\{${varname}.${row}\}" delete
    global reg
    set reg {}
    CATReg $varname $row 1 reg
    if {$reg != {}} {
	$var(frame) marker catalog command ds9 var reg

	set id [$var(frame) get marker catalog "\{${varname}.${row}\}" id]
	if {$sel} {
	    $var(frame) marker catalog "\{${varname}.${row}\}" select
	}
	if {$hh} {
	    $var(frame) marker catalog "\{${varname}.${row}\}" highlite
	}
    }
    unset reg
}

proc CATSet {varname format catalog title} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATSet $varname :$format:$catalog:$title:"
    }

    set var(format) $format
    set var(catalog) $catalog
    set var(title) $title
    set var(filter) {}
    set var(colx) {}
    set var(coly) {}
    set var(sort) {}
    set var(sort,dir) "-increasing"
}

proc CATValidDB {varname} {
    upvar #0 $varname var
    global $varname

    if {[info exists var(Nrows)] && 
	[info exists var(Ncols)] &&
	[info exists var(HLines)] &&
	[info exists var(Header)]} {
	return 1
    } else {
	return 0
    }
}

proc CATAnalysisMenu {} {
    global icat
    global ds9

    set mm "$ds9(mb).analysis.cat"
    set nn {}

    foreach ff $icat(def) {
	set ll [lindex $ff 0]
	set ww [lindex $ff 1]
	set ss [lindex $ff 2]
	set cc [lindex $ff 3]

	if {$ll != {-}} {
	    $mm.$nn add command -label $ll \
		-command [list CATDialog $ww $ss $cc $ll apply]
	} else {
	    set nn "$ss"
	    menu $mm.$nn
	    $mm add cascade -label $ww -menu $mm.$nn
	}
    }
}

proc CATServerMenu {varname} {
    global icat
    
    upvar #0 $varname var
    global $varname

    $var(mb) add cascade -label [msgcat::mc {Catalog Server}] \
	-menu $var(mb).server
    menu $var(mb).server

    set ll [llength $icat(server,menu)]
    for {set ii 0} {$ii<$ll} {incr ii} {
	set item [lindex $icat(server,menu) $ii]
	$var(mb).server add radiobutton -label [lindex $item 0] \
	    -variable ${varname}(server) -value [lindex $item 1]
    }
}

proc CATSortMenu {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    global ds9

    set m $var(sortmenu).menu
    catch {destroy $m}

    menu $m -tearoff 0
    $m add command -label {} -command "CATSortCmd $varname {}"
    if {[CATValidDB $var(catdb)]} {
	set cnt -1
	foreach col [starbase_columns $var(catdb)] {
	    $m add command -label $col -command "CATSortCmd $varname \{$col\}"

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$m entryconfig $col -columnbreak 1
	    }
	}
    }
}

proc CATSortCmd {varname val} {
    upvar #0 $varname var
    global $varname

    set ${varname}(sort) $val
    CATTable $varname
}

# backward backup compatibility version 6.1
proc CATRADECMenu {varname} {
    CATColsMenu $varname
}

# used by backup
proc CATColsMenu {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    global ds9

    set m $var(ramenu).menu
    catch {destroy $m}

    menu $m -tearoff 0
    if {[CATValidDB $var(catdb)]} {
	set cnt -1
	foreach col [starbase_columns $var(catdb)] {
	    $m add command -label $col -command "CATColXCmd $varname \{$col\}"

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$m entryconfig $col -columnbreak 1
	    }
	}
    }

    set m $var(decmenu).menu
    catch {destroy $m}

    menu $m -tearoff 0
    if {[CATValidDB $var(catdb)]} {
	set cnt -1
	foreach col [starbase_columns $var(catdb)] {
	    $m add command -label $col -command "CATColYCmd $varname \{$col\}"

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$m entryconfig $col -columnbreak 1
	    }
	}
    }
}

proc CATColXCmd {varname val} {
    upvar #0 $varname var
    global $varname

    set ${varname}(colx) $val
    CATGenerate $varname
}

proc CATColYCmd {varname val} {
    upvar #0 $varname var
    global $varname

    set ${varname}(coly) $val
    CATGenerate $varname
}

proc CATColsCmd {varname} {
    upvar #0 $varname var
    global $varname

    CATColsUpdate $varname
    CATGenerate $varname
}

proc CATConfigCols {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    set var(colx) {}
    set var(coly) {}

    if {![CATValidDB $var(catdb)]} {
	return
    }

    if {[starbase_ncols $var(catdb)] < 2} {
	return
    }

    # determine psystem/psky if present in cat header
    # psystem has already been adjusted based on loaded fits at menu creation
    switch -- $var(psystem) {
	image -
	physical -
	amplifier -
	detector {
	    set cols {
		"X" "Y"
	    }
	    foreach {colx coly} $cols {
		if {!([lsearch [starbase_columns $var(catdb)] $colx] == -1) &&
		    !([lsearch [starbase_columns $var(catdb)] $coly] == -1)} {
		    set var(colx) $colx
		    set var(coly) $coly
		    return
		}

		# try lower case
		set colx [string tolower $colx]
		set coly [string tolower $coly]
		if {!([lsearch [starbase_columns $var(catdb)] $colx] == -1) &&
		    !([lsearch [starbase_columns $var(catdb)] $coly] == -1)} {
		    set var(colx) $colx
		    set var(coly) $coly
		    return
		}
	    }

	    # default
	    set var(colx) [starbase_colname $var(catdb) 1]
	    set var(coly) [starbase_colname $var(catdb) 2]
	    
	    return
	}
	default {
	    if {[info commands $var(frame)] == {}} {
		# linear
		set var(colx) [starbase_colname $var(catdb) 1]
		set var(coly) [starbase_colname $var(catdb) 2]

		return
	    } elseif {![$var(frame) has wcs equatorial $var(psystem)]} {
		# linear
		set var(colx) [starbase_colname $var(catdb) 1]
		set var(coly) [starbase_colname $var(catdb) 2]

		return
	    } else {
		if {![catch {starbase_hdrget $var(catdb) equinox} sys]} {
		    switch -- $sys {
			1950.0 -
			B1950 {
			    set var(psystem) wcs
			    set var(psky) fk4
			}
			2000.0 -
			J2000 {
			    set var(psystem) wcs
			    set var(psky) fk5
			}
		    }
		}

		switch -- $var(psky) {
		    fk5 -
		    icrs {
			set cols {
			    "_RAJ2000" "_DEJ2000"
			    "_RAJ2000" "_DECJ2000"
			    "RAJ2000" "DEJ2000"
			    "RAJ2000" "DECJ2000"
			    "RA_J2000" "DE_J2000"
			    "RA_J2000" "DEC_J2000"
			    "RA (J2000)" "Dec (J2000)"
			    "RA" "DEC"
			    "RA" "DECL"
			    "RA" "Dec"
			    "RA(deg)" "DEC(deg)"
			}
			if {[CATConfigColsSearch $varname $cols]} {
			    return
			}

			# next, look for an UCD (via VOTABLE)
			set db $var(catdb)
			upvar #0 $db T
			for {set cc 0} {$cc < $T(Ncols)} {incr cc} {
			    if {[info exists ${db}(Ucd)]} {
				switch -- [string tolower [string range [lindex $T(Ucd) $cc] 0 8]] {
				    pos.eq.ra {set var(colx) [lindex $T(Header) $cc]}
				    pos.eq.de {set var(coly) [lindex $T(Header) $cc]}
				}
			    }
			}

			if {$var(colx) != {} && $var(coly) != {}} {
			    return
			}
		    }
		    fk4 {
			set cols {
			    "_RAB1950" "_DEB1950"
			    "RA_B1950" "DEC_B1950"
			    "RA (B1950)" "Dec (1950)"
			    "RA" "DEC"
			    "RA" "DECL"
			    "RA" "Dec"
			    "RA(deg)" "DEC(deg)"
			}
			if {[CATConfigColsSearch $varname $cols]} {
			    return
			}
		    }
		    galactic {
			set cols {
			    "_GLON" "_GLAT"
			    "LON" "LAT"
			    "LON.Gal(deg)" "LAT.Gal(deg)"
			}
			if {[CATConfigColsSearch $varname $cols]} {
			    return
			}
		    }
		    ecliptic {
			set cols {
			    "_ELON" "_ELAT"
			    "LON.Ecl(deg)" "LAT.Ecl(deg)"
			}
			if {[CATConfigColsSearch $varname $cols]} {
			    return
			}
		    }
		}

		# default
		set var(colx) [starbase_colname $var(catdb) 1]
		set var(coly) [starbase_colname $var(catdb) 2]
	    }
	}
    }
}

proc CATConfigColsSearch {varname cols} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    foreach {colx coly} $cols {
	if {!([lsearch [starbase_columns $var(catdb)] $colx] == -1) &&
	    !([lsearch [starbase_columns $var(catdb)] $coly] == -1)} {
	    set var(colx) $colx
	    set var(coly) $coly
	    return 1
	}

	# try lower case
	set colx [string tolower $colx]
	set coly [string tolower $coly]
	if {!([lsearch [starbase_columns $var(catdb)] $colx] == -1) &&
	    !([lsearch [starbase_columns $var(catdb)] $coly] == -1)} {
	    set var(colx) $colx
	    set var(coly) $coly
	    return 1
	}
    }

    return 0
}

# Other interface

proc CATTool {} {
    CATDialog cattool {} {} [msgcat::mc {Catalog Tool}] none
}

proc CATClearFrame {} {
    global current

    if {$current(frame) != {}} {
	$current(frame) marker catalog delete all
    }
}

proc CATUpdateWCS {} {
    global icat
    global current

    if {$current(frame) != {}} {
	$current(frame) marker catalog delete all

	foreach varname $icat(cats) {
	    upvar #0 $varname var
	    global $varname

	    CATGenerate $varname

	    # regenerate the plot if needed
	    if {$var(plot)} {
		CATPlotGenerate $varname
	    }
	}
    }
}

proc CATUpdateFont {} {
    global icat

    foreach varname $icat(cats) {
	upvar #0 $varname var
	global $varname

	$var(tbl) configure -font [font actual TkDefaultFont]
    }
}

proc CATBackup {ch which fdir rdir} {
    global icat

    foreach varname $icat(cats) {
	upvar #0 $varname var
	global $varname

	if {$var(frame) == $which} {
	    set catdb ${varname}catdb
	    global $catdb

	    puts $ch "CATDialog $varname {} {} {} none"
	    if {[starbase_nrows $var(catdb)]>500} {
		# external file
		set fn $fdir/${varname}.cat
		set rfn $rdir/${varname}.cat

		catch {file delete -force $fn}
		CATSaveFn $varname "$fn" VOTWrite
		puts $ch "CATLoadFn $varname \"$rfn\" VOTRead"
	    } else {
		# internal var
		puts $ch "global $catdb"
		puts $ch "array set $catdb \{ [array get $catdb] \}"
	    }
	    puts $ch "global $varname"
	    puts $ch "array set $varname \{ [array get $varname] \}"

	    set symdb ${varname}symdb
	    global $symdb
	    puts $ch "global $symdb"
	    puts $ch "array set $symdb \{ [array get $symdb] \}"

	    puts $ch "CATColsMenu $varname"
	    puts $ch "CATTable $varname"
	}
    }
}

proc PrefsDialogCatalog {} {
    global icat
    global dprefs

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {Catalogs}]
    lappend dprefs(tabs) [ttk::frame $w.cat]

    # Catalog
    set f [ttk::labelframe $w.cat.param -text [msgcat::mc {Catalogs}]]

    ttk::label $f.stitle -text [msgcat::mc {Server}]
    ttk::menubutton $f.svr -textvariable pcat(server) -menu $f.svr.menu
    ttk::label $f.shtitle -text [msgcat::mc {Shape}]
    ttk::menubutton $f.shape -textvariable pcat(sym,shape) -menu $f.shape.menu
    ttk::checkbutton $f.vot -variable pcat(vot) \
	-text [msgcat::mc {Download VOTABLE format if available}]
    ttk::label $f.loctitle -text [msgcat::mc {IAU Location Code}]
    ttk::entry $f.loc -textvariable pcat(loc) -width 7

    global pcat
    ttk::label $f.ctitle -text [msgcat::mc {Color}]
    ColorMenuButton $f.color pcat sym,color {}

    ttk::label $f.cwidth -text [msgcat::mc {Width}]
    WidthDashMenuButton $f.width pcat sym,width sym,dash {} {}

    ttk::label $f.ftitle -text [msgcat::mc {Font}]
    FontMenuButton $f.font pcat sym,font sym,font,size \
	sym,font,weight, sym,font,slant {}

    menu $f.svr.menu

    set ll [llength $icat(server,menu)]
    for {set ii 0} {$ii<$ll} {incr ii} {
	set item [lindex $icat(server,menu) $ii]
	$f.svr.menu add radiobutton -label [lindex $item 0] \
	-variable pcat(server) -value [lindex $item 1]
    }

    menu $f.shape.menu
    $f.shape.menu add radiobutton -label [msgcat::mc {Circle}] \
	-variable pcat(sym,shape) -value circle
    $f.shape.menu add radiobutton -label [msgcat::mc {Ellipse}] \
	-variable pcat(sym,shape) -value ellipse
    $f.shape.menu add radiobutton -label [msgcat::mc {Box}] \
	-variable pcat(sym,shape) -value box
    $f.shape.menu add radiobutton -label [msgcat::mc {Text}] \
	-variable pcat(sym,shape) -value text
    $f.shape.menu add cascade -label [msgcat::mc {Point}] \
	-menu $f.shape.menu.point

    menu $f.shape.menu.point
    $f.shape.menu.point add radiobutton -label [msgcat::mc {Circle}] \
	-variable pcat(sym,shape) -value {circle point}
    $f.shape.menu.point add radiobutton -label [msgcat::mc {Box}] \
	-variable pcat(sym,shape) -value {box point}
    $f.shape.menu.point add radiobutton -label [msgcat::mc {Diamond}] \
	-variable pcat(sym,shape) -value {diamond point}
    $f.shape.menu.point add radiobutton -label [msgcat::mc {Cross}] \
	-variable pcat(sym,shape) -value {cross point}
    $f.shape.menu.point add radiobutton -label [msgcat::mc {X}] \
	-variable pcat(sym,shape) -value {x point}
    $f.shape.menu.point add radiobutton -label [msgcat::mc {Arrow}] \
	-variable pcat(sym,shape) -value {arrow point}
    $f.shape.menu.point add radiobutton -label [msgcat::mc {BoxCircle}] \
	-variable pcat(sym,shape) -value {boxcircle point}
    $f.shape.menu.point add separator

    grid $f.stitle $f.svr -padx 2 -pady 2 -sticky w
    grid $f.shtitle $f.shape -padx 2 -pady 2 -sticky w
    grid $f.ctitle $f.color -padx 2 -pady 2 -sticky w
    grid $f.cwidth $f.width -padx 2 -pady 2 -sticky w
    grid $f.ftitle $f.font -padx 2 -pady 2 -sticky w
    grid $f.loctitle - - $f.loc -padx 2 -pady 2 -sticky w
    grid $f.vot - - - -padx 2 -pady 2 -sticky w

    pack $f -side top -fill both -expand true
}

# Process Cmds

proc CatalogInitCmd {} {
    global icat

    set ref [lindex $icat(cats) end]
    global cvarname
    set cvarname $ref
}

proc CatalogRefCmd {ref} {
    global icat
    global cvarname

    # backward compatibility
    if {$ref == "cxc"} {
	set ref csc
    }

    # look for reference in current list
    if {[lsearch $icat(cats) cat${ref}] < 0} {
	# see if its from our list of cats
	foreach mm $icat(def) {
	    set ll [lindex $mm 0]
	    set ww [lindex $mm 1]
	    set ss [lindex $mm 2]
	    set cc [lindex $mm 3]

	    if {$ll != {-} && "cat${ref}" == $ww} {
		CATDialog $ww $ss $cc $ll sync
		set cvarname cat${ref}
		return
	    }
	}

	# not a default, assume other name
	CATDialog catcds cds $ref $ref sync
    }
    set cvarname cat${ref}
}

proc CatalogSymbolLoadCmd {fn} {
    global cvarname
    global $cvarname

    if {[file exists $fn]} {
	starbase_read ${cvarname}(symdb) $fn
	CATGenerate $cvarname
    } else {
	Error "[msgcat::mc {Unable to open file}] $fn"
	return
    }
}

proc CatalogSymbolAddCmd {} {
    global cvarname
    global $cvarname

    set row [expr [starbase_nrows ${cvarname}(symdb)]+1]
    starbase_rowins ${cvarname}(symdb) $row
    starbase_set ${cvarname}(symdb) $row \
	[starbase_colnum ${cvarname}(symdb) shape] $pcat(sym,shape)
    starbase_set ${cvarname}(symdb) $row \
	[starbase_colnum ${cvarname}(symdb) color] $pcat(sym,color)
    starbase_set ${cvarname}(symdb) $row \
	[starbase_colnum ${cvarname}(symdb) width] $pcat(sym,width)
    starbase_set ${cvarname}(symdb) $row \
	[starbase_colnum ${cvarname}(symdb) font] $pcat(sym,font)
    starbase_set ${cvarname}(symdb) $row \
	[starbase_colnum ${cvarname}(symdb) fontsize] \
	$pcat(sym,font,size)
    starbase_set ${cvarname}(symdb) $row \
	[starbase_colnum ${cvarname}(symdb) fontweight] \
	$pcat(sym,font,weight)
    starbase_set ${cvarname}(symdb) $row \
	[starbase_colnum ${cvarname}(symdb) fontslant] \
	$pcat(sym,font,slant)
    starbase_set ${cvarname}(symdb) $row \
	[starbase_colnum ${cvarname}(symdb) units] $pcat(sym,units)
    CATGenerate ${cvarname}name
}

proc CatalogSAMPCmd {name} {
    global cvarname
    global $cvarname
    global samp

    if {[info exists samp]} {
	foreach arg $samp(apps,votable) {
	    foreach {key val} $arg {
		if {[string tolower $val] == $name} {
		    SAMPSendTableLoadVotable $key $cvarname
		    break
		}
	    }
	}
    } else {
	Error [msgcat::mc {SAMP: not connected}]
    }
}

proc ProcessCatalogCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global icat

    # we need to be realized
    ProcessRealizeDS9

    set item [string tolower [lindex $var $i]]
    switch -- $item {
	{} {CATTool}

	file -
	import -
	load {
	    incr i
	    set reader VOTRead
	    switch -- [lindex $var $i] {
		xml -
		vot {incr i; set reader VOTRead}
		sb -
		starbase {incr i; set reader starbase_read}
		csv -
		tsv {incr i; set reader TSVRead}
	    }

	    set fn [lindex $var $i]
	    if {$fn != {}} {
		CATDialog cattool {} {} {} none
		CATLoadFn [lindex $icat(cats) end] $fn $reader
		FileLast catfbox $fn
	    }
	}

	allcols -
	allrows -
	cancel -
	clear -
	close -
	coordinate -
	crosshair -
	dec -
	edit -
	export -
	filter -
	header -
	hide -
	location -
	match -
	maxrows -
	name -
	panto -
	plot -
	print -
	psky -
	psystem -
	ra -
	regions -
	retrieve -
	samp -
	save -
	server -
	show -
	size -
	sky -
	skyformat -
	sort -
	symbol -
	system -
	update -
	x -
	y {ProcessCatalog $varname $iname [lindex $icat(cats) end]}

	default {
	    # another command
	    if {[string range $item 0 0] == "-"} {
		CATTool
		incr i -1
		return
	    }

	    # existing cat or load new one?
	    set ref $item

	    # backward compatibility
	    if {[string range $ref 0 2] == {cat}} {
		set ref [string range $ref 3 end]
	    }

	    incr i
	    set item [string tolower [lindex $var $i]]
	    switch -- $item {
		file -
		import -
		load {incr i -1}

		allcols -
		allrows -
		cancel -
		clear -
		close -
		coordinate -
		crosshair -
		dec -
		edit -
		export -
		filter -
		header -
		hide -
		location -
		match -
		maxrows -
		name -
		panto -
		plot -
		print -
		psky -
		psystem -
		ra -
		regions -
		retrieve -
		samp -
		save -
		server -
		show -
		size -
		sky -
		skyformat -
		sort -
		symbol -
		system -
		update -
		x -
		y {ProcessCatalog $varname $iname cat${ref}}

		default {
		    # ok, new catalog
		    incr i -1
		    set item [string tolower [lindex $var $i]]

		    # backward compatibility
		    switch $item {
			cds {incr i; set item [string tolower [lindex $var $i]]}
			cxc {set item csc}
		    }

		    # see if its from our list of cats
		    foreach mm $icat(def) {
			set ll [lindex $mm 0]
			set ww [lindex $mm 1]
			set ss [lindex $mm 2]
			set cc [lindex $mm 3]

			if {$ll != {-} && "cat${item}" == $ww} {
			    CATDialog $ww $ss $cc $ll sync
			    return
			}
		    }

		    # not a default, assume other name
		    CATDialog catcds cds $item $item sync
		}
	    }
	}
    }
}

proc ProcessCatalog {varname iname cvarname} {
    upvar 2 $varname var
    upvar 2 $iname i

    global icat
    global pcat
    global current

    # we should have a catalog now
    global $cvarname
    upvar #0 $cvarname cvar

    if {![info exists cvar(top)]} {
	Error "[msgcat::mc {Unable to find catalog window}] $cvarname"
	return
    }
    if {![winfo exists $cvar(top)]} {
	Error "[msgcat:: mc {Unable to find catalog window}] $cvarname"
	return
    }

    # now, process it
    set item [string tolower [lindex $var $i]]
    switch -- $item {
	allrows {set cvar(allrows) 1}
	allcols {set cvar(allcols) 1}
	cancel {ARCancel $cvarname}
	clear {CATOff $cvarname}
	close {CATDestroy $cvarname}
	coordinate {
	    incr i
	    set cvar(x) [lindex $var $i]
	    incr i
	    set cvar(y) [lindex $var $i]
	    incr i
	    set cvar(sky) [lindex $var $i]
	}
	crosshair {CATCrosshair $cvarname}
	edit {
	    incr i
	    set cvar(edit) [FromYesNo [lindex $var $i]]
	    CATEdit $cvarname
	}
	export -
	save {
	    incr i
	    set writer VOTWrite
	    switch -- [lindex $var $i] {
		xml -
		vot {incr i; set writer VOTWrite}
		sb -
		starbase {incr i; set writer starbase_write}
		csv -
		tsv {incr i; set writer TSVWrite}
	    }

	    set fn [lindex $var $i]
	    CATSaveFn $cvarname $fn $writer
	    FileLast catfbox $fn
	}
	filter {
	    incr i
	    set item [lindex $var $i]
	    switch -- $item {
		load {
		    incr i
		    set fn [lindex $var $i]
		    if {[catch {open $fn r} fp]} {
			Error "[msgcat::mc {Unable to open file}] $fn: $fp"
			return
		    }
		    set flt [read -nonewline $fp]
		    catch {regsub {\n} $flt " " $flt}
		    set cvar(filter) [string trim $flt]
		    catch {close $fp}
		}
		default {
		    set cvar(filter) $item
		}
	    }
	    CATTable $cvarname
	}
	header {CATHeader $cvarname}
	hide {
	    set cvar(show) 0
	    CATGenerate $cvarname
	}
	location {
	    incr i
	    set cvar(loc) [lindex $var $i]
	    CATGenerate $cvarname
	}
	match {
	    incr i
	    set item [lindex $var $i]
	    switch -- $item {
		error {
		    incr i
		    set icat(error) [lindex $var $i]
		    incr i
		    set icat(eformat) [lindex $var $i]
		}
		function {incr i; set icat(function) [lindex $var $i]}
		unique {incr i; set icat(unique) [FromYesNo [lindex $var $i]]}
		return {incr i; set icat(return) [lindex $var $i]}
		default {
		    set icat(match1) {}
		    set icat(match2) {}
		    set m1 [lindex $var $i]
		    set m2 [lindex $var [expr $i+1]]
		    if {$m1 != {}} {
			if {[string range $m1 0 0] != {-}} {
			    if {$m2 != {}} {
				if {[string range $m2 0 0] != {-}} {
				    incr i
				    set icat(match1) "cat$m1"
				    set icat(match2) "cat$m2"
				    CATMatch $current(frame) \
					$icat(match1) $icat(match2)
				    return
				}
			    } else {
				# error
				return
			    }
			}
		    }
		    incr i -1
		    # find them
		    set ll [llength $icat(cats)]
		    if {$ll>1} {
			set icat(match1) [lindex $icat(cats) [expr $ll-2]]
			set icat(match2) [lindex $icat(cats) [expr $ll-1]]
			CATMatch $current(frame) $icat(match1) $icat(match2)
		    } else {
			# error
		    }
		}
	    }
	}
	maxrows {
	    incr i
	    set cvar(max) [lindex $var $i]
	}
	name {
	    incr i
	    set cvar(name) [lindex $var $i]
	}
	panto {
	    incr i
	    set cvar(panto) [FromYesNo [lindex $var $i]]
	}
	plot {
	    incr i
	    set cvar(plot,x) [lindex $var $i]
	    incr i
	    set cvar(plot,y) [lindex $var $i]
	    set cvar(plot,xerr) {}
	    set cvar(plot,yerr) {}
	    set xerr [lindex $var [expr $i+1]]
	    set yerr [lindex $var [expr $i+2]]
	    if {$xerr != {}} {
		if {[string range $xerr 0 0 ] != {-}} {
		    incr i
		    set cvar(plot,xerr) $xerr
		    if {$yerr != {}} {
			if {[string range $yerr 0 0 ] != {-}} {
			    incr i
			    set cvar(plot,yerr) $yerr
			}
		    }
		}
	    }
	    CATPlotGenerate $cvarname
	}
	print {CATPrint $cvarname}
	psky {
	    incr i
	    set cvar(psky) [lindex $var $i]
	    CATGenerate $cvarname
	}
	psystem {
	    incr i
	    set cvar(psystem) [lindex $var $i]
	    CATGenerate $cvarname
	}
	regions {CATGenerateRegions $cvarname}
	retrieve {CATApply $cvarname 1}
	samp {
	    global ds9
	    global samp

	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		send {
		    incr i
		    set name [string tolower [lindex $var $i]]
		    if {[info exists samp]} {
			foreach arg $samp(apps,votable) {
			    foreach {key val} $arg {
				if {[string tolower $val] == $name} {
				    SAMPSendTableLoadVotable $key $cvarname
				    break
				}
			    }
			}
		    } else {
			Error [msgcat::mc {SAMP: not connected}]
		    }
		}
		broadcast {SAMPSendTableLoadVotable {} $cvarname}
		default {
		    SAMPSendTableLoadVotable {} $cvarname
		    incr i -1
		}
	    }
	}
	server {
	    incr i
	    set cvar(server) [lindex $var $i]
	}
	size {
	    incr i
	    set cvar(width) [lindex $var $i]
	    incr i
	    set cvar(height) [lindex $var $i]
	    incr i
	    set cvar(rformat) [lindex $var $i]
	    set cvar(rformat,msg) $cvar(rformat)
	}
	show {
	    set cvar(show) 1
	    CATGenerate $cvarname
	}
	sky {
	    incr i
	    set cvar(sky) [lindex $var $i]
	    CoordMenuButtonCmd $cvarname system sky \
		[list CATWCSMenuUpdate $cvarname]
	}
	skyformat {
	    incr i
	    set cvar(skyformat) [lindex $var $i]
	}
	sort {
	    incr i
	    set cvar(sort) [lindex $var $i]
	    incr i
	    switch -- [lindex $var $i] {
		incr {
		    set cvar(sort,dir) "-increasing"
		}
		decr {
		    set cvar(sort,dir) "-decreasing"
		}
	    }
	    CATTable $cvarname
	}
	symbol {
	    global $cvar(symdb)
	    set row 1
	    incr i
	    if {[string is integer [lindex $var $i]]} {
		set row [lindex $var $i]
		incr i
	    }

	    switch -- [lindex $var $i] {
		add {
		    set row [expr [starbase_nrows $cvar(symdb)]+1]
		    starbase_rowins $cvar(symdb) $row
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) shape] $pcat(sym,shape)
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) color] $pcat(sym,color)
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) width] $pcat(sym,width)
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) font] $pcat(sym,font)
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) fontsize] \
			$pcat(sym,font,size)
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) fontweight] \
			$pcat(sym,font,weight)
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) fontslant] \
			$pcat(sym,font,slant)
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) units] $pcat(sym,units)
		    CATGenerate $cvarname
		}
		angle {
		    incr i
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) angle] [lindex $var $i]
		    CATGenerate $cvarname
		}
		color {
		    incr i
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) color] [lindex $var $i]
		    CATGenerate $cvarname
		}
		condition {
		    incr i
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) condition] \
			[lindex $var $i]
		    CATGenerate $cvarname
		}
		font {
		    incr i
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) font] [lindex $var $i]
		    CATGenerate $cvarname
		}
		fontsize {
		    incr i
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) fontsize] [lindex $var $i]
		    CATGenerate $cvarname
		}
		fontweight {
		    incr i
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) fontweight] \
			[lindex $var $i]
		    CATGenerate $cvarname
		}
		fontslant {
		    incr i
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) fontslant] \
			[lindex $var $i]
		    CATGenerate $cvarname
		}
		load {
		    incr i
		    set fn [lindex $var $i]
		    if {[file exists $fn]} {
			starbase_read $cvar(symdb) $fn
			CATGenerate $cvarname
		    } else {
			Error "[msgcat::mc {Unable to open file}] $fn"
			return
		    }
		}
		remove {
		    starbase_rowdel $cvar(symdb) $row
		    CATGenerate $cvarname
		}
		save {
		    incr i
		    starbase_write $cvar(symdb) [lindex $var $i]
		}
		size {
		    incr i
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) size] [lindex $var $i]
		    CATGenerate $cvarname
		}
		size2 {
		    incr i
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) size2] [lindex $var $i]
		    CATGenerate $cvarname
		}
		shape {
		    incr i
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) shape] [lindex $var $i]
		    CATGenerate $cvarname
		}
		text {
		    incr i
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) text] [lindex $var $i]
		    CATGenerate $cvarname
		}
		units {
		    incr i
		    starbase_set $cvar(symdb) $row \
			[starbase_colnum $cvar(symdb) units] [lindex $var $i]
		    CATGenerate $cvarname
		}
	    }
	}
	system {
	    incr i
	    set cvar(system) [lindex $var $i]
	    CoordMenuButtonCmd $cvarname system sky \
		[list CATWCSMenuUpdate $cvarname]
	}
	update {CATUpdate $cvarname}
	x -
	ra {
	    incr i
	    set cvar(colx) [lindex $var $i]
	    CATGenerate $cvarname
	}
	y -
	dec {
	    incr i
	    set cvar(coly) [lindex $var $i]
	    CATGenerate $cvarname
	}
    }
}

proc ProcessSendCatalogCmd {proc id param sock fn} {
    global icat

    set cc [lindex $icat(cats) end]
    switch -- [string tolower [lindex $param 0]] {
	header {}
	default {
	    set cc [lindex $param 0]
	    set param [lreplace $param 0 0]
	}
    }

    switch -- [string tolower [lindex $param 0]] {
	{} {$proc $id "$icat(cats)\n"}
	header {ProcessSend $proc $id $sock $fn {.txt} "[CATGetHeader $cc]\n"}
    }
}
