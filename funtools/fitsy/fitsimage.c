/* Fitsy FITS routines to read and write FITS images.
 */

#include <xos.h>
#include <fcntl.h>
#include "fitsy.h"

#include <sys/types.h>
#ifdef HAVE_SYS_MMAN_H
#include <sys/mman.h>
#endif
#include <sys/stat.h>

#ifdef HAVE_SYS_IPC_H
#include <sys/ipc.h>
#endif
#ifdef HAVE_SYS_SHM_H
#include <sys/shm.h>
#endif

/* int close PROTOTYPE((int)); */

int ft_indxmemdata PROTOTYPE((
     char	  *data,	/* Pointer to FITS 			*/
     int	   size,
     int	   type,	/* Type of memory			*/
     char	  *extn,
     int	   indx,
     FITSHead     *headptr,     /* Returned pointer to FITS header      */
     void        **dataptr,     /* Returned pointer to FITS data.       */
     void       ***data2dptr    /* Returned edge vector to data.        */));
 
/* changed name to add _ to avoid conflict with param lib egm 4/25/00 */
int _filesize(file)
                        int    file;
{
        	struct stat info;
 
        if ( fstat(file, &info) < 0 ) return 0;
        else                          return info.st_size;
}

#ifdef HAVE_SYS_MMAN_H
int ft_munmap(head)
	FITSHead	head;
{
	return munmap((caddr_t) head->mmap_here, head->mmap_size);
}
#endif

#ifdef HAVE_SYS_SHM_H
int ft_shmdt(head)
	FITSHead	head;
{
	return shmdt((caddr_t) head->mmap_here);
}
#endif

#ifdef HAVE_SYS_SHM_H
/* Attach a FITS image from shared memory.
 */

int ft_simpleimageshm(filename, headptr, dataptr, data2dptr, size, flags)
     char	  *filename;
     FITSHead     *headptr;     /* Returned pointer to FITS header      */
     void        **dataptr;     /* Returned pointer to FITS data.       */
     void       ***data2dptr;   /* Returned edge vector to data.        */
     int	size;
     int	flags;
{
	char	name[FT_FILENAME];
	char	extn[FT_FILENAME];
	int	indx = 0;

	char	tail[FT_FILENAME];
	int	max = FT_FILENAME;

	int	 shkey;
	char	*data;

	char	*isize;

    ft_parsefilename(filename, name, extn, max, &indx, tail, max);

    if ( size == 0 && (isize = strstr(tail, "size=")) ) size = atoi(isize+5);

    /* Attach the memory segment
     */
    shkey = shmget(atoi(name), size, flags);
    data  = (void *) shmat(shkey, 0, 0);

    return ft_indxmemdata(data, size, FT_SHMAT, extn, indx, headptr, dataptr, data2dptr);
} 
#endif

#ifdef HAVE_SYS_MMAN_H
/* MMap a FITS image from the named file.
 */
int ft_simpleimagemmap(filename, headptr, dataptr, data2dptr, prot, share)
     char         *filename;    /* FITS image file name.                */
     FITSHead     *headptr;     /* Returned pointer to FITS header      */
     void        **dataptr;     /* Returned pointer to FITS data.       */
     void       ***data2dptr;   /* Returned edge vector to data.        */
     int	   prot;	/* Mapped data protections		*/
     int	   share;	/* Mapped data attributes		*/
{
	int file;

	char	name[FT_FILENAME];
	char	extn[FT_FILENAME];
	int	indx = 0;

	char	tail[FT_FILENAME];
	int	max = FT_FILENAME;

	char	*data;
	int	 size;
	int	 mode;

    ft_parsefilename(filename, name, extn, max, &indx, tail, max);

    if ( prot & PROT_WRITE ) {
	mode = O_RDWR;
    } else {
	mode = O_RDONLY;
    }

    if ( (file = open(name, mode)) == -1) {
	if ( headptr ) 	 *headptr   = NULL;
	if ( data2dptr ) *data2dptr = NULL;

	return 0;
    }

    /* Map the file.
     */
    size = _filesize(file);
    data = (char *) mmap(NULL, size, prot, share, file, 0);
    close(file);

    if ( data == (char *)-1 ) return 0;

    return ft_indxmemdata(data, size, FT_MMAP, extn, indx, headptr, dataptr, data2dptr);
}
#endif

