/* ft_acht.c
**
** Vector change type operators.
** FITS adds bzero and bascle.
**/

#include "xos.h"
#include "fitsy.h"
#include "generic.h"


#ifdef __STDC__
#define achtxx(ch1, type1, ch2, type2)					\
									\
void acht##ch1##ch2(v1, v2, npix, direction, hasscale, bscale, bzero)	\
			type1*	v1;					\
			type2*	v2;					\
			int	npix;					\
			int	direction;				\
			int	hasscale;				\
			double	bscale;					\
			double	bzero;					\
{									\
     if ( hasscale ) {							\
	if ( direction ) {						\
	    while ( npix-- ) v1[npix] =  v2[npix] * bscale + bzero;	\
	} else {							\
	    while ( npix-- ) v1[npix] = (v2[npix] - bzero) / bscale;	\
	}								\
     } else {								\
	while ( npix-- ) v1[npix] = v2[npix];				\
     }									\
}
#else
#define achtxx(ch1, type1, ch2, type2)					\
									\
void acht/**/ch1/**/ch2(v1, v2, npix, direction, hasscale, bscale, bzero)\
			type1*	v1;					\
			type2*	v2;					\
			int	npix;					\
			int	direction;				\
			int	hasscale;				\
			double	bscale;					\
			double	bzero;					\
{									\
     if ( hasscale ) {							\
	if ( direction ) {						\
	    while ( npix-- ) v1[npix] =  v2[npix] * bscale + bzero;	\
	} else {							\
	    while ( npix-- ) v1[npix] = (v2[npix] - bzero) / bscale;	\
	}								\
     } else {								\
	while ( npix-- ) v1[npix] = v2[npix];				\
     }									\
}
#endif


DOUBLE_GENERIC(achtxx)


static int pixtype(type)
	int	type;
{
    switch ( type ) {
     case   8:			return TY_UCHAR;
     case  16:			return TY_SHORT;
     case  32:			return TY_INT;

     case  FT_UNSIGNED |  8:	return TY_UCHAR;
     case  FT_UNSIGNED | 16:	return TY_USHORT;
     case  FT_UNSIGNED | 32:	return TY_UINT;

     case -32:			return TY_REAL;
     case -64:			return TY_DOUBLE;
    }

    return -1;
}

void ft_acht(type1, v1, type2, v2, npix, direction, hasscale, bscale, bzero)
			int	type1;
			void*	v1;
			int	type2;
			void*	v2;
			int	npix;
			int	direction;
			int	hasscale;
			double	bscale;
			double	bzero;
{
		typedef void (*vector)();

static vector matrix[10][10] = {
      { achtcc,achtcs,achtci,achtcl,achtcr,achtcd,achtct,achtcu,achtcv }
    , { achtsc,achtss,achtsi,achtsl,achtsr,achtsd,achtst,achtsu,achtsv }
    , { achtic,achtis,achtii,achtil,achtir,achtid,achtit,achtiu,achtiv }
    , { achtlc,achtls,achtli,achtll,achtlr,achtld,achtlt,achtlu,achtlv }
    , { achtrc,achtrs,achtri,achtrl,achtrr,achtrd,achtrt,achtru,achtrv }
    , { achtdc,achtds,achtdi,achtdl,achtdr,achtdd,achtdt,achtdu,achtdv }
    , { achttc,achtts,achtti,achttl,achttr,achttd,achttt,achttu,achttv }
    , { achtuc,achtus,achtui,achtul,achtur,achtud,achtut,achtuu,achtuv }
    , { achtvc,achtvs,achtvi,achtvl,achtvr,achtvd,achtvt,achtvu,achtvv }
};

    type1 = pixtype(type1);
    type2 = pixtype(type2);

    if ( type1 < 0 || type2 < 0 ) return;

    (*matrix[type1][type2])(v1, v2, npix, direction, hasscale, bscale, bzero);
}
