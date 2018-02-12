#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATCDSSrchDef {} {
    global icatcdssrch

    set icatcdssrch(minrows) 11
    set icatcdssrch(mincols) 2

    set icatcdssrch(list,wave,param) {-kw.Wavelength}
    set icatcdssrch(list,wave) [list none Radio IR optical UV EUV X-ray Gamma-ray]
    set icatcdssrch(list,mission,param) {-kw.Mission}
    set icatcdssrch(list,mission) [list none AKARI ANS ASCA BeppoSAX CGRO Chandra COBE Copernicus CoRoT Einstein ESO EUVE EXOSAT FAUST Fermi FUSE GALEX GINGA GRANAT Herschel HEAO Hipparcos HST HUT INTEGRAL IRAS ISO IUE Kepler MSX NuSTAR OAO-2 ORFEUS Planck ROSAT RXTE SAS-1 SAS-2 SMM SOHO Spitzer STEREO Suzaku Swift TD1 UIT ULYSSES WISE WMAP WUPPE XMM]
    set icatcdssrch(list,astro,param) {-kw.Astronomy}
    set icatcdssrch(list,astro) [list none Abundances Ages AGN Associations Atomic_Data Binaries:cataclysmic Binaries:eclipsing Binaries:spectroscopic BL_Lac_objects Blue_objects Clusters_of_galaxies Constellations Diameters Earth Ephemerides Equivalent_widths Extinction Galaxies Galaxies:Markarian Galaxies:spectra Globular_Clusters Gravitational_lensing HII_regions Interstellar_Medium Magnetic_fields Masers Masses _META_ Models Multiple_Stars Nebulae Nonstellar Novae Obs_Log Open_Clusters Orbits Parallaxes Photometry Photometry:intermediate-band Photometry:narrow-band Photometry:surface Photometry:wide-band Planetary_Nebulae Planets+Asteroids Polarization Positional_Data Proper_Motions Pulsars QSOs Redshifts Rotational_Velocities Seyfert_Galaxies Spectral_Classification Spectrophotometry Spectroscopy Stars Stars:early-typeStars:Emission Stars:late-type Stars:peculiar Stars:variable Stars:white_dwarf Stars:WR Sun SuperNovae SuperNovae_Remnants Velocities YSOs]
}

proc CATCDSSrchLoadFile {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCDSSrchLoad $varname"
    }

    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }

    set fn [OpenFileDialog catcdssrchfbox]
    if {$fn != {}} {
	if {[file exists $fn]} {
	    starbase_read $var(catdb) $fn
	} else {
	    Error "[msgcat::mc {Unable to open file}] $fn"
	    return
	}

	CATCDSSrchTable $varname
    }
}

proc CATCDSSrchSaveFile {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    set fn [SaveFileDialog catcdssrchfbox]
    if {$fn != {}} {
	starbase_write $var(catdb) $fn
    }
}

proc CATCDSSrchClear {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }
}

proc CATCDSSrchCatalog {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCDSSrchCatalog $varname"
    }

    set row 0
    foreach ss [$var(tbl) curselection] {
	set rr [lindex [split $ss ,] 0]
	if {$rr != $row} {
	    set id [starbase_get $var(catdb) $rr 1]
	    set title [starbase_get $var(catdb) $rr 2]
	    if {$id != {}} {
		# can't use id, it may have / or +
		CATDialog catcds cds $id $title apply
	    }
	    set row $rr
	}
    }
}

