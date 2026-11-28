/*
 * err_standalone.c - Minimal standalone implementation of the Starlink EMS
 * (Error Message Service) and MSG routines needed by AST Fortran tests.
 *
 * This replaces the full Starlink MERS library for standalone AST builds.
 * The implementation is intentionally simple: it maintains a minimal error
 * context stack and message buffer, and prints errors to stderr on flush.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "f77.h"

/* Match SAI__OK and SAI__ERROR values from SAI_ERR */
#define SAI__OK    0
#define SAI__ERROR 146800770

#define ERR_MAXMSG  200    /* maximum messages in one context */
#define ERR_SZMSG   512    /* max chars per message */
#define ERR_MAXDEPTH 64    /* max nesting depth */

static int  err_depth = 0;
static int  err_nmsgs = 0;
static char err_msgs[ERR_MAXMSG][ERR_SZMSG];

/*
 * ERR_MARK -- Start a new error context.
 */
F77_SUBROUTINE(err_mark)( void ) {
    err_depth++;
}

/*
 * ERR_RLSE -- Release (pop) the current error context.
 */
F77_SUBROUTINE(err_rlse)( void ) {
    if ( err_depth > 0 ) err_depth--;
}

/*
 * ERR_BEGIN -- Begin error reporting (equivalent to ERR_MARK).
 */
F77_SUBROUTINE(err_begin)( INTEGER(status) ) {
    (void)status;
    err_depth++;
}

/*
 * ERR_ANNUL -- Annul (clear) pending error messages; reset status to SAI__OK.
 */
F77_SUBROUTINE(err_annul)( INTEGER(status) ) {
    err_nmsgs = 0;
    *status = SAI__OK;
}

/*
 * ERR_FLUSH -- Flush (print and clear) pending messages; reset status.
 */
F77_SUBROUTINE(err_flush)( INTEGER(status) ) {
    int i;
    for ( i = 0; i < err_nmsgs; i++ )
        fprintf( stderr, "!  %s\n", err_msgs[i] );
    err_nmsgs = 0;
    *status = SAI__OK;
}

/*
 * ERR_END -- End the current error context.  Flushes messages if status
 * is non-OK; otherwise discards them.
 */
F77_SUBROUTINE(err_end)( INTEGER(status) ) {
    if ( err_depth > 0 ) err_depth--;
    if ( *status != SAI__OK && err_nmsgs > 0 )
        F77_EXTERNAL_NAME(err_flush)( status );
    else
        err_nmsgs = 0;
}

/*
 * ERR_REP -- Report an error.  Sets status to SAI__ERROR if currently OK.
 * Fortran: ERR_REP( PARAM, TEXT, STATUS )
 * gfortran appends hidden length arguments after each CHARACTER argument.
 */
F77_SUBROUTINE(err_rep)( CHARACTER(param), CHARACTER(text),
                          INTEGER(status) TRAIL(param) TRAIL(text) ) {
    size_t len;
    (void)param;
    (void)param_length;
    if ( *status == SAI__OK ) *status = SAI__ERROR;
    if ( err_nmsgs < ERR_MAXMSG ) {
        len = text_length < (ERR_SZMSG - 1) ? text_length : (ERR_SZMSG - 1);
        memcpy( err_msgs[err_nmsgs], text, len );
        while ( len > 0 && err_msgs[err_nmsgs][len-1] == ' ' ) len--;
        err_msgs[err_nmsgs][len] = '\0';
        err_nmsgs++;
    }
}

/*
 * MSG_SETI / MSG_SETC / MSG_SETD / MSG_SETR -- Set named message tokens
 * for ^TOKEN substitution in EMS messages.  No-ops in the standalone build:
 * tokens remain unexpanded, which is acceptable since tests check pass/fail
 * logic, not the exact wording of diagnostic messages.
 */
F77_SUBROUTINE(msg_seti)( CHARACTER(token), INTEGER(ival) TRAIL(token) ) {
    (void)token; (void)token_length; (void)ival;
}

F77_SUBROUTINE(msg_setc)( CHARACTER(token), CHARACTER(cval) TRAIL(token) TRAIL(cval) ) {
    (void)token; (void)token_length; (void)cval; (void)cval_length;
}

F77_SUBROUTINE(msg_setd)( CHARACTER(token), DOUBLE(dval) TRAIL(token) ) {
    (void)token; (void)token_length; (void)dval;
}

F77_SUBROUTINE(msg_setr)( CHARACTER(token), REAL(rval) TRAIL(token) ) {
    (void)token; (void)token_length; (void)rval;
}

/*
 * MSG_OUT -- Output a message to stdout.
 * Fortran: MSG_OUT( PARAM, TEXT, STATUS )
 */
F77_SUBROUTINE(msg_out)( CHARACTER(param), CHARACTER(text),
                          INTEGER(status) TRAIL(param) TRAIL(text) ) {
    size_t len = text_length;
    (void)param; (void)param_length; (void)status;
    while ( len > 0 && text[len-1] == ' ' ) len--;
    printf( "%.*s\n", (int)len, text );
}
