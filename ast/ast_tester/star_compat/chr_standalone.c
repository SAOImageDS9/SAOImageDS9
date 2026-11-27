/*
 * chr_standalone.c - Minimal standalone implementation of Starlink CHR
 * (Character Handling) routines needed by AST Fortran tests.
 *
 * Note on TRAIL placement: gfortran appends all hidden CHARACTER length
 * arguments at the END of the C argument list, in the order the CHARACTER
 * arguments appear in the Fortran declaration.  The TRAIL(X) macro must
 * therefore be placed at the end of the parameter list (after all explicit
 * Fortran arguments), matching the pattern used in the real Starlink MERS
 * source (e.g. msg_seti.c line 89).
 */

#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "f77.h"

#define SAI__OK    0
#define SAI__ERROR 146800770

/* Internal helper: length of string excluding trailing blanks. */
static int chr_trimlen( const char *str, size_t str_len ) {
    size_t i = str_len;
    while ( i > 0 && str[i-1] == ' ' ) i--;
    return (int)i;
}

/*
 * CHR_LEN -- Return the length of a string excluding trailing blanks.
 * Fortran: INTEGER FUNCTION CHR_LEN( STR )
 */
F77_INTEGER_FUNCTION(chr_len)( CHARACTER(str) TRAIL(str) ) {
    return chr_trimlen( str, str_length );
}

/*
 * CHR_FANDL -- Find first and last non-blank character positions (1-based).
 * Fortran: CALL CHR_FANDL( STR, F, L )
 */
F77_SUBROUTINE(chr_fandl)( CHARACTER(str), INTEGER(f), INTEGER(l) TRAIL(str) ) {
    size_t i;
    *f = 1;
    *l = 0;
    for ( i = 0; i < str_length; i++ ) {
        if ( str[i] != ' ' ) { *f = (int)(i + 1); break; }
    }
    for ( i = str_length; i > 0; i-- ) {
        if ( str[i-1] != ' ' ) { *l = (int)i; break; }
    }
}

/*
 * CHR_LDBLK -- Remove leading blanks from a string in place.
 * Fortran: CALL CHR_LDBLK( STR )
 */
F77_SUBROUTINE(chr_ldblk)( CHARACTER(str) TRAIL(str) ) {
    size_t i = 0;
    while ( i < str_length && str[i] == ' ' ) i++;
    if ( i > 0 ) {
        memmove( str, str + i, str_length - i );
        memset( str + str_length - i, ' ', i );
    }
}

/*
 * CHR_UCASE -- Convert a string to upper case in place.
 * Fortran: CALL CHR_UCASE( STR )
 */
F77_SUBROUTINE(chr_ucase)( CHARACTER(str) TRAIL(str) ) {
    size_t i;
    for ( i = 0; i < str_length; i++ )
        str[i] = (char)toupper( (unsigned char)str[i] );
}

/*
 * CHR_PUTI -- Append an integer value to a string.
 * Fortran: CALL CHR_PUTI( IVAL, STR, NCHAR )
 *   NCHAR -- current used length of STR on entry; updated on exit.
 */
F77_SUBROUTINE(chr_puti)( INTEGER(ival), CHARACTER(str), INTEGER(nchar) TRAIL(str) ) {
    char buf[32];
    int pos = *nchar;
    int i, len;
    snprintf( buf, sizeof(buf), "%d", *ival );
    len = (int)strlen( buf );
    if ( pos < 0 ) pos = 0;
    for ( i = 0; i < len && (size_t)(pos + i) < str_length; i++ )
        str[pos + i] = buf[i];
    *nchar = pos + i;
}

/*
 * CHR_PUTR -- Append a real (float) value to a string.
 * Fortran: CALL CHR_PUTR( RVAL, STR, NCHAR )
 */
F77_SUBROUTINE(chr_putr)( REAL(rval), CHARACTER(str), INTEGER(nchar) TRAIL(str) ) {
    char buf[64];
    int pos = *nchar;
    int i, len;
    snprintf( buf, sizeof(buf), "%g", (double)*rval );
    len = (int)strlen( buf );
    if ( pos < 0 ) pos = 0;
    for ( i = 0; i < len && (size_t)(pos + i) < str_length; i++ )
        str[pos + i] = buf[i];
    *nchar = pos + i;
}