#if defined(HAVE_SYS_SHM_H) || defined(HAVE_SYS_MMAN_H)
int ft_indxmemdata(data, size, type, extn, indx, headptr, dataptr, data2dptr)
     char	  *data;	/* Pointer to FITS 			*/
     int	   size;
     int	   type;	/* Type of memory			*/
     char	  *extn;
     int	   indx;
     FITSHead     *headptr;     /* Returned pointer to FITS header      */
     void        **dataptr;     /* Returned pointer to FITS data.       */
     void       ***data2dptr;   /* Returned edge vector to data.        */
{
	FITSHead  head = NULL;

    	char *here = (char *) data;
    	void *mapdata = data;
    	int   mapsize = size;

    if ( *extn ) {
	while ( (head = ft_headinit(here, size)) && size >= FT_BLOCK ) {
	    if ( !strcmp(extn, ft_name(head))
	      && (indx == -1 || indx == ft_extn(head)) ) break;
	    here += ft_data(head) + ft_databloks(head) * FT_BLOCK;
	    size -= ft_data(head) + ft_databloks(head) * FT_BLOCK;
	    ft_headfree(head, 0);
	}
    } else if ( indx > 0 ) {
		int	i;

	    for ( i = 0; i < indx && size >= FT_BLOCK; i++ ) {
		head = ft_headinit(here, size);
		if( !head ){
		  if ( headptr )   *headptr   = NULL;
		  if ( data2dptr ) *data2dptr = NULL;
		  
		  return 0;
		}
	        here += ft_data(head) + ft_databloks(head) * FT_BLOCK;
	        size -= ft_data(head) + ft_databloks(head) * FT_BLOCK;
		ft_headfree(head, 0);
	    }
	    head = ft_headinit(here, size);
	    data = here + ft_data(head);

	} else {
	    head = ft_headinit(data, size);
	    data = here + ft_data(head);
	}

    if ( head == NULL ) {
      switch(type){
#ifdef HAVE_SYS_MMAN_H
      case FT_MMAP:
	munmap(data, mapsize);
	break;
#endif
#ifdef HAVE_SYS_SHM_H
      case FT_SHMAT:
	shmdt(mapdata);
	break;
#endif
      default:
	break;
      }
      return 0;
    }

    head->mem  = type;
    head->mmap_here = mapdata;
    head->mmap_size = mapsize;

    if (   dataptr != NULL ) *dataptr = data;
    if ( data2dptr != NULL ) {
    	*data2dptr = (void **) ft_make2d((void *) data
				, Abs(ft_bitpix(head))/8
				, 0, 0
				, ft_naxis(head, 1)
				, ft_naxis(head, 2));
    }
    if ( headptr != NULL ) {
	*headptr = head;
    } else {
        ft_headfree(head, 0);
    }

    return 1;
}
#endif

/* Read a FITS image from the named file.
 */
