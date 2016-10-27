echo
echo "*** lock.sh ***"

if [ "$1" = "frame" -o -z "$1" ]; then
echo "Testing frame"
ds9 -debug -zscale data/img.fits data/img.fits -tile -lock frame wcs -mode pan
fi

if [ "$1" = "crosshair" -o -z "$1" ]; then
echo "Testing crosshair"
ds9 -debug -zscale data/img.fits data/img.fits -tile -lock crosshair wcs -mode crosshair
fi

if [ "$1" = "crop" -o -z "$1" ]; then
echo "Testing crop"
ds9 -debug -zscale data/img.fits -rgb data/img.fits -green data/img.fits -blue data/img.fits -tile -lock crop wcs -crop open -mode crop -rgb lock crop yes
ds9 -debug -zscale data/3d.fits -3d data/3d.fits -3d vp 45 30 -tile -lock crop wcs -mode crop
fi

if [ "$1" = "slice" -o -z "$1" ]; then
echo "Testing slice"
ds9 -debug -zscale data/3d.fits -3d data/3d.fits -3d vp 45 30 -tile -lock slice
fi

if [ "$1" = "bin" -o -z "$1" ]; then
echo "Testing bin"
ds9 -debug -zscale fits/table.fits -rgb fits/table.fits -green fits/table.fits -blue fits/table.fits -tile -lock bin -bin open -rgb lock bin yes
fi

if [ "$1" = "scale" -o -z "$1" ]; then
echo "Testing scale"
ds9 -debug -zscale data/img.fits -rgb data/img.fits -green data/img.fits -blue data/img.fits -tile -lock scale -scale open -rgb lock scale yes
fi

if [ "$1" = "color" -o -z "$1" ]; then
echo "Testing color"
ds9 -debug -zscale data/img.fits data/img.fits -rgb -red data/img.fits -green data/img.fits -blue data/img.fits -rgb lock colorbar yes -rgb -red data/img.fits -green data/img.fits -blue data/img.fits  -rgb lock colorbar yes -tile -lock colorbar yes -cmap open
fi

if [ "$1" = "block" -o -z "$1" ]; then
echo "Testing block"
ds9 -debug -zscale data/img.fits data/img.fits -tile -lock block -block 4
fi

if [ "$1" = "smooth" -o -z "$1" ]; then
echo "Testing smooth"
ds9 -debug -zscale data/img.fits data/img.fits -tile -lock smooth -smooth
fi

echo "Done"
