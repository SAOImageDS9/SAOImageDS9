# tkhtml1
TK HTML Widget.
Tcl/Tk 8.5/8.6 TEA compatible.
Full support for MacOSX and Windows.
Based on tkhtml version 1 by D. Richard Hipp.

Changes
-------

### 1.1 (2026-08-20)

This is a new fork, continuing maintenance of the project for SAOImageDS9
after the original upstream became inactive. Adds Tcl 9 compatibility:
`Tcl_Size` is now used in place of `int` for argument counts where Tcl 8.7+
requires it, `Tk_Offset` (removed from newer Tk headers) is replaced with
the standard `offsetof`, and `Tk_ConfigureWidget` is called with a
`Tcl_Obj*` array under `TK_CONFIG_OBJS` on Tcl 8.7+/9 instead of a raw
`char**` argv. Also adds a `HtmlCopyArea` wrapper handling the macOS Tk
BGRA pixel layout for `XCopyArea`. Pulled forward from the copy of
tkhtml1 maintained in the SAOImageDS9 source tree.
