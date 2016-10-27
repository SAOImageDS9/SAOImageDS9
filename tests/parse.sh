KillIt () {
    i=1
    while [ "$i" -le 15 ]; do
      sleep 1
      if [ `xpaaccess ds9` = yes ]; then
	  if [ $slow = "1" ]; then
	      sleep 1
	  fi
	  xpaset -p ds9 quit
	  break
      fi
      
      i=`expr $i + 1`
    done
}

StartDS9 () {
    if [ `xpaaccess ds9` = no ]; then
	ds9&

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
}

# slow down?
slow=0
if [ "$1" = "slow" ]; then
    slow=1
    shift
fi

echo
echo "*** parse.sh ***"

echo ".. base"
ds9 -log fits/table.fits &
KillIt

echo ".. [2]"
ds9 -log fits/table.fits[2] &
KillIt

echo ".. [STDEVT]"
ds9 -log fits/table.fits[STDEVT] &
KillIt

echo ".. [xmin:xmax,ymin:ymax]"
ds9 -zscale data/img.fits[100:300,100:300] &
KillIt

echo ".. [xmin:xmax,*]"
ds9 -zscale data/img.fits[100:300,*] &
KillIt

echo ".. [dim@xcen@ycen]"
ds9 -zscale data/img.fits[256@400@400] &
KillIt

echo ".. [bin=rawx,rawy]"
ds9 -log fits/table.fits[bin=rawx,rawy] &
KillIt

echo ".. [STDEVT][xmin:xmax,ymin:ymax]"
ds9 -log fits/table.fits[STDEVT][100:300,100:300] &
KillIt

echo ".. [STDEVT][bin=rawx,rawy]"
ds9 -log fits/table.fits[STDEVT][bin=rawx,rawy] &
KillIt

echo ".. [STDEVT][bin=(rawx,rawy)]"
ds9 -log 'fits/table.fits[STDEVT][bin=(rawx,rawy)]' &
KillIt

echo ".. [STDEVT][xmin:xmax,ymin:ymax][bin=rawx,rawy]"
ds9 -log fits/table.fits[STDEVT][100:300,100:300][bin=rawx,rawy] &
KillIt

echo ".. [2,xmin:xmax,ymin:ymax]"
ds9 -log fits/table.fits[2,100:300,100:300] &
KillIt

echo ".. [STDEVT,xmin:xmax,ymin:ymax]"
ds9 -log fits/table.fits[STDEVT,100:300,100:300] &
KillIt

echo ".. [STDEVT,bin=rawx,rawy]"
ds9 -log fits/table.fits[STDEVT,bin=rawx,rawy] &
KillIt

echo ".. [filter]"
ds9 -log 'fits/table.fits[pha<5]' &
KillIt

echo ".. [STDEVT][filter]"
ds9 -log 'fits/table.fits[STDEVT][pha<5]' &
KillIt

echo ".. array[xdim=256,ydim=256,bitpix=-32,arch=little,skip=0]"
ds9 -array array/float_little.arr[xdim=256,ydim=256,bitpix=-32,arch=little,skip=0] &
KillIt

echo ".. array[dim=256,bitpix=-32,endian=little]"
ds9 -array array/float_little.arr[dim=256,bitpix=-32,endian=little] &
KillIt

echo ".. array[dim=256,bitpix=-32,little]"
ds9 -array array/float_little.arr[dim=256,bitpix=-32,little] &
KillIt

echo ".. array[dim=256,bitpix=-32,little][100:200,100:200]"
ds9 -array array/float_little.arr[dim=256,bitpix=-32,little][100:200,100:200] &
KillIt

echo ".. array[array(r256l)]"
ds9 -array 'array/float_little.arr[array(r256l)]' &
KillIt

echo ".. array[array(r256.256:0l)]"
ds9 -array 'array/float_little.arr[array(r256.256:0l)]' &
KillIt

echo ".. hpx"
ds9 fits/wmap.fits &
KillIt

echo ".. hpx[100:200,100:200]"
ds9 fits/wmap.fits[100:200,100:200] &
KillIt

echo ".. hpx[system=equatorial,order=nested,layout=equatorial,col=1,quad=1]"
ds9 fits/wmap.fits[system=equatorial,order=nested,layout=equatorial,col=1,quad=1] &
KillIt

echo ".. nrrd[100:200,100:200]"
ds9 -nrrd nrrd/float_big_raw.nrrd[100:200,100:200] &
KillIt

echo ".. envi[100:200,100:200]"
ds9 -envi envi/float_big.hdr envi/float_big.bsq[100:200,100:200] &
KillIt

echo "DONE"
