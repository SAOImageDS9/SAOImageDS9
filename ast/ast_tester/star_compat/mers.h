/* Minimal mers.h stub for standalone (non-Starlink) builds.
   No mers functions are called by AST tests; this stub satisfies the
   #include without pulling in Starlink EMS/MSG headers. */
#ifndef MERS_DEFINED
#define MERS_DEFINED
#include "sae_par.h"

static inline void errMark( void ) {}
static inline void errRlse( void ) {}

static inline void errStat( int *status ) {
   *status = astOK ? 0 : 1;
}

static inline void errAnnul( int *status ) {
   astClearStatus;
   *status = 0;
}

static inline void errRep( const char *token, const char *text, int *status ) {
   (void)token;
   (void)text;
   (void)status;
}
#endif
