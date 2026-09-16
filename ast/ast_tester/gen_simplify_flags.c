/*
 * gen_simplify_flags.c
 *
 * The RestrictedSimplify and AllowSimplify flags live in the Mapping's
 * protected "flags" word, and their accessor macros sit inside
 * "#if defined(astCLASS)" (mapping.h:415) -- a section the generated public
 * ast.h omits entirely. Reaching them therefore needs a translation unit
 * compiled as a class implementation, which is what this file is.
 *
 * The public API hands out Object IDs rather than pointers, so each setter
 * converts with astMakePointer first (the same route testaxis.c takes to the
 * protected Axis interface).
 */
#include "sae_par.h"
#include "ast_err.h"

#define astCLASS gen_simplify_flags
#include "object.h"
#include "mapping.h"

#include "gen_simplify_flags.h"

static AstMapping *pointer(void *id, int *status) {
    return (AstMapping *) astMakePointer_((AstObject *) id, status);
}

void gen_set_allow_simplify(void *id) {
    int local = SAI__OK;
    int *status = &local;
    astSetAllowSimplify(pointer(id, status));
}

void gen_set_restricted_simplify(void *id) {
    int local = SAI__OK;
    int *status = &local;
    astSetRestrictedSimplify(pointer(id, status));
}
