echo "XPA Tests"

echo "Starting DS9..."
if [ `xpaaccess ds9` = no ]; then
    ds9 -tcl&

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

testit () {
    if [ -f xpa/${1}.xpa ]
    then
	o=`diff xpa/${1}.xpa ${1}.out`
	if [ "$o" = "" ]
	then
	    echo "PASSED"
	else
            echo "FAILED"
	    echo "$o"
	fi
    else
        echo "PASSED"
    fi
    rm -f ${1}.out

    xpaset -p ds9 single
    xpaset -p ds9 raise
}

echo
echo "*** xpa.sh ***"

delay=.5

# must be invoked
# iexam
# shm
# source
# tcl
# print
# skyview

# no test
# shm
# smosaic
# smosaicwcs
# smosaiciraf

rm -f *.out
xpaset -p ds9 scale zscale
xpaset -p ds9 fits data/img.fits

tt="2mass"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 2mass open
xpaset -p ds9 2mass close
xpaset -p ds9 2mass survey h
xpaget ds9 2mass survey >> ${tt}.out
xpaset -p ds9 2mass size 30 30 arcsec
xpaget ds9 2mass size >> ${tt}.out
xpaset -p ds9 2mass save no
xpaget ds9 2mass save >> ${tt}.out
xpaset -p ds9 2mass frame new
xpaget ds9 2mass frame >> ${tt}.out
xpaset -p ds9 2mass update frame
xpaset -p ds9 2mass m51
xpaset -p ds9 2mass name m51
xpaget ds9 2mass name >> ${tt}.out
xpaset -p ds9 2mass name {}
xpaset -p ds9 2mass coord 00:42:44.404 +41:16:08.78 sexagesimal
xpaget ds9 2mass coord >> ${tt}.out
xpaset -p ds9 2mass update frame
xpaset -p ds9 mode crosshair
xpaset -p ds9 2mass update crosshair
xpaset -p ds9 2mass close
xpaset -p ds9 mode none
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete

testit $tt
fi

tt="3d"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 3d open
xpaset -p ds9 3d close
xpaset -p ds9 3d
xpaset -p ds9 3d view 45 30
xpaget ds9 3d view >> ${tt}.out
xpaget ds9 3d az >> ${tt}.out
xpaget ds9 3d el >> ${tt}.out
xpaget ds9 3d scale >> ${tt}.out
xpaget ds9 3d method >> ${tt}.out
xpaget ds9 3d background >> ${tt}.out
xpaget ds9 3d border >> ${tt}.out
xpaget ds9 3d border color >> ${tt}.out
xpaget ds9 3d compass >> ${tt}.out
xpaget ds9 3d compass color >> ${tt}.out
xpaget ds9 3d highlite >> ${tt}.out
xpaget ds9 3d highlite color >> ${tt}.out
xpaset -p ds9 3d view 45 30
xpaset -p ds9 3d az 45
xpaset -p ds9 3d el 30
xpaset -p ds9 3d scale 5
xpaset -p ds9 3d method mip
xpaset -p ds9 3d background azimuth
xpaset -p ds9 3d border yes
xpaset -p ds9 3d border color red
xpaset -p ds9 3d compass yes
xpaset -p ds9 3d compass color red
xpaset -p ds9 3d highlite yes
xpaset -p ds9 3d highlite color red
xpaset -p ds9 frame delete

xpaset -p ds9 3d close
xpaset -p ds9 cube close
testit $tt
fi

tt="about"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 about > /dev/null

testit $tt
fi

tt="align"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 align >> ${tt}.out
xpaset -p ds9 align
xpaset -p ds9 frame reset

testit $tt
fi

tt="analysis"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 analysis clear
xpaset -p ds9 analysis analysis/analysis.ans
xpaget ds9 analysis > /dev/null
xpaget ds9 analysis task > /dev/null
#xpaget ds9 analysis entry 'hello world'
xpaget ds9 analysis mode > /dev/null

xpaset -p ds9 analysis 0
xpaset -p ds9 analysis task 1
xpaset -p ds9 analysis task '{Basic Help}'
xpaset -p ds9 analysis clear
xpaset -p ds9 analysis load analysis/analysis.ans
xpaset -p ds9 analysis clear load analysis/analysis.ans
xpaset -p ds9 analysis clear
cat analysis/analysis.ans | xpaset ds9 analysis load
xpaset -p ds9 analysis clear
#xpaset -p ds9 analysis message {This is a message}
#xpaset -p ds9 analysis message yesno {This is a message}
xpaset -p ds9 analysis text {This is text}
xpaset -p ds9 analysis mode none
cat analysis/analysis.txt | xpaset ds9 analysis text

testit $tt
fi

tt="array"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 frame new
xpaset -p ds9 array array/float_big.arr[dim=256,bitpix=-32,endian=big]
cat array/float_big.arr | xpaset ds9 array -[dim=256,bitpix=-32,endian=big]
xpaget ds9 array little > /dev/null
xpaset -p ds9 frame delete

xpaset -p ds9 array new array/float_big.arr[dim=256,bitpix=-32,endian=big]
xpaset -p ds9 array mask array/float_big.arr[dim=256,bitpix=-32,endian=big]
xpaset -p ds9 frame delete

# backward compatibility
xpaset -p ds9 frame new rgb
cat rgbarray/float_big.rgb | xpaset ds9 array rgb -[dim=256,bitpix=-32,endian=big]
xpaset -p ds9 frame delete
cat rgbarray/float_big.rgb | xpaset ds9 array new rgb -[dim=256,bitpix=-32,endian=big]
xpaset -p ds9 frame delete

xpaset -p ds9 rgb close
testit $tt
fi

tt="bg"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt/background..."
xpaget ds9 background >> ${tt}.out
xpaget ds9 bg >> ${tt}.out
xpaset -p ds9 background red
xpaset -p ds9 background white

testit $tt
fi

tt="backup"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 backup foo.bck

testit $tt
fi

tt="bin"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 fits new fits/table.fits
xpaset -p ds9 single
xpaset -p ds9 bin open
xpaset -p ds9 bin factor 4
xpaset -p ds9 bin factor 8 8
xpaset -p ds9 scale log
xpaset -p ds9 scale minmax
xpaset -p ds9 bin buffersize 1024
xpaset -p ds9 bin filter 'circle(4096,4096,200)'
xpaset -p ds9 bin filter ''
xpaset -p ds9 bin cols rawx rawy
xpaset -p ds9 bin about center
xpaset -p ds9 bin colsz x y pha
xpaset -p ds9 bin depth 10
xpaset -p ds9 bin about 4096 4096
xpaset -p ds9 bin depth 1
xpaset -p ds9 bin function sum
xpaset -p ds9 bin in
xpaset -p ds9 bin out
xpaset -p ds9 bin to fit
xpaset -p ds9 bin match
xpaset -p ds9 bin lock yes
xpaset -p ds9 bin lock no
xpaset -p ds9 bin close
xpaget ds9 bin about >> ${tt}.out
xpaget ds9 bin buffersize >> ${tt}.out
xpaget ds9 bin cols >> ${tt}.out
xpaget ds9 bin factor >> ${tt}.out
xpaget ds9 bin filter >> ${tt}.out
xpaget ds9 bin function >> ${tt}.out
xpaget ds9 bin lock >> ${tt}.out
xpaset -p ds9 frame delete

testit $tt
fi

tt="blink"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 blink >> ${tt}.out
xpaget ds9 blink interval >> ${tt}.out
xpaset -p ds9 frame new
xpaset -p ds9 blink
xpaset -p ds9 blink yes
xpaset -p ds9 blink interval .5
xpaset -p ds9 single
xpaset -p ds9 frame first
xpaset -p ds9 frame next
xpaset -p ds9 frame delete

testit $tt
fi

tt="block"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 block open
xpaset -p ds9 block 4
xpaset -p ds9 block 8 8
xpaset -p ds9 block to 4
xpaset -p ds9 block to 8 8
xpaset -p ds9 block in
xpaset -p ds9 block out
xpaset -p ds9 block to fit
xpaset -p ds9 block to 1
xpaset -p ds9 block match
xpaset -p ds9 block lock yes
xpaset -p ds9 block lock no
xpaset -p ds9 block close
xpaget ds9 block >> ${tt}.out
xpaget ds9 block lock >> ${tt}.out

testit $tt
fi

tt="catalog"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt/cat..."
xpaset -p ds9 catalog cds 2mass

xpaget ds9 catalog >> ${tt}.out
xpaget ds9 catalog header > /dev/null
xpaget ds9 catalog cat2mass header > /dev/null
xpaset -p ds9 catalog clear
xpaset -p ds9 catalog close

xpaset -p ds9 catalog
xpaset -p ds9 catalog close

xpaset -p ds9 catalog cds "I/284"
xpaset -p ds9 catalog clear
xpaset -p ds9 catalog close

xpaset -p ds9 catalog import sb aux/ds9.cat
xpaset -p ds9 catalog clear
xpaset -p ds9 catalog close

xpaset -p ds9 catalog cds 2mass
xpaset -p ds9 raise
xpaset -p ds9 catalog plot '$Jmag' '$Hmag' '$e_Jmag' '$e_Hmag'
xpaset -p ds9 catalog symbol condition '$Jmag>15'
xpaset -p ds9 catalog symbol shape "{boxcircle point}"
xpaset -p ds9 catalog symbol color red
xpaset -p ds9 catalog symbol condition "{}"
xpaset -p ds9 catalog symbol color red
xpaset -p ds9 catalog symbol shape text
xpaset -p ds9 catalog symbol font times
xpaset -p ds9 catalog symbol fontsize 14
xpaset -p ds9 catalog symbol fontweight bold
xpaset -p ds9 catalog symbol fontslant italic
xpaset -p ds9 catalog symbol add
xpaset -p ds9 catalog symbol remove
xpaset -p ds9 catalog symbol load aux/ds9.sym
xpaset -p ds9 catalog symbol save foo.sym
xpaset -p ds9 catalog name m51
xpaset -p ds9 catalog coordinate 202.48 47.21 fk5
xpaset -p ds9 catalog system wcs
xpaset -p ds9 catalog sky fk5
xpaset -p ds9 catalog skyformat degrees
xpaset -p ds9 catalog size 22 22 arcmin
xpaset -p ds9 catalog retrieve
xpaset -p ds9 catalog regions
xpaset -p ds9 regions delete all
xpaset -p ds9 catalog save foo.cat
xpaset -p ds9 catalog filter '$Jmag>15'
xpaset -p ds9 catalog filter load aux/ds9.flt
xpaset -p ds9 catalog retrieve
xpaset -p ds9 catalog cancel
#xpaset -p ds9 catalog print
xpaset -p ds9 catalog server sao
xpaset -p ds9 catalog sort "Jmag" incr
xpaset -p ds9 catalog maxrows 3000
xpaset -p ds9 catalog allcols
xpaset -p ds9 catalog allrows
xpaset -p ds9 catalog ra "RAJ2000"
xpaset -p ds9 catalog dec "DEJ2000"
xpaset -p ds9 catalog psystem wcs
xpaset -p ds9 catalog psky fk5
xpaset -p ds9 catalog hide
xpaset -p ds9 catalog show
xpaset -p ds9 catalog panto no
#xpaset -p ds9 catalog edit yes
xpaset -p ds9 catalog location 400
xpaset -p ds9 catalog header
xpaset -p ds9 catalog clear
xpaset -p ds9 catalog close
xpaset -p ds9 catalog 2mass
xpaset -p ds9 catalog xmm
xpaset -p ds9 catalog match function 1and2
xpaset -p ds9 catalog match error 2 arcsec
xpaset -p ds9 catalog match return 1only
xpaset -p ds9 catalog match unique no
xpaset -p ds9 catalog match 2mass xmm
xpaset -p ds9 catalog clear
xpaset -p ds9 catalog close
xpaset -p ds9 catalog clear
xpaset -p ds9 catalog close
xpaset -p ds9 catalog clear
xpaset -p ds9 catalog close

testit $tt
fi

tt="cd"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 cd >> ${tt}.out
xpaset -p ds9 cd .

testit $tt
fi

tt="cmap"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 cmap >> ${tt}.out
xpaget ds9 cmap file >> ${tt}.out
xpaget ds9 cmap invert >> ${tt}.out
xpaget ds9 cmap value >> ${tt}.out
xpaget ds9 cmap lock >> ${tt}.out
xpaset -p ds9 cmap open
xpaset -p ds9 cmap Heat
xpaset -p ds9 cmap load aux/ds9.sao
xpaset -p ds9 cmap save foo.sao
xpaset -p ds9 cmap invert yes
xpaset -p ds9 cmap value 5 .2
xpaset -p ds9 cmap match
xpaset -p ds9 cmap lock yes
xpaset -p ds9 cmap lock no
xpaset -p ds9 cmap tag load aux/ds9.tag
xpaset -p ds9 cmap tag save foo.tag
xpaset -p ds9 cmap tag delete
xpaset -p ds9 cmap Grey
xpaset -p ds9 cmap close

testit $tt
fi

