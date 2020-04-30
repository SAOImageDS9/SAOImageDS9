#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc TemplateDef {} {
    global itemplate

    # chandra
    set itemplate(chandra,acis,acis-i) {chandra/acis/acis-i.tpl}
    set itemplate(chandra,acis,acis-s) {chandra/acis/acis-s.tpl}
    set itemplate(chandra,acis,acis-is) {chandra/acis/acis-is.tpl}
    set itemplate(chandra,acis,acis-si) {chandra/acis/acis-si.tpl}
    set itemplate(chandra,hrc,hrc-i) {chandra/hrc/hrc-i.tpl}
    set itemplate(chandra,hrc,hrc-s) {chandra/hrc/hrc-s.tpl}

    # xmm
    set itemplate(xmm,epicmos1) {xmm/epicmos1.tpl}
    set itemplate(xmm,epicmos2) {xmm/epicmos2.tpl}
    set itemplate(xmm,epicpn) {xmm/epicpn.tpl}

    # heasarc
    # suzaku
    set itemplate(heasarc,suzaku,hxd) {heasarc/suzaku/hxd.tpl}
    set itemplate(heasarc,suzaku,xis) {heasarc/suzaku/xis.tpl}
    set itemplate(heasarc,suzaku,xrs) {heasarc/suzaku/xrs.tpl}

    # mmt
    # megacam
    set itemplate(mmt,megacam,megacam-amp) {mmt/megacam/megacam-amp.tpl}
    set itemplate(mmt,megacam,megacam-amp-guide) {mmt/megacam/megacam-amp-guide.tpl}
    set itemplate(mmt,megacam,megacam-chip) {mmt/megacam/megacam-chip.tpl}
    set itemplate(mmt,megacam,megacam-chip-guide) {mmt/megacam/megacam-chip-guide.tpl}
    # hecto
    set itemplate(mmt,hecto,hectospec) {mmt/hecto/hectospec.tpl}
    set itemplate(mmt,hecto,hectochelle) {mmt/hecto/hectochelle.tpl}
    # mmirs
    set itemplate(mmt,mmirs,image) {mmt/mmirs/image.tpl}
    set itemplate(mmt,mmirs,longslit) {mmt/mmirs/longslit.tpl}
    set itemplate(mmt,mmirs,mask) {mmt/mmirs/mask.tpl}
    # others
    set itemplate(mmt,swirc) {mmt/swirc.tpl}
    set itemplate(mmt,binospec) {mmt/binospec.tpl}
}

proc CreateFOVMenu {} {
    global ds9
    global itemplate
    global marker

    set mm $ds9(mb).region.fov
    ThemeMenu $mm

    set l0 {}
    set l1 {}
    set l2 {}

    foreach t [lsort [array names itemplate]] {
	set tt [split $t ","]
	set t0 [lindex $tt 0]
	set t1 [lindex $tt 1]
	set t2 [lindex $tt 2]

	if {$l0 != $t0} {
	    ThemeMenu $mm.$t0 
	    $mm add cascade -label [string toupper $t0] -menu $mm.$t0
	    set l0 $t0
	    set l1 {}
	    set l2 {}
	}

	if {$l1 != $t1} {
	    if {$t2 != {}} {
		ThemeMenu $mm.$t0.$t1 
		$mm.$t0 add cascade -label [string toupper $t1] \
		    -menu $mm.$t0.$t1
		set l1 $t1
		set l2 {}
	    } else {
		$mm.$t0 add radiobutton \
		    -label [string toupper $t1] -variable marker(shape) \
		    -value $t
		continue
	    }
	}

	$mm.$t0.$t1 add radiobutton -label [string toupper $t2] \
	    -variable marker(shape) -value $t
    }
}

proc OpenTemplateMarker {} {
    LoadTemplateMarker [OpenFileDialog templatefbox]
}

proc LoadTemplateMarker {fn} {
    global ds9
    global current

    if {$current(frame) != {} && $fn != {}} {
	set cc [$ds9(canvas) coords $current(frame)]
	set ww [lindex [$current(frame) configure -width] 4]
	set hh [lindex [$current(frame) configure -height] 4]
	set xx [expr [lindex $cc 0]+$ww/2.0]
	set yy [expr [lindex $cc 1]+$hh/2.0]

	catch {$current(frame) marker create template "\{$fn\}" $xx $yy}
    }
}

proc LoadTemplateMarkerAt {fn ra dec sys sky} {
    global current

    if {$current(frame) != {} && $fn != {}} {
	catch {$current(frame) marker create template "\{$fn\}" $sys $sky $ra $dec}
    }
}

proc SaveAsTemplateMarker {} {
    global current

    if {$current(frame) != {}} {
	set fn [SaveFileDialog templatefbox]

	if {$fn != {}} {
	    $current(frame) marker save template "\{$fn\}"
	}
    }
}
