echo
echo "*** wcs2.sh ***"

echo "Starting DS9..."
if [ `xpaaccess ds9` = no ]; then
    ds9 &

    i=1
    while [ "$i" -le 30 ]
	do
	sleep 2
	if [ `xpaaccess ds9` = yes ]; then
	    break
	fi

	i=`expr $i + 1`
    done
fi

testit () {
    echo "Testing $1"
    xpaset -p ds9 fits $1
    xpaset -p ds9 zoom $2
    xpaset -p ds9 wcs sky fk5
    xpaset -p ds9 align yes
    read
    xpaset -p ds9 wcs sky galactic
    read
    xpaset -p ds9 frame clear
}

# load default image
xpaset -p ds9 grid yes
xpaset -p ds9 wcs skyformat deg

echo "DSS"
testit wcs2/wcen.fits.gz 1

echo "SAO Plate"
testit wcs2/ac.fits 1
testit wcs2/crts_short.fits 1

echo "AST"
testit wcs2/ast.fits 1

echo "FITS WCS II TAN+PV2_1=0 PV2_2=0"
testit wcs2/a68.fits 1

echo "OLD SCAMP TAN+PVx_10"
testit wcs2/paucam_0_0_t7_0_science.fits 1

echo "WCSTools TAN+PVx_30"
testit wcs2/ngc6819.fits 1

echo "SCAMP TPV+PVx_10"
testit wcs2/DECam.fits 1

echo "SWARP ZPN+PV2_1 PV2_3 PV2_5"
testit wcs2/UKIDDS_K_3219_606_17_67_3.fits 1

echo "IRAF TNX"
testit wcs2/30s_01.fits 1

echo "IRAF ZPX"
testit wcs2/E5.3090.fits 1

echo "SIRTF TAN-SIP"
testit wcs2/sip.fits 2
testit wcs2/sst.fits 2
testit wcs2/mos8.fits 1

#echo "TAB"
#testit wcs2/sparse.fits

echo "WCSDEP"
testit wcs2/ngc6819.fits 1

echo "HPX"
testit wcs2/wmap.fits 1

echo "XPH"
testit wcs2/scuba2.fits 1

echo "GLON-ZEA"
testit wcs2/South_galactic.fits 1

echo "RA-CAR"
testit wcs2/CAR_model.fits 1
testit wcs2/car_01.fits 1

echo "GLON-CAR"
testit wcs2/GLM_00350+0115_mosaic_I4_cutout_14706.fits 1

echo "xxLN-xxLT"
testit wcs2/MolaTopographyPolar.miss.fits.fz 1

xpaset -p ds9 quit


