/* Fitsy FITS Image Library.
 */

#ifndef FITSY_H
#define FITSY_H

#if HAVE_CONFIG_H
#include "conf.h"
#endif

#if USE_XFILEIO
#include "xfileio.h"
#else
#include "xfile.h"
#endif

#ifdef __STDC__
#define PROTOTYPE(X)     X
#else
#define PROTOTYPE(X)    ( )
#endif

#ifndef UNUSED
#ifdef __GNUC__
#  define UNUSED(x) UNUSED_ ## x __attribute__((__unused__))
#else
#  define UNUSED(x) UNUSED_ ## x
#endif
#endif

#ifdef HAVE_STRING_H
#include <string.h>
#endif

#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif

#include <ctype.h>

#include "longlong.h"

#ifndef NULL
#define NULL	0
#endif

#define FT_BITS		    23040
#define FT_BLOCK	     2880
#define	FT_CARDLEN	       80
#define	FT_WORDLEN	    	8
#define FT_CARDS	(FT_BLOCK/FT_CARDLEN)

#define	FT_UNSIGNED	   0x1000
#define FT_BITPIX	       -1

#define	FT_FILENAME	4096
#define FT_MAXAXES	10

#define ft_fitsbloks(bytes)	((bytes+(FT_BLOCK-1))/FT_BLOCK)

/* Card memory types
 */
#define FT_MALLOC	1
#define FT_MMAP		2
#define FT_SHMAT	3
#define FT_EXTERN	4

typedef enum {
          FT_UNKNOWN    = 0
	, FT_COMMENT
	, FT_LOGICAL
	, FT_INTEGER
	, FT_STRING
	, FT_VALUE
	, FT_REAL
	, FT_COMPLEX
	, FT_LONG
} FITSType;

typedef	struct _FITSBuff {
	char		  c[FT_CARDLEN];
} FITSBuff;

typedef	FITSBuff	 *FITSCard;

extern char *FT_Comment;

#define ft_simple(fits)		( fits->basic->simple 	)
#define ft_name(fits)		( fits->basic->name  	)
#define ft_hduname(fits)	( fits->basic->hduname  )
#define ft_extn(fits)		( fits->basic->extn  	)
#define ft_bitpix(fits)		( fits->basic->bitpix 	)
#define ft_naxes(fits)		( fits->basic->naxes  	)
#define ft_naxis(fits, i)	( fits->basic->naxis[i-1])
#define ft_pcount(fits)		( fits->basic->pcount  	)
#define ft_gcount(fits)		( fits->basic->gcount  	)
#define ft_databytes(fits)	( fits->basic->databytes)
#define ft_datapixls(fits)	( fits->basic->datapixls)
#define ft_databloks(fits)	( fits->basic->databloks)
#define ft_rowbytes(fits)	( fits->basic->row_bytes)

typedef struct _FITSBasic {
	int	 simple;
	char	*name;
	char	*hduname;
	int	 extn;

	int	 bitpix;
	int	 naxes;
	int	 naxis[FT_MAXAXES];

	int	 gcount;
	int	 pcount;

	size_t	 databytes;
	int	 datapixls;
	size_t	 databloks;
	int	 row_bytes;
} *FITSBasic;


#define ft_hasbscale(fits)      ( fits->image->has_bscale       )
#define ft_bscale(fits)         ( fits->image->dbscale          )
#define ft_hasbzero(fits)       ( fits->image->has_bzero        )
#define ft_bzero(fits)          ( fits->image->dbzero           )
#define ft_hasscaling(fits)     ( fits->image->has_bzero || fits->image->has_bscale )
#define ft_hasblank(fits)       ( fits->image->has_blank        )
#define ft_blank(fits)          ( fits->image->blank            )

typedef struct _FITSLinWCS {
	int	has_wcs;
	
	double  fwd[3][2];
	double  rev[3][2];
} *FITSLinWCS;

#define ft_phy2img(fits, x0, y0, x1, y1)	ft_trxlcs(&fits->image->log, x0, y0, x1, y1, 1)
#define ft_img2phy(fits, x0, y0, x1, y1)	ft_trxlcs(&fits->image->log, x0, y0, x1, y1, 0)
#define ft_phy2amp(fits, x0, y0, x1, y1)	ft_trxlcs(&fits->image->amp, x0, y0, x1, y1, 1)
#define ft_amp2phy(fits, x0, y0, x1, y1)	ft_trxlcs(&fits->image->amp, x0, y0, x1, y1, 0)
#define ft_phy2det(fits, x0, y0, x1, y1)	ft_trxlcs(&fits->image->det, x0, y0, x1, y1, 1)
#define ft_det2phy(fits, x0, y0, x1, y1)	ft_trxlcs(&fits->image->det, x0, y0, x1, y1, 0)

