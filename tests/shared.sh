#linux commands
#ipcs -m
#ipcs -ml
#ipcrm shm <shmid>
#echo '67108864' > /proc/sys/kernel/shmmax

KillIt () {
    i=1
    while [ "$i" -le 15 ]; do
      sleep 1
      if [ `xpaaccess ds9` = yes ]; then
	  sleep 1
	  xpaset -p ds9 quit
	  break
      fi
      
      i=`expr $i + 1`
    done
}

DoCmd () {
    echo "$1"
    shmid=`shmload -q $2`
    ds9 -scale $5 -scale mode $6 -shm $3 shmid $shmid $4 &
    KillIt
    ipcrm -m $shmid
}

DoSCmd () {
    echo "$1"
    shmid1=`shmload -q $2`
    shmid2=`shmload -q $3`
    ds9  -scale $6 -scale mode $7 -shm $4 shmid $shmid1 $shmid2 $5 &
    KillIt
    ipcrm -m $shmid1
    ipcrm -m $shmid2
}

DoXPA () {
    echo "$1"
    shmid=`shmload -q $2`
    xpaset -p ds9 scale $5
    xpaset -p ds9 scale mode $6
    xpaset -p ds9 shm $3 shmid $shmid $4
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame clear
    ipcrm -m $shmid
}

DoSXPA () {
    echo "$1"
    shmid1=`shmload -q $2`
    shmid2=`shmload -q $3`
    xpaset -p ds9 scale $6
    xpaset -p ds9 scale mode $7
    xpaset -p ds9 shm $4 shmid $shmid1 $shmid2 $5
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame clear
    ipcrm -m $shmid1
    ipcrm -m $shmid2
}

# slow down?
slow=0
if [ "$1" = "slow" ]; then
    slow=1
    shift
fi

echo
echo "*** shared.sh ***"

echo "Current shm limits"
#ipcs -lm

if [ "$1" = "command" -o  -z "$1" ]; then
echo "Command Line Shm Tests"

# basics
DoCmd "..fits" data/img.fits fits foo linear zscale
DoSCmd "..sfits" sfits/float.hdr sfits/float.arr sfits foo linear zscale
DoCmd "..table" fits/table.fits "" foo log minmax
DoCmd "..table filter" fits/table.fits "" 'foo[bin=rawx,rawy]' log minmax

# mosaic
DoCmd "..mosaic image iraf" mosaic/mosaicimage.fits "mosaicimage iraf" foo linear zscale
DoCmd "..mosaic image iraf datacube" mosaic/naxis4.fits "mosaicimage iraf" foo linear zscale
DoCmd "..mosaic image wcs" mosaic/mosaicimage.fits "mosaicimage wcs" foo linear zscale
DoCmd "..mosaic image wcsp" mosaic/ds9_8amp_2x2.fits "mosaicimage wcsp" foo linear minmax
DoCmd "..mosaic image wfpc2" mosaic/hst.fits "mosaicimage wfpc2" foo linear zscale
DoCmd "..mosaic iraf" mosaic/mosaicimage.fits "mosaic iraf" foo linear zscale
DoCmd "..mosaic iraf datacube" mosaic/naxis4.fits "mosaic iraf" foo linear zscale
DoCmd "..mosaic wcs" mosaic/mosaicimage.fits "mosaic wcs" foo linear zscale
DoCmd "..mosaic wcsp" mosaic/ds9_8amp_2x2.fits "mosaic wcsp" foo linear minmax
#DoSCmd "..mosaic wcs sfits" sfits/float.hdr sfits/float.arr "smosaic wcs" foo linear zscale

# backward compatibility
DoCmd "..mosaic image iraf(bc)" mosaic/mosaicimage.fits mosaicimageiraf foo linear zscale
DoCmd "..mosaic image wcs(bc)" mosaic/mosaicimage.fits mosaicimagewcs foo linear zscale
DoCmd "..mosaic image wfpc2(bc)" mosaic/hst.fits mosaicimagewfpc2 foo linear zscale
DoCmd "..mosaic iraf(bc)" mosaic/mosaicimage.fits mosaiciraf foo linear zscale
DoCmd "..mosaic wcs(bc)" mosaic/mosaicimage.fits mosaicwcs foo linear zscale

