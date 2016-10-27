doit () {
    echo "Generating $6 $7 $8 $9 in ${10}"
    xpaset -p ds9 regions format $1
    xpaset -p ds9 regions system $2
    xpaset -p ds9 regions sky $3
    xpaset -p ds9 regions skyformat $4
    xpaset -p ds9 regions load $5

    xpaset -p ds9 regions format $6
    xpaset -p ds9 regions system $7
    xpaset -p ds9 regions sky $8
    xpaset -p ds9 regions skyformat $9
    xpaset -p ds9 regions save ${10}

    xpaset -p ds9 regions deleteall
}

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

echo "Loading Data..."
xpaset -p ds9 file data/img.fits
echo "DONE"

if [ "$1" = "ds9" ]; then
echo
echo "DS9 Format..."
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 physical fk5 degrees regions/ds9.physical.reg 
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs fk4 degrees regions/ds9.fk4.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs fk4 sexagesimal regions/ds9.fk4.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs fk5 degrees regions/ds9.fk5.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs fk5 sexagesimal regions/ds9.fk5.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs icrs degrees regions/ds9.icrs.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs icrs sexagesimal regions/ds9.icrs.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs galactic degrees regions/ds9.galactic.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs galactic sexagesimal regions/ds9.galactic.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs ecliptic degrees regions/ds9.ecliptic.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs ecliptic sexagesimal regions/ds9.ecliptic.hms.reg

echo
echo "XML Format..."
doit ds9 image fk5 degrees regions/ds9.image.reg xml image fk5 degrees regions/xml.image.reg 
doit ds9 image fk5 degrees regions/ds9.image.reg xml physical fk5 degrees regions/xml.physical.reg 
doit ds9 image fk5 degrees regions/ds9.image.reg xml wcs fk4 degrees regions/xml.fk4.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xml wcs fk4 sexagesimal regions/xml.fk4.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xml wcs fk5 degrees regions/xml.fk5.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xml wcs fk5 sexagesimal regions/xml.fk5.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xml wcs icrs degrees regions/xml.icrs.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xml wcs icrs sexagesimal regions/xml.icrs.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xml wcs galactic degrees regions/xml.galactic.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xml wcs galactic sexagesimal regions/xml.galactic.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xml wcs ecliptic degrees regions/xml.ecliptic.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xml wcs ecliptic sexagesimal regions/xml.ecliptic.hms.reg
fi

if [ "$1" = "ds9strip" ]; then
echo
xpaset -p ds9 regions strip yes

echo "DS9 strip Format..."
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 image fk5 degrees regions/ds9.image.strip.reg 
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 physical fk5 degrees regions/ds9.physical.strip.reg 
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs fk4 degrees regions/ds9.fk4.strip.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs fk4 sexagesimal regions/ds9.fk4.hms.strip.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs fk5 degrees regions/ds9.fk5.strip.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs fk5 sexagesimal regions/ds9.fk5.hms.strip.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs icrs degrees regions/ds9.icrs.strip.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs icrs sexagesimal regions/ds9.icrs.hms.strip.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs galactic degrees regions/ds9.galactic.strip.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs galactic sexagesimal regions/ds9.galactic.hms.strip.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs ecliptic degrees regions/ds9.ecliptic.strip.reg
doit ds9 image fk5 degrees regions/ds9.image.reg ds9 wcs ecliptic sexagesimal regions/ds9.ecliptic.hms.strip.reg

xpaset -p ds9 regions strip yes
fi

if [ "$1" = "ciao" ]; then
echo
echo "DS9 Format..."
doit ds9 image fk5 degrees regions/ds9.image.reg ciao physical fk5 degrees regions/ciao.physical.reg 
doit ds9 image fk5 degrees regions/ds9.image.reg ciao wcs fk5 sexagesimal regions/ciao.fk5.reg 
fi

if [ "$1" = "saotng" ]; then
echo
echo "SAOtng Format..."
doit ds9 image fk5 degrees regions/ds9.image.reg saotng image fk5 degrees regions/saotng.image.reg
doit ds9 image fk5 degrees regions/ds9.image.reg saotng wcs fk4 degrees regions/saotng.fk4.reg
doit ds9 image fk5 degrees regions/ds9.image.reg saotng wcs fk4 sexagesimal regions/saotng.fk4.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg saotng wcs fk5 degrees regions/saotng.fk5.reg
doit ds9 image fk5 degrees regions/ds9.image.reg saotng wcs fk5 sexagesimal regions/saotng.fk5.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg saotng wcs icrs degrees regions/saotng.icrs.reg
doit ds9 image fk5 degrees regions/ds9.image.reg saotng wcs icrs sexagesimal regions/saotng.icrs.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg saotng wcs galactic degrees regions/saotng.galactic.reg
doit ds9 image fk5 degrees regions/ds9.image.reg saotng wcs galactic sexagesimal regions/saotng.galactic.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg saotng wcs ecliptic degrees regions/saotng.ecliptic.reg
doit ds9 image fk5 degrees regions/ds9.image.reg saotng wcs ecliptic sexagesimal regions/saotng.ecliptic.hms.reg
fi

