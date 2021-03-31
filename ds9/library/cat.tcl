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
    set icat(radius) 15
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
		       {{GAIA DR1} catgaia1 cds {I/337/gaia}} \
		       {{GAIA DR2} catgaia cds {I/345/gaia2}} \
		       {{GSC 2.2} catgsc2 cds {I/271/out}} \
		       {{GSC 2.3} catgsc cds {I/305/out}} \
		       {{NOMAD} catnomad cds {I/297/out}} \
		       {{PPMX} catppmx cds {I/312}} \
		       {{SAO J2000} catsao cds {I/131A/sao}} \
		       {{SDSS Release 7} catsdss7 cds {II/294}} \
		       {{SDSS Release 9} catsdss9 cds {V/139}} \
		       {{SDSS Release 12} catsdss cds {V/147}} \
		       {{Tycho-2} cattycho cds {I/259/tyc2}} \
		       {{USNO-A2.0} catua2 cds {I/252/out}} \
		       {{USNO-B1.0} catub1 cds {I/284/out}} \
		       {{USNO UCAC2} catucac2 cds {I/289/out}} \
		       {{USNO UCAC4} catucac4 cds {I/322A}} \
		       {{USNO UCAC5} catucac cds {I/340}} \
		       {{USNO URAT1} caturat1 cds {I/329}} \
		       {- {Infrared} ir} \
		       {{2MASS Point Sources} cat2mass cds {II/246/out}}\
		       {{IRAS Point Sources} catiras cds {II/125/main}}\
		       {- {High Energy} hea} \
		       {{Chandra Source 1.1} catcsc11 cds {IX/45/csc11}}
		       {{Chandra Source 2.0} catcsc20 cds {IX/57/csc2master}}
		       {{Chandra Source Current} catcsc cxc {Current Release}}
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
}

proc CATLoad {varname url query} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATLoad $varname $url?$query"
    }

    # clear previous db
    global $var(catdb)
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }

    TBLGetURL $varname $url $query
    return
}

proc CATExec {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATExec $varname"
    }

    VOTParse $var(catdb) $var(token)
    ARDone $varname
    CATLoadDone $varname
}

proc CATLoadDone {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATLoadDone $varname"
    }

    TBLSortMenu $varname
    CATConfigCols $varname
    CATColsMenu $varname
    CATTable $varname

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

    if {![TBLValidDB $var(catdb)]} {
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
	if {![TBLFltSort $varname $var(catdb) $var(tbldb)]} {
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
    if {![TBLValidDB $var(tbldb)]} {
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
		    $var(proc,error) $varname "[msgcat::mc {Internal Parse Error}]"
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
    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    ARStatus $varname [msgcat::mc {Generating Regions}]

    global reg
    set reg {}
    CATReg $varname {} 0 reg
    if {[info commands $var(frame)] != {}} {
	if {[$var(frame) has fits]} {
	    if {[catch {$var(frame) marker command ds9 var reg}]} {
		$var(proc,error) $varname "[msgcat::mc {Internal Parse Error}]"
		return
	    }
	}
    }

    ARStatus $varname [msgcat::mc Done]
}

# Load via File

proc CATLoadVOTFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog votfbox $var(top)]
    if {$fn != {}} {
	CATLoadFn $varname $fn VOTRead
    }
}

proc CATLoadRDBFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog rdbfbox $var(top)]
    if {$fn != {}} {
	CATLoadFn $varname $fn starbase_read
    }
}

proc CATLoadTSVFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog tsvfbox $var(top)]
    if {$fn != {}} {
	CATLoadFn $varname $fn TSVRead
    }
}

proc CATLoadFITSFile {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog catfitsfbox $var(top)]
    if {$fn != {}} {
	CATLoadFn $varname $fn FITSRead
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
    set var(radius) {}

    if {[file exists $fn]} {
	$reader $var(catdb) $fn
    } else {
	Error "[msgcat::mc {Unable to open file}] $fn"
	return
    }

    ARStatus $varname [msgcat::mc {Done}]
    CATLoadDone $varname
}

