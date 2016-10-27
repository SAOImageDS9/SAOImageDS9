TEMP=/tmp

testfull () {
# $1 title
# $2 type
# $3 file
# $4 params
# $5 cmd
    echo -n "$1"
    echo -n "."
    ds9 $5 -$2 $3$4 -backup foo.bck -sleep 1 -exit
    echo -n "*"
    ds9 -restore foo.bck -sleep 1 -exit
    rm -rf foo.bck*
    echo -n "."
    cat $3 | ds9 $5 -$2 -$4 -backup foo.bck -sleep 1 -exit
    echo -n "*"
    ds9 -restore foo.bck -sleep 1 -exit
    rm -rf foo.bck*
    echo -n "."
    echo "PASSED"
}

testhalf () {
# $1 title
# $2 type
# $3 file
    echo -n "$1"
    echo -n "."
    ds9 -$2 ${3%.arr}.hdr $3 -backup foo.bck -sleep 1 -exit
    echo -n "*"
    ds9 -restore foo.bck -sleep 1 -exit
    rm -rf foo.bck*
    echo -n "."
    echo "PASSED"
}

echo
echo "*** backup.sh ***"
rm -rf foo.bck*

if [ "$TEMP" = "" ]; then
    echo "No TEMP directory defined."
    echo "Be sure to define TEMP first..."
    exit
fi

if [ "$1" = "fits" -o -z "$1" ]; then
    testfull fits fits fits/float.fits
    testfull "fits original" fits fits/float.fits " -source aux/pds9.tcl "
fi

if [ "$1" = "rgbcube" -o -z "$1" ]; then
    testfull rgbcube rgbcube rgbcube/float.fits
    testfull "rgbcube original" rgbcube rgbcube/float.fits " -source aux/pds9.tcl "
fi

if [ "$1" = "rgbimage" -o -z "$1" ]; then
    testfull rgbimage rgbimage mecube/float.fits
    testfull "rgbimage original" rgbimage mecube/float.fits " -source aux/pds9.tcl "
fi

if [ "$1" = "mecube" -o -z "$1" ]; then
    testfull mecube mecube mecube/float.fits
    testfull "mecube original" mecube mecube/float.fits " -source aux/pds9.tcl "
fi

if [ "$1" = "multiframe" -o -z "$1" ]; then
    testfull multiframe multiframe mecube/float.fits
    testfull "multiframe original" multiframe mecube/float.fits " -source aux/pds9.tcl "
fi

if [ "$1" = "mosaicimage" -o -z "$1" ]; then
    testfull mosaicimagewcs mosaicimagewcs mosaic/mosaicimage.fits
    testfull "mosaicimagewcs original" mosaicimagewcs mosaic/mosaicimage.fits " -source aux/pds9.tcl "
fi

if [ "$1" = "mosaic" -o -z "$1" ]; then
    testfull mosaicwcs mosaicwcs mosaic/mosaicimage.fits
    testfull "mosaicwcs original" mosaicwcs mosaic/mosaicimage.fits " -source aux/pds9.tcl "
fi

if [ "$1" = "sfits" -o -z "$1" ]; then
    testhalf sfits sfits sfits/float.arr
    testhalf "sfits original" sfits sfits/float.arr " -source aux/pds9.tcl "
fi

if [ "$1" = "srgbcube" -o -z "$1" ]; then
    testhalf srgbcube srgbcube srgbcube/float.arr
    testhalf "srgbcube original" srgbcube srgbcube/float.arr " -source aux/pds9.tcl "
fi

if [ "$1" = "array" -o -z "$1" ]; then
    testfull array array array/float_big.arr [dim=256,bitpix=-32,endian=big]
    testfull "array original" array array/float_big.arr [dim=256,bitpix=-32,endian=big] " -source aux/pds9.tcl "
fi

if [ "$1" = "rgbarray" -o -z "$1" ]; then
    testfull rgbarray rgbarray rgbarray/float_big.rgb [dim=256,bitpix=-32,endian=big] -rgb
    testfull "rgbarray original" rgbarray rgbarray/float_big.rgb [dim=256,bitpix=-32,endian=big]  " -rgb -source aux/pds9.tcl "
fi

if [ "$1" = "nrrd" -o -z "$1" ]; then
    testfull nrrd nrrd nrrd/float_big_raw.nrrd
    testfull "nrrd original" nrrd nrrd/float_big_raw.nrrd  " -source aux/pds9.tcl "
fi

if [ "$1" = "photo" -o -z "$1" ]; then
    testfull photo tiff photo/rose.tiff 
    testfull "photo original" tiff photo/rose.tiff " -source aux/pds9.tcl "
fi

if [ "$1" = "photorgb" -o -z "$1" ]; then
    testfull photorgb tiff photo/rose.tiff "" -rgb
    testfull "photorgb original" tiff photo/rose.tiff ""  " -rgb -source aux/pds9.tcl "
fi

# previous backups
if [ "$1" = "old" -o -z "$1" ]; then
    for f in backup/*.bck
    do
	echo "Testing $f"
	ds9 -restore $f
	echo "PASSED"
    done
fi

echo "DONE"