proc CATCDSSrch {varname} {
    upvar #0 $varname var
    global $varname
    global pcat

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCDSSrch $varname"
    }

    # go for votable or tsv
    if {$pcat(vot)} {
	set var(proc,parser) CATCDSSrchVOTParse
    } else {
	set var(proc,reader) CATCDSSrchReader
    }

    #url
    set site [CATCDSURL $var(server)]
    set cgidir {viz-bin}
    if {$pcat(vot)} {
	set script {votable}
    } else {
	set script {asu-tsv}
    }
    set var(url) "http://$site/$cgidir/$script"
    
    # defaults
    set query {-meta}
    append query "&[http::formatQuery -out.max 1000]"

    if {$pcat(vot)} {
	append query "&[http::formatQuery -out.form VOTable]"
    } else {
	append query "&[http::formatQuery -out.form Tab-Separated-Values]"
    }

    if {$var(source) != {}} {
	append query "&[http::formatQuery -source $var(source)]"
    }
    if {$var(words) !={}} {
	append query "&[http::formatQuery -words $var(words)]"
    }
    if {$var(wave) !={}} {
	append query "&[http::formatQuery $var(list,wave,param) $var(wave)]"
    }
    if {$var(mission) !={}} {
	append query "&[http::formatQuery $var(list,mission,param) $var(mission)]"
    }
    if {$var(astro) !={}} {
	append query "&[http::formatQuery $var(list,astro,param) $var(astro)]"
    }

    set var(query) $query

    if {$pcat(vot)} {
	CATCDSSrchLoad $varname
    } else {
	CATCDSSrchLoadIncr $varname
    }
}

proc CATCDSSrchLoad {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCDSSrchLoad $varname"
    }

    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }

    set var(proc,done) CATCDSSrchDone
    set var(proc,load) CATCDSSrchLoad
    CATGetURL $varname
    return 
}

proc CATCDSSrchLoadIncr {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCDSSrchLoadIncr $varname"
    }

    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }

    set var(proc,done) CATCDSSrchDone
    set var(proc,load) CATCDSSrchLoadIncr
    CATGetURLIncr $varname
    return
}

proc CATCDSSrchDone {varname} {
    upvar #0 $varname var
    global $varname

    CATCDSSrchTable $varname
}

proc CATCDSSrchReader {t sock token} {
    upvar #0 $t T
    global $t

    set result 0

    if { ![info exists ${t}(state)]  } {
	set T(state) 0
    }

    switch -- $T(state) {
	0 {
	    # init db
	    fconfigure $sock -blocking 1
	    set T(Nrows) 0
	    set T(Ncols) 0
	    set T(Header) {}
	    set T(HLines) 0

	    # create header
	    incr ${t}(HLines)
	    set n $T(HLines)
	    set T(H_$n) "Resource\tDescription"
	    set T(Header) [split $T(H_$n) "\t"]

	    incr ${t}(HLines)
	    set n $T(HLines)
	    set T(H_$n) "--------\t-----------"

	    set T(Dashes) [split $T(H_$n) "\t"]
	    set T(Ndshs) [llength $T(Dashes)]
		
	    starbase_colmap $t

	    set T(state) 1
	}

	1 {
	    # process RESOURCE
	    if {[gets $sock line] == -1} {
		set T(state) 0
		return $result
	    }

	    set result [string length "$line"]
	    set line [string trim $line]
	    if {$line != {}} {
		switch -- [string range $line 0 4] {
		    "#RESO" {
			incr ${t}(Nrows)
			set r $T(Nrows)
			set T($r,1) {}
			set T($r,2) {}

			set T(state) 2
		    }
		}
	    }
	}

	2 {
	    # process Description
	    if {[gets $sock line] == -1} {
		set T(state) 0
		return $result
	    }

	    set result [string length "$line"]
	    set line [string trim $line]
	    set r $T(Nrows)
	    if {$line != {}} {
		switch -- [string range $line 0 4] {
		    "#Name" {
			set T($r,1) [string trim [lindex [split $line {:}] 1]]
			set T(state) 3
		    }
		}
	    }
	}

	3 {
	    # new style process description
	    if {[gets $sock line] == -1} {
		set T(state) 0
		return $result
	    }

	    set result [string length "$line"]
	    set line [string trim $line]
	    if {$line != {}} {
		switch -- [string range $line 0 4] {
		    "#Titl" {
			# eat it
		    }
		    default {
			set r $T(Nrows)
			if {$r>0} {
			    set val [string trim [string range $line 5 end]]
			    catch {set T($r,2) "$val"}
			    set T(state) 1
			}
		    }
		}
	    }
	}
    }

    return $result
}

