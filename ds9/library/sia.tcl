#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SIADef {} {
    global sia
    global isia
    global psia
    global wcs

    set isia(sias) {}

    set isia(rformat) arcmin
    set isia(radius) 15

    set isia(minrows) 20
    set isia(mincols) 10

    set isia(mode) new
    set isia(save) 0

    set isia(def) { \
			{{AKARI (ISAS/JAXA)} \
			     siaakari \
			     {https://jvo.nao.ac.jp/skynode/do/siap/akari/fis_image_v1/1.0} \
			     {} \
			} \
			{{Chandra (NASA/CXC)} \
			     siacxc \
			     {https://cda.harvard.edu/cxcsiap/queryImages} \
			     {} \
			} \
			{{Hubble Legacy Archive (STSCI)} \
			     siahla \
			     {https://hla.stsci.edu/cgi-bin/hlaSIAP.cgi} \
			     {} \
			} \
			{{MAST (STSCI)} \
			     siamast \
			     {https://archive.stsci.edu/siap/search.php} \
			     {} \
			} \
			{{SkyView (NASA/HEASARC)} \
			     siaskyview \
			     {https://skyview.gsfc.nasa.gov/current/cgi/vo/sia.pl} \
			     {} \
			} \
			{{TGSSADR (GMRT)} \
			     siatgssadr \
			     {https://vo.astron.nl/tgssadr/q_fits/imgs/siap.xml} \
			     {} \
			 } \
		    }

    #{{2MASS (NASA/IPAC)} sia2mass {https://irsa.ipac.caltech.edu/cgi-bin/2MASS/IM/nph-im_sia} {}}
    #{{Astro-Wise} siaastrowise {http://vo.astro-wise.org/SIAP} {VERB=2&FORM=VOTable&PROJECT=ALL&INSTRUMENT=ALL&}}
    #{{CADC} siacadc {http://www.cadc-ccda.hia-iha.nrc-cnrc.gc.ca/sia/query} {}}
    #{{SDSS DR12} siasdss {http://skyserver.sdss.org/SkyserverWS/dr12/SIAP/getSIAP} {} }

}

proc SIAAnalysisMenu {mb} {
    global isia
    global ds9

    foreach ff $isia(def) {
	set title [lindex $ff 0]
	set vars [lindex $ff 1]
	set url [lindex $ff 2]
	set opts [lindex $ff 3]

	$mb add command -label $title \
	    -command [list SIADialog $vars $title $url $opts apply]
    }
}

proc SIALoad {varname url query} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIALoad $varname $url?$query"
    }

    # clear previous db
    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }

    TBLGetURL $varname $url $query
    return
}

proc SIAExec {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIAExec $varname"
    }

    VOTParse $var(tbldb) $var(token)
    SIADone $varname

    SIATable $varname
    SIADialogUpdate $varname
}

proc SIATable {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)
    global isia

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIATable $varname"
    }

    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    # clear the selection
    $var(tbl) selection clear all

    global $var(tbldb)
    $var(found) configure -textvariable ${var(tbldb)}(Nrows)

    #    starbase_writefp $var(tbldb) stdout

    if {[starbase_nrows $var(tbldb)] == 0} {
	ARStatus $varname [msgcat::mc {No Items Found}]
	return
    }

    set nc [starbase_ncols $var(tbldb)]
    if { $nc > $isia(mincols)} {
	$var(tbl) configure -cols $nc
    } else {
	$var(tbl) configure -cols $isia(mincols)
    }

    # add header
    set nr [expr [starbase_nrows $var(tbldb)]+1]
    if {$nr > $isia(minrows)} {
	$var(tbl) configure -rows $nr
    } else {
	$var(tbl) configure -rows $isia(minrows)
    }
}

proc SIAOff {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIAOff $varname"
    }

    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }
    set db $var(tbldb)
    set ${db}(Nrows) {}

    $var(tbl) selection clear all

    SIADialogUpdate $varname
}

# Process Cmds

proc ProcessSIACmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global isia
    # we need to be realized
    ProcessRealizeDS9

    set ref [lindex $isia(sias) end]
    global cvarname
    set cvarname $ref

    sia::YY_FLUSH_BUFFER
    sia::yy_scan_string [lrange $var $i end]
    sia::yyparse
    incr i [expr $sia::yycnt-1]
}

proc ProcessSendSIACmd {proc id param sock fn} {
    global isia

    set rr {}
    foreach ii $isia(sias) {
	lappend rr [string replace $ii 0 2]
    }
    $proc $id "$rr\n"
}

proc SIACmdRef {ref} {
    global isia
    global cvarname

    set rr sia${ref}
    set id [lsearch $isia(sias) $rr]

    # look for reference in current list
    if { $id < 0} {
	Error "[msgcat::mc {Unable to find SIAP window}] $ref"
	return
    }

    set isia(sias) [lreplace $isia(sias) $id $id]
    lappend isia(sias) $rr
}

proc SIACmdRetrieve {ref} {
    global isia
    global cvarname

    # look for reference in current list
    if {[lsearch $isia(sias) sia${ref}] < 0} {
	# see if its from our list of sias
	foreach mm $isia(def) {
	    set title [lindex $mm 0]
	    set vars [lindex $mm 1]
	    set url [lindex $mm 2]
	    set opts [lindex $mm 3]

	    if {$title != {-} && "sia${ref}" == $vars} {
		SIADialog $vars $title $url $opts sync
		return
	    }
	}
	Error "SIA site no longer supported: $ref"
    }
}

