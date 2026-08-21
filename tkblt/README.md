[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.1041783.svg)](https://doi.org/10.5281/zenodo.1041783)
# tkblt
Introduction to the TkBLT library

TkBLT is a library of extensions to the Tk library. It adds new
commands and variables to the application's interpreter.

TkBLT is a derived version of the BLT Toolkit by George A. Howlett,
for Tcl/Tk 8.5/8.6, is TEA compatible, with full support for MacOSX and
Windows, and is fully compatible with the Tk API. TkBLT is released
under the original BSD license. TkBLT includes only the Graph and
Barchart Tk widgets, and the Tcl Vector command.

The following commands are added to the interpreter from the TkBLT library:

Graph: A 2D plotting widget. Plots two variable data in a window with an optional 
legend and annotations. It has of several components; coordinate axes, 
crosshairs, a legend, and a collection of elements and tags.

Barchart: A barchart widget. Plots two-variable data as rectangular bars in a 
window. The x-coordinate values designate the position of the bar along 
the x-axis, while the y-coordinate values designate the magnitude.
The barchart widget has of several components; coordinate axes, 
crosshairs, a legend, and a collection of elements and tags.

Vector: Creates a vector of floating point values. The vector's components
can be manipulated in three ways: through a Tcl array variable, a Tcl
command, or the C API.

Changes
-------

### 3.3 (2026-08-20)

This is a new fork, continuing maintenance of the project for SAOImageDS9
after the original upstream became inactive. Adds Tcl 9 compatibility
across the graph, axis, element, marker, pen, legend, and vector code:
`Tk_Offset` (removed from newer Tk headers) is replaced with the standard
`offsetof`, and `Tcl_Size` is used in place of `int` for argument counts
and buffer lengths where Tcl 8.7+ requires it. Also adds a `Blt::CopyArea`
wrapper handling the macOS Tk BGRA pixel layout for `XCopyArea`. Pulled
forward from the copy of tkblt maintained in the SAOImageDS9 source tree.

Additionally fixes a crash in postscript/PDF output (`graph postscript
output`): `tkbltGrPSOutput.C` carries its own hardcoded copy of Tk's
private `TkBorder` struct (not part of Tk's stable API), and Tcl 9
widened that struct's `resourceRefCount`/`objRefCount` fields from `int`
to `Tcl_Size`, which shifted every field after them (including
`bgColorPtr`) out from under the stale local copy. Updated the local
mirror to match, fixing reads of garbage memory as an `XColor*`. This bug
was not introduced by the SAOImageDS9 patches above -- it predates them
and was found while verifying this release.