proc CATCDSSrchVOTParse {t token} {
    upvar #0 $t T
    global $t
    global debug

    if {$debug(tcl,cat)} {
	set fp [open debug.xml w]
	puts $fp [http::data $token]
	close $fp
    }

    set xml [xml::parser \
		 -characterdatacommand [list CATCDSSrchVOTCharCB $t] \
		 -elementstartcommand [list CATCDSSrchVOTElemStartCB $t] \
		 -elementendcommand [list CATCDSSrchVOTElemEndCB $t] \
		 -ignorewhitespace 1 \
		]

    set T(tree,state) {}
    set T(tree,prev) {}
    if {[catch {$xml parse [http::data $token]} err]} {
	if {$debug(tcl,cat)} {
	    puts stderr "CATCDSSrchVOTParse: $err"
	}
    }

    $xml free
}

proc CATCDSSrchVOTCharCB {t data} {
    upvar #0 $t T
    global $t
    global debug

    switch -- $T(tree,state) {
	DESCRIPTION {
	    set data [string trim $data]
	    if {$data != {}} {
		switch -- $T(tree,prev) {
		    RESOURCE {
			set r $T(Nrows)
			set T($r,2) [lindex [split $data "\n"] 0]

			set T(tree,prev) {}
		    }
		}
	    }
	}
    }

    # sometimes, we get a bogus call, (ignore whitespace does not work)
    set T(tree,state) {}
    return {}
}

proc CATCDSSrchVOTElemStartCB {t name attlist args} {
    upvar #0 $t T
    global $t
    global debug

    switch -- $name {
	VOTABLE {
	    # init db
	    set T(Nrows) 0
	    set T(Ncols) 0
	    set T(Header) {}
	    set T(HLines) 0

	    # create header
	    incr ${t}(HLines)
	    set n $T(HLines)
	    set T(H_$n) "Resource\tDescription"
	    set T(Header) [split $T(H_$n) "\t"]

	    incr ${t}(HLines)
	    set n $T(HLines)
	    set T(H_$n) "--------\t-----------"

	    set T(Dashes) [regsub -all {[A-Za-z0-9]} $T(H_$n) {-}]
	    set T(Ndshs) [llength $T(Header)]
		
	    starbase_colmap $t
	}
	RESOURCE {
	    set fname {}
	    set id {}
	    set type {}
	    foreach {key value} $attlist {
		switch -- [string tolower $key] {
		    name {set fname "$value"}
		    id {set id "$value"}
		    type {set type $value}
		}
	    }

	    incr ${t}(Nrows)
	    set r $T(Nrows)
	    set T($r,1) $fname
	    set T($r,2) {}
	    
	    set T(tree,prev) $name
	}
    }

    set ${t}(tree,state) $name

    return {}
}

proc CATCDSSrchVOTElemEndCB {t name args} {
    upvar #0 $t T
    global $t
    global debug

    # we can't count on this being called for all end-tags
    switch -- $name {
	VOTABLE {
	    # ok, we're done
	    return -code break
	}
    }
    return {}
}

proc CATCDSSrchTable {varname} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)

    global icatcdssrch

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCDSSrchTable $varname"
    }

#    starbase_writefp $var(catdb) stdout

    global $var(catdb)
    $var(tbl) configure -variable $var(catdb)

    if {[starbase_nrows $var(catdb)] == 0} {
	ARStatus $varname [msgcat::mc {No Items Found}]
	return
    }

    set nc [starbase_ncols $var(catdb)]
    $var(tbl) configure -cols $nc

    # add header row
    set nr [expr [starbase_nrows $var(catdb)]+1]
    if {$nr > $icatcdssrch(minrows)} {
	$var(tbl) configure -rows $nr
    } else {
	$var(tbl) configure -rows $icatcdssrch(minrows)
    }

    ARStatus $varname "[starbase_nrows $var(catdb)] [msgcat::mc {Items Found}]"
}
