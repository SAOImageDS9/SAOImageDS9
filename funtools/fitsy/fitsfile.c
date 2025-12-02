/* Fitsy FITS routines to handle a complete multi extension FITS file.
 */

typedef struct Ft_fileread {
	int	n;
	int	flag;
	int	pixtype;
} Ft_fileread;

ft_fileimageread(file, fits, data, x)
	File		 file;
	FITSHead	 fits;
	FITSFile	*data;
	Ft_fileread	*x;
{
	int	size;

	(void)ReAlloc(*data, sizeof(struct FITSFile) * ++x->n);

    (*data)[x->n-1].bitpix = x->pixtype;

    if ( x->flag || ft_seek(fits) == -1 ) {
	if ( ((*data)[x->n-1].data = ft_dataread(file, fits, NULL, x->pixtype))
	  == NULL ) {
	    return 0;
	}
    }
}

/* Read an entire FITS file.
 */
FITSFile ft_fileread(file, flag, pixtype, n)
	File	 file;
	int	 flag;
	int	 pixtype;
	int	*n;
{
		Ft_fileread 	x;
		FITSFile	data;

	x.n	  = 0;
	x.flag 	  = flag;
	x.pixtype = pixtype;

	data = (FITSFile) ft_fileparse(file, ft_fileimageread, &x);
	*n = x.n;

	return data;
}

/* Return a pointer the data poriton of a FITS HDU.
 */
void *ft_filedata(file, ft)
	File		file;
	FITSFile	ft;
{
    if ( ft->data != NULL ) 		return ft->data;
    if ( ft_seek(ft->head) == -1 )	return NULL;

    if ( ftSeek(file, ft_seek(ft->head), 0) == -1 )
	return NULL;

    return ft->data = ft_dataread(file, ft->head, NULL, ft->bitpix);
}

