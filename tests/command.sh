echo "Command Line Options Tests"

initit () {
    echo "Testing $1"
    unset opt
}

testit () {
    echo "$1"
    opt="$opt $1 -sleep .1"
}

doit () {
    eval ds9 -zscale data/img.fits "$opt" -exit
    echo "PASSED"
    echo ""
}

echo
echo "*** command.sh ***"

delay=.5

# must be invoked
# -private
# -samp
# -skyview

# no test
# -shm
# -smosaic
# -smosaicwcs
# -smosaiciraf

# not tested
# -geometry
# --help
# -visual

tt="2mass"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-2mass open"
testit "-2mass close"
testit "-2mass survey h"
testit "-2mass size 30 30 arcsec"
testit "-2mass save no"
testit "-2mass frame new"
testit "-2mass update frame"
testit "-2mass m51"
testit "-2mass name m51"
testit "-2mass name ''"
testit "-2mass coord 00:42:44.404 +41:16:08.78 sexagesimal"
testit "-2mass update frame"
testit "-mode crosshair"
testit "-2mass update crosshair"
testit "-2mass close"
testit "-mode none"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"

doit
fi

tt="3d"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-3d open"
testit "-3d close"
testit "-3d"
testit "-3d view 45 30"
testit "-3d az 45"
testit "-3d el 30"
testit "-3d scale 5"
testit "-3d method mip"
testit "-3d background azimuth"
testit "-3d border yes"
testit "-3d border color red"
testit "-3d compass yes"
testit "-3d compass color red"
testit "-3d highlite yes"
testit "-3d highlite color red"
testit "-frame delete"

testit "-3d close"
testit "-cube close"
doit
fi

tt="about"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-about"

doit
fi

tt="align"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-align"

doit
fi

tt="analysis"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-analysis clear"
testit "-analysis analysis/analysis.ans"
testit "-analysis 0"
testit "-analysis task 1"
testit "-analysis task '{Basic Help}'"
testit "-analysis clear"
testit "-analysis load analysis/analysis.ans"
testit "-analysis clear load analysis/analysis.ans"
testit "-analysis clear"
#testit "-analysis message 'This is a message'"
#testit "-analysis message yesno 'This is a message'"
testit "-analysis text 'This is text'"
testit "-analysis mode none"

doit
fi

tt="array"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new"
testit "-array array/float_big.arr[dim=256,bitpix=-32,endian=big]"
testit "-frame delete"
testit "-frame new"
testit "-array -mask array/float_big.arr[dim=256,bitpix=-32,endian=big] -nomask"
testit "-frame delete"

testit "-rgb close"
doit
fi

tt="asinh"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-asinh"

doit
fi

tt="bg"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt/background"
testit "-background red"
testit "-background white"

doit
fi

tt="backup"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-backup foo.bck"

doit
fi

tt="bin"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new -fits fits/table.fits"
testit "-single"
testit "-bin open"
testit "-bin factor 4"
testit "-bin factor 8 8"
testit "-scale log"
testit "-scale minmax"
testit "-bin buffersize 1024"
testit "-bin filter 'circle(4096,4096,200)'"
testit "-bin filter ''"
testit "-bin cols rawx rawy"
testit "-bin about center"
testit "-bin colsz x y pha"
testit "-bin depth 10"
testit "-bin about 4096 4096"
testit "-bin depth 1"
testit "-bin function sum"
testit "-bin in"
testit "-bin out"
testit "-bin to fit"
testit "-bin match"
testit "-bin lock yes"
testit "-bin lock no"
testit "-bin close"
testit "-frame delete"

doit
fi

tt="blink"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new"
testit "-blink"
testit "-blink yes"
testit "-blink interval .5"
testit "-single"
testit "-frame first"
testit "-frame next"

doit
fi

tt="block"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-block open"
testit "-block 4"
testit "-block 8 8"
testit "-block to 4"
testit "-block to 8 8"
testit "-block in"
testit "-block out"
testit "-block to fit"
testit "-block to 1"
testit "-block match"
testit "-block lock yes"
testit "-block lock no"
testit "-block close"

doit
fi

tt="blue"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new rgb"
testit "-blue"

testit "-rgb close"
doit
fi

tt="catalog"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt/cat"
testit "-catalog cds 2mass"

testit "-catalog clear"
testit "-catalog close"

testit "-catalog"
testit "-catalog close"

testit "-catalog cds 'I/284'"
testit "-catalog clear"
testit "-catalog close"

testit "-catalog import sb aux/ds9.cat"
testit "-catalog clear"
testit "-catalog close"

testit "-catalog cds 2mass"
testit "-raise"
testit "-catalog plot '\$Jmag' '\$Hmag' '\$e_Jmag' '\$e_Hmag'"
testit "-catalog symbol condition '\$Jmag>15'"
testit "-catalog symbol shape 'boxcircle point'"
testit "-catalog symbol color red"
testit "-catalog symbol condition ''"
testit "-catalog symbol color red"
testit "-catalog symbol shape text"
testit "-catalog symbol font times"
testit "-catalog symbol fontsize 14"
testit "-catalog symbol fontweight bold"
testit "-catalog symbol fontslant italic"
testit "-catalog symbol add"
testit "-catalog symbol remove"
testit "-catalog symbol load aux/ds9.sym"
testit "-catalog symbol save foo.sym"
testit "-catalog name m51"
testit "-catalog coordinate 202.48 47.21 fk5"
testit "-catalog system wcs"
testit "-catalog sky fk5"
testit "-catalog skyformat degrees"
testit "-catalog size 22 22 arcmin"
testit "-catalog retrieve"
testit "-catalog regions"
testit "-regions delete all"
testit "-catalog save foo.cat"
testit "-catalog filter '\$Jmag>15'"
testit "-catalog filter load aux/ds9.flt"
testit "-catalog retrieve"
testit "-catalog cancel"
#testit "-catalog print"
testit "-catalog server sao"
testit "-catalog sort 'Jmag' incr"
testit "-catalog maxrows 3000"
testit "-catalog allcols"
testit "-catalog allrows"
testit "-catalog ra 'RAJ2000'"
testit "-catalog dec 'DEJ2000'"
testit "-catalog psystem wcs"
testit "-catalog psky fk5"
testit "-catalog hide"
testit "-catalog show"
testit "-catalog panto no"
#testit "-catalog edit yes"
testit "-catalog location 400"
testit "-catalog header"
testit "-catalog clear"
testit "-catalog close"
testit "-catalog 2mass"
testit "-catalog xmm"
testit "-catalog match function 1and2"
testit "-catalog match error 2 arcsec"
testit "-catalog match return 1only"
testit "-catalog match unique no"
testit "-catalog match 2mass xmm"
testit "-catalog clear"
testit "-catalog close"
testit "-catalog clear"
testit "-catalog close"
testit "-catalog clear"
testit "-catalog close"