tt="colorbar"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 colorbar >> ${tt}.out
xpaget ds9 colorbar orientation >> ${tt}.out
xpaget ds9 colorbar numerics >> ${tt}.out
xpaget ds9 colorbar space >> ${tt}.out
xpaget ds9 colorbar font >> ${tt}.out
xpaget ds9 colorbar fontsize >> ${tt}.out
xpaget ds9 colorbar fontweight >> ${tt}.out
xpaget ds9 colorbar fontslant >> ${tt}.out
xpaget ds9 colorbar size >> ${tt}.out
xpaget ds9 colorbar ticks >> ${tt}.out

xpaset -p ds9 colorbar no
xpaset -p ds9 colorbar yes
xpaset -p ds9 colorbar vertical
xpaset -p ds9 colorbar horizontal
xpaset -p ds9 colorbar numerics no
xpaset -p ds9 colorbar numerics yes
xpaset -p ds9 colorbar space value
xpaset -p ds9 colorbar space distance
xpaset -p ds9 colorbar font times
xpaset -p ds9 colorbar fontsize 30
xpaset -p ds9 colorbar fontweight bold
xpaset -p ds9 colorbar fontslant roman
xpaset -p ds9 colorbar font helvetica
xpaset -p ds9 colorbar fontsize 10
xpaset -p ds9 colorbar fontweight normal
xpaset -p ds9 colorbar fontslant roman
xpaset -p ds9 colorbar size 30
xpaset -p ds9 colorbar ticks 9
xpaset -p ds9 colorbar size 20
xpaset -p ds9 colorbar ticks 11

testit $tt
fi

tt="console"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 console

testit $tt
fi

tt="contour"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt/contours..."
xpaset -p ds9 contour yes
xpaset -p ds9 contour open

xpaget ds9 contour >> ${tt}.out
xpaget ds9 contour color >> ${tt}.out
xpaget ds9 contour width >> ${tt}.out
xpaget ds9 contour smooth >> ${tt}.out
xpaget ds9 contour method >> ${tt}.out
xpaget ds9 contour nlevels >> ${tt}.out
xpaget ds9 contour scale >> ${tt}.out
xpaget ds9 contour log exp >> ${tt}.out
xpaget ds9 contour mode >> ${tt}.out
xpaget ds9 contour limits >> ${tt}.out
xpaget ds9 contour levels >> ${tt}.out

xpaget ds9 contour wcs fk5 >> /dev/null

# load/save
# backward compatibility
xpaset -p ds9 contour clear
xpaset -p ds9 contour load aux/ds9.con wcs fk5 red 2 no
sleep $delay
#
xpaset -p ds9 contour clear
xpaset -p ds9 contour load aux/ds9.ctr
sleep $delay
xpaset -p ds9 contour clear
xpaset -p ds9 contour load aux/ds9.ctr blue 2 yes
sleep $delay
xpaset -p ds9 contour save foo.ctr wcs fk5

# paste
xpaset -p ds9 contour clear
xpaset -p ds9 frame new
xpaset -p ds9 fits data/img.fits
xpaset -p ds9 tile
xpaset -p ds9 contour yes
xpaset -p ds9 contour copy
xpaset -p ds9 frame first
# backward compatibility
xpaset -p ds9 contour clear
xpaset -p ds9 contour paste wcs red 2 yes
sleep $delay
#
xpaset -p ds9 contour clear
xpaset -p ds9 contour paste
sleep $delay
xpaset -p ds9 frame next
xpaset -p ds9 frame delete

xpaset -p ds9 contour clear
xpaset -p ds9 contour loadlevels aux/ds9.ctr
sleep $delay
# backward compatibility
xpaset -p ds9 contour clear
xpaset -p ds9 contour loadlevels aux/ds9.lev
#
xpaset -p ds9 contour savelevels foo.lev

xpaset -p ds9 contour clear
xpaset -p ds9 contour yes
xpaset -p ds9 contour convert
xpaset -p ds9 regions delete all

xpaset -p ds9 contour clear
xpaset -p ds9 contour yes
xpaset -p ds9 contour color blue
xpaset -p ds9 contour width 2
xpaset -p ds9 contour smooth 5
xpaset -p ds9 contour method block
xpaset -p ds9 contour nlevels 10
xpaset -p ds9 contour width 2
xpaset -p ds9 contour scale sqrt
xpaset -p ds9 contour log exp 1000
xpaset -p ds9 contour mode zscale
xpaset -p ds9 contour limits 1 100
xpaset -p ds9 contour levels "{1 10 100 1000}"

xpaset -p ds9 contour clear
xpaset -p ds9 contour close

testit $tt
fi

tt="crop"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 mode crop
xpaset -p ds9 crop  978 970  356 308 
xpaget ds9 crop >> ${tt}.out
xpaget ds9 crop wcs fk5 sexagesimal arcsec >> ${tt}.out
xpaget ds9 crop lock >> ${tt}.out
xpaset -p ds9 crop  978 970  356 308 
xpaset -p ds9 crop 13:29:52.908 +47:11:38.19  35.279606 30.522805 wcs fk5 arcsec
xpaset -p ds9 crop reset
xpaset -p ds9 3d
xpaset -p ds9 fits data/3d.fits
xpaset -p ds9 3d vp 45 30
xpaset -p ds9 crop 3d 25 75
xpaset -p ds9 crop reset
xpaset -p ds9 crop match wcs
xpaset -p ds9 crop lock wcs
xpaset -p ds9 crop lock none
xpaset -p ds9 frame delete
xpaset -p ds9 mode none

xpaset -p ds9 3d close
xpaset -p ds9 cube close
testit $tt
fi

tt="crosshair"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 mode crosshair
xpaget ds9 crosshair >> ${tt}.out
xpaget ds9 crosshair wcs fk5 sexagesimal >> ${tt}.out
xpaget ds9 crosshair lock >> ${tt}.out
xpaset -p ds9 crosshair 13:29:55.287 +47:11:37.73 wcs fk5
xpaset -p ds9 crosshair match wcs
xpaset -p ds9 crosshair lock wcs
xpaset -p ds9 crosshair lock none
xpaset -p ds9 mode none

testit $tt
fi

tt="cube"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt/datacube..."
xpaset -p ds9 cube open
xpaset -p ds9 cube close
xpaset -p ds9 fits new data/3d.fits
xpaget ds9 cube >> ${tt}.out
xpaget ds9 cube interval >> ${tt}.out
xpaget ds9 cube axis >> ${tt}.out
xpaget ds9 cube lock >> ${tt}.out
xpaget ds9 cube order >> ${tt}.out
xpaget ds9 cube axes lock >> ${tt}.out
xpaset -p ds9 cube 2
xpaset -p ds9 cube interval .5
xpaset -p ds9 cube axis 3
xpaset -p ds9 cube play
xpaset -p ds9 cube stop
xpaset -p ds9 cube match wcs
xpaset -p ds9 cube lock wcs
xpaset -p ds9 cube lock none
xpaset -p ds9 cube order 321
xpaset -p ds9 cube order 123
xpaset -p ds9 cube axes lock yes
xpaset -p ds9 cube axes lock no
xpaset -p ds9 frame delete

xpaset -p ds9 cube close
testit $tt
fi

tt="cursor"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 mode crosshair
xpaset -p ds9 cursor 10 10
xpaset -p ds9 mode none

testit $tt
fi

tt="data"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 data image 450 520 3 3 yes >> ${tt}.out
xpaget ds9 data physical 899 1039 6 6 no >> ${tt}.out
xpaget ds9 data fk5 202.4709 47.19681 0.00016517 0.00016517 yes >> ${tt}.out
xpaget ds9 data wcs fk5 202.4709 47.19681 0.00016517 0.00016517 no >> ${tt}.out

testit $tt
fi

tt="dsssao"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt/dss..."
xpaset -p ds9 dsssao open
xpaset -p ds9 dsssao close
xpaset -p ds9 dsssao size 30 30 arcsec
xpaget ds9 dsssao size >> ${tt}.out
xpaset -p ds9 dsssao save no
xpaget ds9 dsssao save >> ${tt}.out
xpaset -p ds9 dsssao frame new
xpaget ds9 dsssao frame >> ${tt}.out
xpaset -p ds9 dsssao update frame
xpaset -p ds9 dsssao m51
xpaset -p ds9 dsssao name m51
xpaget ds9 dsssao name >> ${tt}.out
xpaset -p ds9 dsssao name {}
xpaset -p ds9 dsssao coord 00:42:44.404 +41:16:08.78 sexagesimal
xpaget ds9 dsssao coord >> ${tt}.out
xpaset -p ds9 dsssao update frame
xpaset -p ds9 mode crosshair
xpaset -p ds9 dsssao update crosshair
xpaset -p ds9 dsssao close
xpaset -p ds9 mode none
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete

testit $tt
fi

tt="dsseso"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 dsseso open
xpaset -p ds9 dsseso close
xpaset -p ds9 dsseso survey DSS2-red
xpaget ds9 dsseso survey >> ${tt}.out
xpaset -p ds9 dsseso size 30 30 arcsec
xpaget ds9 dsseso size >> ${tt}.out
xpaset -p ds9 dsseso save no
xpaget ds9 dsseso save >> ${tt}.out
xpaset -p ds9 dsseso frame new
xpaget ds9 dsseso frame >> ${tt}.out
xpaset -p ds9 dsseso update frame
xpaset -p ds9 dsseso m51
xpaset -p ds9 dsseso name m51
xpaget ds9 dsseso name >> ${tt}.out
xpaset -p ds9 dsseso name {}
xpaset -p ds9 dsseso coord 00:42:44.404 +41:16:08.78 sexagesimal
xpaget ds9 dsseso coord >> ${tt}.out
xpaset -p ds9 dsseso update frame
xpaset -p ds9 mode crosshair
xpaset -p ds9 dsseso update crosshair
xpaset -p ds9 dsseso close
xpaset -p ds9 mode none
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete

testit $tt
fi

tt="dssstsci"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 dssstsci open
xpaset -p ds9 dssstsci close
xpaset -p ds9 dssstsci survey all
xpaget ds9 dssstsci survey >> ${tt}.out
xpaset -p ds9 dssstsci size 30 30 arcsec
xpaget ds9 dssstsci size >> ${tt}.out
xpaset -p ds9 dssstsci save no
xpaget ds9 dssstsci save >> ${tt}.out
xpaset -p ds9 dssstsci frame new
xpaget ds9 dssstsci frame >> ${tt}.out
xpaset -p ds9 dssstsci update frame
xpaset -p ds9 dssstsci m51
xpaset -p ds9 dssstsci name m51
xpaget ds9 dssstsci name >> ${tt}.out
xpaset -p ds9 dssstsci name {}
xpaset -p ds9 dssstsci coord 00:42:44.404 +41:16:08.78 sexagesimal
xpaget ds9 dssstsci coord >> ${tt}.out
xpaset -p ds9 dssstsci update frame
xpaset -p ds9 mode crosshair
xpaset -p ds9 dssstsci update crosshair
xpaset -p ds9 dssstsci close
xpaset -p ds9 mode none
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete

testit $tt
fi

tt="export"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 export array foo.arr little 
xpaset -p ds9 export foo.arr little 
xpaset -p ds9 export nrrd foo.nrrd big
xpaset -p ds9 export foo.nrrd
xpaset -p ds9 export gif foo.gif
xpaset -p ds9 export foo.gif
xpaset -p ds9 export tiff foo.tiff none
xpaset -p ds9 export foo.tiff
xpaset -p ds9 export jpeg foo.jpeg 10
xpaset -p ds9 export foo.jpeg
xpaset -p ds9 export png foo.png
xpaset -p ds9 export foo.png

xpaset -p ds9 frame new rgb
xpaset -p ds9 rgbcube rgbcube/float.fits
xpaset -p ds9 export rgbarray foo.rgb little
xpaset -p ds9 export foo.rgb little
xpaset -p ds9 frame delete

xpaset -p ds9 rgb close
testit $tt
fi

# backward compatibility
tt="file"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo "$tt...backward compatibility..."
xpaget ds9 file >> ${tt}.out

echo -n " default..."
xpaset -p ds9 frame new
xpaset -p ds9 file fits/float.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new fits/float.fits
xpaset -p ds9 file slice fits/float.fits
xpaset -p ds9 file mask fits/float.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " fits..."
xpaset -p ds9 frame new
xpaset -p ds9 file fits fits/float.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new fits fits/float.fits
xpaset -p ds9 file fits slice fits/float.fits
xpaset -p ds9 file mask fits fits/float.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " sfits..."
xpaset -p ds9 frame new
xpaset -p ds9 file sfits sfits/float.hdr sfits/float.arr
xpaset -p ds9 frame delete

xpaset -p ds9 file new sfits sfits/float.hdr sfits/float.arr
xpaset -p ds9 file mask sfits sfits/float.hdr sfits/float.arr
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " url..."
xpaset -p ds9 frame new
xpaset -p ds9 file url http://ds9.si.edu/download/data/img.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " rgbimage..."
xpaset -p ds9 frame new rgb
xpaset -p ds9 file rgbimage mecube/float.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new rgbimage mecube/float.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " rgbcube..."
xpaset -p ds9 frame new rgb
xpaset -p ds9 file rgbcube rgbcube/float.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new rgbcube rgbcube/float.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " srgbcube..."
xpaset -p ds9 frame new rgb
xpaset -p ds9 file srgbcube srgbcube/float.hdr srgbcube/float.arr
xpaset -p ds9 frame delete

