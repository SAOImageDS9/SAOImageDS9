#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateCreateCircle {xx yy fill dash} {
    global ds9
    global illustrate

    set id [$ds9(canvas) create oval \
		$xx $yy $xx $yy \
		-outline $illustrate(color) \
		-fill $fill \
		-width $illustrate(width) \
		-dash $dash \
		-tags {circle graphic}]

    IllustrateCreateHandlesBase $id [$ds9(canvas) itemcget $id -outline]
    return $id
}