doit
fi

tt="cd"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-cd ."

doit
fi

tt="cmap"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-cmap open"
testit "-cmap Heat"
testit "-cmap load aux/ds9.sao"
testit "-cmap save foo.sao"
testit "-cmap invert yes"
testit "-cmap invert no"
testit "-invert"
testit "-cmap value 5 .2"
testit "-cmap tag load aux/ds9.tag"
testit "-cmap tag save foo.tag"
testit "-cmap tag delete"
testit "-cmap match"
testit "-cmap lock yes"
testit "-cmap lock no"
testit "-cmap Grey"
testit "-cmap close"

doit
fi

tt="colorbar"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-colorbar no"
testit "-colorbar yes"
testit "-colorbar vertical"
testit "-colorbar horizontal"
testit "-colorbar numerics no"
testit "-colorbar numerics yes"
testit "-colorbar space value"
testit "-colorbar space distance"
testit "-colorbar font times"
testit "-colorbar fontsize 30"
testit "-colorbar fontweight bold"
testit "-colorbar fontslant roman"
testit "-colorbar font helvetica"
testit "-colorbar fontsize 10"
testit "-colorbar fontweight normal"
testit "-colorbar fontslant roman"
testit "-colorbar size 30"
testit "-colorbar ticks 9"
testit "-colorbar size 20"
testit "-colorbar size 11"

doit
fi

tt="console"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-console"

doit
fi

tt="contour"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt/contours"
testit "-contour yes"
testit "-contour open"

# load/save
# backward compatibility
testit "-contour clear"
testit "-contour load aux/ds9.con wcs fk5 red 2 yes"
#
testit "-contour clear"
testit "-contour load aux/ds9.ctr"
testit "-contour clear"
testit "-contour load aux/ds9.ctr blue 2 yes"
testit "-contour save foo.con wcs fk5"

# paste
testit "-contour clear"
testit "-frame new"
testit "-fits data/img.fits"
testit "-tile"
testit "-contour yes"
testit "-contour copy"
testit "-frame first"
# backward compatibility
testit "-contour clear"
testit "-contour paste wcs red 2 yes"
#
testit "-contour clear"
testit "-contour paste"
testit "-frame next"
testit "-frame delete"

testit "-contour clear"
testit "-contour loadlevels aux/ds9.ctr"
# backward compatibility
testit "-contour clear"
testit "-contour loadlevels aux/ds9.lev"
#
testit "-contour savelevels foo.lev"

testit "-contour clear"
testit "-contour yes"
testit "-contour convert"
testit "-regions delete all"

testit "-contour clear"
testit "-contour yes"
testit "-contour color blue"
testit "-contour width 2"
testit "-contour smooth 5"
testit "-contour method block"
testit "-contour nlevels 10"
testit "-contour width 2"
testit "-contour scale sqrt"
testit "-contour log exp 1000"
testit "-contour mode zscale"
testit "-contour limits 1 100"
testit "-contour levels '1 10 100 1000'"

testit "-contour clear"
testit "-contour close"

doit
fi

tt="crop"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-mode crop"
testit "-crop 978 970  356 308"
testit "-crop 13:29:52.908 +47:11:38.19  35.279606 30.522805 wcs fk5 arcsec"
testit "-crop reset"
testit "-3d"
testit "-fits data/3d.fits"
testit "-3d vp 45 30"
testit "-crop 3d 25 75"
testit "-crop reset"
testit "-crop match wcs"
testit "-crop lock wcs"
testit "-crop lock none"
testit "-frame delete"
testit "-mode none"

testit "-3d close"
testit "-cube close"
doit
fi

tt="crosshair"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-mode crosshair"
testit "-crosshair 13:29:55.287 +47:11:37.73 wcs fk5"
testit "-crosshair match wcs"
testit "-crosshair lock wcs"
testit "-crosshair lock none"
testit "-mode none"

doit
fi

tt="cube"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt/datacube"
testit "-cube open"
testit "-cube close"
testit "-frame new -fits data/3d.fits"
testit "-cube 2"
testit "-cube interval .5"
testit "-cube axis 3"
testit "-cube play"
testit "-cube stop"
testit "-cube match wcs"
testit "-cube lock wcs"
testit "-cube lock none"
testit "-cube order 321"
testit "-cube order 123"
testit "-cube axes lock yes"
testit "-cube axes lock no"
testit "-frame delete"

testit "-3d close"
testit "-cube close"
doit
fi

tt="cursor"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-mode crosshair"
testit "-cursor 10 10"
testit "-mode none"

doit
fi

tt="dsssao"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt/dss"
testit "-dsssao open"
testit "-dsssao close"
testit "-dsssao size 30 30 arcsec"
testit "-dsssao save no"
testit "-dsssao frame new"
testit "-dsssao update frame"
testit "-dsssao m51"
testit "-dsssao name m51"
testit "-dsssao name ''"
testit "-dsssao coord 00:42:44.404 +41:16:08.78 sexagesimal"
testit "-dsssao update frame"
testit "-mode crosshair"
testit "-dsssao update crosshair"
testit "-dsssao close"
testit "-mode none"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"

doit
fi

tt="dsseso"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-dsseso open"
testit "-dsseso close"
testit "-dsseso survey DSS2-red"
testit "-dsseso size 30 30 arcsec"
testit "-dsseso save no"
testit "-dsseso frame new"
testit "-dsseso update frame"
testit "-dsseso m51"
testit "-dsseso name m51"
testit "-dsseso name ''"
testit "-dsseso coord 00:42:44.404 +41:16:08.78 sexagesimal"
testit "-dsseso update frame"
testit "-mode crosshair"
testit "-dsseso update crosshair"
testit "-dsseso close"
testit "-mode none"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"

doit
fi