xpaset -p ds9 file new srgbcube srgbcube/float.hdr srgbcube/float.arr
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " mecube..."
xpaset -p ds9 frame new
xpaset -p ds9 file mecube mecube/float.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new mecube mecube/float.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " multiframe..."
xpaset -p ds9 frame new
xpaset -p ds9 file multiframe mecube/float.fits
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete

xpaset -p ds9 file new multiframe mecube/float.fits
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 single
echo "PASSED"

echo -n " mosaic..."
xpaset -p ds9 frame new
xpaset -p ds9 file mosaic mosaic/mosaicimage.fits
xpaset -p ds9 frame clear
xpaset -p ds9 file mosaic wcs mosaic/mosaicimage.fits
xpaset -p ds9 frame clear
xpaset -p ds9 file mosaic iraf mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new mosaic mosaic/mosaicimage.fits
xpaset -p ds9 file mask mosaic mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new mosaic wcs mosaic/mosaicimage.fits
xpaset -p ds9 file mask mosaic wcs mosaic/mosaicimage.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " mosaicimage..."
xpaset -p ds9 frame new
xpaset -p ds9 file mosaicimage mosaic/mosaicimage.fits
xpaset -p ds9 frame clear
xpaset -p ds9 file mosaicimage wcs mosaic/mosaicimage.fits
xpaset -p ds9 frame clear
xpaset -p ds9 file mosaicimage iraf mosaic/mosaicimage.fits
xpaset -p ds9 frame clear
xpaset -p ds9 file mosaicimage wfpc2 mosaic/hst.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new mosaicimage mosaic/mosaicimage.fits
xpaset -p ds9 file mask mosaicimage mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new mosaicimage wcs mosaic/mosaicimage.fits
xpaset -p ds9 file mask mosaicimage wcs mosaic/mosaicimage.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " mosaicwcs..."
xpaset -p ds9 frame new
xpaset -p ds9 file mosaicwcs mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new mosaicwcs mosaic/mosaicimage.fits
xpaset -p ds9 file mask mosaicwcs mosaic/mosaicimage.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " mosaiciraf..."
xpaset -p ds9 frame new
xpaset -p ds9 file mosaiciraf mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new mosaiciraf mosaic/mosaicimage.fits
xpaset -p ds9 file mask mosaiciraf mosaic/mosaicimage.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " mosaicimagewcs..."
xpaset -p ds9 frame new
xpaset -p ds9 file mosaicimagewcs mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new mosaicimagewcs mosaic/mosaicimage.fits
xpaset -p ds9 file mask mosaicimagewcs mosaic/mosaicimage.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " mosaicimageiraf..."
xpaset -p ds9 frame new
xpaset -p ds9 file mosaicimageiraf mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new mosaicimageiraf mosaic/mosaicimage.fits
xpaset -p ds9 file mask mosaicimageiraf mosaic/mosaicimage.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " mosaicimagewfpc2..."
xpaset -p ds9 frame new
xpaset -p ds9 file mosaicimagewfpc2 mosaic/hst.fits
xpaset -p ds9 frame delete

xpaset -p ds9 file new mosaicimagewfpc2 mosaic/hst.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " smosaic...no test..."
echo "PASSED"

echo -n " smosaiciraf...no test..."
echo "PASSED"

echo -n " smosaicwcs...no test..."
echo "PASSED"

echo -n " array..."
xpaset -p ds9 frame new
xpaset -p ds9 file array array/float_big.arr[dim=256,bitpix=-32,endian=big]
xpaset -p ds9 frame delete

xpaset -p ds9 file new array array/float_big.arr[dim=256,bitpix=-32,endian=big]
xpaset -p ds9 file mask array array/float_big.arr[dim=256,bitpix=-32,endian=big]
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " rgbarray..."
xpaset -p ds9 frame new rgb
xpaset -p ds9 file rgbarray rgbarray/float_big.rgb[dim=256,bitpix=-32,endian=big]
xpaset -p ds9 frame delete

xpaset -p ds9 file new rgbarray rgbarray/float_big.rgb[dim=256,bitpix=-32,endian=big]
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " photo..."
xpaset -p ds9 frame new
xpaset -p ds9 file photo photo/rose.tiff
xpaset -p ds9 frame delete

xpaset -p ds9 file new photo photo/rose.tiff
xpaset -p ds9 file photo slice photo/rose.tiff
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " file save..."
xpaset -p ds9 file save foo.fits
echo "PASSED"

echo -n " file save gz..."
xpaset -p ds9 file save gz foo.fits.gz
echo "PASSED"

echo -n " file save resample..."
xpaset -p ds9 file save resample foo.fits
echo "PASSED"

echo -n " file save resample gz..."
xpaset -p ds9 file save resample gz foo.fits.gz
echo "PASSED"

xpaset -p ds9 rgb close
xpaset -p ds9 cube close
testit $tt
fi

tt="fits"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 fits > /dev/null
xpaget ds9 fits image > /dev/null
xpaget ds9 fits slice > /dev/null

cat fits/table.fits | xpaset ds9 fits new
xpaget ds9 fits table > /dev/null
xpaset -p ds9 frame delete

xpaset -p ds9 frame new
xpaset -p ds9 fits fits/float.fits
xpaset -p ds9 frame delete

xpaset -p ds9 fits new fits/float.fits
xpaset -p ds9 fits slice fits/float.fits
xpaset -p ds9 fits mask fits/float.fits
xpaset -p ds9 frame delete

xpaget ds9 fits size >> ${tt}.out
xpaget ds9 fits width >> ${tt}.out
xpaget ds9 fits height >> ${tt}.out
xpaget ds9 fits depth >> ${tt}.out
xpaget ds9 fits bitpix >> ${tt}.out
xpaget ds9 fits type >> ${tt}.out
xpaget ds9 fits size wcs fk5 arcsec >> ${tt}.out
xpaget ds9 fits header >> /dev/null
xpaget ds9 fits header 1 >> /dev/null
xpaget ds9 fits header keyword BITPIX >> ${tt}.out
xpaget ds9 fits header 1 keyword BITPIX >> ${tt}.out
xpaset -p ds9 single

# backward compatibility
xpaget ds9 fits image > /dev/null
xpaget ds9 fits image gz > /dev/null
xpaget ds9 fits resample > /dev/null
xpaget ds9 fits resample gz > /dev/null
xpaset -p ds9 frame new
xpaset -p ds9 fits fits/table.fits
xpaget ds9 fits table > /dev/null
xpaget ds9 fits table gz> /dev/null
xpaset -p ds9 frame delete

xpaset -p ds9 frame new
cat mecube/float.fits | xpaset ds9 fits mecube 
xpaset -p ds9 frame delete
cat mecube/float.fits | xpaset ds9 fits new mecube
xpaset -p ds9 frame delete

xpaset -p ds9 frame new
cat mosaic/mosaicimage.fits | xpaset ds9 fits mosaicimage 
cat mosaic/mosaicimage.fits | xpaset ds9 fits mosaicimage wcs 
xpaset -p ds9 frame delete
cat mosaic/mosaicimage.fits | xpaset ds9 fits new mosaicimage 
cat mosaic/mosaicimage.fits | xpaset ds9 fits mask mosaicimage 
xpaset -p ds9 frame delete

xpaset -p ds9 frame new
cat mosaic/mosaicimage.fits | xpaset ds9 fits mosaicimagewcs 
xpaset -p ds9 frame delete
cat mosaic/mosaicimage.fits | xpaset ds9 fits new mosaicimagewcs 
cat mosaic/mosaicimage.fits | xpaset ds9 fits mask mosaicimagewcs 
xpaset -p ds9 frame delete

xpaset -p ds9 frame new
cat mosaic/mosaicimage.fits | xpaset ds9 fits mosaicimageiraf 
xpaset -p ds9 frame delete
cat mosaic/mosaicimage.fits | xpaset ds9 fits new mosaicimageiraf 
cat mosaic/mosaicimage.fits | xpaset ds9 fits mask mosaicimageiraf 
xpaset -p ds9 frame delete

xpaset -p ds9 frame new
cat mosaic/hst.fits | xpaset ds9 fits mosaicimagewfpc2 
xpaset -p ds9 frame delete
cat mosaic/hst.fits | xpaset ds9 fits new mosaicimagewfpc2 
xpaset -p ds9 frame delete

xpaset -p ds9 frame new rgb
cat rgbcube/float.fits | xpaset ds9 fits rgbcube
xpaset -p ds9 frame delete
cat rgbcube/float.fits | xpaset ds9 fits new rgbcube
xpaset -p ds9 frame delete

xpaset -p ds9 frame new rgb
cat mecube/float.fits | xpaset ds9 fits rgbimage
xpaset -p ds9 frame delete
cat mecube/float.fits | xpaset ds9 fits new rgbimage
xpaset -p ds9 frame delete

xpaset -p ds9 rgb close
xpaset -p ds9 cube close
testit $tt
fi

tt="frame"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 frame lock >> ${tt}.out
xpaget ds9 frame has amplifier >> ${tt}.out
xpaget ds9 frame has datamin >> ${tt}.out
xpaget ds9 frame has datasec >> ${tt}.out
xpaget ds9 frame has detector >> ${tt}.out
xpaget ds9 frame has grid >> ${tt}.out
xpaget ds9 frame has iis >> ${tt}.out
xpaget ds9 frame has irafmin >> ${tt}.out
xpaget ds9 frame has physical >> ${tt}.out
xpaget ds9 frame has smooth >> ${tt}.out
xpaget ds9 frame has contour >> ${tt}.out
xpaget ds9 frame has contour aux >> ${tt}.out
xpaget ds9 frame has fits >> ${tt}.out
xpaget ds9 frame has fits bin >> ${tt}.out
xpaget ds9 frame has fits cube >> ${tt}.out
xpaget ds9 frame has fits mosaic >> ${tt}.out
xpaget ds9 frame has marker highlite >> ${tt}.out
xpaget ds9 frame has marker paste >> ${tt}.out
xpaget ds9 frame has marker select >> ${tt}.out
xpaget ds9 frame has marker undo >> ${tt}.out
xpaget ds9 frame has system physical >> ${tt}.out
xpaget ds9 frame has wcs wcsa >> ${tt}.out
xpaget ds9 frame has wcs equatorial wcsa >> ${tt}.out
xpaset -p ds9 frame new rgb
xpaset -p ds9 frame delete
xpaset -p ds9 frame new 3d
xpaset -p ds9 frame delete
xpaset -p ds9 frame new
xpaset -p ds9 fits data/img.fits
xpaset -p ds9 tile
xpaget ds9 frame > /dev/null
xpaget ds9 frame frameno > /dev/null
xpaget ds9 frame all > /dev/null
xpaget ds9 frame active > /dev/null
xpaset -p ds9 frame center
xpaset -p ds9 frame center 1
xpaset -p ds9 frame center all
xpaset -p ds9 frame reset
xpaset -p ds9 frame reset 1
xpaset -p ds9 frame reset all
xpaset -p ds9 frame refresh
xpaset -p ds9 frame refresh 1
xpaset -p ds9 frame refresh all
xpaset -p ds9 frame hide
xpaset -p ds9 frame hide 1
xpaset -p ds9 frame hide all
xpaset -p ds9 frame show
xpaset -p ds9 frame show 1
xpaset -p ds9 frame show all
xpaset -p ds9 frame move first
xpaset -p ds9 frame move back
xpaset -p ds9 frame move forward
xpaset -p ds9 frame move last
xpaset -p ds9 frame first
xpaset -p ds9 frame prev
xpaset -p ds9 frame next
xpaset -p ds9 frame last
xpaset -p ds9 frame frameno 1
xpaset -p ds9 frame 2
xpaset -p ds9 frame match wcs
xpaset -p ds9 frame lock wcs
xpaset -p ds9 frame lock none
xpaset -p ds9 frame clear
xpaset -p ds9 frame clear 1
xpaset -p ds9 frame clear all
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete 1
xpaset -p ds9 frame delete all
xpaset -p ds9 fits new data/img.fits

xpaset -p ds9 rgb close
xpaset -p ds9 3d close
xpaset -p ds9 cube close
testit $tt
fi

tt="gif"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 frame new
xpaset -p ds9 gif photo/rose.gif
cat photo/rose.gif | xpaset ds9 gif
xpaget ds9 gif > /dev/null
xpaset -p ds9 frame delete

xpaset -p ds9 gif new photo/rose.gif
xpaset -p ds9 gif slice photo/rose.gif
xpaset -p ds9 frame delete

testit $tt
fi

tt="grid"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 wcs wcs
xpaget ds9 grid >> ${tt}.out
 
xpaget ds9 grid type >> ${tt}.out
xpaget ds9 grid system >> ${tt}.out
xpaget ds9 grid sky >> ${tt}.out
xpaget ds9 grid skyformat >> ${tt}.out

