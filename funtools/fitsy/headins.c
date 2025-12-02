/* Routines to insert, append and delete FITS cards from a header.

   These routines allow FITS cards to be inserted, appended and deleted
   by keyword value.

   The insertion routines format a new card with the supplied keyword and
   value and insert it after indicated card.  The append routines add new
   cards to the end of the header (before the END card).

 */

#include "fitsy.h"

/* Insert a logical value FITS card into a header.
 */
FITSCard ft_headinsl(fits, name, n, lvalue, comm, here)
	FITSHead	 fits;	/* FITS header to insert, append or
				   delete a card.
				 */
	char		*name;	/* Name of the FITS card.		*/
	int		 n;	/* keyword index number, if is zero no
                                   index number is appended to the
				   keyword.
                                 */
	int		 lvalue;/* Logical to format as a FITS value.	*/
	char		*comm;	/* Comment for the new card.		*/
	FITSCard	 here;	/* Insert the new card after this card.	*/
{
	FITSBuff	card;

    return ft_cardins(fits
	    , ft_cardfmt(&card, name, n, FT_LOGICAL, &lvalue, 0, comm)
	    , here);
}

/* Insert a integer value FITS card into a header.
 */
FITSCard ft_headinsi(fits, name, n, ivalue, comm, here)
	FITSHead	 fits;
	char		*name;
	int		 n;
	int		 ivalue;/* Integer to format as a FITS value.   */
	char		*comm;
	FITSCard	 here;
{
	FITSBuff	card;

    return ft_cardins(fits
	    , ft_cardfmt(&card, name, n, FT_INTEGER, &ivalue, 0, comm)
	    , here);
}

/* Insert a longlong integer value FITS card into a header.
 */
FITSCard ft_headinsil(fits, name, n, ivalue, comm, here)
	FITSHead	 fits;
	char		*name;
	int		 n;
	longlong	 ivalue;/* Integer to format as a FITS value.   */
	char		*comm;
	FITSCard	 here;
{
	FITSBuff	card;

    return ft_cardins(fits
	    , ft_cardfmt(&card, name, n, FT_LONG, &ivalue, 0, comm)
	    , here);
}

/* Insert a real value FITS card into a header.
 */
FITSCard ft_headinsr(fits, name, n, dvalue, prec, comm, here)
	FITSHead	 fits;
	char		*name;
	int		 n;
	double		 dvalue;/* Double to format as a FITS value.   	*/
	int		 prec;	/* Precision for the value		*/
	char		*comm;
	FITSCard	 here;
{
	FITSBuff	card;

    return ft_cardins(fits
	    , ft_cardfmt(&card, name, n,    FT_REAL, &dvalue, prec, comm)
	    , here);
}

/* Insert a string value FITS card into a header.
 */
FITSCard ft_headinss(fits, name, n, svalue, comm, here)
	FITSHead	 fits;
	char		*name;
	int		 n;
	char		*svalue;/* String to format as a FITS value	*/
	char		*comm;
	FITSCard	 here;
{
	FITSBuff	card;

    return ft_cardins(fits
	    , ft_cardfmt(&card, name, n,  FT_STRING, svalue, 0, comm)
	    , here);
}

/* Insert a raw value FITS card into a header.
 */
FITSCard ft_headinsv(fits, name, n, vvalue, comm, here)
	FITSHead	 fits;
	char		*name;
	int		 n;
	char		*vvalue;/* Raw value to format as a FITS value	*/
	char		*comm;
	FITSCard	 here;
{
	FITSBuff	card;

    return ft_cardins(fits
	    , ft_cardfmt(&card, name, n,  FT_VALUE, vvalue, 0, comm)
	    , here);
}

/* Append a logical value FITS card to a header.
 */
FITSCard ft_headappl(fits, name, n, lvalue, comm)
	FITSHead	 fits;
	char		*name;
	int		 n;
	int		 lvalue;
	char		*comm;
{
	return ft_headinsl(fits, name, n, lvalue, comm, NULL);
}

/* Append a integer value FITS card to a header.
 */
FITSCard ft_headappi(fits, name, n, ivalue, comm)
	FITSHead	 fits;
	char		*name;
	int		 n;
	int		 ivalue;
	char		*comm;
{
	return ft_headinsi(fits, name, n, ivalue, comm, NULL);
}

/* Append a 64-bit integer value FITS card to a header.
 */
FITSCard ft_headappil(fits, name, n, ivalue, comm)
	FITSHead	 fits;
	char		*name;
	int		 n;
	longlong	 ivalue;
	char		*comm;
{
	return ft_headinsil(fits, name, n, ivalue, comm, NULL);
}

/* Append a real value FITS card to a header.
 */
FITSCard ft_headappr(fits, name, n, dvalue, prec, comm)
	FITSHead	 fits;
	char		*name;
	int		 n;
	double		 dvalue;
	int		 prec;
	char		*comm;
{
	return ft_headinsr(fits, name, n, dvalue, prec, comm, NULL);
}

/* Append a string value FITS card to a header.
 */
FITSCard ft_headapps(fits, name, n, svalue, comm)
	FITSHead	 fits;
	char		*name;
	int		 n;
	char		*svalue;
	char		*comm;
{
	return ft_headinss(fits, name, n, svalue, comm, NULL);
}


/* Append a raw value FITS card to a header.
 */
FITSCard ft_headappv(fits, name, n, vvalue, comm)
	FITSHead	 fits;
	char		*name;
	int		 n;
	char		*vvalue;
	char		*comm;
{
	return ft_headinsv(fits, name, n, vvalue, comm, NULL);
}


/* Find and delete a card from a FITS header.
 */
FITSCard ft_headdel(fits, name, n)
	FITSHead	 fits;
	char		*name;
	int		 n;
{
    return ft_carddel(fits, ft_headfind(fits, name, n, 0));
}
