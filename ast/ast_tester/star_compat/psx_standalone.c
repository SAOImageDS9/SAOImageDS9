/*
 * psx_standalone.c - Minimal standalone implementation of the Starlink PSX
 * (POSIX interface) routines needed by AST Fortran tests.
 *
 * PSX provides Fortran-callable wrappers for C POSIX functions.
 * Only the memory allocation routines are needed by AST tests.
 *
 * Pointer table design: The AST Fortran test files declare PSX pointer
 * variables as plain INTEGER (4-byte), not INTEGER*8.  On 64-bit systems
 * raw pointers do not fit in 4 bytes.  To avoid memory corruption we
 * maintain a global pointer table: psx_malloc/calloc stores the malloc'd
 * pointer in the table and returns the 32-bit table index.  cnf_pval
 * receives the index and returns the actual pointer value.
 *
 * This works for both INTEGER (4-byte) and INTEGER*8 (8-byte) Fortran
 * variables on little-endian platforms: an INTEGER*8 caller passes a pointer
 * to 8 bytes; reading only the first 4 bytes (int *) gives the valid index.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include "f77.h"

#define SAI__OK    0
#define SAI__ERROR 146800770

/* ---- Global pointer table ---- */
#define PSX_PTRTAB_SIZE 4096
static void *psx_ptrtab[PSX_PTRTAB_SIZE];  /* index 0 = unused/NULL */
static int   psx_ptrtab_init = 0;

static int psx_ptrtab_alloc( void *p ) {
    int i;
    if ( !psx_ptrtab_init ) {
        memset( psx_ptrtab, 0, sizeof(psx_ptrtab) );
        psx_ptrtab_init = 1;
    }
    /* Index 0 is reserved for NULL; start search at 1 */
    for ( i = 1; i < PSX_PTRTAB_SIZE; i++ ) {
        if ( psx_ptrtab[i] == NULL ) {
            psx_ptrtab[i] = p;
            return i;
        }
    }
    fprintf( stderr, "psx_standalone: pointer table exhausted\n" );
    return 0;
}

void *psx_ptrtab_get( int idx ) {
    if ( idx <= 0 || idx >= PSX_PTRTAB_SIZE ) return NULL;
    return psx_ptrtab[idx];
}

static void psx_ptrtab_free( int idx ) {
    if ( idx > 0 && idx < PSX_PTRTAB_SIZE )
        psx_ptrtab[idx] = NULL;
}

/*
 * Size of each HDS type code, used by psx_calloc.
 * Type strings match the HDS/PRM naming convention from PRM_PAR.
 */
static size_t hds_type_size( const char *type, size_t type_len ) {
    char buf[16];
    size_t len = type_len < 15 ? type_len : 15;
    memcpy( buf, type, len );
    while ( len > 0 && buf[len-1] == ' ' ) len--;
    buf[len] = '\0';

    if      ( strcmp(buf, "_BYTE")    == 0 ) return 1;
    else if ( strcmp(buf, "_UBYTE")   == 0 ) return 1;
    else if ( strcmp(buf, "_WORD")    == 0 ) return 2;
    else if ( strcmp(buf, "_UWORD")   == 0 ) return 2;
    else if ( strcmp(buf, "_INTEGER") == 0 ) return 4;
    else if ( strcmp(buf, "_INT64")   == 0 ) return 8;
    else if ( strcmp(buf, "_REAL")    == 0 ) return 4;
    else if ( strcmp(buf, "_DOUBLE")  == 0 ) return 8;
    else {
        fprintf( stderr, "psx_standalone: unknown type '%s'\n", buf );
        return 1;
    }
}

/*
 * psx_malloc_ -- Allocate SIZE bytes; store table index in PNTR.
 * Fortran: CALL PSX_MALLOC( SIZE, PNTR, STATUS )
 * PNTR is treated as int* (4-byte) to support plain INTEGER declarations.
 */
F77_SUBROUTINE(psx_malloc)( INTEGER(size), POINTER(pntr), INTEGER(status) ) {
    void *p;
    int idx;
    if ( *status != SAI__OK ) return;
    p = malloc( (size_t)*size );
    if ( p == NULL ) {
        *status = SAI__ERROR;
        *pntr = 0;
    } else {
        idx = psx_ptrtab_alloc( p );
        if ( idx == 0 ) { free(p); *status = SAI__ERROR; *pntr = 0; }
        else *pntr = idx;
    }
}

