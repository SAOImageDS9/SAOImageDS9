echo
echo "*** align.sh ***"

ds9 -scale mode 98 data/r.fits data/i.fits data/v.fits -match frames wcs -single

ds9 -zscale -mosaicimage iraf mosaic/megacam.fits -mosaicimage wcs mosaic/megacam.fits -single

ds9 -zscale -mosaic wcs mosaic/megacam.fits[1] mosaic/megacam.fits[2] mosaic/megacam.fits[3] -rgb -red mosaic/megacam.fits[1] -green mosaic/megacam.fits[2] -blue mosaic/megacam.fits[3] -single

ds9 -zscale -mosaic wcs data/m51hst.fits data/img.fits -fits -rgb -red data/m51hst.fits -green data/img.fits -single

ds9 -zscale data/ch4.nonan.fits data/mips24.nonan.fits -frame new -mosaic wcs data/ch4.nonan.fits data/mips24.nonan.fits -frame new rgb -fits -red data/ch4.nonan.fits -green data/mips24.nonan.fits -frame 1 -pan to 17:42:56.836 -28:31:53.10 fk5 -match frames wcs -single

#ds9 -mosaicimage iraf mosaic/ds9_2amp.fits -mosaicimage wcs mosaic/ds9_2amp.fits -fits -rgb -red mosaic/ds9_2amp.fits[1] -green mosaic/ds9_2amp.fits[2] -single

#ds9 -mosaicimage iraf mosaic/ds9_8amp_2x2.fits -mosaicimage wcs mosaic/ds9_8amp_2x2.fits -single

echo "Done"