# Other procedures

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

    TBLSortMenu $varname
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

proc CATAnalysisMenu {mb} {
    global icat
    global ds9

    set nn {}

    foreach ff $icat(def) {
	set ll [lindex $ff 0]
	set ww [lindex $ff 1]
	set ss [lindex $ff 2]
	set cc [lindex $ff 3]

	if {$ll != {-}} {
	    $mb.$nn add command -label $ll \
		-command [list CATDialog $ww $ss $cc $ll apply]
	} else {
	    set nn "$ss"
	    ThemeMenu $mb.$nn
	    $mb add cascade -label $ww -menu $mb.$nn
	}
    }
}

proc CATServerMenu {varname} {
    global icat
    
    upvar #0 $varname var
    global $varname

    $var(mb) add cascade -label [msgcat::mc {Catalog Server}] \
	-menu $var(mb).server
    ThemeMenu $var(mb).server

    set ll [llength $icat(server,menu)]
    for {set ii 0} {$ii<$ll} {incr ii} {
	set item [lindex $icat(server,menu) $ii]
	$var(mb).server add radiobutton -label [lindex $item 0] \
	    -variable ${varname}(server) -value [lindex $item 1]
    }
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

    ThemeMenu $m
    $m configure -tearoff 0
    if {[TBLValidDB $var(catdb)]} {
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

    ThemeMenu $m
    $m configure -tearoff 0
    if {[TBLValidDB $var(catdb)]} {
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

    if {![TBLValidDB $var(catdb)]} {
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
	    } elseif {![$var(frame) has wcs celestial $var(psystem)]} {
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
		TBLSaveFn $varname $fn VOTWrite
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

    $dprefs(listbox) insert {} end -id [ttk::frame $w.cat] \
	-text [msgcat::mc {Catalogs}]

    # Catalog
    set f [ttk::labelframe $w.cat.param -text [msgcat::mc {Catalogs}]]

    ttk::label $f.stitle -text [msgcat::mc {Server}]
    ttk::menubutton $f.svr -textvariable pcat(server) -menu $f.svr.menu
    ttk::label $f.shtitle -text [msgcat::mc {Shape}]
    ttk::menubutton $f.shape -textvariable pcat(sym,shape) -menu $f.shape.menu
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

    ThemeMenu $f.svr.menu

    set ll [llength $icat(server,menu)]
    for {set ii 0} {$ii<$ll} {incr ii} {
	set item [lindex $icat(server,menu) $ii]
	$f.svr.menu add radiobutton -label [lindex $item 0] \
	-variable pcat(server) -value [lindex $item 1]
    }

    ThemeMenu $f.shape.menu
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

    ThemeMenu $f.shape.menu.point
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

    pack $f -side top -fill both -expand true
}

# Process Cmds

proc ProcessCatalogCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    global icat
    set ref [lindex $icat(cats) end]
    global cvarname
    set cvarname $ref

    cat::YY_FLUSH_BUFFER
    cat::yy_scan_string [lrange $var $i end]
    cat::yyparse
    incr i [expr $cat::yycnt-1]
}

proc ProcessSendCatalogCmd {proc id param sock fn} {
    global icat

    set rr {}
    foreach ii $icat(cats) {
	lappend rr [string replace $ii 0 2]
    }
    $proc $id "$rr\n"
}

proc CatalogCmdRef {ref} {
    global icat
    global cvarname

    # backward compatibility
    if {$ref == "cxc"} {
	set ref csc
    }
    set rr cat${ref}
    set id [lsearch $icat(cats) $rr]

    # look for reference in current list
    if { $id < 0} {
	Error "[msgcat::mc {Unable to find catalog window}] $ref"
	return
    }

    set icat(cats) [lreplace $icat(cats) $id $id]
    lappend icat(cats) $rr
}

proc CatalogCmdRetrieve {ref} {
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
		return
	    }
	}

	# not a default, assume other name
	CATDialog cat${ref} cds $ref $ref sync
    }
}

