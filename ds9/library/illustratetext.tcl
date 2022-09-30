#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateTextCreate {xx yy txt color font} {
    global ds9

    set id [$ds9(canvas) create text \
		$xx $yy \
		-text $txt \
		-fill $color \
		-font $font \
		-tags {text graphic}
	   ]

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -fill]
    return $id
}

proc IllustrateTextSave {id} {
    global ds9

    set fillcolor [$ds9(canvas) itemcget $id -fill]

    return [list $id {} $fillcolor {}]
}

proc IllustrateTextCopy {id} {
    global ds9
    
    set coords [$ds9(canvas) coords $id]
    set txt [$ds9(canvas) itemcget $id -text]
    set color [$ds9(canvas) itemcget $id -fill]
    set font [$ds9(canvas) itemcget $id -font]

    return [list text [list $coords $txt $color $font]]
}

proc IllustrateTextSet {id param} {
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

    IllustrateBaseUpdateHandle $id
}

proc IllustrateTextDup {param} {
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

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -fill]
    return $id
}

proc IllustrateTextList {id} {
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

proc IllustrateTextAntsOn {id} {
    global ds9

    $ds9(canvas) itemconfigure $id \
	-fill white
}

proc IllustrateTextAntsOff {gr} {
    global ds9

    foreach {id color fillcolor dashlist} $gr {
	$ds9(canvas) itemconfigure $id \
	    -fill $fillcolor
    }
}

# Dialog

proc IllustrateTextColorSet {id color} {
    global ds9
    
    $ds9(canvas) itemconfigure $id \
	-fill $color

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $color -fill $color
    }
}

proc IllustrateTextFontSet {id font} {
    global ds9
    global illustrate
    
    $ds9(canvas) itemconfigure $id \
	-font $font

    IllustrateBaseUpdateHandle $id
}

