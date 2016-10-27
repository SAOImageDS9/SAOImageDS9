echo
echo "*** COMPRESS ***"

for f in compress/* 
do 
    echo " ${f#compress/}"
    rm -f foo.fits
    funpack -O foo.fits $f
    ds9 $f foo.fits -mode crosshair -lock crosshair image -lock scale -lock colorbar -lock frame image -lock slice
done

echo "PASSED"