tt="dssstsci"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-dssstsci open"
testit "-dssstsci close"
testit "-dssstsci survey all"
testit "-dssstsci size 30 30 arcsec"
testit "-dssstsci save no"
testit "-dssstsci frame new"
testit "-dssstsci update frame"
testit "-dssstsci m51"
testit "-dssstsci name m51"
testit "-dssstsci name ''"
testit "-dssstsci coord 00:42:44.404 +41:16:08.78 sexagesimal"
testit "-dssstsci update frame"
testit "-mode crosshair"
testit "-dssstsci update crosshair"
testit "-dssstsci close"
testit "-mode none"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"

doit
fi

tt="export"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-export array foo.arr little"
testit "-export foo.arr little"
testit "-export nrrd foo.nrrd big"
testit "-export foo.nrrd"
testit "-export gif foo.gif"
testit "-export foo.gif"
testit "-export tiff foo.tiff none"
testit "-export foo.tiff"
testit "-export jpeg foo.jpeg 10"
testit "-export foo.jpeg"
testit "-export png foo.png"
testit "-export foo.png"

testit "-frame new rgb"
testit "-rgbcube rgbcube/float.fits"
testit "-export rgbarray foo.rgb little"
testit "-export foo.rgb little"
testit "-frame delete"

testit "-rgb close"
testit "-cube close"
doit
fi

tt="fifo"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-fifo /dev/imt1"
testit "-fifo_only"

doit
fi

# backward compatibility
tt="file"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt...backward compatibility"
testit "-frame new"
testit "-file fits/float.fits"
testit "-file -slice fits/float.fits -noslice"
testit "-file -mask fits/float.fits -nomask"
testit "-frame delete"

doit
fi

tt="fits"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new"
testit "-fits fits/float.fits"
testit "-fits -slice fits/float.fits -noslice"
testit "-fits -mask fits/float.fits -nomask"
testit "-frame delete"

doit
fi

tt="frame"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new rgb"
testit "-frame delete"
testit "-frame new 3d"
testit "-frame delete"
testit "-fits data/img.fits"
testit "-tile"
testit "-frame center"
testit "-frame center 1"
testit "-frame center all"
testit "-frame reset"
testit "-frame reset 1"
testit "-frame reset all"
testit "-frame refresh"
testit "-frame refresh 1"
testit "-frame refresh all"
testit "-frame hide"
testit "-frame hide 1"
testit "-frame hide all"
testit "-frame show"
testit "-frame show 1"
testit "-frame show all"
testit "-frame move first"
testit "-frame move back"
testit "-frame move forward"
testit "-frame move last"
testit "-frame first"
testit "-frame prev"
testit "-frame next"
testit "-frame last"
testit "-frame frameno 1"
testit "-frame 2"
testit "-frame match wcs"
testit "-frame lock wcs"
testit "-frame lock none"
testit "-frame clear"
testit "-frame clear 1"
testit "-frame clear all"
testit "-frame delete"
testit "-frame delete 1"
testit "-frame delete all"
testit "-frame new -fits data/img.fits"

testit "-rgb close"
testit "-3d close"
testit "-cube close"
doit
fi

tt="gif"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new"
testit "-gif photo/rose.gif"
testit "-frame delete"
testit "-frame new"
testit "-gif -slice photo/rose.gif -noslice"
testit "-frame delete"

doit
fi

tt="green"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new rgb"
testit "-green"

testit "-rgb close"
doit
fi

tt="grid"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-grid open"
testit "-grid close"

testit "-grid"
testit "-grid yes"
 
testit "-grid type analysis"
testit "-grid system wcs"
testit "-grid sky fk5"
testit "-grid skyformat degrees"

testit "-grid grid yes"
testit "-grid grid color red"
testit "-grid grid width 2"
testit "-grid grid style 1"
testit "-grid grid gap1 .01"
testit "-grid grid gap2 .01"
 
testit "-grid axes yes"
testit "-grid axes color red"
testit "-grid axes width 2"
testit "-grid axes style 1"
testit "-grid axes type exterior"
testit "-grid axes origin lll"
 
testit "-grid format1 d.2"
testit "-grid format2 d.2"

testit "-grid tickmarks color red"
testit "-grid tickmarks width 2"
testit "-grid tickmarks style 1"

testit "-grid border yes"
testit "-grid border color red"
testit "-grid border width 2"
testit "-grid border style 1"

testit "-grid numerics yes"
testit "-grid numerics font courier"
testit "-grid numerics fontweight bold"
testit "-grid numerics fontslant roman"
testit "-grid numerics fontsize 12"
testit "-grid numerics color red"
testit "-grid numerics gap1 10"
testit "-grid numerics gap2 10"
testit "-grid numerics type exterior"
testit "-grid numerics vertical yes"

testit "-grid title yes"
testit "-grid title text 'Hello World'"
testit "-grid title def yes"
testit "-grid title gap 10"
testit "-grid title font courier"
testit "-grid title fontweight bold"
testit "-grid title fontslant roman"
testit "-grid title fontsize 12"
testit "-grid title color red"

testit "-grid labels yes"
testit "-grid labels text1 'Hello World'"
testit "-grid labels def1 yes"
testit "-grid labels gap1 10"
testit "-grid labels text2 'Hello World'"
testit "-grid labels def2 yes"
testit "-grid labels gap2 10"
testit "-grid labels font courier"
testit "-grid labels fontweight bold"
testit "-grid labels fontslant roman"
testit "-grid labels fontsize 12"
testit "-grid labels color red"

testit "-grid save foo.grd"
testit "-grid load foo.grd"
testit "-grid reset"

testit "-grid no"
testit "-grid close"

doit
fi

tt="header"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-header"
testit "-header save foo.txt"
testit "-header close"
testit "-header 1"
testit "-header close 1"

doit
fi

tt="height"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-height 443"

doit
fi

tt="histequ"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-histequ"

doit
fi

tt="iconify"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-iconify"
testit "-iconify yes"
testit "-iconify no"

doit
fi

tt="invert"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-invert"

doit
fi

tt="iis"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-iis filename foo.fits"
testit "-iis filename foo.fits 1"

doit
fi

tt="jpeg"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt/jpg"
testit "-frame new"
testit "-jpeg photo/rose.jpeg"
testit "-jpeg -slice photo/rose.jpeg -noslice"
testit "-frame delete"

doit
fi

tt="language"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-language fr"

doit
fi

tt="linear"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-linear"

doit
fi

