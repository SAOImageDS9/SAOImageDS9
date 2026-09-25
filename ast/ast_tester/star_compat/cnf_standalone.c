/*
 * cnf_standalone.c - Minimal standalone CNF (C/Fortran interface) functions.
 *
 * Only CNF_PVAL is needed by the AST Fortran tests.  It converts the
 * 32-bit pointer-table index stored by psx_malloc/psx_calloc back into
 * the actual C pointer, for use with Fortran's %val() construct.
 *
 * CNF_PAR declares CNF_PVAL as INTEGER*8 (returns 64-bit value), so we
 * return intptr_t regardless of how the index is stored.
 *
 * The argument is POINTER (int*, 4-byte) because all AST test files
 * declare their PSX pointer variables as plain INTEGER (4 bytes).
 * See psx_standalone.c for the pointer-table design.
 */

#include <stdint.h>
#include "f77.h"

/* Pointer table accessor defined in psx_standalone.c */
extern void *psx_ptrtab_get( int idx );

/*
 * CNF_PVAL -- Convert a PSX pointer-table index to a C pointer value.
 * Fortran: INTEGER*8 FUNCTION CNF_PVAL( FPTR )
 *
 * The argument is a 4-byte table index (POINTER = int*).
 * The return type must be intptr_t (64-bit on 64-bit platforms) to match
 * Fortran's INTEGER*8 declaration in CNF_PAR and to carry the full address.
 * We cannot use F77_POINTER_FUNCTION here because F77_POINTER_TYPE is int
 * (4 bytes), which is correct for passing PSX handle arguments but wrong
 * for a function that returns an actual pointer value.
 * intptr_t is guaranteed by the C standard to be wide enough to hold any
 * valid pointer.
 */
intptr_t F77_EXTERNAL_NAME(cnf_pval)( POINTER(fptr) ) {
    return (intptr_t)psx_ptrtab_get( *fptr );
}