xpaget ds9 grid grid >> ${tt}.out
xpaget ds9 grid grid color >> ${tt}.out
xpaget ds9 grid grid width >> ${tt}.out
xpaget ds9 grid grid style >> ${tt}.out
xpaget ds9 grid grid gap1 >> ${tt}.out
xpaget ds9 grid grid gap2 >> ${tt}.out
 
xpaget ds9 grid axes >> ${tt}.out
xpaget ds9 grid axes color >> ${tt}.out
xpaget ds9 grid axes width >> ${tt}.out
xpaget ds9 grid axes style >> ${tt}.out
xpaget ds9 grid axes type >> ${tt}.out
xpaget ds9 grid axes origin >> ${tt}.out
 
xpaget ds9 grid format1 >> ${tt}.out
xpaget ds9 grid format2 >> ${tt}.out

xpaget ds9 grid tickmarks >> ${tt}.out
xpaget ds9 grid tickmarks color >> ${tt}.out
xpaget ds9 grid tickmarks width >> ${tt}.out
xpaget ds9 grid tickmarks style >> ${tt}.out

xpaget ds9 grid border >> ${tt}.out
xpaget ds9 grid border color >> ${tt}.out
xpaget ds9 grid border width >> ${tt}.out
xpaget ds9 grid border style >> ${tt}.out

xpaget ds9 grid numerics >> ${tt}.out
xpaget ds9 grid numerics font >> ${tt}.out
xpaget ds9 grid numerics fontweight >> ${tt}.out
xpaget ds9 grid numerics fontslant >> ${tt}.out
xpaget ds9 grid numerics fontsize >> ${tt}.out
xpaget ds9 grid numerics color >> ${tt}.out
xpaget ds9 grid numerics gap1 >> ${tt}.out
xpaget ds9 grid numerics gap2 >> ${tt}.out
xpaget ds9 grid numerics type >> ${tt}.out
xpaget ds9 grid numerics vertical >> ${tt}.out

xpaget ds9 grid title >> ${tt}.out
xpaget ds9 grid title text >> ${tt}.out
xpaget ds9 grid title def >> ${tt}.out
xpaget ds9 grid title gap >> ${tt}.out
xpaget ds9 grid title font >> ${tt}.out
xpaget ds9 grid title fontweight >> ${tt}.out
xpaget ds9 grid title fontslant >> ${tt}.out
xpaget ds9 grid title fontsize >> ${tt}.out
xpaget ds9 grid title color >> ${tt}.out

xpaget ds9 grid labels >> ${tt}.out
xpaget ds9 grid labels text1 >> ${tt}.out
xpaget ds9 grid labels def1 >> ${tt}.out
xpaget ds9 grid labels gap1 >> ${tt}.out
xpaget ds9 grid labels text2 >> ${tt}.out
xpaget ds9 grid labels def2 >> ${tt}.out
xpaget ds9 grid labels gap2 >> ${tt}.out
xpaget ds9 grid labels font >> ${tt}.out
xpaget ds9 grid labels fontweight >> ${tt}.out
xpaget ds9 grid labels fontslant >> ${tt}.out
xpaget ds9 grid labels fontsize >> ${tt}.out
xpaget ds9 grid labels color >> ${tt}.out

xpaset -p ds9 grid open
xpaset -p ds9 grid close

xpaset -p ds9 grid
xpaset -p ds9 grid yes
 
xpaset -p ds9 grid type analysis
xpaset -p ds9 grid system wcs
xpaset -p ds9 grid sky fk5
xpaset -p ds9 grid skyformat degrees

xpaset -p ds9 grid grid yes
xpaset -p ds9 grid grid color red
xpaset -p ds9 grid grid width 2
xpaset -p ds9 grid grid style 1
xpaset -p ds9 grid grid gap1 .01
xpaset -p ds9 grid grid gap2 .01
 
xpaset -p ds9 grid axes yes
xpaset -p ds9 grid axes color red
xpaset -p ds9 grid axes width 2
xpaset -p ds9 grid axes style 1
xpaset -p ds9 grid axes type exterior
xpaset -p ds9 grid axes origin lll
 
xpaset -p ds9 grid format1 d.2
xpaset -p ds9 grid format2 d.2

xpaset -p ds9 grid tickmarks yes
xpaset -p ds9 grid tickmarks color red
xpaset -p ds9 grid tickmarks width 2
xpaset -p ds9 grid tickmarks style 1

xpaset -p ds9 grid border yes
xpaset -p ds9 grid border color red
xpaset -p ds9 grid border width 2
xpaset -p ds9 grid border style 1

xpaset -p ds9 grid numerics yes
xpaset -p ds9 grid numerics font courier
xpaset -p ds9 grid numerics fontweight bold
xpaset -p ds9 grid numerics fontslant roman
xpaset -p ds9 grid numerics fontsize 12
xpaset -p ds9 grid numerics color red
xpaset -p ds9 grid numerics gap1 10
xpaset -p ds9 grid numerics gap2 10
xpaset -p ds9 grid numerics type exterior
xpaset -p ds9 grid numerics vertical yes

xpaset -p ds9 grid title yes
xpaset -p ds9 grid title text {Hello World}
xpaset -p ds9 grid title def yes
xpaset -p ds9 grid title gap 10
xpaset -p ds9 grid title font courier
xpaset -p ds9 grid title fontweight bold
xpaset -p ds9 grid title fontslant roman
xpaset -p ds9 grid title fontsize 12
xpaset -p ds9 grid title color red

xpaset -p ds9 grid labels yes
xpaset -p ds9 grid labels text1 {Hello World}
xpaset -p ds9 grid labels def1 yes
xpaset -p ds9 grid labels gap1 10
xpaset -p ds9 grid labels text2 {Hello World}
xpaset -p ds9 grid labels def2 yes
xpaset -p ds9 grid labels gap2 10
xpaset -p ds9 grid labels font courier
xpaset -p ds9 grid labels fontweight bold
xpaset -p ds9 grid labels fontslant roman
xpaset -p ds9 grid labels fontsize 12
xpaset -p ds9 grid labels color red

xpaset -p ds9 grid save foo.grd
xpaset -p ds9 grid load foo.grd
xpaset -p ds9 grid reset

xpaset -p ds9 grid no
xpaset -p ds9 grid close

testit $tt
fi

tt="header"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 header
xpaset -p ds9 header save foo.txt
xpaset -p ds9 header close
xpaset -p ds9 header 1
xpaset -p ds9 header close 1

testit $tt
fi

tt="height"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 height >> /dev/null
xpaset -p ds9 height 443

testit $tt
fi

tt="iconify"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 iconify >> ${tt}.out
xpaset -p ds9 iconify
xpaset -p ds9 iconify yes
xpaset -p ds9 iconify no

testit $tt
fi

tt="iis"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 iis filename >> ${tt}.out
xpaget ds9 iis filename 1 >> ${tt}.out
xpaset -p ds9 iis filename foo.fits
xpaset -p ds9 iis filename foo.fits 1

testit $tt
fi

tt="iexam"
if [ "$1" = "$tt" ]; then
echo "$tt..."
echo "Select coordinate point:"
xpaget ds9 iexam coordinate wcs fk5 degrees
echo "  ok"
sleep $delay
echo "Press key:"
xpaget ds9 iexam key coordinate wcs fk5 degrees
echo "  ok"
sleep $delay
echo "Press either:"
xpaget ds9 iexam any coordinate wcs fk5 degrees
echo "  ok"
sleep $delay
echo "Select value point:"
xpaget ds9 iexam data
echo "  ok"
sleep $delay
echo "Press key:"
xpaget ds9 iexam key data
echo "  ok"
sleep $delay
echo "Press any:"
xpaget ds9 iexam any data
echo "  ok"
echo "Macro string:"
xpaget ds9 iexam any 'Click at $x,$y in file $filename'
echo "  ok"
sleep $delay

testit $tt
fi

tt="jpeg"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt/jpg..."
xpaset -p ds9 frame new
xpaset -p ds9 jpeg photo/rose.jpeg
cat photo/rose.jpeg | xpaset ds9 jpeg
xpaget ds9 jpeg > /dev/null
xpaset -p ds9 frame delete

xpaset -p ds9 jpeg new photo/rose.jpeg
xpaset -p ds9 jpeg slice photo/rose.jpeg
xpaset -p ds9 frame delete

testit $tt
fi

tt="lock"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 lock frame >> ${tt}.out
xpaget ds9 lock crosshair >> ${tt}.out
xpaget ds9 lock crop >> ${tt}.out
xpaget ds9 lock slice >> ${tt}.out
xpaget ds9 lock bin >> ${tt}.out
xpaget ds9 lock axes >> ${tt}.out
xpaget ds9 lock scale >> ${tt}.out
xpaget ds9 lock scalelimits >> ${tt}.out
xpaget ds9 lock colorbar >> ${tt}.out
xpaget ds9 lock block >> ${tt}.out
xpaget ds9 lock smooth >> ${tt}.out
xpaset -p ds9 fits new data/img.fits
xpaset -p ds9 tile
xpaset -p ds9 mode crosshair
xpaset -p ds9 lock frame wcs
xpaset -p ds9 lock frame none
xpaset -p ds9 lock crosshair wcs
xpaset -p ds9 crosshair 13:29:56 +47:11:38 wcs fk5
xpaset -p ds9 lock crosshair none
xpaset -p ds9 lock crop wcs
xpaset -p ds9 lock crop none
xpaset -p ds9 lock slice wcs
xpaset -p ds9 lock slice none
xpaset -p ds9 lock bin yes
xpaset -p ds9 lock bin no
xpaset -p ds9 lock axes yes
xpaset -p ds9 lock axes no
xpaset -p ds9 lock scale yes
xpaset -p ds9 lock scale no
xpaset -p ds9 lock scalelimits yes
xpaset -p ds9 lock scalelimits no
xpaset -p ds9 lock colorbar yes
xpaset -p ds9 lock colorbar no
xpaset -p ds9 lock smooth yes
xpaset -p ds9 lock smooth no
xpaset -p ds9 mode none
xpaset -p ds9 frame delete
xpaset -p ds9 wcs align no
xpaset -p ds9 scale zscale

testit $tt
fi

tt="lower"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 lower
xpaset -p ds9 raise

testit $tt
fi

tt="magnifier"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 magnifier color >> ${tt}.out
xpaget ds9 magnifier zoom >> ${tt}.out
xpaget ds9 magnifier cursor >> ${tt}.out
xpaget ds9 magnifier region >> ${tt}.out
xpaset -p ds9 magnifier color white
xpaset -p ds9 magnifier zoom 4
xpaset -p ds9 magnifier cursor yes
xpaset -p ds9 magnifier region yes

testit $tt
fi

tt="mask"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 mask color >> ${tt}.out
xpaget ds9 mask mark >> ${tt}.out
xpaget ds9 mask transparency >> ${tt}.out
xpaset -p ds9 mask open
xpaset -p ds9 mask color cyan
xpaset -p ds9 mask clear
xpaset -p ds9 mask close
sleep $delay

testit $tt
fi

tt="match"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 fits new data/img.fits
xpaset -p ds9 tile
xpaset -p ds9 mode crosshair
xpaset -p ds9 match frame wcs
xpaset -p ds9 match frame image
xpaset -p ds9 match crosshair wcs
xpaset -p ds9 match crop wcs
xpaset -p ds9 match slice wcs
xpaset -p ds9 match bin
xpaset -p ds9 match axes
xpaset -p ds9 match scale
xpaset -p ds9 match scalelimits
xpaset -p ds9 match colorbar
xpaset -p ds9 match block
xpaset -p ds9 match smooth
xpaset -p ds9 frame delete
xpaset -p ds9 mode none
xpaset -p ds9 scale zscale

testit $tt
fi

tt="mecube"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 frame new
xpaset -p ds9 mecube mecube/float.fits
cat mecube/float.fits | xpaset ds9 mecube
xpaget ds9 mecube > /dev/null
xpaset -p ds9 frame delete

xpaset -p ds9 cube close
testit $tt
fi

tt="minmax"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 minmax >> ${tt}.out
xpaget ds9 minmax mode >> ${tt}.out
xpaget ds9 minmax interval >> ${tt}.out
xpaset -p ds9 minmax scan
xpaset -p ds9 minmax mode scan
xpaset -p ds9 minmax interval 100

testit $tt
fi

tt="mode"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 mode >> ${tt}.out
xpaset -p ds9 mode none
xpaset -p ds9 mode region
# backward compatibility
xpaset -p ds9 mode pointer
xpaset -p ds9 mode crosshair
xpaset -p ds9 mode colorbar
xpaset -p ds9 mode pan
xpaset -p ds9 mode zoom
xpaset -p ds9 mode rotate
xpaset -p ds9 mode catalog
xpaset -p ds9 mode examine
xpaset -p ds9 mode none

testit $tt
fi

tt="mosaic"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 frame new
xpaset -p ds9 mosaic mosaic/mosaicimage.fits
xpaget ds9 mosaic > /dev/null
xpaset -p ds9 frame clear
xpaset -p ds9 mosaic wcs mosaic/mosaicimage.fits
xpaset -p ds9 frame clear
cat mosaic/mosaicimage.fits | xpaset ds9 mosaic wcs
xpaset -p ds9 frame clear
xpaset -p ds9 mosaic iraf mosaic/mosaicimage.fits
xpaset -p ds9 frame clear
cat mosaic/mosaicimage.fits | xpaset ds9 mosaic iraf
xpaset -p ds9 frame delete

