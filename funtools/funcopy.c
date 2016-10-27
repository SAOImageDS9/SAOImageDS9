/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>

/*
 *
 * private routines
 *
 */

/*
 *
 * semi-public routines -- used by other fun routines, but not by users
 *
 */

#ifdef ANSI_FUNC
void
_FunCopyBinDelete(FITSHead header, int n)
#else
void _FunCopyBinDelete(header, n)
     FITSHead header;
     int n;
#endif
{
  int i;
  char *s;
  FITSCard card;

  /* delete unwanted fields */
  ft_headdel(header, "TFIELDS", 0);
  /* delete checksum header params */
  if( (s=ft_headgets(header, "CHECKSUM", 0, NULL, &card)) && card){
    ft_headdel(header, "CHECKSUM", 0);
    xfree(s);
  }
  if( (s=ft_headgets(header, "DATASUM", 0, NULL, &card)) && card){
    ft_headdel(header, "DATASUM", 0);
    xfree(s);
  }
  for(i=1; i<=n; i++){
    if( (s=ft_headgets(header, "TFORM", i, NULL, &card)) && card){
      ft_headdel(header, "TFORM", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TTYPE", i, NULL, &card)) && card){
      ft_headdel(header, "TTYPE", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TUNIT", i, NULL, &card)) && card){
      ft_headdel(header, "TUNIT", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TDISP", i, NULL, &card)) && card){
      ft_headdel(header, "TDISP", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TSCAL", i, NULL, &card)) && card ){
      ft_headdel(header, "TSCAL", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TZERO", i, NULL, &card)) && card ){
      ft_headdel(header, "TZERO", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TNULL", i, NULL, &card)) && card ){
      ft_headdel(header, "TNULL", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TLMIN", i, NULL, &card)) && card ){
      ft_headdel(header, "TLMIN", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TLMAX", i, NULL, &card)) && card ){
      ft_headdel(header, "TLMAX", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TDMIN", i, NULL, &card)) && card ){
      ft_headdel(header, "TDMIN", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TDMAX", i, NULL, &card)) && card ){
      ft_headdel(header, "TDMAX", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TDBIN", i, NULL, &card)) && card ){
      ft_headdel(header, "TDBIN", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TCTYP", i, NULL, &card)) && card ){
      ft_headdel(header, "TCTYP", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TCRVL", i, NULL, &card)) && card ){
      ft_headdel(header, "TCRVL", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TCDLT", i, NULL, &card)) && card ){
      ft_headdel(header, "TCDLT", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TCRPX", i, NULL, &card)) && card ){
      ft_headdel(header, "TCRPX", i);
      xfree(s);
    }
    if( (s=ft_headgets(header, "TCROT", i, NULL, &card)) && card ){
      ft_headdel(header, "TCROT", i);
      xfree(s);
    }
  }
}

/*
 *
 * _FunCopy2ImageHeader -- copy FITS header, transforming it to primary image.
 * This beastly routine is used by FunImagePut to make ordinary life easier.
 *
 */
#ifdef ANSI_FUNC
int
_FunCopy2ImageHeader(Fun from, Fun to)
#else
int _FunCopy2ImageHeader(from, to)
     Fun from;			/* input FITS header */
     Fun to;			/* output FITS header */
#endif
{
  int simple=1;
  int i, j;
  int cols;
  char *s;
  char tbuf[SZ_LINE];
  double dval;
  double crpix1, crpix2;
  double cdelt1, cdelt2;
  double ltv1, ltv2;
  double ltm1_1, ltm2_1, ltm1_2, ltm2_2;
  FITSCard card;

  /* make sure we have something to work with */
  if( !from )
    return 0;

  /* make a copy of the header */
  to->header = ft_headcopy(from->header);

  /* make sure this is a primary FITS file */
  ft_cardfmt((FITSCard)to->header->cards, 
	     "SIMPLE", 0, FT_LOGICAL, &simple, 0, "Standard FITS");

  /* add/edit image-related keywords based on the orig binning values */
  ft_headseti(to->header,
	      "NAXIS", 0, from->odims, "number of axes", 1);
  ft_headseti(to->header,
	      "NAXIS", 1, from->odim1, "x axis dimension", 1);
  if( from->odims >= 2 ){
    ft_headseti(to->header,
		"NAXIS", 2, from->odim2, "y axis dimension", 1);
    
  }
  else{
    ft_headdel(to->header, "NAXIS", 2);
  }
  ft_headseti(to->header,
	      "BITPIX", 0, from->obitpix, "bits/pixel", 1);
  /* synchronize the header and the cards after any changes */
  ft_syncdata(to->header);

  /* get dimensions of the new image back into the struct */
  to->dim1 = ft_headgeti(to->header, "NAXIS", 1, 0, &card);
  to->dim2 = ft_headgeti(to->header, "NAXIS", 2, 0, &card);
  /* determine dimensionality */
  if( card )
    to->dims = 2;
  else
    to->dims = 1;
  /* get bitpix */
  to->bitpix = ft_headgeti(to->header, "BITPIX", 0, 0, &card);

  /* now get image size based on these params */
  _FunImageSize(to);

  /* delete checksum header params */
  if( ft_headgets(to->header, "CHECKSUM", 0, NULL, &card) && card)
    ft_headdel(to->header, "CHECKSUM", 0);
  if( ft_headgets(to->header, "DATASUM", 0, NULL, &card) && card)
    ft_headdel(to->header, "DATASUM", 0);

  /* now perform the transformation based on input type */
  switch(from->type){
  case FUN_TABLE:
  case FUN_EVENTS:
    /* delete extraneous bintable keyword */
    /* but leave the XTENSION card so we can overwrite it later */
    /* ft_headdel(to->header, "XTENSION", 0); */
    ft_headdel(to->header, "PCOUNT", 0);
    ft_headdel(to->header, "GCOUNT", 0);
    if( (s=ft_headgets(to->header, "EXTNAME", 0, NULL, &card)) && card){
      ft_headdel(to->header, "EXTNAME", 0);
      xfree(s);
    }
    if( (ft_headgeti(to->header, "EXTVER", 0, 0, &card)!=0) && card)
      ft_headdel(to->header, "EXTVER", 0);
    if( (ft_headgeti(to->header, "EXTLEVEL", 0, 0, &card)!=0) && card)
      ft_headdel(to->header, "EXTLEVEL", 0);
    /* process table columns */
    cols = ft_headgeti(to->header, "TFIELDS", 0, 0, &card);
    /* transform WCS cards for the two columns on which we are binning */
    /* this assumes the TFORMnnn are in order ... hmmm! */
    for(j=1; j<=2; j++){
      if( (i=from->bin[j-1]+1) >= 1 ){
	if( (s=ft_headgets(from->header, "TCTYP", i, NULL, &card)) && card ){
	  ft_headapps(to->header, "CTYPE", j, s, NULL);
	  xfree(s);
	}
	if( (s=ft_headgets(from->header, "TCRVL", i, NULL, &card)) && card ){
	  ft_headappv(to->header, "CRVAL", j, s, NULL);
	  xfree(s);
	}
	if((dval=ft_headgetr(from->header, "TCDLT", i, 0.0, &card)) && card){
	  /* factor in binsize */
	  if( from->cols[i-1] && (from->cols[i-1]->binsiz > 0) )
	    dval *= from->cols[i-1]->binsiz;
	  ft_headsetr(to->header, "CDELT", j, dval, 7, NULL, 1);
	}
	if( (s=ft_headgets(from->header, "TCROT", i, NULL, &card)) && card ){
	  ft_headappv(to->header, "CROTA", j, s, NULL);
	  xfree(s);
	}
	if((dval=ft_headgetr(from->header, "TCRPX", i, 0.0, &card)) && card){
	  /* convert WCS center value from physical to image coords */
	  if( from->cols[i-1] ){
	    dval = tlp2i(dval, 
			 from->cols[i-1]->tlmin, from->cols[i-1]->binsiz, 'D');
	  }
	  ft_headsetr(to->header, "CRPIX", j, dval, 7, NULL, 1);
	}
      }
    }
    /* delete unwanted fields */
    _FunCopyBinDelete(to->header, cols);
    break;
  case FUN_IMAGE:
    /* delete all signs of higher axes */
    for(i=3; i<=ft_naxes(to->header); i++)
      ft_headdel(to->header, "NAXIS", i);
    /* if bscale and bzero were applied to the input, delete them */
    if( from->scaled & FUN_SCALE_APPLIED ){
      if( ft_headfind(to->header, "BSCALE", 0, 0) )
	ft_headdel(to->header, "BSCALE", 0);
      if( ft_headfind(to->header, "BZERO", 0, 0) )
	ft_headdel(to->header, "BZERO", 0);
    }
    /* if an image section is blocked and we are summing,
       we have to take that into account when setting the bzero factor */
    else if( (ft_bzero(to->header) != 0.0) && 
	(from->block != 1) && (from->btype == FUN_SUM) ){
      dval = ft_bzero(to->header) * from->block * from->block;
      ft_headsetr(to->header, "BZERO", 0, dval, 7, "", 1);
    }
    /* deal with the IRAF DETSEC keyword */
    if( (s=ft_headgets(from->header, "DATASEC", 0, NULL, &card)) && card ){
      int dx0, dx1, dy0, dy1;
      char s1[SZ_LINE], s2[SZ_LINE], s3[SZ_LINE], s4[SZ_LINE];
      char *t=s;
      if( *t == '[' ) t++;
      if(sscanf(t, "%[-0-9.*] : %[-0-9.*] , %[-0-9.*] : %[-0-9.*]", 
		s1, s2, s3, s4) == 4){
	dx0 = MAX(1,atoi(s1)-from->x0+1);
	dx1 = MIN(from->odim1,atoi(s2)-from->x0+1);
	dy0 = MAX(1,atoi(s3)-from->y0+1);
	dy1 = MIN(from->odim2,atoi(s4)-from->y0+1);
	snprintf(s1, SZ_LINE, "[%d:%d,%d:%d]", dx0, dx1, dy0, dy1);
	ft_headsets(to->header, "DATASEC", 0, s1, NULL, 1);
      }
      xfree(s);
    }
    break;
  case FUN_ARRAY:
  default:
    break;
  }

  /* update WCS values */
  /* re-set the tangent plane point */
  crpix1 = ft_headgetr(to->header, "CRPIX", 1, 0.0, &card);
  if( card != NULL ){
    crpix1 = (crpix1 + 1.0 - from->x0 - 0.5)/from->block + 0.5;
    ft_headsetr(to->header, "CRPIX", 1, crpix1, 7, "reference point", 1);
  }
  crpix2 = ft_headgetr(to->header, "CRPIX", 2, 0.0, &card);
  if( card != NULL ){
    crpix2 = (crpix2 + 1.0 - from->y0 - 0.5)/from->block + 0.5;
    ft_headsetr(to->header, "CRPIX", 2, crpix2, 7, "reference point", 1);
  }

  /* update degrees/pixel  */
  cdelt1 = ft_headgetr(to->header, "CDELT", 1, 0.0, &card);
  if( card != NULL ){
    cdelt1 *= from->block;
    ft_headsetr(to->header, "CDELT", 1, cdelt1, 7, "degrees/pixel", 1);
  }
  cdelt2 = ft_headgetr(to->header, "CDELT", 2, 0.0, &card);
  if( card != NULL ){
    cdelt2 *= from->block;
    ft_headsetr(to->header, "CDELT", 2, cdelt2, 7, "degrees/pixel", 1);
  }

  /* WCS matrix-style */
  for(i=1; i<=2; i++){
    for(j=1; j<=2; j++){
      snprintf(tbuf, SZ_LINE, "CD%d_%d", i, j);
      dval = ft_headgetr(to->header, tbuf, 0, 0.0, &card);
      if( card != NULL ){
	dval *= from->block;
	ft_headsetr(to->header, tbuf, 0, dval, 7, "WCS matrix value", 1);
      }
    }
  }

  /* re-set the tangent plane point for IRAF matrix */
  /* for images, ltv values are in file */
  if( from->odims >= 2 ){
    if( from->header->image ){
      ltv1 = ft_headgetr(from->header, "LTV", 1, 0.0, &card);
      ltv2 = ft_headgetr(from->header, "LTV", 2, 0.0, &card);
    }
    /* for tables, ltv is related to tlmin value of binned columns */
    else{
      ltv1 = 1.0 - (int)(from->min1 + 0.5);
      ltv2 = 1.0 - (int)(from->min2 + 0.5);
    }
    ltv1 = (ltv1 + 1.0 - from->x0 - 0.5 )/(from->block * from->binsiz1) + 0.5;
    ltv2 = (ltv2 + 1.0 - from->y0 - 0.5 )/(from->block * from->binsiz2) + 0.5;
    ft_headsetr(to->header, "LTV", 1, ltv1, 7, "IRAF ref. point", 1);
    ft_headsetr(to->header, "LTV", 2, ltv2, 7, "IRAF ref. point", 1);

    /* IRAF matrix values */
    ltm1_1 = ft_headgetr(from->header, "LTM1_1", 0, 1.0, &card);
    ltm2_1 = ft_headgetr(from->header, "LTM2_1", 0, 0.0, &card);
    ltm1_2 = ft_headgetr(from->header, "LTM1_2", 0, 0.0, &card);
    ltm2_2 = ft_headgetr(from->header, "LTM2_2", 0, 1.0, &card);
    ltm1_1 /= (from->block * from->binsiz1);
    ltm2_1 /= (from->block * from->binsiz2);
    ltm1_2 /= (from->block * from->binsiz1);
    ltm2_2 /= (from->block * from->binsiz2);
    ft_headsetr(to->header, "LTM1_1", 0, ltm1_1, 7, "IRAF matrix value", 1);
    ft_headsetr(to->header, "LTM2_1", 0, ltm2_1, 7, "IRAF matrix value", 1);
    ft_headsetr(to->header, "LTM1_2", 0, ltm1_2, 7, "IRAF matrix value", 1);
    ft_headsetr(to->header, "LTM2_2", 0, ltm2_2, 7, "IRAF matrix value", 1);
  }

  return(1);
}

/*
 *
 * public routines
 *
 */

/* none */