tt="lock"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-fits data/img.fits"
testit "-tile"
testit "-mode crosshair"
testit "-lock frame wcs"
testit "-lock frame none"
testit "-lock crosshair wcs"
testit "-crosshair 13:29:56 +47:11:38 wcs fk5"
testit "-lock crosshair none"
testit "-lock crop wcs"
testit "-lock crop none"
testit "-lock slice wcs"
testit "-lock slice none"
testit "-lock bin yes"
testit "-lock bin no"
testit "-lock axes yes"
testit "-lock axes no"
testit "-lock scale yes"
testit "-lock scale no"
testit "-lock scalelimits yes"
testit "-lock scalelimits no"
testit "-lock colorbar yes"
testit "-lock colorbar no"
testit "-lock block yes"
testit "-lock block no"
testit "-lock smooth yes"
testit "-lock smooth no"
testit "-mode none"
testit "-frame delete"
testit "-wcs align no"
testit "-scale zscale"

doit
fi

tt="log"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-log"

doit
fi

tt="lower"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-lower"
testit "-raise"

doit
fi

tt="magnifier"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-magnifier color white"
testit "-magnifier zoom 4"
testit "-magnifier cursor yes"
testit "-magnifier region yes"

doit
fi

tt="mask"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-mask open"
testit "-mask color cyan"
testit "-mask clear"
testit "-mask close"

doit
fi

tt="match"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-fits data/img.fits"
testit "-tile"
testit "-mode crosshair"
testit "-match frame wcs"
testit "-match frame image"
testit "-match crosshair wcs"
testit "-match crop wcs"
testit "-match slice wcs"
testit "-match bin"
testit "-match axes"
testit "-match scale"
testit "-match scalelimits"
testit "-match colorbar"
testit "-match block"
testit "-match smooth"
testit "-frame delete"
testit "-mode none"
testit "-scale zscale"

doit
fi

tt="mecube"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new"
testit "-mecube mecube/float.fits"
testit "-frame delete"

testit "-cube close"
doit
fi

tt="minmax"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-minmax scan"
testit "-minmax mode scan"
testit "-minmax interval 100"

doit
fi

tt="mode"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-mode none"
testit "-mode region"
# backward compatibility
testit "-mode pointer"
testit "-mode crosshair"
testit "-mode colorbar"
testit "-mode pan"
testit "-mode zoom"
testit "-mode rotate"
testit "-mode catalog"
testit "-mode examine"
testit "-mode none"

doit
fi

tt="mosaic"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new"
testit "-mosaic mosaic/mosaicimage.fits"
testit "-frame clear"
testit "-mosaic wcs mosaic/mosaicimage.fits"
testit "-frame clear"
testit "-mosaic iraf mosaic/mosaicimage.fits"
testit "-frame clear"
testit "-mosaic mosaic/mosaicimage.fits"
testit "-mosaic -mask mosaic/mosaicimage.fits -nomask"
testit "-frame delete"

doit
fi

tt="mosaicimage"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new"
testit "-mosaicimage mosaic/mosaicimage.fits"
testit "-frame clear"
testit "-mosaicimage wcs mosaic/mosaicimage.fits"
testit "-frame clear"
testit "-mosaicimage iraf mosaic/mosaicimage.fits"
testit "-frame clear"
testit "-mosaicimage wfpc2 mosaic/hst.fits"
testit "-frame clear"
testit "-mosaicimage mosaic/mosaicimage.fits"
testit "-mosaicimage -mask mosaic/mosaicimage.fits -nomask"
testit "-frame delete"

doit
fi

# backward compatibility
tt="mosaicwcs"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt...backward compatibility"
testit "-frame new"
testit "-mosaicwcs mosaic/mosaicimage.fits"
testit "-mosaicwcs -mask mosaic/mosaicimage.fits -nomask"
testit "-frame delete"

doit
fi

# backward compatibility
tt="mosaiciraf"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt...backward compatibility"
testit "-frame new"
testit "-mosaiciraf mosaic/mosaicimage.fits"
testit "-mosaiciraf -mask mosaic/mosaicimage.fits -nomask"
testit "-frame delete"

doit
fi

# backward compatibility
tt="mosaicimagewcs"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt...backward compatibility"
testit "-frame new"
testit "-mosaicimagewcs mosaic/mosaicimage.fits"
testit "-mosaicimagewcs -mask mosaic/mosaicimage.fits -nomask"
testit "-frame delete"

doit
fi

# backward compatibility
tt="mosaicimageiraf"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt...backward compatibility"
testit "-frame new"
testit "-mosaicimageiraf mosaic/mosaicimage.fits"
testit "-mosaicimageiraf -mask mosaic/mosaicimage.fits -nomask"
testit "-frame delete"

doit
fi

# backward compatibility
tt="mosaicimagewfpc2"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt...backward compatibility"
testit "-frame new"
testit "-mosaicimagewfpc2 mosaic/hst.fits"
testit "-frame delete"

doit
fi

# movie will fail if moved from corner
tt="movie"
if [ "$1" = "$tt" ]; then
initit "$tt/savempeg"
testit "-width 715 -height 450"
testit "-movie slice foo.mpg"
testit "-movie frame foo.mpg"
testit "-frame new 3d"
testit "-movie 3d foo.mpg number 1 azfrom 0 azto 0 elfrom 0 elto 0 slfrom 1 slto 1 repeat 1"
testit "-frame delete"

# backward compatibility
testit "-savempeg foo.mpg"

testit "-3d close"
testit "-cube close"
doit
fi

tt="msg"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-msg ../msgs"

doit
fi

tt="multiframe"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt/memf"
testit "-frame delete"
testit "-multiframe mecube/float.fits"

doit
fi

tt="nameserver"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-nameserver open"
testit "-nameserver close"
testit "-nameserver m51"
testit "-nameserver name m51"
testit "-nameserver server simbad-cds"
testit "-nameserver skyformat degrees"
testit "-mode crosshair"
testit "-nameserver crosshair"
testit "-nameserver pan"
testit "-nameserver close"
testit "-mode none"
testit "-frame reset"

doit
fi

tt="nan"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-nan blue"
testit "-nan white"

doit
fi

tt="nrrd"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new"
testit "-nrrd nrrd/float_big_raw.nrrd"
testit "-nrrd -mask nrrd/float_big_raw.nrrd -nomask"

doit
fi

tt="nvss"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-nvss open"
testit "-nvss close"
testit "-nvss size 30 30 arcsec"
testit "-nvss save no"
testit "-nvss frame new"
testit "-nvss update frame"
testit "-nvss m51"
testit "-nvss name m51"
testit "-nvss name ''"
testit "-nvss coord 13:29:52.37 +47:11:40.8 sexagesimal"
testit "-nvss update frame"
testit "-mode crosshair"
testit "-nvss update crosshair"
testit "-nvss close"
testit "-mode none"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"

