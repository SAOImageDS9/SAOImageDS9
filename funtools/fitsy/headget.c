/* Find and return values from a FITS header.

    EXAMPLES
+
		FITSHead	fits;
		FITSCard	card;


		int		simple;
		int		ax1, ax2;

	/-* Look up the SIMPLE card in the header and see if its is 
	   True.  If it's not found return False.
	 *-/
	simple = #ft_headgetl(fits, "SIMPLE", 0, 0, &card);

	/-* Look up the NAXIS1 and NAXIS2 cards in the header
	   if a card is not found return 0.
	 *-/
	ax1 = #ft_headgeti(fits, "NAXIS", 1, 0, &card);
	ax2 = #ft_headgeti(fits, "NAXIS", 2, 0, &card);
+
 */

#include <fitsy.h>

/* Find and return the value of a FITS card as a static string.
 */
char *ft_headget(fits, name, n, card)
        FITSHead         fits;	/* The FITS header to search.		*/
	char		*name;	/* Name of the card keyword to search for. */
	int		 n;	/* keyword index number, if is zero no
                                   index number is appended to the keyword.
                                 */
	FITSCard	*card;	/* The FITS card that was found.	*/
{
	 return ft_cardget(*(card) = ft_headfind(fits, name, n, 0));
}

/* Find and return the value of a FITS card as a logical.
 */
int ft_headgetl(fits, name, n, ldefault, card)
	FITSHead	 fits;
	char		*name;
	int		 n;
	int		 ldefault; /* Default logical value to return.	*/
	FITSCard	*card;
{
	FITSCard	C;

	if ( card == NULL ) card = &C;

	return ( (*(card) = ft_headfind(fits, name, n, 0)) ?
		ft_cardgetl(*(card)) : (int)(ldefault) );
}


/* Find and return the value of a FITS card as an integer.
 */
int ft_headgeti(fits, name, n, idefault, card)
	FITSHead	 fits;
	char		*name;
	int		 n;
	int		 idefault; /* Default integer value to return.	*/
	FITSCard	*card;
{
	FITSCard	C;

	if ( card == NULL ) card = &C;

	return ( (*(card) = ft_headfind(fits, name, n, 0)) ?
		ft_cardgeti(*(card)) : (int)(idefault) );
}

/* Find and return the value of a FITS card as an integer.
 */
longlong ft_headgetil(fits, name, n, idefault, card)
	FITSHead	 fits;
	char		*name;
	int		 n;
	longlong	 idefault; /* Default integer value to return.	*/
	FITSCard	*card;
{
	FITSCard	C;

	if ( card == NULL ) card = &C;

	return ( (*(card) = ft_headfind(fits, name, n, 0)) ?
		ft_cardgetil(*(card)) : (longlong)(idefault) );
}

/* Find and return the value of a FITS card as a real.
 */
double ft_headgetr(fits, name, n, ddefault, card)
	FITSHead	 fits;
	char		*name;
	int		 n;
	double		 ddefault; /* Default real value to return.	*/
	FITSCard	*card;
{
	FITSCard	C;

	if ( card == NULL ) card = &C;

	return ( (*(card) = ft_headfind(fits, name, n, 0)) ?
		ft_cardgetr(*(card)) : (double)(ddefault) );

}
/* Find and return the value of a FITS card as a allocated string.
 */
char *ft_headgets(fits, name, n, sdefault, card)
	FITSHead	 fits;
	char		*name;
	int		 n;
	char 		*sdefault; /* Default string value to return.	*/
	FITSCard	*card;
{
	FITSCard	C;

	if ( card == NULL ) card = &C;

	return ( (*(card) = ft_headfind(fits, name, n, 0)) ? 
		ft_cardgets(*(card)) : (sdefault == NULL 
					? NULL 
					: (char *)strdup(sdefault)) );
}
