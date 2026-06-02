# Copyright (C) 1999-2021
# Smithsonian Astrophysical Observatory, Cambridge, MA, USA
# For conditions of distribution and use, see copyright notice in "copyright"

namespace eval ::tksao {}
namespace eval ::tksao::pdf {}

proc ::tksao::pdf::writeFrames {frames filename args} {
    package require pdf4tcl

    array set opts {
	-bg #ffffff
	-colorspace rgb
	-height {}
	-level 2
	-resolution 150
	-width {}
    }
    array set opts $args

    if {$opts(-width) eq {} || $opts(-height) eq {}} {
	return -code error {PDF width and height are required}
    }

    set pdf [::pdf4tcl::new %AUTO% \
		 -paper [list ${opts(-width)}p ${opts(-height)}p] \
		 -margin 0 \
		 -orient 1]

    set ok [catch {
	$pdf setFillColor $opts(-bg)
	$pdf rectangle 0 0 $opts(-width) $opts(-height) -filled 1 -stroke 0

	foreach ff $frames {
	    $ff postscript level $opts(-level)
	    $ff postscript colorspace $opts(-colorspace)
	    $ff postscript resolution $opts(-resolution)
	    $ff pdf $pdf
	}

	$pdf write -file $filename
    } rr]

    catch {$pdf destroy}
    if {$ok} {
	return -code error $rr
    }
}
