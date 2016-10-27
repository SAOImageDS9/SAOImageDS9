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
    xpaset -p ds9 regions file $5
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 regions deleteall
    echo "PASSED"
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
    ds9 -3d -3d vp 45 30&

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
xpaset -p ds9 fits data/img.fits

if [ "$1" = "ds9" -o  -z "$1" ]; then
echo
echo "Testing DS9 Format..."
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

echo
echo "Testing XML Format..."
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

if [ -z "$1" ]; then
xpaset -p ds9 quit
fi
