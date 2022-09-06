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
	    puts "Text at:$xx $yy"
	    set id [$ds9(canvas) create text \
			$xx $yy \
			-text $txt \
			-fill $illustrate(color) \
			-font "{$illustrate(font)} $illustrate(font,size) $illustrate(font,weight) $illustrate(font,slant)" \
			-tags {text graphic}]

	    puts "coords:[$ds9(canvas) coords $id]"
	    puts "bbox:[$ds9(canvas) bbox $id]"
	}
    }

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -fill]
    return $id
}

proc IllustrateTextMove {gr xx yy} {
    global ds9
    global iillustrate

    puts $gr
    foreach {id x1 y1 x2 y2 color fill dash} $gr {
	set bbox [$ds9(canvas) bbox $id]
	set bbx1 [lindex $bbox 0]
	set bby1 [lindex $bbox 1]
	set bbx2 [lindex $bbox 2]
	set bby2 [lindex $bbox 3]

	set cx [expr ($bbx2-$bbx1)/2]
	set cy [expr ($bby2-$bby1)/2]

#	set ccx [expr ($x2-$x1)/2]
#	set ccy [expr ($y2-$y1)/2]

	set dx [expr $xx-$iillustrate(motion,xx)]
	set dy [expr $yy-$iillustrate(motion,yy)]

	$ds9(canvas) moveto $id [expr $dx+$x1-$cx] [expr $dy+$y1-$cy]
    }
}
