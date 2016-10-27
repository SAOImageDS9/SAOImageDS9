testit () {
    echo "Testing $1..."
    xpaset -p ds9 scale $1
    xpaset -p ds9 contour scale $1
    xpaset -p ds9 file $2
    xpaset -p ds9 contour yes
    read
    xpaset -p ds9 frame clear
}

echo
echo "*** scale.sh ***"

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

echo "Setup..."
xpaset -p ds9 cmap i8
xpaset -p ds9 contour nlevels 9
xpaset -p ds9 contour color black

testit linear scale/linear.fits
testit log scale/pow.fits
testit pow scale/log.fits
testit sqrt scale/squ.fits
testit squared scale/sqrt.fits
testit asinh scale/sinh.fits
testit sinh scale/asinh.fits

echo "Testing histequ..."
xpaset -p ds9 scale histequ
xpaset -p ds9 contour scale histequ
xpaset -p ds9 fits scale/linear.fits
xpaset -p ds9 contour generate
xpaset -p ds9 contour yes
read
xpaset -p ds9 fits scale/log.fits
xpaset -p ds9 contour generate
xpaset -p ds9 contour yes
read
xpaset -p ds9 fits scale/pow.fits
xpaset -p ds9 contour generate
xpaset -p ds9 contour yes
read
xpaset -p ds9 fits scale/sqrt.fits
xpaset -p ds9 contour generate
xpaset -p ds9 contour yes
read
xpaset -p ds9 fits scale/squ.fits
xpaset -p ds9 contour generate
xpaset -p ds9 contour yes
read
xpaset -p ds9 fits scale/asinh.fits
xpaset -p ds9 contour generate
xpaset -p ds9 contour yes
read
xpaset -p ds9 fits scale/sinh.fits
xpaset -p ds9 contour generate
xpaset -p ds9 contour yes
read
xpaset -p ds9 frame clear

xpaset -p ds9 quit

