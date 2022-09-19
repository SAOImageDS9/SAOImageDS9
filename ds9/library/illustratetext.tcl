#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCreateText {xx yy} {
    global ds9
    global illustrate

    set txt {Text}
    if {[EntryDialog [msgcat::mc {Text}] [msgcat::mc {Enter Text}] 40 txt]} {
	if {$txt != {}} {
	    set id [$ds9(canvas) create text \
			$xx $yy \
			-text $txt \
			-fill $illustrate(color) \
			-font "{$illustrate(font)} $illustrate(font,size) $illustrate(font,weight) $illustrate(font,slant)" \
			-tags {text graphic}]

	    IllustrateCreateHandlesBase $id [$ds9(canvas) itemcget $id -fill]
	    return $id
	}
    }
    return 0
}

proc IllustrateListText {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    set color [$ds9(canvas) itemcget $id -fill]
    set font [$ds9(canvas) itemcget $id -font]
    set txt [$ds9(canvas) itemcget $id -text]
    
    set rr "text $coords # text=\"$txt\""

    if {$color != {cyan}} {
	append rr " color=$color"
    }

    if {$font != "\{helvetica\} 12 normal roman"} {
	append rr " font=\"$font\""
    }

    return $rr
}

proc IllustrateMoveToText {gr xx yy} {
    global ds9
    global iillustrate

    foreach {id x1 y1 x2 y2 color fill dash} $gr {
	set bbox [$ds9(canvas) bbox $id]
	set bbx1 [lindex $bbox 0]
	set bby1 [lindex $bbox 1]
	set bbx2 [lindex $bbox 2]
	set bby2 [lindex $bbox 3]

	set cx [expr ($bbx2-$bbx1)/2]
	set cy [expr ($bby2-$bby1)/2]

	set dx [expr $xx-$iillustrate(motion,xx)]
	set dy [expr $yy-$iillustrate(motion,yy)]

	$ds9(canvas) moveto $id [expr $dx+$x1-$cx] [expr $dy+$y1-$cy]
    }
}
