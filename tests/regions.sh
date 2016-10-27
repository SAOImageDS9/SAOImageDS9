testit () {
    echo "Test $1 $2 $3 $4 $5"
    xpaset -p ds9 regions format $1
    xpaset -p ds9 regions system $2
    xpaset -p ds9 regions sky $3
    xpaset -p ds9 regions skyformat $4
    xpaset -p ds9 regions file $5
    xpaset -p ds9 regions save ${5}.out
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 regions deleteall

    o=`diff $5 ${5}.out`
    if [ "$o" = "" ]
    then
	echo "PASSED"
    else
        echo "FAILED"
	echo "$o"
    fi
    rm -f ${5}.out
}

testit2 () {
    echo "Test $1 $2 $3 $4 $5 $6"
    xpaset -p ds9 regions format $1
    xpaset -p ds9 regions system $2
    xpaset -p ds9 regions sky $3
    xpaset -p ds9 regions skyformat $4
    xpaset -p ds9 regions file $5
    xpaset -p ds9 regions save ${5}.out
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 regions deleteall

    o=`diff $6 ${5}.out`
    if [ "$o" = "" ]
    then
	echo "PASSED"
    else
        echo "FAILED"
	echo "$o"
    fi
    rm -f ${5}.out
}

testit3 () {
    echo "Test $1 $2 $3 $4 $5"
    xpaset -p ds9 regions format $1
    xpaset -p ds9 regions system $2
    xpaset -p ds9 regions sky $3
    xpaset -p ds9 regions skyformat $4
    xpaset -p ds9 regions save foo.reg.out
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 regions deleteall

    o=`diff $5 foo.reg.out`
    if [ "$o" = "" ]
    then
	echo "PASSED"
    else
        echo "FAILED"
	echo "$o"
    fi
    rm -f foo.reg.out
}

# slow down?
slow=0
if [ "$1" = "slow" ]; then
    slow=1
    shift
fi

echo
echo "*** regions.sh ***"

echo "Starting DS9..."
if [ `xpaaccess ds9` = no ]; then
    ds9&

    i=1
    while [ "$i" -le 30 ]
    do
        sleep 2
        if [ `xpaaccess ds9` = yes ]
        then
	    break
        fi

        i=`expr $i + 1`
    done
fi

if [ "$1" = "ds9" -o  -z "$1" ]; then
echo
echo "Testing DS9 Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits

testit ds9 image fk5 degrees regions/ds9.image.reg
testit ds9 physical fk5 degrees regions/ds9.physical.reg
testit ds9 wcs fk4 degrees regions/ds9.fk4.reg
testit ds9 wcs fk4 sexagesimal regions/ds9.fk4.hms.reg
testit ds9 wcs fk5 degrees regions/ds9.fk5.reg
testit ds9 wcs fk5 sexagesimal regions/ds9.fk5.hms.reg
testit ds9 wcs icrs degrees regions/ds9.icrs.reg
testit ds9 wcs icrs sexagesimal regions/ds9.icrs.hms.reg
testit ds9 wcs galactic degrees regions/ds9.galactic.reg
testit ds9 wcs galactic sexagesimal regions/ds9.galactic.hms.reg
testit ds9 wcs ecliptic degrees regions/ds9.ecliptic.reg
testit ds9 wcs ecliptic sexagesimal regions/ds9.ecliptic.hms.reg
fi

if [ "$1" = "color" -o  -z "$1" ]; then
echo
echo "Testing DS9 Color..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits

testit ds9 wcs fk5 sexagesimal regions/ds9.color.reg
fi

if [ "$1" = "comment" -o  -z "$1" ]; then
echo
echo "Testing DS9 Format Comments..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits

xpaset -p ds9 regions format ds9
xpaset -p ds9 regions file regions/ds9.comment.reg
xpaset -p ds9 regions deleteall
echo "PASSED"
fi

if [ "$1" = "strip" -o  -z "$1" ]; then
echo
echo "Testing DS9 strip Regions Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits
xpaset -p ds9 regions strip yes

