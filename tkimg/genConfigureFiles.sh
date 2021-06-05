#!/bin/sh
autoconf ; rm -r autom4te.cache
pushd base   ; autoconf ; rm -r autom4te.cache ; popd
pushd bmp    ; autoconf ; rm -r autom4te.cache ; popd
pushd dted   ; autoconf ; rm -r autom4te.cache ; popd
pushd flir   ; autoconf ; rm -r autom4te.cache ; popd
pushd gif    ; autoconf ; rm -r autom4te.cache ; popd
pushd ico    ; autoconf ; rm -r autom4te.cache ; popd
pushd jpeg   ; autoconf ; rm -r autom4te.cache ; popd
pushd libjpeg; autoconf ; rm -r autom4te.cache ; popd
pushd libpng ; autoconf ; rm -r autom4te.cache ; popd
pushd libtiff; autoconf ; rm -r autom4te.cache ; popd
pushd pcx    ; autoconf ; rm -r autom4te.cache ; popd
pushd pixmap ; autoconf ; rm -r autom4te.cache ; popd
pushd png    ; autoconf ; rm -r autom4te.cache ; popd
pushd ppm    ; autoconf ; rm -r autom4te.cache ; popd
pushd ps     ; autoconf ; rm -r autom4te.cache ; popd
pushd raw    ; autoconf ; rm -r autom4te.cache ; popd
pushd sgi    ; autoconf ; rm -r autom4te.cache ; popd
pushd sun    ; autoconf ; rm -r autom4te.cache ; popd
pushd tga    ; autoconf ; rm -r autom4te.cache ; popd
pushd tiff   ; autoconf ; rm -r autom4te.cache ; popd
pushd window ; autoconf ; rm -r autom4te.cache ; popd
pushd xbm    ; autoconf ; rm -r autom4te.cache ; popd
pushd xpm    ; autoconf ; rm -r autom4te.cache ; popd
pushd zlib   ; autoconf ; rm -r autom4te.cache ; popd