if [ "$1" = "pros" ]; then
echo
echo "IRAF Pros Format..."
doit ds9 image fk5 degrees regions/ds9.image.reg pros image fk5 degrees regions/pros.image.reg
doit ds9 image fk5 degrees regions/ds9.image.reg pros physical fk5 degrees regions/pros.physical.reg
doit ds9 image fk5 degrees regions/ds9.image.reg pros wcs fk4 degrees regions/pros.fk4.reg
doit ds9 image fk5 degrees regions/ds9.image.reg pros wcs fk4 sexagesimal regions/pros.fk4.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg pros wcs fk5 degrees regions/pros.fk5.reg
doit ds9 image fk5 degrees regions/ds9.image.reg pros wcs fk5 sexagesimal regions/pros.fk5.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg pros wcs galactic degrees regions/pros.galactic.reg
doit ds9 image fk5 degrees regions/ds9.image.reg pros wcs galactic sexagesimal regions/pros.galactic.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg pros wcs ecliptic degrees regions/pros.ecliptic.reg
doit ds9 image fk5 degrees regions/ds9.image.reg pros wcs ecliptic sexagesimal regions/pros.ecliptic.hms.reg
fi

if [ "$1" = "xy" ]; then
echo
echo "X Y Format..."
doit ds9 image fk5 degrees regions/ds9.image.reg xy image fk5 degrees regions/xy.image.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xy physical fk5 degrees regions/xy.physical.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xy wcs fk4 degrees regions/xy.fk4.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xy wcs fk4 sexagesimal regions/xy.fk4.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xy wcs fk5 degrees regions/xy.fk5.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xy wcs fk5 sexagesimal regions/xy.fk5.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xy wcs icrs degrees regions/xy.icrs.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xy wcs icrs sexagesimal regions/xy.icrs.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xy wcs galactic degrees regions/xy.galactic.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xy wcs galactic sexagesimal regions/xy.galactic.hms.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xy wcs ecliptic degrees regions/xy.ecliptic.reg
doit ds9 image fk5 degrees regions/ds9.image.reg xy wcs ecliptic sexagesimal regions/xy.ecliptic.hms.reg
fi

if [ "$1" = "mosaic" ]; then
echo
echo "Loading Mosaic Data..."
xpaset -p ds9 frame clear
xpaset -p ds9 file mosaicimage mosaic/mosaicimage.fits
echo "DONE"

echo
echo "DS9 Mosaic Format..."
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg ds9 physical fk5 degrees regions/ds9.mosaic.physical.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg ds9 wcs fk4 degrees regions/ds9.mosaic.fk4.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg ds9 wcs fk4 sexagesimal regions/ds9.mosaic.fk4.hms.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg ds9 wcs fk5 degrees regions/ds9.mosaic.fk5.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg ds9 wcs fk5 sexagesimal regions/ds9.mosaic.fk5.hms.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg ds9 wcs icrs degrees regions/ds9.mosaic.icrs.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg ds9 wcs icrs sexagesimal regions/ds9.mosaic.icrs.hms.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg ds9 wcs galactic degrees regions/ds9.mosaic.galactic.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg ds9 wcs galactic sexagesimal regions/ds9.mosaic.galactic.hms.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg ds9 wcs ecliptic degrees regions/ds9.mosaic.ecliptic.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg ds9 wcs ecliptic sexagesimal regions/ds9.mosaic.ecliptic.hms.reg

echo
echo "XML Mosaic Format..."
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg xml image fk5 degrees regions/xml.mosaic.image.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg xml physical fk5 degrees regions/xml.mosaic.physical.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg xml wcs fk4 degrees regions/xml.mosaic.fk4.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg xml wcs fk4 sexagesimal regions/xml.mosaic.fk4.hms.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg xml wcs fk5 degrees regions/xml.mosaic.fk5.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg xml wcs fk5 sexagesimal regions/xml.mosaic.fk5.hms.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg xml wcs icrs degrees regions/xml.mosaic.icrs.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg xml wcs icrs sexagesimal regions/xml.mosaic.icrs.hms.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg xml wcs galactic degrees regions/xml.mosaic.galactic.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg xml wcs galactic sexagesimal regions/xml.mosaic.galactic.hms.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg xml wcs ecliptic degrees regions/xml.mosaic.ecliptic.reg
doit ds9 image fk5 degrees regions/ds9.mosaic.image.reg xml wcs ecliptic sexagesimal regions/xml.mosaic.ecliptic.hms.reg
fi

if [ "$1" = "linear" ]; then
echo
echo "Loading Linear Data..."
xpaset -p ds9 scale minmax
xpaset -p ds9 frame clear
xpaset -p ds9 file mosaicimage mosaic/ds9_8amp_2x2.fits
echo "DONE"

echo
echo "DS9 Linear Format..."
doit ds9 wcs fk5 degrees regions/ds9.linear.wcs.reg ds9 wcsa fk5 degrees regions/ds9.linear.wcsa.reg
doit ds9 wcs fk5 degrees regions/ds9.linear.wcs.reg ds9 wcsc fk5 degrees regions/ds9.linear.wcsc.reg
doit ds9 wcs fk5 degrees regions/ds9.linear.wcs.reg ds9 wcsd fk5 degrees regions/ds9.linear.wcsd.reg
doit ds9 wcs fk5 degrees regions/ds9.linear.wcs.reg ds9 wcsi fk5 degrees regions/ds9.linear.wcsi.reg
doit ds9 wcs fk5 degrees regions/ds9.linear.wcs.reg ds9 wcsp fk5 degrees regions/ds9.linear.wcsp.reg
fi

xpaset -p ds9 quit
