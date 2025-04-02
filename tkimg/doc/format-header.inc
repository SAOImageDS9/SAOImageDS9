[comment {-*- tcl -*- doctools = format-header.inc}]

[moddesc Img]
[titledesc "[vset FORMATFULLNAME] ([vset FORMATNAME])"]
[copyright {1995-2024 Jan Nijtmans <nijtmans@users.sourceforge.net>}]
[copyright {2002-2024 Andreas Kupries <andreas_kupries@users.sourceforge.net>}]
[copyright {2003-2024 Paul Obermeier <obermeier@users.sourceforge.net>}]
[require img::[vset FORMATNAME] [opt 2.0]]
[description]

[cmd "package require img::[vset FORMATNAME]"]

[para]

Like all packages of [package Img] it does [emph not] provide new
commands, but extends the existing [package Tk] command [cmd image], so
that it supports files containing raster images in the

[vset FORMATFULLNAME] ([vset FORMATNAME]). More specifically

[package img::[vset FORMATNAME]] extends [package Tk]'s
[uri https://www.tcl.tk/man/tcl9.0/TkCmd/photo.html photo] image type.

[para]

The name of the new format handler is [const [vset FORMATNAME]].