#define ft_phy2img_size(fits, x0, y0, x1, y1)	ft_trxsiz(&fits->image->log, x0, y0, x1, y1, 1)
#define ft_img2phy_size(fits, x0, y0, x1, y1)	ft_trxsiz(&fits->image->log, x0, y0, x1, y1, 0)
#define ft_phy2amp_size(fits, x0, y0, x1, y1)	ft_trxsiz(&fits->image->amp, x0, y0, x1, y1, 1)
#define ft_amp2phy_size(fits, x0, y0, x1, y1)	ft_trxsiz(&fits->image->amp, x0, y0, x1, y1, 0)
#define ft_phy2det_size(fits, x0, y0, x1, y1)	ft_trxsiz(&fits->image->det, x0, y0, x1, y1, 1)
#define ft_det2phy_size(fits, x0, y0, x1, y1)	ft_trxsiz(&fits->image->det, x0, y0, x1, y1, 0)

typedef struct _FITSImage {
	int	  has_bscale;
	double	  dbscale;
	int	  has_bzero;
	double	  dbzero;

	int	  has_blank;
	int	  blank;

	struct _FITSLinWCS log;
	struct _FITSLinWCS det;
	struct _FITSLinWCS amp;
} *FITSImage;

typedef struct _FITSTCol {
	int	 type;
	int	 n;
	int	 size;
	int	 width;
	int	 offset;
	char	*format;

	char	*vla;
	int	 vla_type;
	int	 vla_max;
  
	int	 heap;

	char	*name;
	char	*unit;
	char	*disp;

	int	 prec;

	int	 has_scale;
	double	 scale;
	int	 has_zero;
	double	 zero;
	int	 scaled;

	int	 has_blank;
	char	*ablank;
	double	 dblank;
} *FITSTCol;

typedef struct _FITSTable {
	int	  tabtype;	/* TABLE or BINTABLE 	*/
	int	  tfields;	/* # of fields		*/
	FITSTCol  col;		/* Column pointers	*/
} *FITSTable;


#define ft_cards(fits)			( (void *)fits->cards )
#define ft_data(fits)			( fits->data  )
#define ft_ncards(fits)			( fits->ncard )
#define ft_cardnth(fits, nth)		( ( nth <= fits->ncard ) 	\
						? &fits->cards[nth-1] 	\
						: NULL )

#define ft_last(fits)			ft_cardnth(fits, fits->ncard)

#define ft_byteswap()			(*(short *)"\001\000" & 0x0001)
#define ft_seek(fits)			( fits->seek )

typedef struct _FITSHead {
	FITSCard	 cards;
	FITSCard        *index;
	FITSCard         last;
	int		 acard;
	int		 ncard;

	char		*filename;
	File		 file;

	off_t		 seek;
	off_t		 data;
	int		 step;

	void		*cache;
	int		nbuffers;
	int		buffrows;

	int		 mem;
	char	 	*mmap_here;
	int		 mmap_size;

	int		 sync;

	FITSBasic	 basic;
	FITSImage	 image;
	FITSTable	 table;

	struct _FITSHead*primary;
	int		 rfcount;
} *FITSHead;

typedef struct _FITSFile {
	FITSHead	 head;
	void		*data;
	int		 bitpix;
} *FITSFile;


