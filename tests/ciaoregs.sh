testit () {
    echo "Test $1"
    xpaset -p ds9 regions file $1
    xpaset -p ds9 regions save ${1}.out
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 regions deleteall

    o=`diff ${1}.sav ${1}.out`
    if [ "$o" = "" ]
    then
	echo "PASSED"
    else
        echo "FAILED"
	echo "$o"
    fi
    rm -f ${1}.out
}

# slow down?
slow=0
if [ "$1" = "slow" ]; then
    slow=1
    shift
fi

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
xpaset -p ds9 fits ciaoregs/ones.fits
xpaset -p ds9 regions format ciao
xpaset -p ds9 regions system physical

if [ "$1" = "ascii" -o  -z "$1" ]; then
echo
echo "Testing CIAO ASCII..."
testit ciaoregs/annulus.reg
testit ciaoregs/box.reg
testit ciaoregs/circle.reg
testit ciaoregs/circle_wcs.reg
testit ciaoregs/ellipse.reg
testit ciaoregs/field.reg
testit ciaoregs/pie.reg
testit ciaoregs/point.reg
testit ciaoregs/polygon.reg
testit ciaoregs/rectangle.reg
testit ciaoregs/rotbox.reg
testit ciaoregs/sector.reg
fi

if [ "$1" = "fits" -o  -z "$1" ]; then
echo
echo
echo "Testing ASC FITS Regions..."
testit ciaoregs/all.fits
fi

if [ -z "$1" ]; then
xpaset -p ds9 quit
fi