doit
fi

tt="orient"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-orient open"
testit "-orient none"
testit "-orient x"
testit "-orient y"
testit "-orient xy"
testit "-orient close"
testit "-frame reset"

doit
fi

tt="pagesetup"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-pspagesetup orient portrait"
testit "-pspagesetup scale 100"
testit "-pspagesetup size letter"

doit
fi

tt="pan"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-pan open"
testit "-pan 100 100 image"
testit "-pan to 13:29:55.666 +47:12:16.29 wcs fk5"
testit "-pan close"
testit "-frame reset"

doit
fi

# backward compatibility
tt="photo"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new"
testit "-photo photo/rose.tiff"
testit "-photo -slice photo/rose.tiff -noslice"
testit "-frame delete"

doit
fi

tt="pixeltable"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-pixeltable"
testit "-pixeltable yes"
testit "-pixeltable no"
testit "-pixeltable open"
testit "-pixeltable close"

doit
fi

tt="plot"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-plot"
testit "-plot close"

testit "-plot new"
testit "-plot bar"
testit "-plot new bar"
testit "-plot scatter"
testit "-plot new scatter"
testit "-sleep $delay"
testit "-plot close"
testit "-plot close"
testit "-plot close"
testit "-plot close"
testit "-plot close"

testit "-plot new name foo"
testit "-plot new name foo line"
testit "-plot new name foo bar"
testit "-plot new name foo scatter"
testit "-sleep $delay"
testit "-plot close"
testit "-plot close"
testit "-plot close"
testit "-plot close"

testit "-plot new name foo 'The Title' 'X Axis' 'Y Axis' xy"
testit "-plot new name foo line 'The Title' 'X Axis' 'Y Axis' xy"
testit "-plot new name foo bar 'The Title' 'X Axis' 'Y Axis' xy"
testit "-plot new name foo scatter 'The Title' 'X Axis' 'Y Axis' xy"
testit "-sleep $delay"
testit "-plot close"
testit "-plot close"
testit "-plot close"
testit "-plot close"
doit

initit "..save/load"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot save foo.dat"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..clear"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-sleep $delay"
testit "-plot clear"
testit "-plot close"
doit

initit "..duplicate"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot dup"
testit "-plot duplicate 1"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..stats"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot stats"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..list"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot list"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..saveconfig/loadconfig"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot saveconfig foo.plt"
testit "-plot loadconfig foo.plt"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..pagesetup"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot pagesetup orient portrait"
testit "-plot pagesetup pagesize letter"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..print"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
#testit "-plot print"
testit "-plot print destination printer"
testit "-plot print command 'lp'"
testit "-plot print filename 'foo.ps'"
testit "-plot print color rgb"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..mode"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot mode pointer"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..axis"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot axis x grid no"
testit "-plot axis x grid yes"
testit "-plot axis x log yes"
testit "-plot axis x log no"
testit "-plot axis x flip yes"
testit "-plot axis x flip no"
testit "-plot axis x auto no"
testit "-plot axis x min 1"
testit "-plot axis x max 100"
testit "-plot axis x format '%f'"
testit "-plot axis y grid no"
testit "-plot axis y grid yes"
testit "-plot axis y log yes"
testit "-plot axis y log no"
testit "-plot axis y flip yes"
testit "-plot axis y flip no"
testit "-plot axis y auto no"
testit "-plot axis y min 1"
testit "-plot axis y max 100"
testit "-plot axis y format '%f'"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..legend"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot legend yes"
testit "-plot legend position left"
testit "-plot legend position right"
testit "-plot legend position bottom"
testit "-plot legend position top"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..font"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot title 'This is a Title'"
testit "-plot title xaxis 'X Axis'"
testit "-plot title yaxis 'Y Axis'"
testit "-plot title legend 'This is the Legend'"
testit "-plot legend yes"
testit "-plot font title font times"
testit "-plot font title size 12"
testit "-plot font title weight bold"
testit "-plot font title slant roman"
testit "-plot font labels font times"
testit "-plot font labels size 12"
testit "-plot font labels weight bold"
testit "-plot font labels slant roman"
testit "-plot font numbers font times"
testit "-plot font numbers size 12"
testit "-plot font numbers weight bold"
testit "-plot font numbers slant roman"
testit "-plot font legendtitle font times"
testit "-plot font legendtitle size 12"
testit "-plot font legendtitle weight bold"
testit "-plot font legendtitle slant roman"
testit "-plot font legend font times"
testit "-plot font legend size 12"
testit "-plot font legend weight bold"
testit "-plot font legend slant roman"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..title"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot title 'This is a Title'"
testit "-plot title x 'X Axis'"
testit "-plot title y 'Y Axis'"
testit "-plot title legend 'This is the Legend'"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..barmode"
testit "-plot new bar"
testit "-plot load plot/xy.dat xy"
testit "-plot load plot/xyey.dat xyey"
testit "-plot barmode normal"
testit "-plot barmode stacked"
testit "-plot barmode aligned"
testit "-plot barmode overlap"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..show"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot show no"
testit "-plot show yes"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..shape"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot shape circle"
testit "-plot shape square"
testit "-plot shape diamond"
testit "-plot shape plus"
testit "-plot shape splus"
testit "-plot shape scross"
testit "-plot shape triangle"
testit "-plot shape arrow"
testit "-plot shape circle"
testit "-plot shape fill no"
testit "-plot shape fill yes"
testit "-plot shape color cyan"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..smooth"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot smooth step"
testit "-plot smooth linear"
testit "-plot smooth cubic"
testit "-plot smooth quadratic"
testit "-plot smooth catrom"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..color"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot color magenta"
testit "-plot color '#2C8'"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..width"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot width 2"
testit "-plot dash yes"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..error"
testit "-plot new"
testit "-plot load plot/xyexey.dat xyexey"
testit "-plot error no"
testit "-plot error yes"
testit "-plot error cap yes"
testit "-plot error cap no"
testit "-plot error color blue"
testit "-plot error width 2"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..name"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot legend yes"
testit "-plot name 'This is a test'"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..select"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot load plot/xyey.dat xyey"
testit "-plot select 2"
testit "-plot dataset 1"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..backward compatibility graph"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot graph grid x no"
testit "-plot graph grid y yes"
testit "-plot graph log x no"
testit "-plot graph log y no"
testit "-plot graph flip x no"
testit "-plot graph flip y no"
testit "-plot graph range x min 1"
testit "-plot graph range x max 100"
testit "-plot graph range y min 1"
testit "-plot graph range y max 100"
testit "-plot graph range x auto yes"
testit "-plot graph range y auto yes"
testit "-plot graph format x ''"
testit "-plot graph format y ''"
testit "-plot graph labels title 'The Title'"
testit "-plot graph labels xaxis 'X Axis'"
testit "-plot graph labels yaxis 'Y Axis'"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..backward compatibility view"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot view discrete yes"
testit "-plot view line yes"
testit "-plot view step yes"
testit "-plot view quadratic yes"
testit "-plot view errorbar yes"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..backward compatibility line"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot line discrete cross"
testit "-plot line linear width 2"
testit "-plot line linear dash yes"
testit "-plot line step width 2"
testit "-plot line step dash yes"
testit "-plot line quadratic width 2"
testit "-plot line quadratic dash yes"
testit "-plot line errorbar width 2"
testit "-plot line errorbar style 1"
testit "-sleep $delay"
testit "-plot close"
doit

