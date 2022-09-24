#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCreateText {xx yy} {
    global ds9
    global illustrate

    set txt {Text}
    if {[EntryDialog [msgcat::mc {Text}] [msgcat::mc {Enter Text}] 40 txt]} {
	if {$txt == {}} {
	    return 0
	}

	set id [$ds9(canvas) create text \
		    $xx $yy \
		    -fill $illustrate(color) \
		    -font "{$illustrate(font)} $illustrate(font,size) $illustrate(font,weight) $illustrate(font,slant)" \
		    -text $txt \
		    -tags {text graphic}
	       ]

	IllustrateCreateHandlesBase $id [$ds9(canvas) itemcget $id -fill]
	return $id
    }

    return 0
}

proc IllustrateCopyText {id} {
    global ds9
    
    set coords [$ds9(canvas) coords $id]
    set fill [$ds9(canvas) itemcget $id -fill]
    set font [$ds9(canvas) itemcget $id -font]
    set txt [$ds9(canvas) itemcget $id -text]

    return [list text [list $coords $fill $font $txt]]
}

proc IllustrateSetText {id param} {
    global ds9
    
    foreach {coords fill font txt} $param {
	$ds9(canvas) coords $id $coords
	$ds9(canvas) itemconfigure $id -fill $fill
	$ds9(canvas) itemconfigure $id -font $font
	$ds9(canvas) itemconfigure $id -text $txt
    }

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $fill -fill $fill
    }

    IllustrateUpdateHandleBase $id
}

proc IllustrateDupText {param} {
    global ds9
    
    set coords [lindex $param 0]
    set fill [lindex $param 1]
    set font [lindex $param 2]
    set txt [lindex $param 3]

    set id [$ds9(canvas) create text \
		$coords \
		-fill $fill \
		-font $font \
		-text $txt \
		-tags {text graphic}
	   ]

    IllustrateCreateHandlesBase $id [$ds9(canvas) itemcget $id -fill]
    return $id
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