xpaset -p ds9 mosaic new mosaic/mosaicimage.fits
xpaset -p ds9 mosaic mask mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

testit $tt
fi

tt="mosaicimage"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 frame new
xpaset -p ds9 mosaicimage mosaic/mosaicimage.fits
xpaget ds9 mosaicimage > /dev/null
xpaset -p ds9 frame clear
xpaset -p ds9 mosaicimage wcs mosaic/mosaicimage.fits
xpaset -p ds9 frame clear
cat mosaic/mosaicimage.fits | xpaset ds9 mosaicimage wcs
xpaset -p ds9 frame clear
xpaset -p ds9 mosaicimage iraf mosaic/mosaicimage.fits
xpaset -p ds9 frame clear
cat mosaic/mosaicimage.fits | xpaset ds9 mosaicimage iraf
xpaset -p ds9 frame clear
xpaset -p ds9 mosaicimage wfpc2 mosaic/hst.fits
xpaset -p ds9 frame clear
cat mosaic/hst.fits | xpaset ds9 mosaicimage wfpc2
xpaset -p ds9 frame delete

xpaset -p ds9 mosaicimage new mosaic/mosaicimage.fits
xpaset -p ds9 mosaicimage mask mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

testit $tt
fi

# backward compatibility
tt="mosaicwcs"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt...backward compatibility..."
xpaset -p ds9 frame new
xpaset -p ds9 mosaicwcs mosaic/mosaicimage.fits
xpaget ds9 mosaicwcs > /dev/null
xpaset -p ds9 frame clear
cat mosaic/mosaicimage.fits | xpaset ds9 mosaicwcs
xpaset -p ds9 frame delete

xpaset -p ds9 mosaicwcs new mosaic/mosaicimage.fits
xpaset -p ds9 mosaicwcs mask mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

testit $tt
fi

# backward compatibility
tt="mosaiciraf"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt...backward compatibility..."
xpaset -p ds9 frame new
xpaset -p ds9 mosaiciraf mosaic/mosaicimage.fits
xpaset -p ds9 frame clear
cat mosaic/mosaicimage.fits | xpaset ds9 mosaiciraf
xpaset -p ds9 frame delete

xpaset -p ds9 mosaiciraf new mosaic/mosaicimage.fits
xpaset -p ds9 mosaiciraf mask mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

testit $tt
fi

# backward compatibility
tt="mosaicimagewcs"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt...backward compatibility..."
xpaset -p ds9 frame new
xpaset -p ds9 mosaicimagewcs mosaic/mosaicimage.fits
xpaget ds9 mosaicimagewcs > /dev/null
xpaset -p ds9 frame clear
cat mosaic/mosaicimage.fits | xpaset ds9 mosaicimagewcs
xpaset -p ds9 frame delete

xpaset -p ds9 mosaicimagewcs new mosaic/mosaicimage.fits
xpaset -p ds9 mosaicimagewcs mask mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

testit $tt
fi

# backward compatibility
tt="mosaicimageiraf"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt...backward compatibility..."
xpaset -p ds9 frame new
xpaset -p ds9 mosaicimageiraf mosaic/mosaicimage.fits
xpaset -p ds9 frame clear
cat mosaic/mosaicimage.fits | xpaset ds9 mosaicimageiraf
xpaset -p ds9 frame delete

xpaset -p ds9 mosaicimageiraf new mosaic/mosaicimage.fits
xpaset -p ds9 mosaicimageiraf mask mosaic/mosaicimage.fits
xpaset -p ds9 frame delete

testit $tt
fi

# backward compatibility
tt="mosaicimagewfpc2"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt...backward compatibility..."
xpaset -p ds9 frame new
xpaset -p ds9 mosaicimage wfpc2 mosaic/hst.fits
xpaset -p ds9 frame clear
cat mosaic/hst.fits | xpaset ds9 mosaicimagewfpc2
xpaset -p ds9 frame delete

testit $tt
fi

# movie will fail if moved from corner
tt="movie"
if [ "$1" = "$tt" ]; then
echo -n "$tt/savempeg..."
xpaset -p ds9 width 715
xpaset -p ds9 height 450
xpaset -p ds9 movie foo.mpg
xpaset -p ds9 movie frame foo.mpg
xpaset -p ds9 movie slice foo.mpg
xpaset -p ds9 frame new 3d
xpaset -p ds9 movie 3d foo.mpg number 1 azfrom 0 azto 0 elfrom 0 elto 0 slfrom 1 slto 1 repeat 1
xpaset -p ds9 frame delete

# backward compatibility
xpaset -p ds9 savempeg foo.mpg

xpaset -p ds9 3d close
xpaset -p ds9 cube close
testit $tt
fi

tt="multiframe"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt/memf..."
xpaset -p ds9 frame new
xpaset -p ds9 multiframe mecube/float.fits
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete

testit $tt
fi

tt="nameserver"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 nameserver open
xpaset -p ds9 nameserver close
xpaset -p ds9 nameserver m51
xpaget ds9 nameserver >> ${tt}.out
xpaget ds9 nameserver server >> ${tt}.out
xpaget ds9 nameserver skyformat >> ${tt}.out
xpaget ds9 nameserver m51 >> ${tt}.out
xpaset -p ds9 nameserver name m51
xpaset -p ds9 nameserver server simbad-cds
xpaset -p ds9 nameserver skyformat degrees
xpaset -p ds9 mode crosshair
xpaset -p ds9 nameserver crosshair
xpaset -p ds9 nameserver pan
xpaset -p ds9 nameserver close
xpaset -p ds9 mode none
xpaset -p ds9 frame reset

testit $tt
fi

tt="nan"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 nan >> ${tt}.out
xpaset -p ds9 nan blue
xpaset -p ds9 nan white

testit $tt
fi

tt="nrrd"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 frame new
xpaset -p ds9 nrrd nrrd/float_big_raw.nrrd
cat nrrd/float_big_raw.nrrd | xpaset ds9 nrrd
xpaget ds9 nrrd > /dev/null
xpaget ds9 nrrd big > /dev/null
xpaset -p ds9 frame delete

xpaset -p ds9 nrrd new nrrd/float_big_raw.nrrd
xpaset -p ds9 nrrd mask nrrd/float_big_raw.nrrd
xpaset -p ds9 frame delete

testit $tt
fi

tt="nvss"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 nvss open
xpaset -p ds9 nvss close
xpaset -p ds9 nvss size 30 30 arcsec
xpaget ds9 nvss size >> ${tt}.out
xpaset -p ds9 nvss save no
xpaget ds9 nvss save >> ${tt}.out
xpaset -p ds9 nvss frame new
xpaget ds9 nvss frame >> ${tt}.out
xpaset -p ds9 nvss update frame
xpaset -p ds9 nvss m51
xpaset -p ds9 nvss name m51
xpaget ds9 nvss name >> ${tt}.out
xpaset -p ds9 nvss name {}
xpaset -p ds9 nvss coord 13:29:52.37 +47:11:40.8 sexagesimal
xpaget ds9 nvss coord >> ${tt}.out
xpaset -p ds9 nvss update frame
xpaset -p ds9 mode crosshair
xpaset -p ds9 nvss update crosshair
xpaset -p ds9 nvss close
xpaset -p ds9 mode none
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete

testit $tt
fi

tt="orient"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 orient open
xpaset -p ds9 orient none
xpaset -p ds9 orient x
xpaset -p ds9 orient y
xpaset -p ds9 orient xy
xpaset -p ds9 orient close
xpaget ds9 orient >> ${tt}.out
xpaset -p ds9 frame reset

testit $tt
fi

tt="pagesetup"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 pspagesetup orient >> ${tt}.out
xpaget ds9 pspagesetup scale >> ${tt}.out
xpaget ds9 pspagesetup size >> ${tt}.out
xpaset -p ds9 pspagesetup orient portrait
xpaset -p ds9 pspagesetup scale 100
xpaset -p ds9 pspagesetup size letter

testit $tt
fi

tt="pan"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 pan physical >> ${tt}.out
xpaget ds9 pan wcs fk5 sexagesimal >> ${tt}.out
xpaset -p ds9 pan open
xpaset -p ds9 pan 100 100 image
xpaset -p ds9 pan to 13:29:55.666 +47:12:16.29 wcs fk5
xpaset -p ds9 pan close
xpaset -p ds9 frame reset

testit $tt
fi

tt="pixeltable"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 pixeltable >> ${tt}.out
xpaset -p ds9 pixeltable
xpaset -p ds9 pixeltable yes
xpaset -p ds9 pixeltable no
xpaset -p ds9 pixeltable open
xpaset -p ds9 pixeltable close

testit $tt
fi

tt="plot"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo "$tt..."

echo -n " empty plot..."
xpaset -p ds9 plot
xpaget ds9 plot >> ${tt}.out
sleep $delay
xpaset -p ds9 plot close

xpaset -p ds9 plot new
xpaset -p ds9 plot bar
xpaset -p ds9 plot new bar
xpaset -p ds9 plot scatter
xpaset -p ds9 plot new scatter
sleep $delay
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

xpaset -p ds9 plot new name foo
xpaset -p ds9 plot new name foo line
xpaset -p ds9 plot new name foo bar
xpaset -p ds9 plot new name foo scatter
sleep $delay
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

xpaset -p ds9 plot new name foo "{The Title}" "{X Axis}" "{Y Axis}" xy
xpaset -p ds9 plot new name foo line "{The Title}" "{X Axis}" "{Y Axis}" xy
xpaset -p ds9 plot new name foo bar "{The Title}" "{X Axis}" "{Y Axis}" xy
xpaset -p ds9 plot new name foo scatter "{The Title}" "{X Axis}" "{Y Axis}" xy
sleep $delay
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
echo "PASSED"

echo -n " data..."
xpaset -p ds9 plot new
cat plot/xy.dat | xpaset ds9 plot data xy
xpaset -p ds9 plot new name foo
cat plot/xy.dat | xpaset ds9 plot foo data xy
sleep $delay
xpaset -p ds9 plot close
xpaset -p ds9 plot close
echo "PASSED"

echo -n " save/load..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot save foo.dat
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " clear..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
sleep $delay
xpaset -p ds9 plot clear
xpaset -p ds9 plot close
echo "PASSED"