/*
 * CHR_PUTD -- Append a double precision value to a string.
 * Fortran: CALL CHR_PUTD( DVAL, STR, NCHAR )
 */
F77_SUBROUTINE(chr_putd)( DOUBLE(dval), CHARACTER(str), INTEGER(nchar) TRAIL(str) ) {
    char buf[64];
    int pos = *nchar;
    int i, len;
    snprintf( buf, sizeof(buf), "%g", *dval );
    len = (int)strlen( buf );
    if ( pos < 0 ) pos = 0;
    for ( i = 0; i < len && (size_t)(pos + i) < str_length; i++ )
        str[pos + i] = buf[i];
    *nchar = pos + i;
}

/*
 * CHR_APPND -- Append STR1 (without trailing blanks) to STR2 at NCHAR.
 * Fortran: CALL CHR_APPND( STR1, STR2, NCHAR )
 *   NCHAR -- current used length of STR2 on entry; updated on exit.
 * Two CHARACTER args: lengths come at end in order (str1_length, str2_length).
 */
F77_SUBROUTINE(chr_appnd)( CHARACTER(str1), CHARACTER(str2),
                             INTEGER(nchar) TRAIL(str1) TRAIL(str2) ) {
    int src_len = chr_trimlen( str1, str1_length );
    int pos = *nchar;
    int i;
    if ( pos < 0 ) pos = 0;
    for ( i = 0; i < src_len && (size_t)(pos + i) < str2_length; i++ )
        str2[pos + i] = str1[i];
    *nchar = pos + i;
}

/*
 * CHR_CTOI -- Convert a character string to an integer.
 * Fortran: CALL CHR_CTOI( STR, IVAL, STATUS )
 */
F77_SUBROUTINE(chr_ctoi)( CHARACTER(str), INTEGER(ival),
                            INTEGER(status) TRAIL(str) ) {
    char buf[64];
    size_t len;
    char *end;
    if ( *status != SAI__OK ) return;
    len = str_length < 63 ? str_length : 63;
    memcpy( buf, str, len );
    buf[len] = '\0';
    *ival = (int)strtol( buf, &end, 10 );
    if ( end == buf ) *status = SAI__ERROR;
}

/*
 * CHR_CTOR -- Convert a character string to a real (float).
 * Fortran: CALL CHR_CTOR( STR, RVAL, STATUS )
 */
F77_SUBROUTINE(chr_ctor)( CHARACTER(str), REAL(rval),
                            INTEGER(status) TRAIL(str) ) {
    char buf[64];
    size_t len;
    char *end;
    if ( *status != SAI__OK ) return;
    len = str_length < 63 ? str_length : 63;
    memcpy( buf, str, len );
    buf[len] = '\0';
    *rval = (float)strtod( buf, &end );
    if ( end == buf ) *status = SAI__ERROR;
}

/*
 * CHR_CTOL -- Convert a character string to a logical value.
 * Fortran: CALL CHR_CTOL( STR, LVAL, STATUS )
 * Accepts T/TRUE/.TRUE./F/FALSE/.FALSE. (case-insensitive).
 */
F77_SUBROUTINE(chr_ctol)( CHARACTER(str), LOGICAL(lval),
                            INTEGER(status) TRAIL(str) ) {
    char buf[16];
    size_t i, len;
    if ( *status != SAI__OK ) return;
    for ( i = 0; i < str_length && str[i] == ' '; i++ ) ;
    len = str_length - i;
    if ( len > 15 ) len = 15;
    memcpy( buf, str + i, len );
    buf[len] = '\0';
    while ( len > 0 && buf[len-1] == ' ' ) buf[--len] = '\0';
    for ( i = 0; i < len; i++ ) buf[i] = (char)toupper( (unsigned char)buf[i] );
    if ( strcmp(buf,"T")==0 || strcmp(buf,"TRUE")==0 || strcmp(buf,".TRUE.")==0 )
        *lval = 1;
    else if ( strcmp(buf,"F")==0 || strcmp(buf,"FALSE")==0 || strcmp(buf,".FALSE.")==0 )
        *lval = 0;
    else
        *status = SAI__ERROR;
}