testit2 ds9 image fk5 degrees regions/ds9.image.reg regions/ds9.image.strip.reg
testit2 ds9 physical fk5 degrees regions/ds9.physical.reg regions/ds9.physical.strip.reg
testit2 ds9 wcs fk4 degrees regions/ds9.fk4.reg regions/ds9.fk4.strip.reg
testit2 ds9 wcs fk4 sexagesimal regions/ds9.fk4.hms.reg regions/ds9.fk4.hms.strip.reg
testit2 ds9 wcs fk5 degrees regions/ds9.fk5.reg regions/ds9.fk5.strip.reg
testit2 ds9 wcs fk5 sexagesimal regions/ds9.fk5.hms.reg regions/ds9.fk5.hms.strip.reg
testit2 ds9 wcs icrs degrees regions/ds9.icrs.reg regions/ds9.icrs.strip.reg
testit2 ds9 wcs icrs sexagesimal regions/ds9.icrs.hms.reg regions/ds9.icrs.hms.strip.reg
testit2 ds9 wcs galactic degrees regions/ds9.galactic.reg regions/ds9.galactic.strip.reg
testit2 ds9 wcs galactic sexagesimal regions/ds9.galactic.hms.reg regions/ds9.galactic.hms.strip.reg
testit2 ds9 wcs ecliptic degrees regions/ds9.ecliptic.reg regions/ds9.ecliptic.strip.reg
testit2 ds9 wcs ecliptic sexagesimal regions/ds9.ecliptic.hms.reg regions/ds9.ecliptic.hms.strip.reg

xpaset -p ds9 regions strip no
fi

if [ "$1" = "composite" -o  -z "$1" ]; then
echo
echo "Testing DS9 Composite Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits

testit ds9 wcs fk5 degrees regions/ds9.composite.reg
fi

if [ "$1" = "mosaic" -o  -z "$1" ]; then
echo
echo "Testing DS9 Mosaic Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 mosaicimage mosaic/mosaicimage.fits
xpaset -p ds9 zoom .5

testit ds9 image fk5 degrees regions/ds9.mosaic.image.reg
testit ds9 physical fk5 degrees regions/ds9.mosaic.physical.reg
testit ds9 wcs fk4 degrees regions/ds9.mosaic.fk4.reg
testit ds9 wcs fk4 sexagesimal regions/ds9.mosaic.fk4.hms.reg
testit ds9 wcs fk5 degrees regions/ds9.mosaic.fk5.reg
testit ds9 wcs fk5 sexagesimal regions/ds9.mosaic.fk5.hms.reg
testit ds9 wcs icrs degrees regions/ds9.mosaic.icrs.reg
testit ds9 wcs icrs sexagesimal regions/ds9.mosaic.icrs.hms.reg
testit ds9 wcs galactic degrees regions/ds9.mosaic.galactic.reg
testit ds9 wcs galactic sexagesimal regions/ds9.mosaic.galactic.hms.reg
testit ds9 wcs ecliptic degrees regions/ds9.mosaic.ecliptic.reg
testit ds9 wcs ecliptic sexagesimal regions/ds9.mosaic.ecliptic.hms.reg
fi

if [ "$1" = "linear" -o  -z "$1" ]; then
echo
echo "Testing DS9 Linear Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits
xpaset -p ds9 scale minmax
xpaset -p ds9 frame clear
xpaset -p ds9 mosaicimage mosaic/ds9_8amp_2x2.fits
xpaset -p ds9 zoom .5

testit ds9 wcs fk5 degrees regions/ds9.linear.wcs.reg
testit ds9 wcsa fk5 degrees regions/ds9.linear.wcsa.reg
testit ds9 wcsc fk5 degrees regions/ds9.linear.wcsc.reg
testit ds9 wcsd fk5 degrees regions/ds9.linear.wcsd.reg
testit ds9 wcsi fk5 degrees regions/ds9.linear.wcsi.reg
testit ds9 wcsp fk5 degrees regions/ds9.linear.wcsp.reg
fi

if [ "$1" = "xml" -o  -z "$1" ]; then
echo
echo "Testing XML Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits

testit xml image fk5 degrees regions/xml.image.reg
testit xml physical fk5 degrees regions/xml.physical.reg
testit xml wcs fk4 degrees regions/xml.fk4.reg
testit xml wcs fk4 sexagesimal regions/xml.fk4.hms.reg
testit xml wcs fk5 degrees regions/xml.fk5.reg
testit xml wcs fk5 sexagesimal regions/xml.fk5.hms.reg
testit xml wcs icrs degrees regions/xml.icrs.reg
testit xml wcs icrs sexagesimal regions/xml.icrs.hms.reg
testit xml wcs galactic degrees regions/xml.galactic.reg
testit xml wcs galactic sexagesimal regions/xml.galactic.hms.reg
testit xml wcs ecliptic degrees regions/xml.ecliptic.reg
testit xml wcs ecliptic sexagesimal regions/xml.ecliptic.hms.reg
fi

if [ "$1" = "xmlmosaic" -o  -z "$1" ]; then
echo
echo "Testing XML Mosaic Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 mosaicimage mosaic/mosaicimage.fits
xpaset -p ds9 zoom .5