initit "..backward compatibility color"
testit "-plot new"
testit "-plot load plot/xy.dat xy"
testit "-plot color discrete red"
testit "-plot color step blue"
testit "-plot color line green"
testit "-plot color quadratic cyan"
testit "-plot color errorbar magenta"
doit

fi

tt="png"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new"
testit "-png photo/rose.png"
testit "-png -slice photo/rose.png -noslice"
testit "-frame delete"

doit
fi

tt="port"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-port 5137"
testit "-port_only"
testit "-inet_only"

doit
fi

tt="pow"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-pow"

doit
fi

tt="prefs"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"

testit "-prefs clear"

# backward compatibility
testit "-prefs bgcolor white"
testit "-prefs nancolor white"
testit "-prefs threads 4"
testit "-prefs irafalign yes"

doit
fi

tt="preserve"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-preserve pan no"
testit "-preserve regions no"

doit
fi

tt="print"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
#testit "-psprint"
testit "-psprint destination printer"
testit "-psprint command lp"
testit "-psprint filename ds9.ps"
testit "-psprint color rgb"
testit "-psprint level 2"
testit "-psprint resolution 75"

doit
fi

tt="private"
if [ "$1" = "$tt" ]; then
initit "$tt"
testit "-private"

doit
fi

tt="raise"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-lower"
testit "-raise"

doit
fi

tt="regions"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt/region"
testit "-regions regions/ds9.physical.reg"
testit "-regions delete all"
testit "-regions load regions/ds9.physical.reg"
testit "-regions delete all"
testit "-regions load 'regions/ds9.fk5*.reg'"
testit "-regions delete all"
testit "-regions load all regions/ds9.physical.reg"
testit "-regions save foo.reg"
testit "-regions list"
testit "-regions list close"
testit "-regions delete all"

testit "-regions epsilon 5"
testit "-regions show yes"
testit "-regions showtext yes"
testit "-regions centroid auto no"
testit "-regions centroid radius 10"
testit "-regions centroid iteration 30"
#testit "-regions getinfo"
testit "-regions move front"
testit "-regions move back"
testit "-regions select all"
testit "-regions select none"
testit "-regions delete all"
testit "-regions delete select"
testit "-regions format ds9"
testit "-regions system physical"
testit "-regions sky fk5"
testit "-regions skyformat degrees"
testit "-regions delim nl"
testit "-regions strip no"
testit "-regions shape circle"
testit "-regions color green"
testit "-regions width 1"
testit "-regions edit yes"
testit "-regions include"
testit "-regions command 'circle 100 100 20'"

testit "-regions group new"
testit "-regions group foo new"
testit "-regions group foo update"
testit "-regions group foo select"
testit "-regions group foo color red"
testit "-regions group foo copy"
testit "-regions group foo delete"
testit "-regions group foo cut"
testit "-regions group foo font 'time 14 bold'"
testit "-regions group foo move 100 100"
testit "-regions group foo movefront"
testit "-regions group foo moveback"
testit "-regions group foo property delete no"

testit "-regions delete all"

testit "-regions command 'circle 100 100 20'"
testit "-regions select all"
testit "-regions copy"
testit "-regions cut"
testit "-regions paste"
testit "-regions undo"
testit "-regions delete all"

testit "-regions load regions/ds9.physical.reg"
testit "-regions select all"
testit "-regions composite"
testit "-regions desolve"
testit "-regions delete all"

testit "-regions command 'circle 100 100 20'"
testit "-regions savetemplate foo.tpl"
testit "-regions delete all"
testit "-regions template foo.tpl"
testit "-regions delete all"
testit "-regions template foo.tpl at 202.46963 47.19556 fk5"
testit "-regions delete all"

doit
fi

tt="red"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new rgb"
testit "-red"

testit "-rgb close"
doit
fi

tt="restore"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-backup foo.bck"
testit "-restore foo.bck"

doit
fi

tt="rgb"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-rgb open"
testit "-rgb close"
testit "-rgb"
testit "-rgb green"
testit "-rgb channel blue"
testit "-red"
testit "-green"
testit "-blue"
testit "-rgb view blue off"
testit "-rgb system wcs"
testit "-rgb lock wcs yes"
testit "-rgb lock wcs no"
testit "-rgb lock crop yes"
testit "-rgb lock crop no"
testit "-rgb lock slice yes"
testit "-rgb lock slice no"
testit "-rgb lock bin yes"
testit "-rgb lock bin no"
testit "-rgb lock scale yes"
testit "-rgb lock scale no"
testit "-rgb lock scalelimits yes"
testit "-rgb lock scalelimits no"
testit "-rgb lock colorbar yes"
testit "-rgb lock colorbar no"
testit "-rgb lock block yes"
testit "-rgb lock block no"
testit "-rgb lock smooth yes"
testit "-rgb lock smooth no"
testit "-rgb close"
testit "-frame delete"

doit
fi

tt="rgbarray"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new rgb"
testit "-rgbarray rgbarray/float_big.rgb[dim=256,bitpix=-32,endian=big]"
testit "-frame delete"

testit "-rgb close"
doit
fi

tt="rgbcube"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new rgb"
testit "-rgbcube rgbcube/float.fits"
testit "-frame delete"

