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
}

# slow down?
slow=0
if [ "$1" = "slow" ]; then
    slow=1
    shift
fi

echo
echo "*** Mosaic Image ***"

# Command Line
if [ "$1" = "command" -o  -z "$1" ]; then
echo "Testing Command Line File"

echo " -mosaicimage"
ds9 -mosaicimage mosaic/mosaicimage.fits &
KillIt
echo " -mosaicimage wcs"
ds9 -mosaicimage wcs mosaic/mosaicimage.fits &
KillIt
echo " -mosaicimagewcs"
ds9 -mosaicimagewcs mosaic/mosaicimage.fits &
KillIt
echo " -mosaicimage iraf"
ds9 -mosaicimage iraf mosaic/mosaicimage.fits &
KillIt
echo " -mosaicimageiraf"
ds9 -mosaicimageiraf mosaic/mosaicimage.fits &
KillIt
echo " -mosaicimage wfpc2"
ds9 -mosaicimage wfpc2 mosaic/hst.fits &
KillIt
echo " -mosaicimagewfpc2"
ds9 -mosaicimagewfpc2 mosaic/hst.fits &
KillIt

echo "PASSED"
fi

# Stdin
if [ "$1" = "stdin" -o  -z "$1" ]; then
echo "Testing Stdin File"

echo " -mosaicimage"
cat mosaic/mosaicimage.fits | ds9 -mosaicimage -&
KillIt
echo " -mosaicimage wcs"
cat mosaic/mosaicimage.fits | ds9 -mosaicimage wcs -&
KillIt
echo " -mosaicimagewcs"
cat mosaic/mosaicimage.fits | ds9 -mosaicimagewcs -&
KillIt
echo " -mosaicimage iraf"
cat mosaic/mosaicimage.fits | ds9 -mosaicimage iraf -&
KillIt
echo " -mosaicimageiraf"
cat mosaic/mosaicimage.fits | ds9 -mosaicimageiraf -&
KillIt
echo " -mosaicimage wfpc2"
cat mosaic/hst.fits | ds9 -mosaicimage wfpc2 -&
KillIt
echo " -mosaicimagewfpc2"
cat mosaic/hst.fits | ds9 -mosaicimagewfpc2 -&
KillIt

echo "PASSED"
fi

# Save
if [ "$1" = "save" -o -z "$1" ]; then
echo "Testing Command Save"

echo " -mosaicimage"
opt=""
opt="$opt -save mosaicimage foo.fits -sleep .1"
opt="$opt -frame new -mosaicimage foo.fits"
if [ $slow = "1" ]; then
    opt="$opt -sleep 1"
fi
opt="$opt -frame delete -sleep .1"
eval ds9 -tile -mosaicimage mosaic/mosaicimage.fits "$opt" -exit

echo " -mosaicimage wcs"
opt=""
opt="$opt -save mosaicimage wcs foo.fits -sleep .1"
opt="$opt -frame new -mosaicimage wcs foo.fits"
if [ $slow = "1" ]; then
    opt="$opt -sleep 1"
fi
opt="$opt -frame delete -sleep .1"
eval ds9 -tile -mosaicimage wcs mosaic/mosaicimage.fits "$opt" -exit

echo " -mosaicimagewcs"
opt=""
opt="$opt -save mosaicimagewcs foo.fits -sleep .1"
opt="$opt -frame new -mosaicimagewcs foo.fits"
if [ $slow = "1" ]; then
    opt="$opt -sleep 1"
fi
opt="$opt -frame delete -sleep .1"
eval ds9 -tile -mosaicimagewcs mosaic/mosaicimage.fits "$opt" -exit

echo "PASSED"
fi

# XPA
if [ "$1" = "xpa" -o  -z "$1" ]; then
echo "Testing XPA File"

StartDS9

echo " -mosaicimage"
xpaset -p ds9 mosaicimage mosaic/mosaicimage.fits
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

echo " -mosaicimage wcs"
xpaset -p ds9 mosaicimage wcs mosaic/mosaicimage.fits
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

echo " -mosaicimagewcs"
xpaset -p ds9 mosaicimagewcs mosaic/mosaicimage.fits
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

echo " -mosaicimage iraf"
xpaset -p ds9 mosaicimage iraf mosaic/mosaicimage.fits
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

echo " -mosaicimageiraf"
xpaset -p ds9 mosaicimageiraf mosaic/mosaicimage.fits
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

echo " -mosaicimage wfpc2"
xpaset -p ds9 mosaicimage wfpc2 mosaic/hst.fits
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

echo " -mosaicimagewfpc2"
xpaset -p ds9 mosaicimagewfpc2 mosaic/hst.fits
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

xpaset -p ds9 quit
echo "PASSED"
fi

# XPA stdin
if [ "$1" = "xpastdin" -o  -z "$1" ]; then
echo "Testing XPA Stdin"

StartDS9

echo " -mosaicimage"
cat mosaic/mosaicimage.fits | xpaset ds9 mosaicimage 
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

echo " -mosaicimage wcs"
cat mosaic/mosaicimage.fits | xpaset ds9 mosaicimage wcs 
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

echo " -mosaicimagewcs"
cat mosaic/mosaicimage.fits | xpaset ds9 mosaicimagewcs 
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

echo " -mosaicimage iraf"
cat mosaic/mosaicimage.fits | xpaset ds9 mosaicimage iraf 
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

echo " -mosaicimageiraf"
cat mosaic/mosaicimage.fits | xpaset ds9 mosaicimageiraf 
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

echo " -mosaicimage wfpc2"
cat mosaic/hst.fits | xpaset ds9 mosaicimage wfpc2 
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

echo " -mosaicimagewfpc2"
cat mosaic/hst.fits | xpaset ds9 mosaicimagewfpc2 
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame clear

xpaset -p ds9 quit
echo "PASSED"
fi

# XPA stdout
if [ "$1" = "xpastdout" -o  -z "$1" ]; then
echo "Testing XPA Stdout"

StartDS9

echo " -mosaicimage"
xpaset -p ds9 tile
xpaset -p ds9 mosaicimage mosaic/mosaicimage.fits
xpaget ds9 mosaicimage > foo.fits
xpaset -p ds9 frame new
xpaset -p ds9 mosaicimage foo.fits
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame delete
xpaset -p ds9 frame clear

echo " -mosaicimage wcs"
xpaset -p ds9 tile
xpaset -p ds9 mosaicimage wcs mosaic/mosaicimage.fits
xpaget ds9 mosaicimage wcs > foo.fits
xpaset -p ds9 frame new
xpaset -p ds9 mosaicimage wcs foo.fits
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame delete
xpaset -p ds9 frame clear

echo " -mosaicimagewcs"
xpaset -p ds9 tile
xpaset -p ds9 mosaicimagewcs mosaic/mosaicimage.fits
xpaget ds9 mosaicimagewcs > foo.fits
xpaset -p ds9 frame new
xpaset -p ds9 mosaicimagewcs foo.fits
if [ $slow = "1" ]; then
    sleep 1
fi
xpaset -p ds9 frame delete
xpaset -p ds9 frame clear

xpaset -p ds9 quit
echo "PASSED"
fi

rm -f foo.*
echo "DONE"