echo -n " duplicate..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot dup
xpaset -p ds9 plot duplicate 1
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " stats..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaget ds9 plot stats >> /dev/null
xpaset -p ds9 plot stats
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " list..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaget ds9 plot list >> /dev/null
xpaset -p ds9 plot list
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " saveconfig/loadconfig..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot saveconfig foo.plt
xpaset -p ds9 plot loadconfig foo.plt
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " pagesetup..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot pagesetup orient portrait
xpaset -p ds9 plot pagesetup size letter
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " print..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
#xpaset -p ds9 plot print
xpaset -p ds9 plot print destination printer
xpaset -p ds9 plot print command "lp"
xpaset -p ds9 plot print filename "foo.ps"
xpaset -p ds9 plot print color rgb
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " mode..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaget ds9 plot mode >> ${tt}.out
xpaset -p ds9 plot mode pointer
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " axis..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot axis x grid no
xpaset -p ds9 plot axis x grid yes
xpaset -p ds9 plot axis x log yes
xpaset -p ds9 plot axis x log no
xpaset -p ds9 plot axis x flip yes
xpaset -p ds9 plot axis x flip no
xpaset -p ds9 plot axis x auto no
xpaset -p ds9 plot axis x min 1
xpaset -p ds9 plot axis x max 100
xpaset -p ds9 plot axis x format "%f"
xpaset -p ds9 plot axis y grid no
xpaset -p ds9 plot axis y grid yes
xpaset -p ds9 plot axis y log yes
xpaset -p ds9 plot axis y log no
xpaset -p ds9 plot axis y flip yes
xpaset -p ds9 plot axis y flip no
xpaset -p ds9 plot axis y auto no
xpaset -p ds9 plot axis y min 1
xpaset -p ds9 plot axis y max 100
xpaset -p ds9 plot axis y format "%f"
xpaget ds9 plot axis x grid >> ${tt}.out
xpaget ds9 plot axis x log >> ${tt}.out
xpaget ds9 plot axis x flip >> ${tt}.out
xpaget ds9 plot axis x auto >> ${tt}.out
xpaget ds9 plot axis x min >> ${tt}.out
xpaget ds9 plot axis x max >> ${tt}.out
xpaget ds9 plot axis x format >> ${tt}.out
xpaget ds9 plot axis y grid >> ${tt}.out
xpaget ds9 plot axis y log >> ${tt}.out
xpaget ds9 plot axis y flip >> ${tt}.out
xpaget ds9 plot axis y auto >> ${tt}.out
xpaget ds9 plot axis y min >> ${tt}.out
xpaget ds9 plot axis y max >> ${tt}.out
xpaget ds9 plot axis y format >> ${tt}.out
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " legend..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaget ds9 plot legend >> ${tt}.out
xpaget ds9 plot legend position >> ${tt}.out
xpaset -p ds9 plot legend yes
xpaset -p ds9 plot legend position left
xpaset -p ds9 plot legend position right
xpaset -p ds9 plot legend position bottom
xpaset -p ds9 plot legend position top
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " font..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot title "{This is a Title}"
xpaset -p ds9 plot title xaxis "{X Axis}"
xpaset -p ds9 plot title yaxis "{Y Axis}"
xpaset -p ds9 plot title legend "{This is the Legend}"
xpaset -p ds9 plot legend yes
xpaget ds9 plot font title font >> ${tt}.out
xpaget ds9 plot font title size >> ${tt}.out
xpaget ds9 plot font title weight >> ${tt}.out
xpaget ds9 plot font title slant >> ${tt}.out
xpaget ds9 plot font labels font >> ${tt}.out
xpaget ds9 plot font labels size >> ${tt}.out
xpaget ds9 plot font labels weight >> ${tt}.out
xpaget ds9 plot font labels slant >> ${tt}.out
xpaget ds9 plot font numbers font >> ${tt}.out
xpaget ds9 plot font numbers size >> ${tt}.out
xpaget ds9 plot font numbers weight >> ${tt}.out
xpaget ds9 plot font numbers slant >> ${tt}.out
xpaget ds9 plot font legendtitle font >> ${tt}.out
xpaget ds9 plot font legendtitle size >> ${tt}.out
xpaget ds9 plot font legendtitle weight >> ${tt}.out
xpaget ds9 plot font legendtitle slant >> ${tt}.out
xpaget ds9 plot font legend font >> ${tt}.out
xpaget ds9 plot font legend size >> ${tt}.out
xpaget ds9 plot font legend weight >> ${tt}.out
xpaget ds9 plot font legend slant >> ${tt}.out
xpaset -p ds9 plot font title font times
xpaset -p ds9 plot font title size 12
xpaset -p ds9 plot font title weight bold
xpaset -p ds9 plot font title slant roman
xpaset -p ds9 plot font labels font times
xpaset -p ds9 plot font labels size 12
xpaset -p ds9 plot font labels weight bold
xpaset -p ds9 plot font labels slant roman
xpaset -p ds9 plot font numbers font times
xpaset -p ds9 plot font numbers size 12
xpaset -p ds9 plot font numbers weight bold
xpaset -p ds9 plot font numbers slant roman
xpaset -p ds9 plot font legendtitle font times
xpaset -p ds9 plot font legendtitle size 12
xpaset -p ds9 plot font legendtitle weight bold
xpaset -p ds9 plot font legendtitle slant roman
xpaset -p ds9 plot font legend font times
xpaset -p ds9 plot font legend size 12
xpaset -p ds9 plot font legend weight bold
xpaset -p ds9 plot font legend slant roman
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " title..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot title "{This is a Title}"
xpaset -p ds9 plot title x "{X Axis}"
xpaset -p ds9 plot title y "{Y Axis}"
xpaset -p ds9 plot title legend "{This is the Legend}"
xpaget ds9 plot title >> ${tt}.out
xpaget ds9 plot title x >> ${tt}.out
xpaget ds9 plot title y >> ${tt}.out
xpaget ds9 plot title legend >> ${tt}.out
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " barmode..."
xpaset -p ds9 plot new bar
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot load plot/xyey.dat xyey
xpaget ds9 plot barmode >> ${tt}.out
xpaset -p ds9 plot barmode normal
xpaset -p ds9 plot barmode stacked
xpaset -p ds9 plot barmode aligned
xpaset -p ds9 plot barmode overlap
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " show..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaget ds9 plot show >> ${tt}.out
xpaset -p ds9 plot show no
xpaset -p ds9 plot show yes
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " shape..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaget ds9 plot shape >> ${tt}.out
xpaget ds9 plot shape fill >> ${tt}.out
xpaget ds9 plot shape color >> ${tt}.out
xpaset -p ds9 plot shape circle
xpaset -p ds9 plot shape square
xpaset -p ds9 plot shape diamond
xpaset -p ds9 plot shape plus
xpaset -p ds9 plot shape splus
xpaset -p ds9 plot shape scross
xpaset -p ds9 plot shape triangle
xpaset -p ds9 plot shape arrow
xpaset -p ds9 plot shape circle
xpaset -p ds9 plot shape fill no
xpaset -p ds9 plot shape fill yes
xpaset -p ds9 plot shape color cyan
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " smooth..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaget ds9 plot smooth >> ${tt}.out
xpaset -p ds9 plot smooth step
xpaset -p ds9 plot smooth linear
xpaset -p ds9 plot smooth cubic
xpaset -p ds9 plot smooth quadratic
xpaset -p ds9 plot smooth catrom
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " color..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaget ds9 plot color >> ${tt}.out
xpaset -p ds9 plot color magenta
xpaset -p ds9 plot color "#2C8"
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " width..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaget ds9 plot width >> ${tt}.out
xpaget ds9 plot dash >> ${tt}.out
xpaset -p ds9 plot width 2
xpaset -p ds9 plot dash yes
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " error..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xyexey.dat xyexey
xpaget ds9 plot error >> ${tt}.out
xpaget ds9 plot error cap >> ${tt}.out
xpaget ds9 plot error color >> ${tt}.out
xpaget ds9 plot error width >> ${tt}.out
xpaset -p ds9 plot error no
xpaset -p ds9 plot error yes
xpaset -p ds9 plot error cap yes
xpaset -p ds9 plot error cap no
xpaset -p ds9 plot error color blue
xpaset -p ds9 plot error width 2
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " name..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaget ds9 plot name >> ${tt}.out
xpaset -p ds9 plot legend yes
xpaset -p ds9 plot name "{This is a test}"
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " select..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot load plot/xyey.dat xyey
xpaget ds9 plot select >> ${tt}.out
xpaset -p ds9 plot select 2
xpaset -p ds9 plot dataset 1
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " backward compatibility graph..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot graph grid x no
xpaset -p ds9 plot graph grid y yes
xpaset -p ds9 plot graph log x no
xpaset -p ds9 plot graph log y no
xpaset -p ds9 plot graph scale linearlinear
xpaset -p ds9 plot graph flip x no
xpaset -p ds9 plot graph flip y no
xpaset -p ds9 plot graph range x min 1
xpaset -p ds9 plot graph range x max 100
xpaset -p ds9 plot graph range y min 1
xpaset -p ds9 plot graph range y max 100
xpaset -p ds9 plot graph range x auto yes
xpaset -p ds9 plot graph range y auto yes
xpaset -p ds9 plot graph format x {}
xpaset -p ds9 plot graph format y {}
xpaset -p ds9 plot graph labels title "{The Title}"
xpaset -p ds9 plot graph labels xaxis "{X Axis}"
xpaset -p ds9 plot graph labels yaxis "{Y Axis}"
xpaset -p ds9 plot graph type line
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " backward compatibility view..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot view discrete yes
xpaset -p ds9 plot view line yes
xpaset -p ds9 plot view step yes
xpaset -p ds9 plot view quadratic yes
xpaset -p ds9 plot view errorbar yes
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " backward compatibility line..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot line discrete cross
xpaset -p ds9 plot line linear width 2
xpaset -p ds9 plot line linear dash yes
xpaset -p ds9 plot line step width 2
xpaset -p ds9 plot line step dash yes
xpaset -p ds9 plot line quadratic width 2
xpaset -p ds9 plot line quadratic dash yes
xpaset -p ds9 plot line errorbar width 2
xpaset -p ds9 plot line errorbar style 1
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

echo -n " backward compatibility color..."
xpaset -p ds9 plot new
xpaset -p ds9 plot load plot/xy.dat xy
xpaset -p ds9 plot color discrete red
xpaset -p ds9 plot color line green
xpaset -p ds9 plot color step blue
xpaset -p ds9 plot color quadratic cyan
xpaset -p ds9 plot color errorbar magenta
sleep $delay
xpaset -p ds9 plot close
echo "PASSED"

testit $tt
fi

tt="png"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 frame new
xpaset -p ds9 png photo/rose.png
cat photo/rose.png | xpaset ds9 png
xpaget ds9 png > /dev/null
xpaset -p ds9 frame delete

xpaset -p ds9 png new photo/rose.png
xpaset -p ds9 png slice photo/rose.png
xpaset -p ds9 frame delete

testit $tt
fi

tt="prefs"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo "$tt..."
xpaset -p ds9 prefs clear

# backward compatibility
xpaget ds9 prefs bgcolor >> ${tt}.out
xpaget ds9 prefs nancolor >> ${tt}.out
xpaget ds9 prefs threads >> ${tt}.out
xpaget ds9 prefs irafalign >> ${tt}.out
xpaset -p ds9 prefs bgcolor white
xpaset -p ds9 prefs nancolor white
xpaset -p ds9 prefs threads 4
xpaset -p ds9 prefs irafalign yes

testit $tt
fi

tt="preserve"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 preserve pan >> ${tt}.out
xpaget ds9 preserve regions >> ${tt}.out
xpaset -p ds9 preserve pan no
xpaset -p ds9 preserve regions no

testit $tt
fi

# can only be run local
tt="print"
if [ "$1" = "$tt" ]; then
echo -n "$tt..."
xpaget ds9 psprint destination >> ${tt}.out
xpaget ds9 psprint command >> ${tt}.out
xpaget ds9 psprint color >> ${tt}.out
xpaget ds9 psprint level >> ${tt}.out
xpaget ds9 psprint resolution >> ${tt}.out
#xpaset -p ds9 psprint
xpaset -p ds9 psprint destination printer
xpaset -p ds9 psprint command lp
xpaset -p ds9 psprint filename ds9.ps
xpaset -p ds9 psprint color rgb
xpaset -p ds9 psprint level 2
xpaset -p ds9 psprint resolution 150

testit $tt
fi

tt="raise"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 lower
xpaset -p ds9 raise

testit $tt
fi

tt="regions"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt/region..."
xpaset -p ds9 regions delete all
xpaset -p ds9 regions system physical
xpaset -p ds9 regions sky fk5
xpaset -p ds9 regions skyformat degrees
echo "physical;circle(957,1027,40) # tag=foo" | xpaset ds9 regions

xpaget ds9 regions >> ${tt}.out
xpaget ds9 regions epsilon >> ${tt}.out
xpaget ds9 regions show >> ${tt}.out
xpaget ds9 regions showtext >> ${tt}.out
xpaget ds9 regions centroid auto >> ${tt}.out
xpaget ds9 regions centroid radius >> ${tt}.out
xpaget ds9 regions centroid iteration >> ${tt}.out
xpaget ds9 regions -format pros -system wcs -sky fk5 -skyformat sexagesimal -delim nl -prop edit 1 -group foo -strip yes >> ${tt}.out
xpaget ds9 regions include >> ${tt}.out
xpaget ds9 regions exclude >> ${tt}.out
xpaget ds9 regions source >> ${tt}.out
xpaget ds9 regions background >> ${tt}.out
xpaget ds9 regions selected >> ${tt}.out

xpaget ds9 regions format >> ${tt}.out
xpaget ds9 regions system >> ${tt}.out
xpaget ds9 regions sky >> ${tt}.out
xpaget ds9 regions skyformat >> ${tt}.out
xpaget ds9 regions strip >> ${tt}.out
xpaget ds9 regions shape >> ${tt}.out
xpaget ds9 regions color >> ${tt}.out
xpaget ds9 regions width >> ${tt}.out
xpaget ds9 regions delim >> ${tt}.out
xpaget ds9 regions groups >> ${tt}.out

echo "image; circle 100 100 20" | xpaset ds9 regions
echo "fk5; circle 13:29:55 47:11:50 .5'" | xpaset ds9 regions
echo "physical; ellipse 100 100 20 40" | xpaset ds9 regions
echo "box 100 100 20 40 25" | xpaset ds9 regions
echo "image; line 100 100 200 400" | xpaset ds9 regions
echo "physical; ruler 200 300 200 400" | xpaset ds9 regions
echo "image; text 100 100 # text={Hello, World}" | xpaset ds9 regions
echo "fk4; boxcircle point 13:29:55 47:11:50" | xpaset ds9 regions
xpaset -p ds9 regions delete all

xpaset -p ds9 regions regions/ds9.physical.reg
xpaset -p ds9 regions delete all
xpaset -p ds9 regions load regions/ds9.physical.reg
xpaset -p ds9 regions delete all
xpaset -p ds9 regions load 'regions/ds9.fk5*.reg'
xpaset -p ds9 regions delete all
xpaset -p ds9 regions load all regions/ds9.physical.reg
xpaset -p ds9 regions save foo.reg
xpaset -p ds9 regions list
xpaset -p ds9 regions list close
xpaset -p ds9 regions delete all