testit "-rgb close"
doit
fi

tt="rgbimage"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new rgb"
testit "-rgbimage mecube/float.fits"
testit "-frame delete"

testit "-rgb close"
doit
fi

tt="rotate"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-rotate open"
testit "-rotate to 30"
testit "-rotate 15"
testit "-rotate close"
testit "-frame reset"

doit
fi

tt="samp"
if [ "$1" = "$tt" ]; then
initit "$tt"
testit "-samp no"
testit "-samp yes"
testit "-samp disconnect"
testit "-samp connect"
testit "-samp broadcast"
testit "-samp broadcast image"
testit "-samp send aladin"
testit "-samp send image aladin"

doit
fi

tt="save"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt/savefits"
testit "-save foo.fits"
testit "-save fits foo.fits"
testit "-save foo.fits image"
testit "-save fits foo.fits image"
testit "-save foo.fits slice"
testit "-save fits foo.fits slice"

testit "-frame new"
testit "-fits fits/table.fits"
testit "-save foo.fits"
testit "-save fits foo.fits"
testit "-save foo.fits image"
testit "-save fits foo.fits image"
testit "-save foo.fits table"
testit "-save fits foo.fits table"
testit "-frame delete"

testit "-frame new rgb"
testit "-rgbimage mecube/float.fits"
testit "-save rgbimage foo.fits"
testit "-frame delete"

testit "-frame new rgb"
testit "-rgbcube rgbcube/float.fits"
testit "-save rgbcube foo.fits"
testit "-frame delete"

testit "-frame new"
testit "-mecube mecube/float.fits"
testit "-save mecube foo.fits"
testit "-frame delete"

testit "-frame new"
testit "-mosaicimage mosaic/mosaicimage.fits"
testit "-save mosaicimage foo.fits"
testit "-frame delete"

testit "-frame new"
testit "-mosaicimage mosaic/mosaicimage.fits"
testit "-save mosaic foo.fits"
testit "-frame delete"

# backward compatibility
testit "-savefits foo.fits"

testit "-rgb close"
testit "-cube close"
doit
fi

# movie will fail if moved from corner
tt="saveimage"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-saveimage fits foo.fits"
testit "-saveimage foo.fits"
testit "-saveimage eps foo.eps"
testit "-saveimage foo.eps"
#testit "-saveimage foo.gif"
testit "-saveimage tiff foo.tiff none"
testit "-saveimage foo.tiff"
testit "-saveimage jpeg foo.jpeg 100"
testit "-saveimage foo.jpeg"
testit "-saveimage png foo.png"
testit "-saveimage foo.png"

# backward compatibility
testit "-saveimage tiff none foo.tiff"
testit "-saveimage jpeg 100 foo.jpeg"
#testit "-saveimage mpeg foo.mpeg"

doit
fi

tt="scale"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-scale open"
testit "-scale minmax"
testit "-scale linear"
testit "-scale log"
testit "-scale pow"
testit "-scale sqrt"
testit "-scale squared"
testit "-scale histequ"
testit "-scale log exp 1000"
testit "-scale log exp 10000"
testit "-linear"
testit "-log"
testit "-pow"
testit "-sqrt"
testit "-squared"
testit "-asinh"
testit "-sinh"
testit "-histequ"
testit "-scale linear"
testit "-scale minmax"
testit "-scale zscale"
testit "-scale zmax"
testit "-scale user"
testit "-scale mode minmax"
testit "-scale mode zscale"
testit "-scale mode zmax"
testit "-scale mode 95"
testit "-minmax"
testit "-zscale"
testit "-zmax"
testit "-scale minmax"
testit "-scale limits 0 100"
testit "-scale global"
testit "-scale local"
testit "-scale scope global"
testit "-scale scope local"
testit "-scale mode minmax"
testit "-scale linear"
testit "-scale zscale"
testit "-scale datasec yes"
testit "-scale match"
testit "-scale match limits"
testit "-scale lock yes"
testit "-scale lock no"
testit "-scale lock limits yes"
testit "-scale lock limits no"
testit "-scale close"

doit
fi

# backward compatibility
tt="sfits"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt...backward compatibility"
testit "-frame new"
testit "-sfits sfits/float.hdr sfits/float.arr"
testit "-sfits -slice sfits/float.hdr sfits/float.arr -noslice"
testit "-sfits -mask sfits/float.hdr sfits/float.arr -nomask"
testit "-frame delete"

doit
fi

tt="shm"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
# no test

doit
fi

tt="sia"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-sia 2mass"

testit "-sia clear"
testit "-sia close"

testit "-sia 2mass"
testit "-sia name m51"
testit "-sia coordinate 202.48 47.21 fk5"
testit "-sia system wcs"
testit "-sia sky fk5"
testit "-sia skyformat degrees"
testit "-sia size 22 22 arcmin"
testit "-sia retrieve"
testit "-sia save foo.xml"
testit "-sia cancel"
#testit "-sia print"
testit "-sia close"

doit
fi

tt="single"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-tile"

doit
fi

tt="sinh"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-sinh"

doit
fi

tt="skyview"
if [ "$1" = "$tt" ]; then
initit "$tt"
testit "-skyview open"
testit "-skyview close"
#testit "-skyview survey sdssi"
testit "-skyview size 30 30 arcsec"
testit "-skyview pixels 600 600"
testit "-skyview save no"
testit "-skyview frame new"
testit "-skyview update frame"
testit "-skyview m51"
testit "-skyview name m51"
testit "-skyview name ''"
testit "-skyview coord 13:29:55.301 +47:11:37.73 sexagesimal"
testit "-skyview update frame"
testit "-mode crosshair"
testit "-skyview update crosshair"
testit "-skyview close"
testit "-mode none"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"

doit
fi

tt="sleep"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-sleep"
testit "-sleep 2"

doit
fi

tt="slice"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-slice"
testit "-noslice"

doit
fi

# backward compatibility
tt="smosaic"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt...backward compatibility"
# no test

doit
fi

# backward compatibility
tt="smosaicwcs"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt...backward compatibility"
# no test

doit
fi

# backward compatibility
tt="smosaiciraf"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt...backward compatibility"
# no test

doit
fi

tt="smooth"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-smooth open"
testit "-smooth"
testit "-smooth yes"
testit "-smooth function tophat"
testit "-smooth radius 5"
testit "-smooth match"
testit "-smooth lock yes"
testit "-smooth lock no"
testit "-smooth no"
testit "-smooth close"