testit xml image fk5 degrees regions/xml.mosaic.image.reg
testit xml physical fk5 degrees regions/xml.mosaic.physical.reg
testit xml wcs fk4 degrees regions/xml.mosaic.fk4.reg
testit xml wcs fk4 sexagesimal regions/xml.mosaic.fk4.hms.reg
testit xml wcs fk5 degrees regions/xml.mosaic.fk5.reg
testit xml wcs fk5 sexagesimal regions/xml.mosaic.fk5.hms.reg
testit xml wcs icrs degrees regions/xml.mosaic.icrs.reg
testit xml wcs icrs sexagesimal regions/xml.mosaic.icrs.hms.reg
testit xml wcs galactic degrees regions/xml.mosaic.galactic.reg
testit xml wcs galactic sexagesimal regions/xml.mosaic.galactic.hms.reg
testit xml wcs ecliptic degrees regions/xml.mosaic.ecliptic.reg
testit xml wcs ecliptic sexagesimal regions/xml.mosaic.ecliptic.hms.reg
fi

if [ "$1" = "ciao" -o  -z "$1" ]; then
echo
echo "Testing CIAO Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits

testit ciao physical fk5 degrees regions/ciao.physical.reg
testit ciao wcs fk5 sexagesimal regions/ciao.fk5.reg
fi

if [ "$1" = "saotng" -o  -z "$1" ]; then
echo
echo "Testing SAOtng Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits

testit saotng image fk5 degrees regions/saotng.image.reg
testit saotng wcs fk4 degrees regions/saotng.fk4.reg
testit saotng wcs fk4 sexagesimal regions/saotng.fk4.hms.reg
testit saotng wcs fk5 degrees regions/saotng.fk5.reg
testit saotng wcs fk5 sexagesimal regions/saotng.fk5.hms.reg
testit saotng wcs icrs degrees regions/saotng.icrs.reg
testit saotng wcs icrs sexagesimal regions/saotng.icrs.hms.reg
testit saotng wcs galactic degrees regions/saotng.galactic.reg
testit saotng wcs galactic sexagesimal regions/saotng.galactic.hms.reg
testit saotng wcs ecliptic degrees regions/saotng.ecliptic.reg
testit saotng wcs ecliptic sexagesimal regions/saotng.ecliptic.hms.reg
fi

if [ "$1" = "pros" -o  -z "$1" ]; then
echo
echo "Testing IRAF Pros Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits

testit pros image fk5 degrees regions/pros.image.reg
testit pros physical fk5 degrees regions/pros.physical.reg
testit pros wcs fk4 degrees regions/pros.fk4.reg
testit pros wcs fk4 sexagesimal regions/pros.fk4.hms.reg
testit pros wcs fk5 degrees regions/pros.fk5.reg
testit pros wcs fk5 sexagesimal regions/pros.fk5.hms.reg
testit pros wcs galactic degrees regions/pros.galactic.reg
testit pros wcs galactic sexagesimal regions/pros.galactic.hms.reg
testit pros wcs ecliptic degrees regions/pros.ecliptic.reg
testit pros wcs ecliptic sexagesimal regions/pros.ecliptic.hms.reg
fi

if [ "$1" = "saoimage" -o  -z "$1" ]; then
echo
echo "Testing SAOimage Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits

testit saoimage image fk5 degrees regions/saoimage.reg
fi

if [ "$1" = "xy" -o  -z "$1" ]; then
echo
echo "Testing X Y Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits

testit xy image fk5 degrees regions/xy.image.reg
testit xy physical fk5 degrees regions/xy.physical.reg
testit xy wcs fk4 degrees regions/xy.fk4.reg
testit xy wcs fk4 sexagesimal regions/xy.fk4.hms.reg
testit xy wcs fk5 degrees regions/xy.fk5.reg
testit xy wcs fk5 sexagesimal regions/xy.fk5.hms.reg
testit xy wcs icrs degrees regions/xy.icrs.reg
testit xy wcs icrs sexagesimal regions/xy.icrs.hms.reg
testit xy wcs galactic degrees regions/xy.galactic.reg
testit xy wcs galactic sexagesimal regions/xy.galactic.hms.reg
testit xy wcs ecliptic degrees regions/xy.ecliptic.reg
testit xy wcs ecliptic sexagesimal regions/xy.ecliptic.hms.reg
fi

if [ "$1" = "fits" -o  -z "$1" ]; then
echo
echo "Testing FITS Regions Format..."
xpaset -p ds9 frame clear
xpaset -p ds9 fits data/img.fits
testit2 ds9 physical fk5 degrees regions/ds9.reg.fits regions/ds9.fits.reg

xpaset -p ds9 frame clear
xpaset -p ds9 fits regions/ciao.fits
testit3 ciao physical fk5 degrees regions/ciao.fits.reg
fi

if [ -z "$1" ]; then
xpaset -p ds9 quit
fi
