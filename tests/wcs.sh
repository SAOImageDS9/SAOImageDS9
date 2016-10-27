echo
echo "*** wcs.sh ***"

echo "Starting DS9..."
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


xpaset -p ds9 grid on
xpaset -p ds9 grid wcs
xpaset -p ds9 scale zscale
xpaset -p ds9 wcs skyformat degrees

for f in wcs/*.fits
do
echo $f
xpaset -p ds9 fits $f
read
done

xpaset -p ds9 quit
echo "DONE"


