#!/bin/bash

# Generate configure files for base and format handler.
autoconf ; rm -r autom4te.cache ; rm configure~
pushd base   ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd bmp    ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd dted   ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd flir   ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd gif    ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd ico    ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd jpeg   ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd pcx    ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd pixmap ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd png    ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd ppm    ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd ps     ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd raw    ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd sgi    ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd sun    ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd tga    ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd tiff   ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd window ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd xbm    ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd xpm    ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd

# Generate configure files for local support libraries.
pushd libjpeg; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd libpng ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd libtiff; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd
pushd zlib   ; autoconf ; rm -r autom4te.cache ; rm configure~ ; popd

# Generate stubs files for base and support libraries.
pushd base    ; tclsh ../tools/genStubs.tcl . tkimg.decls   ; popd
pushd libjpeg ; tclsh ../tools/genStubs.tcl . jpegtcl.decls ; popd
pushd libpng  ; tclsh ../tools/genStubs.tcl . pngtcl.decls  ; popd
pushd libtiff ; tclsh ../tools/genStubs.tcl . tifftcl.decls ; popd
pushd zlib    ; tclsh ../tools/genStubs.tcl . zlibtcl.decls ; popd
