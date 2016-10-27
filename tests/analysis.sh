echo
echo "*** analysis.sh ***"

echo "Starting DS9..."
if [ `xpaaccess ds9` = no ]
then
    ds9&
fi

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

# load default
xpaset -p ds9 scale zscale
xpaset -p ds9 fits data/img.fits
xpaset -p ds9 regions file analysis/analysis.reg
xpaset -p ds9 analysis clear
xpaset -p ds9 analysis load analysis/analysis.ans

# Main
if [ "$1" = "help" -o  -z "$1" ]; then
echo "$j Help"
xpaset -p ds9 analysis 0
fi

# Web
if [ "$1" = "web" -o  -z "$1" ]; then
echo "$j Web"
xpaset -p ds9 analysis 1

echo "..$j web url"
xpaset -p ds9 analysis 2

echo "..$j web file"
xpaset -p ds9 analysis 3
fi

# Basics
if [ "$1" = "basics" -o  -z "$1" ]; then
echo "Basic"
xpaset -p ds9 analysis 4

echo "..$j escape macro"
xpaset -p ds9 analysis 5

echo "..$j non macro"
xpaset -p ds9 analysis 6

echo "..$j \$xpa"
xpaset -p ds9 analysis 7

echo "..$j \$xpa_method"
xpaset -p ds9 analysis 8

echo "..$j \$vo_method"
xpaset -p ds9 analysis 9

echo "..$j \$filename"
xpaset -p ds9 analysis 10

echo "..$j \$filename(root)"
xpaset -p ds9 analysis 11

echo "..$j \$filename(full)"
xpaset -p ds9 analysis 12

echo "..$j \$filedialog(open)"
xpaset -p ds9 analysis 13

echo "..$j \$filename(save)"
xpaset -p ds9 analysis 14

echo "..$j \$width $height $depth $bitpix"
xpaset -p ds9 analysis 15

echo "..$j \$pan"
xpaset -p ds9 analysis 16

echo "..$j \$env"
xpaset -p ds9 analysis 17
fi

# Regions
if [ "$1" = "regions" -o  -z "$1" ]; then
echo "$j Regions"
xpaset -p ds9 analysis 18

echo "..$j \$regions"
xpaset -p ds9 analysis 19

echo "..$j \$regions wcs"
xpaset -p ds9 analysis 20

echo "..$j \$jnclude_regions_pixels"
xpaset -p ds9 analysis 21

echo "..$j \$filename $regions"
xpaset -p ds9 analysis 22

echo "..$j \$regions()"
xpaset -p ds9 analysis 23
fi

# Output
if [ "$1" = "output" -o  -z "$1" ]; then
echo "$j Output"
xpaset -p ds9 analysis 24

echo "..$j \$null"
xpaset -p ds9 analysis 25

echo "..$j \$text"
xpaset -p ds9 analysis 26

echo "..$j \$plot"
xpaset -p ds9 analysis 27

echo "..$j \$plot(title,x,y,xyey)"
xpaset -p ds9 analysis 28

echo "..$j \$plot(title,x,y,xyexey)"
xpaset -p ds9 analysis 29

echo "..$j \$plot(title,x,y,4)"
xpaset -p ds9 analysis 30

echo "..$j \$plot(title,x,y,5)"
xpaset -p ds9 analysis 31

echo "..$j \$plot(stdin)"
xpaset -p ds9 analysis 32

echo "..$j \$plot(stdin) text"
xpaset -p ds9 analysis 33

echo "..$j \$plot(stdin) error"
xpaset -p ds9 analysis 34

echo "..$j \$data"
xpaset -p ds9 analysis 35

echo "..$j \$jmage"
xpaset -p ds9 analysis 36

echo "..$j \$jmage(3d)"
xpaset -p ds9 analysis 37
fi

# Dialogs
if [ "$1" = "dialogs" -o  -z "$1" ]; then
echo "$j Dialog"
xpaset -p ds9 analysis 38

echo "..$j \$message(message)"
xpaset -p ds9 analysis 39

echo "..$j \$message(ok,message)"
xpaset -p ds9 analysis 40

echo "..$j \$entry(message)"
xpaset -p ds9 analysis 41
fi

# Params
if [ "$1" = "params" -o  -z "$1" ]; then
echo "$j Param"
xpaset -p ds9 analysis 42

echo "..$j \$param"
xpaset -p ds9 analysis 43

echo "..$j \$param @file"
xpaset -p ds9 analysis 44
fi

# Network
if [ "$1" = "network" -o  -z "$1" ]; then
echo "$j Network"
xpaset -p ds9 analysis 45

echo "..$j \$url(http://)"
xpaset -p ds9 analysis 46
fi

echo "PASSED"

# Other
if [ "$1" = "other" -o  -z "$1" ]; then
xpaset -p ds9 analysis message {press 'x','y','z' to test interactive}
fi

echo "Done"
