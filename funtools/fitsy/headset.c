/* Fitsy FITS header set routines.

   EXAMPLES

   Set the value part of a card in a header:
+
		int	i = 15;
		double	d = 34.7;
		char   *c = "Shutter";

		FITSCard	fits;
		FITSCard	card;

	card = #ft_headsetl(fits, "Cosmic", 0, 1, "Removed Cosimics (silver bullet method)");
	card = #ft_headseti(fits, "IValue" , 0, i, "15 is the number");

	card = #ft_headsetr(fits, "Gain", 1, d, 2, "GAIN1");
	card = #ft_headsetr(fits, "Gain", 2, d, 2, "GAIN2");

	card = #ft_headsets(fits, "XHIST", 1, "Xray processed!", NULL);

	/-* In this example the special pointer #ft_comment is used to 
	   use the existing comment in the card.
	 *-/
	card = #ft_headsets(fits, "FILTER", 0, "V", ft_comment);
+
 */

#include "fitsy.h"

/* Find a FITS card in the header and format a logical value into it.
 */
FITSCard ft_headsetl(fits, name, n, lvalue, comm, append)
	FITSHead	 fits;		/* FITS header to search in.		*/
	char		*name;		/* keyword name.                        */
	int		 n;		/* keyword index number, if is zero no
                                           index number is appended to the keyword.
					 */

	int		 lvalue;	/* Logical to format as a FITS value.	*/
	char		*comm;		/* Comment for the card.                */
	int		 append;	/* Append the card if not found		*/
{
	    FITSCard	card;

	if ( !(card = ft_cardsetl(ft_headfind(fits, name, n, 1), lvalue, comm))
	  && append )
		card = ft_headappl(fits, name, n, lvalue, comm);

	return card;
}

/* Find a FITS card in the header and format a logical value into it.
 */
FITSCard ft_headseti(fits, name, n, ivalue, comm, append)
	FITSHead	 fits;
	char		*name;
	int		 n;
	int		 ivalue;	/* Integer to format as a FITS value.	*/
	char		*comm;
	int		 append;
{
	    FITSCard	card;

	if ( !(card = ft_cardseti(ft_headfind(fits, name, n, 1), ivalue, comm))
	  && append )
		card = ft_headappi(fits, name, n, ivalue, comm);

	return card;
}

/* Find a FITS card in the header and format a logical value into it.
 */
FITSCard ft_headsetil(fits, name, n, ivalue, comm, append)
	FITSHead	 fits;
	char		*name;
	int		 n;
	longlong	 ivalue;	/* Integer to format as a FITS value.	*/
	char		*comm;
	int		 append;
{
	    FITSCard	card;

	if ( !(card = ft_cardsetil(ft_headfind(fits, name, n, 1), ivalue, comm))
	  && append )
		card = ft_headappil(fits, name, n, ivalue, comm);

	return card;
}

/* Find a FITS card in the header and format a logical value into it.
 */
FITSCard ft_headsetr(fits, name, n, rvalue, prec, comm, append)
	FITSHead	 fits;
	char		*name;
	int		 n;
	double		 rvalue;	/* Double to format as a FITS value.	*/
	int		 prec;		/* The value is formatted
                                           at this precision.
                                         */
	char		*comm;
	int		 append;
{
	    FITSCard	card;

	if ( !(card = ft_cardsetr(ft_headfind(fits, name, n, 1)
			, rvalue, prec, comm))
	  && append )
		card = ft_headappr(fits, name, n, rvalue, prec, comm);

	return card;
}

/* Find a FITS card in the header and format a string value into it.
 */
FITSCard ft_headsets(fits, name, n, svalue, comm, append)
	FITSHead	 fits;
	char		*name;
	int		 n;
	char		*svalue;	/* String to format as a FITS value.	*/
	char		*comm;
	int		 append;
{
	    FITSCard	card;

	if ( !(card = ft_cardsets(ft_headfind(fits, name, n, 1), svalue, comm))
	  && append )
		card = ft_headapps(fits, name, n, svalue, comm);

	return card;
}

