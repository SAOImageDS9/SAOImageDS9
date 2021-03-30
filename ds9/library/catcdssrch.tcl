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

proc CATCDSSrchLoad {varname url query} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCDSSrchLoad $varname"
    }

    # clear previous db
    global $var(catdb)
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }

    TBLGetURL $varname $url $query
    return 
}

proc CATCDSSrchExec {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATCDSSrchExec $varname"
    }

    CATCDSSrchVOTParse $var(catdb) $var(token)
    ARDone $varname
    CATCDSSrchTable $varname
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

# Other

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

    set fn [OpenFileDialog catcdssrchfbox $var(top)]
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

    set fn [SaveFileDialog catcdssrchfbox $var(top)]
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

# Parser

proc CATCDSSrchVOTParse {t token} {
    upvar #0 $t T
    global $t
    global debug

    #set fp [open debug.xml w]
    #puts $fp [http::data $token]
    #close $fp

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
	    set T(Header) "Resource\tDescription"
	    set T(HLines) 2
	    set T(H_1) $T(Header)
	    set T(H_2) "--------\t-----------"
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