doit
fi

tt="squared"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-squared"

doit
fi

tt="sqrt"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-sqrt"

doit
fi

tt="source"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-source aux/source.tcl"

doit
fi

# backward compatibility
tt="srgbcube"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt...backward compatibility"
testit "-frame new rgb"
testit "-srgbcube srgbcube/float.hdr srgbcube/float.arr"
testit "-frame delete"

testit "-rgb close"
doit
fi

tt="tcl"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-tcl 'puts stderr {Hello Again, World}'"

doit
fi

tt="threads"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt/tread"
testit "-threads 4"

doit
fi

tt="tiff"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt/tif"
testit "-frame new"
testit "-tiff photo/rose.tiff"
testit "-tiff -slice photo/rose.tiff -noslice"
testit "-frame delete"

doit
fi

tt="tile"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new -fits data/img.fits"
testit "-frame new -fits data/img.fits"
testit "-tile"
testit "-tile yes"
testit "-tile row"
testit "-tile column"
testit "-tile grid"
testit "-tile grid mode automatic"
testit "-tile grid direction x"
testit "-frame delete"
testit "-frame delete"

doit
fi

tt="title"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-title foobar"

doit
fi

tt="unix"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-unix /tmp/.IMT%d"
testit "-unix_only"

doit
fi

tt="update"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-update"
testit "-update 1 100 100 300 400"
testit "-update now"
testit "-update now 1 100 100 300 400"

doit
fi

tt="url"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame new"
testit "-url http://ds9.si.edu/download/data/img.fits"
testit "-frame delete"

doit
fi

tt="version"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-version"

doit
fi

tt="view"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-frame delete"
testit "-view layout vertical"
testit "-sleep $delay"
testit "-view layout horizontal"
testit "-sleep $delay"

testit "-view keyvalue BITPIX"
testit "-view info no"
testit "-view info yes"
testit "-view panner no"
testit "-view panner yes"
testit "-view magnifier no"
testit "-view magnifier yes"
testit "-view buttons no"
testit "-view buttons yes"
testit "-view colorbar no"
testit "-view colorbar yes"
testit "-view graph horizontal yes"
testit "-view graph horizontal no"
testit "-view graph vertical yes"
testit "-view graph vertical no"
testit "-view filename no"
testit "-view filename yes"
testit "-view object no"
testit "-view object yes"
testit "-view keyword yes"
testit "-view keyword no"
testit "-view minmax yes"
testit "-view minmax no"
testit "-view lowhigh yes"
testit "-view lowhigh no"
testit "-view units yes"
testit "-view units no"
testit "-view wcs no"
testit "-view wcs yes"
testit "-view wcsa yes"
testit "-view wcsa no"
testit "-view detector yes"
testit "-view detector no"
testit "-view amplifier yes"
testit "-view amplifier no"
testit "-view physical no"
testit "-view physical yes"
testit "-view image no"
testit "-view image yes"
testit "-view frame no"
testit "-view frame yes"
testit "-sleep $delay"

testit "-frame new rgb"
testit "-view red no"
testit "-view red yes"
testit "-view green no"
testit "-view green yes"
testit "-view blue no"
testit "-view blue yes"
testit "-frame delete"
testit "-sleep $delay"

testit "-frame new -fits data/img.fits"

testit "-rgb close"
doit
fi

tt="vla"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-vla open"
testit "-vla close"
testit "-vla size 30 30 arcsec"
testit "-vla save no"
testit "-vla frame new"
testit "-vla survey first"
testit "-vla update frame"
testit "-vla m51"
testit "-vla name m51"
testit "-vla name ''"
testit "-vla coord 13:29:52.37 +47:11:40.8 sexagesimal"
testit "-vla update frame"
testit "-mode crosshair"
testit "-vla update crosshair"
testit "-vla close"
testit "-mode none"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"

doit
fi

tt="vlss"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-vlss open"
testit "-vlss close"
testit "-vlss size 30 30 arcsec"
testit "-vlss save no"
testit "-vlss frame new"
testit "-vlss update frame"
testit "-vlss m51"
testit "-vlss name m51"
testit "-vlss name ''"
testit "-vlss coord 13:29:52.37 +47:11:40.8 sexagesimal"
testit "-vlss update frame"
testit "-mode crosshair"
testit "-vlss update crosshair"
testit "-vlss close"
testit "-mode none"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"
testit "-frame delete"

doit
fi

tt="vo"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-vo method open"
testit "-vo method mime"
testit "-vo server 'http://cxc.harvard.edu/chandraed/list.txt'"
testit "-vo internal yes"
testit "-vo delay 10"
testit "-vo connect foo"
testit "-vo chandra-ed"
testit "-vo disconnect chandra-ed"
testit "-vo method close"
testit "-web close"

doit
fi

tt="wcs"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-wcs open"
testit "-wcs wcs"
testit "-wcs align yes"
testit "-wcs system wcs"
testit "-wcs sky galactic"
testit "-wcs skyformat sexagesimal"
testit "-wcs align no"
testit "-wcs sky fk5"
testit "-wcs skyformat degrees"
testit "-wcs append aux/image.wcs"
testit "-wcs replace aux/image.wcs"
testit "-wcs reset"
testit "-wcs skyformat sexagesimal"
testit "-wcs close"

doit
fi

tt="web"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-web ds9.si.edu/doc/acknowledgment.html"
testit "-web ds9.si.edu/doc/helpdesk.html"
testit "-web hvweb click back"
testit "-web click forward"
testit "-web clear"
testit "-web close"

doit
fi

tt="width"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-width 600"

doit
fi

tt="xpa"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-xpa yes"
testit "-xpa local"
testit "-xpa noxpans"
testit "-xpa connect"
testit "-xpa info"

doit
fi

tt="zscale"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-zscale contrast .25"
testit "-zscale sample 600"
testit "-zscale line 120"

doit
fi

tt="zoom"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-zoom open"
testit "-zoom 2"
testit "-zoom 2 4"
testit "-zoom to 4"
testit "-zoom to 2 4"
testit "-zoom in"
testit "-zoom out"
testit "-zoom to fit"
testit "-zoom close"
testit "-frame reset"

doit
fi

tt="exit"
if [ "$1" = "$tt" -o -z "$1" ]; then
initit "$tt"
testit "-quit"

doit
fi

rm -rf foo.*
echo "DONE"