proc CatalogCmdLoad {fn reader} {
    global icat

    if {$fn != {}} {
	CATDialog cattool {} {} [msgcat::mc {Catalog Tool}] none
	CATLoadFn [lindex $icat(cats) end] $fn $reader
    }
}

proc CatalogCmdMatch {} {
    global icat

    set icat(match1) {}
    set icat(match2) {}
    set ll [llength $icat(cats)]
    if {$ll>1} {
	CatalogCmdMatchParams [lindex $icat(cats) [expr $ll-2]] \
	    [lindex $icat(cats) [expr $ll-1]]
    }
}

proc CatalogCmdMatchParams {cat1 cat2} {
    global icat
    global current

    set icat(match1) $cat1
    set icat(match2) $cat2
    if {$current(frame) != {}} {
	CATMatch $current(frame) $icat(match1) $icat(match2)
    }
}

proc CatalogCmdSAMP {} {
    global samp
    global cvarname
    if {$cvarname == {}} {
	return
    }

    if {[info exists samp]} {
	SAMPSendTableLoadVotable {} $cvarname
    } else {
	Error [msgcat::mc {SAMP: not connected}]
    }
}

proc CatalogCmdSAMPSend {name} {
    global samp
    global cvarname
    if {$cvarname == {}} {
	return
    }

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

proc CatalogCmdSkyframe {skyframe} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar

    set cvar(sky) $skyframe
    CoordMenuButtonCmd $cvarname system sky [list CATWCSMenuUpdate $cvarname]
}

proc CatalogCmdSystem {sys} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar

    set cvar(system) $sys
    CoordMenuButtonCmd $cvarname system sky [list CATWCSMenuUpdate $cvarname]
}

proc CatalogCmdSymbol {col value} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar
    global $cvar(symdb)

    starbase_set $cvar(symdb) $cvar(row) \
	[starbase_colnum $cvar(symdb) $col] $value
    CATGenerate $cvarname
}

proc CatalogCmdSymbolFontStyle {value} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar
    global $cvar(symdb)

    switch $value {
	normal {
	    starbase_set $cvar(symdb) $cvar(row) \
		[starbase_colnum $cvar(symdb) fontweight] normal
	    starbase_set $cvar(symdb) $cvar(row) \
		[starbase_colnum $cvar(symdb) fontslant] roman
	}
	bold {
	    starbase_set $cvar(symdb) $cvar(row) \
		[starbase_colnum $cvar(symdb) fontweight] bold
	    starbase_set $cvar(symdb) $cvar(row) \
		[starbase_colnum $cvar(symdb) fontslant] roman
	}
	italic {
	    starbase_set $cvar(symdb) $cvar(row) \
		[starbase_colnum $cvar(symdb) fontweight] normal
	    starbase_set $cvar(symdb) $cvar(row) \
		[starbase_colnum $cvar(symdb) fontslant] italic
	}
    }
    CATGenerate $cvarname
}

proc CatalogCmdSymbolAdd {} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar
    global $cvar(symdb)

    global pcat

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

proc CatalogCmdSymbolRemove {} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar
    global $cvar(symdb)

    starbase_rowdel $cvar(symdb) $cvar(row)
    CATGenerate $cvarname
}

proc CatalogCmdSymbolLoad {fn} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar
    global $cvar(symdb)

    if {[file exists $fn]} {
	starbase_read $cvar(symdb) $fn
	CATGenerate $cvarname
    } else {
	Error "[msgcat::mc {Unable to open file}] $fn"
	return
    }
}

proc CatalogCmdSymbolSave {fn} {
    global cvarname
    if {$cvarname == {}} {
	return
    }
    upvar #0 $cvarname cvar
    global $cvar(symdb)

    starbase_write $cvar(symdb) $fn
}
