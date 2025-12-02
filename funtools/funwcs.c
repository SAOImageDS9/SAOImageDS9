/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>
#include <wcs.h>

/*
 *
 * _FunWCS -- get a WCS struct, transforming table column info if required
 * If doimage is true, the physical tcrval values is transformed into image
 * crval, otherwise, its just transcribed. The former is used with images,
 * the latter is used with events.
 *
 */
#ifdef ANSI_FUNC
struct WorldCoor *
_FunWCS(Fun fun, int doimage)
#else
struct WorldCoor *_FunWCS(fun, doimage)
     Fun fun;
     int doimage;
#endif
{
  int i, j;
  int ival;
  int simple=1;
  double dval;
  double binsiz;
  char *s;
  FITSHead iheader;  
  FITSHead oheader;    
  FITSCard card;
  struct WorldCoor *wcs;

  /* make sure we have something to process */
  if( !_FunValid(fun) )
    return NULL;

  /* get type and header info */
  FunInfoGet(fun, FUN_HEADER, &iheader, 0);

  /* make sure we have something to process */
  if( !iheader )
    return NULL;

  /* process image -- just call wcs routines */
  if( iheader->image ){
    /* init new wcs */
    if( hlength(ft_cards(iheader), 0) < 0 ) return NULL;
    wcs = wcsinit(ft_cards(iheader));
    return wcs;
  }
  /* for tables, we can init wcs only the specified columns */
  else if( iheader->table ){
    /* make sure we have valid binning columns */
    if( (fun->bin[0]<0) || (fun->bin[1]<0) )
      return NULL;

    /* make a copy of the header */
    oheader = ft_headcopy(iheader);
    /* make sure this is a primary FITS file */
    ft_cardfmt((FITSCard)oheader->cards, 
	       "SIMPLE", 0, FT_LOGICAL, &simple, 0, "Standard FITS");

    /* add/edit image-related keywords based on the orig binning values */
    ft_headseti(oheader, "NAXIS", 0, fun->dims, "number of axes", 1);
    /* set dimension info */
    for(j=0; j<fun->dims; j++){
      i = fun->bin[j];
      if( fun->cols[i] ){
	if( doimage && (fun->cols[i]->binsiz > 0) )
	  binsiz = fun->cols[i]->binsiz;
	else
	  binsiz = 1.0;
	ival = (int)tldim(fun->cols[i]->tlmin, fun->cols[i]->tlmax,
			  binsiz, fun->cols[i]->type);
      }
      else
	ival = 1;
      ft_headseti(oheader, "NAXIS", j+1, ival, "axis dimension", 1);
    }
    /* set bitpix */
    ft_headseti(oheader, "BITPIX", 0, 32, "bits/pixel", 1);
    /* synchronize the header and the cards after any changes */
    ft_syncdata(oheader);

    /* transform WCS cards for the specified columns, if we have such */
    for(j=1; j<=2; j++){
      if( (i=fun->bin[j-1]+1) >= 1 ){
	if( (s=ft_headgets(iheader, "TCTYP", i, NULL, &card)) && card ){
	  ft_headapps(oheader, "CTYPE", j, s, NULL);
	  xfree(s);
	}
	if( (s=ft_headgets(iheader, "TCRVL", i, NULL, &card)) && card ){
	  ft_headappv(oheader, "CRVAL", j, s, NULL);
	  xfree(s);
	}
	if( (dval=ft_headgetr(iheader, "TCDLT", i, 0.0, &card)) && card ){
	  /* factor in binsize */
	  if( doimage && (fun->cols[i-1]->binsiz >0) )
	    dval *= fun->cols[i-1]->binsiz;
	  ft_headsetr(oheader, "CDELT", j, dval, 15, NULL, 1);
	}
	if( (s=ft_headgets(iheader, "TCROT", i, NULL, &card)) && card ){
	  ft_headappv(oheader, "CROTA", j, s, NULL);
	  xfree(s);
	}
	if( (dval=ft_headgetr(iheader, "TCRPX", i, 0.0, &card)) && card ){
	  /* convert floating WCS center value from physical to image coords */
	  if( doimage ){
	    if( fun->cols[i-1] )
	      dval = tlp2i(dval, 
			   fun->cols[i-1]->tlmin, fun->cols[i-1]->binsiz, 'D');
	  }
	  ft_headsetr(oheader, "CRPIX", j, dval, 15, NULL, 1);
	}
      }
    }
    /* init new wcs */
    hlength(ft_cards(oheader),0);
    wcs = wcsinit(ft_cards(oheader));
    ft_headfree(oheader, 1);
    return wcs;
  }
  /* some other type */
  else
    return NULL;
}