int ft_simpleimageread(filename, headptr, dataptr, data2dptr, pixtype)
     char 	  *filename;	/* FITS image file name.		*/
     FITSHead 	  *headptr;	/* Returned pointer to FITS header	*/
     void 	 **dataptr;	/* Returned pointer to FITS data.	*/
     void 	***data2dptr;	/* Returned edge vector to data.	*/
     int 	   pixtype;	/* pixtype to convert data to.		*/
{
	FITSHead  head = NULL;
	File file;
	int  ret = 1;

	char	name[FT_FILENAME];
	char	extn[FT_FILENAME];
	int	indx = 0;

	char	tail[FT_FILENAME];
	int	max = FT_FILENAME;

    ft_parsefilename(filename, name, extn, max, &indx, tail, max);

    if ( (file = ftOpen(name, "r"))   == NULL ) {
        if ( headptr ) 	 *headptr   = NULL;
	if ( data2dptr ) *data2dptr = NULL;

	return 0;
    }

    if ( *extn ) {
	while ( (head = ft_headread(file)) ) {
	    if ( !strcmp(extn, ft_name(head))
	      && (indx == -1 || indx == ft_extn(head)) ) break;
	    ft_dataskip(file, head, NULL, 0);
	    ft_headfree(head, 1);
	}
    } else if ( indx > 0 ) {
		int	i;

	    for ( i = 0; i < indx; i++ ) {
		head = ft_headread(file);
		if( !head ){
		  if ( headptr )   *headptr   = NULL;
		  if ( data2dptr ) *data2dptr = NULL;
		  
		  return 0;
		}
		ft_dataskip(file, head, NULL, 0);
		ft_headfree(head, 1);
	    }
	    head = NULL;
	}

    ret = ft_imageread(file, &head, dataptr, data2dptr, pixtype);
    if ( headptr ){
      *headptr = head;
      if( *name && *headptr ) (*headptr)->filename = strdup(name);
    }
    else{
      ft_headfree(head, 1);
    }
    ftClose(file);

    return ret;
}

/* Write a FITS image to a named file.
 */
int ft_simpleimagewrite(filename, fits, data, pixtype)
     char 	*filename;
     FITSHead 	 fits;		/* FITS header to write.		*/
     void 	*data;		/* Data to write into FITS file.	*/
     int 	 pixtype;
{
	File 		file;
	FITSHead	prim;

    if ( fits == NULL )		return 0;

    file = ftOpen(filename, "wb");

    if (file == NULL) {
	return 0;
    }

    prim = ft_primary(fits);
    
    ft_imagewrite(file, prim, data, pixtype);
    ftClose(file);

    ft_headfree(prim, 1);
    return 1;
}

/* Read a FITS image from a file pointer.
 */
int ft_imageread(file, headptr, dataptr, data2dptr, pixtype)
     File 	file;		/* File pointer to read header and data from.*/
     FITSHead  *headptr;
     void     **dataptr;
     void    ***data2dptr;
     int 	pixtype;
{
	FITSHead	  fits;
	float		 *data 	 = NULL;

    if ( file == NULL ) 	return 0;

    if ( headptr == NULL || *headptr == NULL ) {
        if ( (fits = ft_headread(file))                     == NULL ) return 0;
    } else      fits =  *headptr;

    if ( dataptr   )	 data      = *dataptr;
    if ( data2dptr ) 	*data2dptr = NULL;


    if ( (data = ft_dataread(file, fits, data, pixtype)) == NULL ) {
	if ( !headptr ) ft_headfree(fits, 1);
	return 0;
    }
 
    if ( headptr != NULL ) {
	*headptr = fits;
    }

    if ( dataptr != NULL ) {
	*dataptr = data;
    }

    if ( data2dptr != NULL ) {
    	*data2dptr = (void **) ft_make2d((void *) data
				, Abs(pixtype)/8
				, 0, 0
				, ft_naxis(fits, 1)
				, ft_naxis(fits, 2));
    }

    return 1;
}


/* Write a FITS image to a file.
 */
int ft_imagewrite(file, fits, data, pixtype)
     File 	 file;
     FITSHead 	 fits;
     void 	*data;
     int 	 pixtype;
{
    if ( file == NULL ) 	return 0;

    ft_syncdata(fits);
    if ( ft_headwrite(file, fits) == 0 ) 		return 0;
    if ( ft_datawrite(file, fits, data, pixtype) == 0 ) return 0;

    return 1;
}