/*
 * psx_calloc_ -- Allocate N elements of HDS type TYPE; store index in PNTR.
 * Fortran: CALL PSX_CALLOC( N, TYPE, PNTR, STATUS )
 * Hidden trailing arg: type_len (size_t).
 */
F77_SUBROUTINE(psx_calloc)( INTEGER(n), CHARACTER(type),
                            POINTER(pntr), INTEGER(status) TRAIL(type) ) {
    void *p;
    size_t esize;
    int idx;
    if ( *status != SAI__OK ) return;
    esize = hds_type_size( type, type_length );
    p = calloc( (size_t)*n, esize );
    if ( p == NULL ) {
        *status = SAI__ERROR;
        *pntr = 0;
    } else {
        idx = psx_ptrtab_alloc( p );
        if ( idx == 0 ) { free(p); *status = SAI__ERROR; *pntr = 0; }
        else *pntr = idx;
    }
}

/*
 * psx_calloc8_ -- Same as psx_calloc but with 64-bit element count.
 * Fortran: CALL PSX_CALLOC8( N, TYPE, PNTR, STATUS )
 */
F77_SUBROUTINE(psx_calloc8)( int64_t *n, CHARACTER(type),
                             POINTER(pntr), INTEGER(status) TRAIL(type) ) {
    void *p;
    size_t esize;
    int idx;
    if ( *status != SAI__OK ) return;
    esize = hds_type_size( type, type_length );
    p = calloc( (size_t)*n, esize );
    if ( p == NULL ) {
        *status = SAI__ERROR;
        *pntr = 0;
    } else {
        idx = psx_ptrtab_alloc( p );
        if ( idx == 0 ) { free(p); *status = SAI__ERROR; *pntr = 0; }
        else *pntr = idx;
    }
}

/*
 * psx_free_ -- Free memory previously allocated by psx_malloc/psx_calloc.
 * Fortran: CALL PSX_FREE( PNTR, STATUS )
 */
F77_SUBROUTINE(psx_free)( POINTER(pntr), INTEGER(status) ) {
    void *p;
    if ( *status != SAI__OK ) return;
    if ( *pntr != 0 ) {
        p = psx_ptrtab_get( *pntr );
        if ( p ) free( p );
        psx_ptrtab_free( *pntr );
        *pntr = 0;
    }
}

/*
 * psx_getenv_ -- Portable Fortran wrapper around the C getenv() function.
 * Fortran: CALL PSX_GETENV( NAME, TRANS, STATUS )
 *
 * NAME is imported from the (blank-padded) Fortran string, and the environment
 * variable's value is exported blank-padded into TRANS.  If the variable is
 * unset, TRANS is blanked and STATUS is set to an error, mirroring the real
 * PSX_GETENV (which reports PSX__NOENV); the value is truncated, and STATUS
 * flagged, if it will not fit in TRANS.
 *
 * Hidden trailing CHARACTER length args come at the end in declaration order
 * (see chr_standalone.c for the convention).
 */
F77_SUBROUTINE(psx_getenv)( CHARACTER(name), CHARACTER(trans),
                            INTEGER(status) TRAIL(name) TRAIL(trans) ) {
    char cname[256];
    const char *val;
    size_t nlen;
    size_t vlen;
    size_t idx;

    if ( *status != SAI__OK )
        return;

/* Import NAME: drop trailing blanks and NUL-terminate. */
    nlen = (size_t)name_length;

    while ( nlen > 0 && name[ nlen - 1 ] == ' ' )
        nlen--;

    if ( nlen > sizeof( cname ) - 1 )
        nlen = sizeof( cname ) - 1;

    memcpy( cname, name, nlen );
    cname[ nlen ] = '\0';

    val = getenv( cname );

    if ( val ) {
/* Export the value, blank-padded, flagging truncation. */
        vlen = strlen( val );
        for ( idx = 0; idx < (size_t)trans_length; idx++ )
            trans[ idx ] = ( idx < vlen ) ? val[ idx ] : ' ';

        if ( vlen > (size_t)trans_length )
            *status = SAI__ERROR;
    } else {
/* No translation: blank the result and report an error. */
        for ( idx = 0; idx < (size_t)trans_length; idx++ )
            trans[ idx ] = ' ';

        *status = SAI__ERROR;
    }
}
