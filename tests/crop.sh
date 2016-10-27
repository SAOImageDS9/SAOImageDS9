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
echo "*** crop.sh ***"

echo "..fits[xmin:xmax,ymin:ymax]"
ds9 -zscale data/img.fits[100:300,100:300] &
KillIt

echo "..fits[*,ymin:ymax]"
ds9 -zscale data/img.fits[*,100:300] &
KillIt

echo "..fits[xmin:xmax,*]"
ds9 -zscale data/img.fits[100:300,*] &
KillIt

echo "..fits[xdim@xcen,ydim@ycen]"
ds9 -zscale data/img.fits[256@400,256@400] &
KillIt

echo "..fits[dim@xcen@ycen]"
ds9 -zscale data/img.fits[256@400@400] &
KillIt

echo "..fits[xmin:xmax,ymin:ymax,zmin:zmax]"
ds9 -zscale -3d data/3d.fits[100:300,100:300,25:75] -3d vp 45 30&
KillIt

echo "..fits[*,*,zmin:zmax]"
ds9 -zscale -3d data/3d.fits[*,*,25:75] -3d vp 45 30&
KillIt

echo "..fits[xdim@xcen,ydim@ycen,zdim@zcen]"
ds9 -zscale -3d data/3d.fits[100@150,100@150,25@50] -3d vp 45 30&
KillIt

echo "..fits[dim@xcen@ycen@zcen]"
ds9 -zscale -3d data/3d.fits[25@150@150@50] -3d vp 45 30&
KillIt

echo "DONE"
