#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCreateText {xx yy txt color font} {
    global ds9

    set id [$ds9(canvas) create text \
		$xx $yy \
		-text $txt \
		-fill $color \
		-font $font \
		-tags {text graphic}
	   ]

    IllustrateCreateHandlesBase $id [$ds9(canvas) itemcget $id -fill]
    return $id
}

proc IllustrateCopyText {id} {
    global ds9
    
    set coords [$ds9(canvas) coords $id]
    set txt [$ds9(canvas) itemcget $id -text]
    set color [$ds9(canvas) itemcget $id -fill]
    set font [$ds9(canvas) itemcget $id -font]

    return [list text [list $coords $txt $color $font]]
}

proc IllustrateSetText {id param} {
    global ds9
    
    foreach {coords txt color font} $param {
	$ds9(canvas) coords $id $coords
	$ds9(canvas) itemconfigure $id -text $txt
	$ds9(canvas) itemconfigure $id -fill $color
	$ds9(canvas) itemconfigure $id -font $font
    }

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $fill -fill $fill
    }

    IllustrateUpdateHandleBase $id
}

proc IllustrateDupText {param} {
    global ds9
    
    foreach {coords txt color font} $param {
	set id [$ds9(canvas) create text \
		    $coords \
		    -text $txt \
		    -fill $color \
		    -font $font \
		    -tags {text graphic}
	       ]
    }

    IllustrateCreateHandlesBase $id [$ds9(canvas) itemcget $id -fill]
    return $id
}

proc IllustrateListText {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    set color [$ds9(canvas) itemcget $id -fill]
    set font [$ds9(canvas) itemcget $id -font]
    set txt [$ds9(canvas) itemcget $id -text]

    set rr "text $coords \"$txt\""

    if {$color != {cyan} || $font != "helvetica 12 normal roman"} {
	append rr " #"
	if {$color != {cyan}} {
	    append rr " color = $color"
	}

	if {$font != "helvetica 12 normal roman"} {
	    append rr " font = \"$font\""
	}
    }
    
    return $rr
}