xpaset -p ds9 regions epsilon 5
xpaset -p ds9 regions show yes
xpaset -p ds9 regions showtext yes
xpaset -p ds9 regions centroid
xpaset -p ds9 regions centroid auto no
xpaset -p ds9 regions centroid radius 10
xpaset -p ds9 regions centroid iteration 30
#xpaset -p ds9 regions getinfo
xpaset -p ds9 regions move front
xpaset -p ds9 regions move back
xpaset -p ds9 regions select all
xpaset -p ds9 regions select none
xpaset -p ds9 regions delete all
xpaset -p ds9 regions delete select
xpaset -p ds9 regions format ds9
xpaset -p ds9 regions system physical
xpaset -p ds9 regions sky fk5
xpaset -p ds9 regions skyformat degrees
xpaset -p ds9 regions delim nl
xpaset -p ds9 regions strip no
xpaset -p ds9 regions shape circle
xpaset -p ds9 regions color green
xpaset -p ds9 regions width 1
xpaset -p ds9 regions edit yes
xpaset -p ds9 regions include
xpaset -p ds9 regions command {circle 100 100 20}

xpaset -p ds9 regions group new
xpaset -p ds9 regions group foo new
xpaset -p ds9 regions group foo update
xpaset -p ds9 regions group foo select
xpaset -p ds9 regions group foo color red
xpaset -p ds9 regions group foo copy
xpaset -p ds9 regions group foo delete
xpaset -p ds9 regions group foo cut
xpaset -p ds9 regions group foo font {time 14 bold}
xpaset -p ds9 regions group foo move 100 100
xpaset -p ds9 regions group foo movefront
xpaset -p ds9 regions group foo moveback
xpaset -p ds9 regions group foo property delete no

xpaset -p ds9 regions delete all

xpaset -p ds9 regions command {circle 100 100 20}
xpaset -p ds9 regions select all
xpaset -p ds9 regions copy
xpaset -p ds9 regions cut
xpaset -p ds9 regions paste
xpaset -p ds9 regions undo
xpaset -p ds9 regions delete all

xpaset -p ds9 regions load regions/ds9.physical.reg
xpaset -p ds9 regions select all
xpaset -p ds9 regions composite
xpaset -p ds9 regions desolve
xpaset -p ds9 regions delete all

xpaset -p ds9 regions command {circle 100 100 20}
xpaset -p ds9 regions savetemplate foo.tpl
xpaset -p ds9 regions delete all
xpaset -p ds9 regions template foo.tpl
xpaset -p ds9 regions delete all
xpaset -p ds9 regions template foo.tpl at 202.46963 47.19556 fk5
xpaset -p ds9 regions delete all

testit $tt
fi

tt="restore"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 backup foo.bck
xpaset -p ds9 restore foo.bck

testit $tt
fi

tt="rgb"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 rgb open
xpaset -p ds9 rgb close
xpaset -p ds9 rgb
xpaget ds9 rgb channel >> ${tt}.out
xpaget ds9 rgb view red >> ${tt}.out
xpaget ds9 rgb view green >> ${tt}.out
xpaget ds9 rgb view blue >> ${tt}.out
xpaget ds9 rgb system >> ${tt}.out
xpaget ds9 rgb lock wcs >> ${tt}.out
xpaget ds9 rgb lock crop >> ${tt}.out
xpaget ds9 rgb lock slice >> ${tt}.out
xpaget ds9 rgb lock bin >> ${tt}.out
xpaget ds9 rgb lock scale >> ${tt}.out
xpaget ds9 rgb lock scalelimits >> ${tt}.out
xpaget ds9 rgb lock colorbar >> ${tt}.out
xpaget ds9 rgb lock block >> ${tt}.out
xpaget ds9 rgb lock smooth >> ${tt}.out
xpaset -p ds9 rgb green
xpaset -p ds9 rgb channel blue
xpaset -p ds9 rgb view blue off
xpaset -p ds9 rgb system wcs
xpaset -p ds9 rgb lock wcs yes
xpaset -p ds9 rgb lock wcs no
xpaset -p ds9 rgb lock crop yes
xpaset -p ds9 rgb lock crop no
xpaset -p ds9 rgb lock slice yes
xpaset -p ds9 rgb lock slice no
xpaset -p ds9 rgb lock bin yes
xpaset -p ds9 rgb lock bin no
xpaset -p ds9 rgb lock scale yes
xpaset -p ds9 rgb lock scale no
xpaset -p ds9 rgb lock scalelimits yes
xpaset -p ds9 rgb lock scalelimits no
xpaset -p ds9 rgb lock colorbar yes
xpaset -p ds9 rgb lock colorbar no
xpaset -p ds9 rgb lock block yes
xpaset -p ds9 rgb lock block no
xpaset -p ds9 rgb lock smooth yes
xpaset -p ds9 rgb lock smooth no
xpaset -p ds9 rgb close
xpaset -p ds9 frame delete

testit $tt
fi

tt="rgbarray"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 frame new rgb
xpaset -p ds9 rgbarray rgbarray/float_big.rgb[dim=256,bitpix=-32,endian=big]
cat rgbarray/float_big.rgb | xpaset ds9 rgbarray -[dim=256,bitpix=-32,endian=big]
xpaget ds9 rgbarray big > /dev/null
xpaset -p ds9 frame delete

xpaset -p ds9 rgbarray new rgbarray/float_big.rgb[dim=256,bitpix=-32,endian=big]
xpaset -p ds9 frame delete

xpaset -p ds9 rgb close
testit $tt
fi

tt="rgbcube"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 frame new rgb
xpaset -p ds9 rgbcube rgbcube/float.fits
cat rgbcube/float.fits | xpaset ds9 rgbcube
xpaget ds9 rgbcube > /dev/null
xpaset -p ds9 frame delete

xpaset -p ds9 rgbcube new rgbcube/float.fits
xpaset -p ds9 frame delete

xpaset -p ds9 rgb close
testit $tt
fi

tt="rgbimage"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 frame new rgb
xpaset -p ds9 rgbimage mecube/float.fits
cat mecube/float.fits | xpaset ds9 rgbimage
xpaget ds9 rgbimage > /dev/null
xpaset -p ds9 frame delete

xpaset -p ds9 rgbimage new mecube/float.fits
xpaset -p ds9 frame delete

xpaset -p ds9 rgb close
testit $tt
fi

tt="rotate"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 rotate >> ${tt}.out
xpaset -p ds9 rotate open
xpaset -p ds9 rotate to 30
xpaset -p ds9 rotate 15
xpaset -p ds9 rotate close
xpaset -p ds9 frame reset

testit $tt
fi

tt="save"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo "$tt/savefits..."

echo -n " fits..."
xpaset -p ds9 save foo.fits
xpaset -p ds9 save fits foo.fits
xpaset -p ds9 save foo.fits image
xpaset -p ds9 save fits foo.fits image
xpaset -p ds9 save foo.fits slice
xpaset -p ds9 save fits foo.fits slice

xpaset -p ds9 frame new
xpaset -p ds9 fits fits/table.fits
xpaset -p ds9 save foo.fits
xpaset -p ds9 save fits foo.fits
xpaset -p ds9 save foo.fits image
xpaset -p ds9 save fits foo.fits image
xpaset -p ds9 save foo.fits table
xpaset -p ds9 save fits foo.fits table
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " rgbimage..."
xpaset -p ds9 frame new rgb
xpaset -p ds9 rgbimage mecube/float.fits
xpaset -p ds9 save rgbimage foo.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " rgbcube..."
xpaset -p ds9 frame new rgb
xpaset -p ds9 rgbcube rgbcube/float.fits
xpaset -p ds9 save rgbcube foo.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " mecube..."
xpaset -p ds9 frame new
xpaset -p ds9 mecube mecube/float.fits
xpaset -p ds9 save mecube foo.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " mosaicimage..."
xpaset -p ds9 frame new
xpaset -p ds9 mosaicimage mosaic/mosaicimage.fits
xpaset -p ds9 save mosaicimage foo.fits
xpaset -p ds9 frame delete
echo "PASSED"

echo -n " mosaic..."
xpaset -p ds9 frame new
xpaset -p ds9 mosaicimage mosaic/mosaicimage.fits
xpaset -p ds9 save mosaic foo.fits
xpaset -p ds9 frame delete
echo "PASSED"

# backward compatibility
echo -n " savefits..."
xpaset -p ds9 savefits foo.fits
echo "PASSED"

xpaset -p ds9 rgb close
xpaset -p ds9 cube close
testit $tt
fi

# movie will fail if moved from corner
tt="saveimage"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 saveimage fits foo.fits
xpaset -p ds9 saveimage foo.fits
xpaset -p ds9 saveimage eps foo.eps
xpaset -p ds9 saveimage foo.eps
#xpaset -p ds9 saveimage foo.gif
xpaset -p ds9 saveimage tiff foo.tiff none
xpaset -p ds9 saveimage foo.tiff
xpaset -p ds9 saveimage jpeg foo.jpeg 100
xpaset -p ds9 saveimage foo.jpeg
xpaset -p ds9 saveimage png foo.png
xpaset -p ds9 saveimage foo.png

# backward compatibility (6.2)
xpaset -p ds9 saveimage tiff none foo.tiff
xpaset -p ds9 saveimage jpeg 100 foo.jpeg
#xpaset -p ds9 saveimage mpeg foo.mpeg

testit $tt
fi

tt="scale"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 scale >> ${tt}.out
xpaget ds9 scale log exp >> ${tt}.out
xpaget ds9 scale limits >> ${tt}.out
xpaget ds9 scale mode >> ${tt}.out
xpaget ds9 scale scope >> ${tt}.out
xpaget ds9 scale datasec >> ${tt}.out
xpaget ds9 scale lock >> ${tt}.out
xpaget ds9 scale lock limits >> ${tt}.out
xpaset -p ds9 scale open
xpaset -p ds9 scale minmax
xpaset -p ds9 scale linear
xpaset -p ds9 scale log
xpaset -p ds9 scale pow
xpaset -p ds9 scale sqrt
xpaset -p ds9 scale squared
xpaset -p ds9 scale asinh
xpaset -p ds9 scale sinh
xpaset -p ds9 scale histequ
xpaset -p ds9 scale log exp 1000
xpaset -p ds9 scale log exp 10000
xpaset -p ds9 scale linear
xpaset -p ds9 scale minmax
xpaset -p ds9 scale zscale
xpaset -p ds9 scale zmax
xpaset -p ds9 scale user
xpaset -p ds9 scale mode zscale
xpaset -p ds9 scale mode zmax
xpaset -p ds9 scale mode 95
xpaset -p ds9 scale mode minmax
xpaset -p ds9 scale limits 0 100
xpaset -p ds9 scale global
xpaset -p ds9 scale local
xpaset -p ds9 scale scope global
xpaset -p ds9 scale scope local
xpaset -p ds9 scale mode minmax
xpaset -p ds9 scale linear
xpaset -p ds9 scale zscale
xpaset -p ds9 scale datasec yes
xpaset -p ds9 scale match
xpaset -p ds9 scale match limits
xpaset -p ds9 scale lock yes
xpaset -p ds9 scale lock no
xpaset -p ds9 scale lock limits yes
xpaset -p ds9 scale lock limits no
xpaset -p ds9 scale close

testit $tt
fi

# backward compatibility
tt="sfits"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt...backward compatibility..."
xpaset -p ds9 frame new
xpaset -p ds9 sfits sfits/float.hdr sfits/float.arr
xpaset -p ds9 frame delete

xpaset -p ds9 sfits new sfits/float.hdr sfits/float.arr
xpaset -p ds9 sfits slice sfits/float.hdr sfits/float.arr
xpaset -p ds9 sfits mask sfits/float.hdr sfits/float.arr
xpaset -p ds9 frame delete

testit $tt
fi

tt="single"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 single >> ${tt}.out
xpaset -p ds9 tile
xpaget ds9 single >> ${tt}.out
xpaset -p ds9 single
xpaget ds9 single >> ${tt}.out

testit $tt
fi

tt="shm"
if [ "$1" = "$tt" ]; then
echo -n "$tt...no test..."

testit $tt
fi

tt="sia"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 sia 2mass

xpaget ds9 sia >> ${tt}.out
xpaset -p ds9 sia clear
xpaset -p ds9 sia close

xpaset -p ds9 sia 2mass
xpaset -p ds9 sia name m51
xpaset -p ds9 sia coordinate 202.48 47.21 fk5
xpaset -p ds9 sia system wcs
xpaset -p ds9 sia sky fk5
xpaset -p ds9 sia skyformat degrees
xpaset -p ds9 sia size 22 22 arcmin
xpaset -p ds9 sia retrieve
xpaset -p ds9 sia save foo.xml
xpaset -p ds9 sia cancel
#xpaset -p ds9 sia print
xpaset -p ds9 sia close

testit $tt
fi

tt="skyview"
if [ "$1" = "$tt" ]; then
echo -n "$tt..."
xpaset -p ds9 skyview open
xpaset -p ds9 skyview close
#xpaset -p ds9 skyview survey sdssi
xpaget ds9 skyview survey >> ${tt}.out
xpaset -p ds9 skyview size 30 30 arcsec
xpaget ds9 skyview size >> ${tt}.out
xpaset -p ds9 skyview pixels 600 600
xpaget ds9 skyview pixels >> ${tt}.out
xpaset -p ds9 skyview save no
xpaget ds9 skyview save >> ${tt}.out
xpaset -p ds9 skyview frame new
xpaget ds9 skyview frame >> ${tt}.out
xpaset -p ds9 skyview update frame
xpaset -p ds9 skyview m51
xpaset -p ds9 skyview name m51
xpaget ds9 skyview name >> ${tt}.out
xpaset -p ds9 skyview name {}
xpaset -p ds9 skyview coord 13:29:55.301 +47:11:37.73 sexagesimal
xpaget ds9 skyview coord >> ${tt}.out
xpaset -p ds9 skyview update frame
xpaset -p ds9 mode crosshair
xpaset -p ds9 skyview update crosshair
xpaset -p ds9 skyview close
xpaset -p ds9 mode none
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete

testit $tt
fi

tt="sleep"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 sleep
xpaset -p ds9 sleep 2

testit $tt
fi

# backward compatibility
tt="smosaic"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt...backward compatibility...no test..."

testit $tt
fi

# backward compatibility
tt="smosaicwcs"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt...backward compatibility...no test..."

testit $tt
fi

# backward compatibility
tt="smosaiciraf"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt...backward compatibility...no test..."

testit $tt
fi

tt="smooth"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 smooth >> ${tt}.out
xpaget ds9 smooth function >> ${tt}.out
xpaget ds9 smooth radius >> ${tt}.out
xpaset -p ds9 smooth open
xpaset -p ds9 smooth
xpaset -p ds9 smooth yes
xpaset -p ds9 smooth function tophat
xpaset -p ds9 smooth radius 5
xpaset -p ds9 smooth match
xpaset -p ds9 smooth lock yes
xpaset -p ds9 smooth lock no
xpaset -p ds9 smooth no
xpaset -p ds9 smooth close

testit $tt
fi

# can only be run local
tt="source"
if [ "$1" = "$tt" ]; then
echo -n "$tt..."
xpaset -p ds9 source aux/source.tcl

testit $tt
fi

# backward compatibility
tt="srgbcube"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt...backward compatibility..."
xpaset -p ds9 frame new rgb
xpaset -p ds9 srgbcube srgbcube/float.hdr srgbcube/float.arr
xpaset -p ds9 frame delete

xpaset -p ds9 srgbcube new srgbcube/float.hdr srgbcube/float.arr
xpaset -p ds9 frame delete

xpaset -p ds9 rgb close
testit $tt
fi

# can only be run local
tt="tcl"
if [ "$1" = "$tt" ]; then
echo -n "$tt..."
cat aux/hello.tcl | xpaset ds9 tcl
xpaset -p ds9 tcl 'puts "Hello Again, World"'

testit $tt
fi

tt="threads"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 threads >> ${tt}.out
xpaset -p ds9 threads 4

testit $tt
fi

tt="tiff"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt/tif..."
xpaset -p ds9 frame new
xpaset -p ds9 tiff photo/rose.tiff
cat photo/rose.tiff | xpaset ds9 tiff
xpaget ds9 tiff > /dev/null
xpaget ds9 tiff jpeg > /dev/null
xpaset -p ds9 frame delete

xpaset -p ds9 tiff new photo/rose.tiff
xpaset -p ds9 tiff slice photo/rose.tiff
xpaset -p ds9 frame delete

testit $tt
fi

tt="tile"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 tile >> ${tt}.out
xpaget ds9 tile mode >> ${tt}.out
xpaget ds9 tile grid mode >> ${tt}.out
xpaget ds9 tile grid direction >> ${tt}.out
xpaset -p ds9 fits new data/img.fits
xpaset -p ds9 fits new data/img.fits
xpaset -p ds9 tile
xpaset -p ds9 tile yes
xpaset -p ds9 tile row
xpaset -p ds9 tile column
xpaset -p ds9 tile grid
xpaset -p ds9 tile grid mode automatic
xpaset -p ds9 tile grid direction x
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete

testit $tt
fi

tt="update"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 update
xpaset -p ds9 update 1 100 100 300 400
xpaset -p ds9 update now
xpaset -p ds9 update now 1 100 100 300 400

testit $tt
fi

tt="url"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 frame new
xpaset -p ds9 url http://ds9.si.edu/download/data/img.fits
xpaset -p ds9 frame delete
testit $tt
fi

tt="version"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 version >> /dev/null

testit $tt
fi

tt="view"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 frame delete
xpaget ds9 view layout >> ${tt}.out
xpaget ds9 view keyvalue >> ${tt}.out
xpaget ds9 view info >> ${tt}.out
xpaget ds9 view panner >> ${tt}.out
xpaget ds9 view magnifier >> ${tt}.out
xpaget ds9 view buttons >> ${tt}.out
xpaget ds9 view colorbar >> ${tt}.out
xpaget ds9 view graph horizontal >> ${tt}.out
xpaget ds9 view graph vertical >> ${tt}.out
xpaget ds9 view filename >> ${tt}.out
xpaget ds9 view object >> ${tt}.out
xpaget ds9 view keyword >> ${tt}.out
xpaget ds9 view minmax >> ${tt}.out
xpaget ds9 view lowhigh >> ${tt}.out
xpaget ds9 view units >> ${tt}.out
xpaget ds9 view wcs >> ${tt}.out
xpaget ds9 view detector >> ${tt}.out
xpaget ds9 view amplifier >> ${tt}.out
xpaget ds9 view physical >> ${tt}.out
xpaget ds9 view image >> ${tt}.out
xpaget ds9 view frame >> ${tt}.out

xpaset -p ds9 view layout vertical
sleep $delay
xpaset -p ds9 view layout horizontal
sleep $delay

xpaset -p ds9 view keyvalue BITPIX

xpaset -p ds9 view info no
xpaset -p ds9 view info yes
xpaset -p ds9 view panner no
xpaset -p ds9 view panner yes
xpaset -p ds9 view magnifier no
xpaset -p ds9 view magnifier yes
xpaset -p ds9 view buttons no
xpaset -p ds9 view buttons yes
xpaset -p ds9 view colorbar no
xpaset -p ds9 view colorbar yes
xpaset -p ds9 view graph horizontal yes
xpaset -p ds9 view graph horizontal no
xpaset -p ds9 view graph vertical yes
xpaset -p ds9 view graph vertical no
xpaset -p ds9 view filename no
xpaset -p ds9 view filename yes
xpaset -p ds9 view object no
xpaset -p ds9 view object yes
xpaset -p ds9 view keyword yes
xpaset -p ds9 view keyword no
xpaset -p ds9 view minmax yes
xpaset -p ds9 view minmax no
xpaset -p ds9 view lowhigh yes
xpaset -p ds9 view lowhigh no
xpaset -p ds9 view units yes
xpaset -p ds9 view units no
xpaset -p ds9 view wcs no
xpaset -p ds9 view wcs yes
xpaset -p ds9 view wcsa yes
xpaset -p ds9 view wcsa no
xpaset -p ds9 view detector yes
xpaset -p ds9 view detector no
xpaset -p ds9 view amplifier yes
xpaset -p ds9 view amplifier no
xpaset -p ds9 view physical no
xpaset -p ds9 view physical yes
xpaset -p ds9 view image no
xpaset -p ds9 view image yes
xpaset -p ds9 view frame no
xpaset -p ds9 view frame yes
sleep $delay

xpaset -p ds9 frame new rgb
xpaset -p ds9 view red no
xpaset -p ds9 view red yes
xpaset -p ds9 view green no
xpaset -p ds9 view green yes
xpaset -p ds9 view blue no
xpaset -p ds9 view blue yes
xpaset -p ds9 frame delete
sleep $delay

xpaset -p ds9 fits new data/img.fits

xpaset -p ds9 rgb close
testit $tt
fi

tt="vla"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 vla open
xpaset -p ds9 vla close
xpaset -p ds9 vla size 30 30 arcsec
xpaget ds9 vla size >> ${tt}.out
xpaset -p ds9 vla save no
xpaget ds9 vla save >> ${tt}.out
xpaset -p ds9 vla frame new
xpaget ds9 vla frame >> ${tt}.out
xpaset -p ds9 vla survey first
xpaget ds9 vla survey >> ${tt}.out
xpaset -p ds9 vla update frame
xpaset -p ds9 vla m51
xpaset -p ds9 vla name m51
xpaget ds9 vla name >> ${tt}.out
xpaset -p ds9 vla name {}
xpaset -p ds9 vla coord 13:29:52.37 +47:11:40.8 sexagesimal
xpaget ds9 vla coord >> ${tt}.out
xpaset -p ds9 vla update frame
xpaset -p ds9 mode crosshair
xpaset -p ds9 vla update crosshair
xpaset -p ds9 vla close
xpaset -p ds9 mode none
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete

testit $tt
fi

tt="vlss"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 vlss open
xpaset -p ds9 vlss close
xpaset -p ds9 vlss size 30 30 arcsec
xpaget ds9 vlss size >> ${tt}.out
xpaset -p ds9 vlss save no
xpaget ds9 vlss save >> ${tt}.out
xpaset -p ds9 vlss frame new
xpaget ds9 vlss frame >> ${tt}.out
xpaset -p ds9 vlss update frame
xpaset -p ds9 vlss m51
xpaset -p ds9 vlss name m51
xpaget ds9 vlss name >> ${tt}.out
xpaset -p ds9 vlss name {}
xpaset -p ds9 vlss coord 13:29:52.37 +47:11:40.8 sexagesimal
xpaget ds9 vlss coord >> ${tt}.out
xpaset -p ds9 vlss update frame
xpaset -p ds9 mode crosshair
xpaset -p ds9 vlss update crosshair
xpaset -p ds9 vlss close
xpaset -p ds9 mode none
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete
xpaset -p ds9 frame delete

testit $tt
fi

tt="vo"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 vo method >> ${tt}.out
xpaget ds9 vo server >> ${tt}.out
xpaget ds9 vo internal >> ${tt}.out
xpaget ds9 vo delay >> ${tt}.out
xpaget ds9 vo connect >> ${tt}.out
xpaget ds9 vo >> /dev/null
xpaset -p ds9 vo open
xpaset -p ds9 vo method mime
xpaset -p ds9 vo server "http://cxc.harvard.edu/chandraed/list.txt"
xpaset -p ds9 vo internal yes
xpaset -p ds9 vo delay 15
xpaset -p ds9 vo connect foo
xpaset -p ds9 vo chandra-ed
xpaset -p ds9 vo disconnect chandra-ed
xpaset -p ds9 vo close
xpaset -p ds9 web close

testit $tt
fi

tt="wcs"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 wcs >> ${tt}.out
xpaget ds9 wcs system >> ${tt}.out
xpaget ds9 wcs sky >> ${tt}.out
xpaget ds9 wcs skyformat >> ${tt}.out
xpaget ds9 wcs align >> ${tt}.out
xpaset -p ds9 wcs open
xpaset -p ds9 wcs wcs
xpaset -p ds9 wcs align yes
xpaset -p ds9 wcs system wcs
xpaset -p ds9 wcs sky galactic
xpaset -p ds9 wcs skyformat sexagesimal
xpaset -p ds9 wcs align no
xpaset -p ds9 wcs sky fk5
xpaset -p ds9 wcs skyformat degrees
cat aux/image.wcs | xpaset ds9 wcs append
cat aux/image.wcs | xpaset ds9 wcs replace
xpaset -p ds9 wcs append aux/image.wcs
xpaset -p ds9 wcs replace aux/image.wcs
xpaset -p ds9 wcs reset
xpaset -p ds9 wcs skyformat sexagesimal
xpaset -p ds9 wcs close

testit $tt
fi

tt="web"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 web ds9.si.edu/doc/acknowledgment.html
sleep $delay
xpaget ds9 web >> ${tt}.out
xpaset -p ds9 web ds9.si.edu/doc/helpdesk.html
sleep $delay
xpaset -p ds9 web hvweb click back
sleep $delay
xpaset -p ds9 web click forward
xpaset -p ds9 web clear
xpaset -p ds9 web close

testit $tt
fi

tt="width"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 width >> /dev/null
xpaset -p ds9 width 600

testit $tt
fi

tt="xpa"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 xpa info >> /dev/null
#xpaset -p ds9 xpa disconnect
xpaset -p ds9 xpa info

testit $tt
fi

tt="zscale"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaget ds9 zscale contrast >> ${tt}.out
xpaget ds9 zscale sample >> ${tt}.out
xpaget ds9 zscale line >> ${tt}.out
xpaset -p ds9 zscale contrast .25
xpaset -p ds9 zscale sample 600
xpaset -p ds9 zscale line 120

testit $tt
fi

tt="zoom"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt..."
xpaset -p ds9 zoom open
xpaset -p ds9 zoom 2
xpaset -p ds9 zoom 2 4
xpaset -p ds9 zoom to 4
xpaset -p ds9 zoom to 2 4
xpaset -p ds9 zoom in
xpaset -p ds9 zoom out
xpaset -p ds9 zoom to fit
xpaset -p ds9 zoom close
xpaget ds9 zoom > /dev/null
xpaset -p ds9 frame reset

testit $tt
fi

tt="exit"
if [ "$1" = "$tt" -o -z "$1" ]; then
echo -n "$tt/quit..."
xpaset -p ds9 quit
fi

rm -rf foo.*
echo "DONE"
