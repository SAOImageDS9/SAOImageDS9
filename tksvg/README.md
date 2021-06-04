Tcl 8.5/8.6 TEA compatible. Derived from TKSVG version 0.7

tksvg
======

This package adds support to read the SVG image format from Tk.
The actual code to parse and raster the SVG comes from nanosvg.

Example usage:

	package require tksvg
	set img [image create photo -file orb.svg]
	pack [label .l -image $img]
 