# array
DoCmd "..array" array/float_big.arr array 'foo[dim=256,bitpix=-32,arch=big]' linear minmax
DoCmd "..array cube" rgbarray/float_big.rgb array 'foo[dim=256,zdim=3,bitpix=-32,arch=big]' linear minmax

# rgb
DoCmd "..rgbcube" rgbcube/float.fits rgbcube foo linear minmax
DoSCmd "..rgbcube sfits" srgbcube/float.hdr srgbcube/float.arr srgbcube foo linear minmax
DoCmd "..rgbimage" mecube/float.fits rgbimage foo linear minmax

echo "PASSED"
fi

if [ "$1" = "xpa" -o  -z "$1" ]; then
echo "XPA Shm Tests"

echo "Starting DS9..."
if [ `xpaaccess ds9` = no ]
then
    ds9&
fi

i=1
while [ "$i" -le 15 ]
do
    sleep 1
    if [ `xpaaccess ds9` = yes ]
    then
	break
    fi

    i=`expr $i + 1`
done

# basics
DoXPA "..fits" data/img.fits fits foo linear zscale 
DoSXPA "..split fits" sfits/float.hdr sfits/float.arr sfits foo linear zscale
DoXPA "..table" fits/table.fits "" foo log minmax
DoXPA "..table filter" fits/table.fits "" 'foo[bin=rawx,rawy]' log minmax

# mosaics
DoXPA "..mosaic image iraf" mosaic/mosaicimage.fits "mosaicimage iraf" foo linear zscale
DoXPA "..mosaic image iraf datacube" mosaic/naxis4.fits "mosaicimage iraf" foo linear zscale
DoXPA "..mosaic image wcs" mosaic/mosaicimage.fits "mosaicimage wcs" foo linear zscale
DoXPA "..mosaic image wcsp" mosaic/ds9_8amp_2x2.fits "mosaicimage wcs" foo linear minmax
DoXPA "..mosaic image wfpc2" mosaic/hst.fits "mosaicimage wfpc2" foo linear zscale
DoXPA "..mosaic iraf" mosaic/mosaicimage.fits "mosaic iraf" foo linear zscale
DoXPA "..mosaic iraf datacube" mosaic/naxis4.fits "mosaic iraf" foo linear zscale
DoXPA "..mosaic wcs" mosaic/mosaicimage.fits "mosaic wcs" foo linear zscale
DoXPA "..mosaic wcsp" mosaic/ds9_8amp_2x2.fits "mosaicimage wcs" foo linear minmax
#DoSXPA "..sfits mosaic wcs" sfits/float.hdr sfits/float.arr "smosaic wcs" foo linear zscale

# backward compatibility
DoXPA "..mosaic image iraf(bc)" mosaic/mosaicimage.fits mosaicimageiraf foo linear zscale
DoXPA "..mosaic image wcs(bc)" mosaic/mosaicimage.fits mosaicimagewcs foo linear zscale
DoXPA "..mosaic image wfpc2(bc)" mosaic/hst.fits mosaicimagewfpc2 foo linear zscale
DoXPA "..mosaic iraf(bc)" mosaic/mosaicimage.fits mosaiciraf foo linear zscale
DoXPA "..mosaic wcs(bc)" mosaic/mosaicimage.fits mosaicwcs foo linear zscale

# array
DoXPA "..array" array/float_big.arr array 'foo[dim=256,bitpix=-32,arch=big]' linear minmax
DoXPA "..array cube" rgbarray/float_big.rgb array 'foo[dim=256,zdim=3,bitpix=-32,arch=big]' linear minmax

# rgb
xpaset -p ds9 scale linear
xpaset -p ds9 scale mode minmax
xpaset -p ds9 rgb
DoXPA "..rgbcube" rgbcube/float.fits rgbcube foo linear minmax
DoSXPA "..rgbcube sfits" srgbcube/float.hdr srgbcube/float.arr srgbcube foo linear minmax
DoXPA "..rgbimage" mecube/float.fits rgbimage foo linear minmax
xpaset -p ds9 frame delete

xpaset -p ds9 quit
echo "PASSED"
fi

echo "DONE"



