echo
echo "*** vo.sh ***"

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

doit () {
    dd=1
    ddd=4

    xpaset -p ds9 vo chandra-ed
    #xpaset -p ds9 vo chandra-ed.rutgers
    xpaset -p ds9 web click 4
    sleep $ddd
    xpaset -p ds9 web click back
    xpaset -p ds9 raise

    echo "..Overview of Chandra-Ed Analysis Tools"
    xpaset -p ds9 analysis 0
    sleep $dd

    echo "..Radial Profile Plot"
    xpaset -p ds9 regions regions/vo2.reg
    xpaset -p ds9 analysis 1
    sleep $dd

    echo "..Counts in Regions"
    xpaset -p ds9 regions deleteall
    xpaset -p ds9 regions regions/vo1.reg
    xpaset -p ds9 analysis 2
    sleep $dd

    echo "..Quick Energy Spectrum Plot"
    xpaset -p ds9 analysis 3
    sleep $dd

    echo "..Quick Light Curve Plot"
    xpaset -p ds9 analysis 4
    sleep $dd

    echo "..Histogram Plot"
    xpaset -p ds9 analysis 5
    sleep $dd

    echo "..Column Histogram"
    xpaset -p ds9 analysis 6
    sleep $dd

    echo "..Refine (Centroid) Position"
    xpaset -p ds9 analysis 7
    sleep $ddd

    echo "..Imexam"
    xpaset -p ds9 analysis 8
    sleep $ddd

    echo "..Rebin image"
    xpaset -p ds9 analysis 9
    sleep $ddd
    sleep $ddd
    xpaset -p ds9 frame delete

    echo "..Energy Filter"
    xpaset -p ds9 analysis 10
    sleep $ddd
    sleep $ddd
    xpaset -p ds9 frame delete

    echo "..Time Filter"
    xpaset -p ds9 analysis 11
    sleep $ddd
    sleep $ddd
    xpaset -p ds9 frame delete

    echo "..Column Filter"
    xpaset -p ds9 analysis 12
    sleep $ddd
    sleep $ddd
    xpaset -p ds9 frame delete

    echo "..CIAO/Sherpa Spectral Fit"
    xpaset -p ds9 analysis 13
    sleep $ddd

    echo "..FTOOLS/Light Curve"
    xpaset -p ds9 analysis 14
    sleep $ddd

    echo "..FTOOLS/Power Spectrum"
    xpaset -p ds9 analysis 15
    sleep $ddd

    echo "..FTOOLS/Period Fold"
    xpaset -p ds9 analysis 16
    sleep $ddd

    xpaset -p ds9 regions deleteall
    xpaset -p ds9 frame clear

    xpaset -p ds9 vo disconnect chandra-ed
    xpaset -p ds9 web close

    echo "PASSED"
}

if [ "$1" = "xpa" ]; then
    echo "Testing xpa"
    xpaset -p ds9 vo method xpa
    doit
fi

if [ "$1" = "mime" ]; then
    echo "Testing mime"
    xpaset -p ds9 vo method mime
    doit
fi

xpaset -p ds9 exit

echo "DONE"