#ifdef __cplusplus
extern "C" {
#endif

/* cardfind.c */
FITSCard ft_cardfind PROTOTYPE((FITSHead fits, FITSCard key, int add));
FITSCard ft_cardfindidx PROTOTYPE((FITSHead fits, FITSCard key, int *match));
FITSCard ft_cardfindseq PROTOTYPE((FITSHead fits, FITSCard key, int *match));
FITSCard ft_cardfindblok PROTOTYPE((FITSCard cards, FITSCard key, int *match, int *nhist));
/* cardfmt.c */
int ft_isblank PROTOTYPE((char *s));
FITSCard ft_cardfmt PROTOTYPE((FITSCard card, char *name, int n, FITSType type, void *value, int prec, char *comm));
FITSCard ft_cardkey PROTOTYPE((FITSCard card, char *name, int n));
FITSCard ft_cardset PROTOTYPE((FITSCard card, FITSType type, void *value, int prec, char *comm));
FITSCard ft_cardsetl PROTOTYPE((FITSCard card, int lvalue, char *comm));
FITSCard ft_cardseti PROTOTYPE((FITSCard card, int ivalue, char *comm));
FITSCard ft_cardsetil PROTOTYPE((FITSCard card, longlong ivalue, char *comm));
FITSCard ft_cardsetr PROTOTYPE((FITSCard card, double rvalue, int prec, char *comm));
FITSCard ft_cardsets PROTOTYPE((FITSCard card, char *svalue, char *comm));
FITSCard ft_cardclr PROTOTYPE((FITSCard card, int ncards));
FITSCard ft_cardcpy PROTOTYPE((FITSCard card1, FITSCard card2));
/* cardins.c */
FITSCard ft_cardins PROTOTYPE((FITSHead fits, FITSCard card, FITSCard here));
FITSCard ft_cardapp PROTOTYPE((FITSHead fits, FITSCard card));
FITSCard ft_carddel PROTOTYPE((FITSHead fits, FITSCard card));
/* cardpar.c */
char *ft_cardpar PROTOTYPE((FITSCard card, FITSType *type, char *value, int *index, char *comm));
char *ft_cardget PROTOTYPE((FITSCard card));
int ft_cardgetl PROTOTYPE((FITSCard card));
int ft_cardgeti PROTOTYPE((FITSCard card));
longlong ft_cardgetil PROTOTYPE((FITSCard card));
double ft_cardgetr PROTOTYPE((FITSCard card));
char *ft_cardgets PROTOTYPE((FITSCard card));
/* ftimage.c */
int ft_shmdt PROTOTYPE((FITSHead fits));
FITSImage ft_imageloadhead PROTOTYPE((FITSHead fits));
void ft_imagestorhead PROTOTYPE((FITSHead fits, FITSImage image));
void ft_imagefree PROTOTYPE((FITSImage image));
FITSBasic ft_basicloadhead PROTOTYPE((FITSHead fits));
void ft_basicstorhead PROTOTYPE((FITSHead fits, FITSBasic basic));
void ft_basicfree PROTOTYPE((FITSBasic basic));
/* fttable.c */
FITSTable ft_tableloadhead PROTOTYPE((FITSHead fits));
void ft_tablestorhead PROTOTYPE((FITSHead fits, FITSTable table));
void ft_tablefree PROTOTYPE((FITSTable table));
/* headtable.c */
int ft_sizeof PROTOTYPE((int type));
/* headfile.c */
FITSHead ft_headread0 PROTOTYPE((File file, char *card1, size_t n));
FITSHead ft_headread PROTOTYPE((File file));
int ft_headwrite PROTOTYPE((File file, FITSHead fits));
void *ft_fileparse PROTOTYPE((File ifile, int (*callback)(File ifile, FITSHead fits, void *data, void *cdata1), void *cdata));
off_t ft_dataskip PROTOTYPE((File ifile, FITSHead fits, File *ofile, int nofile));
off_t ft_dataseek PROTOTYPE((File file, FITSHead fits));
void *ft_dataread PROTOTYPE((File file, FITSHead fits, void *dataptr, int pixtype));
int ft_simpleimageread PROTOTYPE((char *filename, FITSHead *headptr, void **dataptr, void ***data2dptr, int pixtype));
int ft_simpleimagemmap PROTOTYPE((char *filename, FITSHead *headptr, void **dataptr, void ***data2dptr, int prot, int share));
int ft_munmap(FITSHead fits);
int ft_imageread PROTOTYPE((File file, FITSHead *headptr, void **dataptr, void ***data2dptr, int pixtype));
int ft_simpleimagewrite PROTOTYPE((char *filename, FITSHead fits, void *data, int pixtype));
int ft_imagewrite PROTOTYPE((File file, FITSHead fits, void *data, int pixtype));
void *ft_dataswap PROTOTYPE((void *to, void *from, size_t n, int type));
FITSFile ft_fileread PROTOTYPE((File file, int flag, int pixtype, int *n));
void *ft_filedata PROTOTYPE((File file, FITSFile ft));
/* headfind.c */
FITSCard ft_headfind PROTOTYPE((FITSHead fits, char *name, int n, int add));
void ft_headindex PROTOTYPE((FITSHead fits));
FITSCard ft_headfindidx PROTOTYPE((FITSHead fits, char *name, int n, int *match));
FITSCard ft_headfindseq PROTOTYPE((FITSHead fits, char *name, int n, int *match));
/* headinit.c */
FITSHead ft_headinit PROTOTYPE((void *cards, int acard));
FITSHead ft_headcopy PROTOTYPE((FITSHead fits));
void ft_primlink PROTOTYPE((FITSHead prim, FITSHead fits));

void ft_headfree PROTOTYPE((FITSHead fits, int freecards));
void ft_setcards PROTOTYPE((FITSHead fits, void *cards));
/* headins.c */
FITSCard ft_headinsl PROTOTYPE((FITSHead fits, char *name, int n, int lvalue, char *comm, FITSCard here));
FITSCard ft_headinsi PROTOTYPE((FITSHead fits, char *name, int n, int ivalue, char *comm, FITSCard here));
FITSCard ft_headinsr PROTOTYPE((FITSHead fits, char *name, int n, double dvalue, int prec, char *comm, FITSCard here));
FITSCard ft_headinss PROTOTYPE((FITSHead fits, char *name, int n, char *svalue, char *comm, FITSCard here));
FITSCard ft_headinsv PROTOTYPE((FITSHead fits, char *name, int n, char *vvalue, char *comm, FITSCard here));
FITSCard ft_headappl PROTOTYPE((FITSHead fits, char *name, int n, int lvalue, char *comm));
FITSCard ft_headappi PROTOTYPE((FITSHead fits, char *name, int n, int ivalue, char *comm));
FITSCard ft_headappil PROTOTYPE((FITSHead fits, char *name, int n, longlong ivalue, char *comm));
FITSCard ft_headappr PROTOTYPE((FITSHead fits, char *name, int n, double dvalue, int prec, char *comm));
FITSCard ft_headapps PROTOTYPE((FITSHead fits, char *name, int n, char *svalue, char *comm));
FITSCard ft_headappv PROTOTYPE((FITSHead fits, char *name, int n, char *vvalue, char *comm));
FITSCard ft_headdel PROTOTYPE((FITSHead fits, char *name, int n));
/* headset.c */
FITSCard ft_headsetl PROTOTYPE((FITSHead fits, char *name, int n, int lvalue, char *comm, int append));
FITSCard ft_headseti PROTOTYPE((FITSHead fits, char *name, int n, int ivalue, char *comm, int append));
FITSCard ft_headsetil PROTOTYPE((FITSHead fits, char *name, int n, longlong ivalue, char *comm, int append));
FITSCard ft_headsetr PROTOTYPE((FITSHead fits, char *name, int n, double rvalue, int prec, char *comm, int append));
FITSCard ft_headsets PROTOTYPE((FITSHead fits, char *name, int n, char *svalue, char *comm, int append));
/* headget.c */
char *ft_headget PROTOTYPE((FITSHead fits, char *name, int n, FITSCard *card));
int ft_headgetl PROTOTYPE((FITSHead fits, char *name, int n, int ldefault, FITSCard *card));
int ft_headgeti PROTOTYPE((FITSHead fits, char *name, int n, int idefault, FITSCard *card));
longlong ft_headgetil PROTOTYPE((FITSHead fits, char *name, int n, longlong idefault, FITSCard *card));
double ft_headgetr PROTOTYPE((FITSHead fits, char *name, int n, double ddefault, FITSCard *card));
char *ft_headgets PROTOTYPE((FITSHead fits, char *name, int n, char *sdefault, FITSCard *card));

FITSHead ft_primary PROTOTYPE((FITSHead fits));
FITSHead ft_headmerge PROTOTYPE((FITSHead fits1, FITSHead fits2, int copy));
void	ft_synchead PROTOTYPE((FITSHead fits));
void	ft_syncdata PROTOTYPE((FITSHead fits));

void ft_acht PROTOTYPE((int type1, void* v1, int type2, void* v2, int npix, int direction, int hasscale, double dbscale, double dbzero));

void ft_acht2 PROTOTYPE((int type1, void* v1, int type2, void* v2, int npix, int swap, int direction));

char **ft_make2d PROTOTYPE((char *ptr, int size, int xstar, int ystar, int xsize, int ysize));
int ft_datawrite PROTOTYPE((File file, FITSHead fits, void *data, int pixtype));

/* fitshead.c */
int ft_parsefilename PROTOTYPE((char *filename, char *name, char *extn, int nmaxlen, int *indx, char *tail, int tmaxlen));
int ft_cfile PROTOTYPE((File cfile));
File ft_fitsheadread PROTOTYPE((File file, char *filename, FITSHead *head, char *mode, char *iline, File *ifd));
File ft_fitsheadopen PROTOTYPE((char *filename, FITSHead *head, char *tail, int size, char *mode));
File ft_fitsheadopenfd PROTOTYPE((char *filename, FITSHead *head, char *tail, int size, char *mode, File file, char *iline, File *ifd));

int ft_inverse PROTOTYPE((double f[3][2], double r[3][2]));

/* dataimage.c */
void swap2 PROTOTYPE((char *to, char *from, size_t nbytes));
void swap4 PROTOTYPE((char *to, char *from, size_t nbytes));
void swap8 PROTOTYPE((char *to, char *from, size_t nbytes));

/* headwcs.c */
int ft_trxlcs PROTOTYPE((FITSLinWCS lcs, double x0, double y0, 
			 double *x1, double *y1, int direction));
int ft_trxsiz PROTOTYPE((FITSLinWCS lcs, double x0, double y0, 
			 double *x1, double *y1, int direction));

#ifdef __cplusplus
}
#endif
#endif

