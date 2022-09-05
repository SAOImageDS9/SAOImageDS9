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

	}
    }

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -fill]
    return $id
}
