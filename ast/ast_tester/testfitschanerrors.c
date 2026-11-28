/*
 * testfitschanerrors.c — Table-driven tests for FitsChan warning and error
 * paths. Each test uses a minimal malformed FITS header embedded in C, reads
 * it through a FitsChan, and verifies that the expected warning or error was
 * produced.
 *
 * Two mechanisms:
 *   Warnings: Enabled via Warnings attribute, retrieved via astWarnings()
 *   Errors:   Set astStatus, checked via astOK / astStatus / astClearStatus
 */

#include "ast.h"
#include "ast_err.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
   const char *name;
   const char *cards;       /* Newline-separated FITS cards (no END needed) */
   const char *warn_cat;    /* Warnings attribute, or NULL for error/write test */
   int expect_error;        /* Expected astStatus, or 0 for warning/write test */
   const char *expect_text; /* Substring in warning text, or NULL */
   int skip_read;           /* 1 = check warnings after PutFits, skip astRead */
   const char *attrs;       /* Extra attributes to set before read, or NULL */
   const char *write_enc;   /* If set: read header, write to this encoding,
                               verify astWrite returns 0 (encoding rejected) */
} BadHeaderTest;

/* Minimal valid 2D TAN header used as a base for many tests. */
#define TAN_BASE \
   "NAXIS1  =                  100\n" \
   "NAXIS2  =                  100\n" \
   "CTYPE1  = 'RA---TAN'\n" \
   "CTYPE2  = 'DEC--TAN'\n" \
   "CRVAL1  =              180.000\n" \
   "CRVAL2  =               45.000\n" \
   "CRPIX1  =               50.000\n" \
   "CRPIX2  =               50.000\n" \
   "CDELT1  =              -0.0100\n" \
   "CDELT2  =               0.0100\n" \
   "RADESYS = 'FK5'\n" \
   "EQUINOX =               2000.0"

static const BadHeaderTest bad_headers[] = {

   /* --- distortion-sip-noorder (line 8815) ---
      -SIP distortion on axis 3 (only valid on axes 1-2) → warning. */
   { "distortion-sip-on-axis3",
     "NAXIS1  =                  256\n"
     "NAXIS2  =                  256\n"
     "NAXIS3  =                  100\n"
     "CTYPE1  = 'RA---TAN-SIP'\n"
     "CTYPE2  = 'DEC--TAN-SIP'\n"
     "CTYPE3  = 'FREQ-SIP'\n"
     "CRVAL1  =              180.000\n"
     "CRVAL2  =               45.000\n"
     "CRVAL3  =          1.4204E+09\n"
     "CRPIX1  =              128.000\n"
     "CRPIX2  =              128.000\n"
     "CRPIX3  =               50.000\n"
     "CDELT1  =              -0.0003\n"
     "CDELT2  =               0.0003\n"
     "CDELT3  =           1.0E+06\n"
     "RADESYS = 'FK5'\n"
     "EQUINOX =               2000.0\n"
     "A_ORDER =                    2\n"
     "A_1_1   =             1.0E-05\n"
     "B_ORDER =                    2\n"
     "B_1_1   =             1.0E-05",
     "distortion", 0, "distortion will be ignored", 0, NULL, NULL },

   /* --- distortion-unknown (line 8901) ---
      Unknown distortion suffix -XXX on TAN. */
   { "distortion-unknown",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'RA---TAN-XXX'\n"
     "CTYPE2  = 'DEC--TAN-XXX'\n"
     "CRVAL1  =              180.000\n"
     "CRVAL2  =               45.000\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CDELT1  =              -0.0100\n"
     "CDELT2  =               0.0100\n"
     "RADESYS = 'FK5'\n"
     "EQUINOX =               2000.0",
     "distortion", 0, "ignores this distortion", 0, NULL, NULL },

   /* --- badpv-tan-allzero (line 13980) ---
      TAN with PV on latitude axis but all zero → simple TAN warning. */
   { "badpv-tan-allzero",
     TAN_BASE "\n"
     "PV2_0   =                  0.0\n"
     "PV2_1   =                  0.0",
     "badpv", 0, "distortion coefficients", 0, NULL, NULL },

   /* --- noctype-missing (line 35625) ---
      2-axis header with CRPIX/CRVAL for 2 axes but CTYPE2 missing entirely.
      Use non-celestial CTYPE1 so the missing CTYPE2 produces a warning
      rather than a "longitude without latitude" error. */
   { "noctype-missing",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'FREQ'\n"
     "CRVAL1  =          1.4204E+09\n"
     "CRVAL2  =                  0.0\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CDELT1  =           1.0E+06\n"
     "CDELT2  =               1.0",
     "noctype", 0, "not found for one or more", 0, NULL, NULL },

   /* --- error-sourcefile-missing (line 27910) ---
      SourceFile pointing to a nonexistent file → AST__RDERR error. */
   { "error-sourcefile-missing",
     "DUMMY   = 0",
     NULL, AST__RDERR, NULL, 0, "SourceFile=nonexistent.head", NULL },

   /* --- error-lat-without-lon (line 35778) ---
      Latitude axis (DEC--TAN) found without a corresponding longitude axis.
      Use a spectral axis in place of RA. */
   { "error-lat-without-lon",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'FREQ'\n"
     "CTYPE2  = 'DEC--TAN'\n"
     "CRVAL1  =          1.4204E+09\n"
     "CRVAL2  =               45.000\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CDELT1  =           1.0E+06\n"
     "CDELT2  =               0.0100",
     NULL, AST__BDFTS, NULL, 0, NULL, NULL },

   /* --- badpv-noncelestial (line 35914) ---
      PV1_5 on longitude axis exceeds mxpar_lon for TAN projection. */
   { "badpv-lonaxis",
     TAN_BASE "\n"
     "PV1_5   =                  1.0",
     "badpv", 0, "not used by", 0, NULL, NULL },

   /* --- badkeyvalue-unparseable (line 32548) ---
      A keyword with a value that cannot be parsed as any FITS type. */
   { "badkeyvalue-unparseable",
     TAN_BASE "\n"
     "BADKEY  = not_a_valid_value",
     "badkeyvalue", 0, "keyword value is illegal", 1, NULL, NULL },

   /* --- sao-allzero (line 26711) ---
      SAO polynomial TAN with all distortion coefficients zero. */
   { "badpv-sao-allzero",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'RA---TAN'\n"
     "CTYPE2  = 'DEC--TAN'\n"
     "CRVAL1  =              180.000\n"
     "CRVAL2  =               45.000\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CDELT1  =              -0.0100\n"
     "CDELT2  =               0.0100\n"
     "RADESYS = 'FK5'\n"
     "EQUINOX =               2000.0\n"
     "CO1_1   =                  0.0\n"
     "CO1_2   =                  0.0\n"
     "CO1_3   =                  0.0\n"
     "CO1_4   =                  0.0\n"
     "CO1_5   =                  0.0\n"
     "CO1_6   =                  0.0\n"
     "CO1_7   =                  0.0\n"
     "CO1_8   =                  0.0\n"
     "CO1_9   =                  0.0\n"
     "CO1_10  =                  0.0\n"
     "CO1_11  =                  0.0\n"
     "CO1_12  =                  0.0\n"
     "CO1_13  =                  0.0\n"
     "CO2_1   =                  0.0\n"
     "CO2_2   =                  0.0\n"
     "CO2_3   =                  0.0\n"
     "CO2_4   =                  0.0\n"
     "CO2_5   =                  0.0\n"
     "CO2_6   =                  0.0\n"
     "CO2_7   =                  0.0\n"
     "CO2_8   =                  0.0\n"
     "CO2_9   =                  0.0\n"
     "CO2_10  =                  0.0\n"
     "CO2_11  =                  0.0\n"
     "CO2_12  =                  0.0\n"
     "CO2_13  =                  0.0",
     "badpv", 0, "SAO encoded", 0, NULL, NULL },

   /* --- tnx-unsupported (line 31913) ---
      TNX header with cross-term type 1 (full cross-terms, unsupported).
      The 4th number in the lngcor/latcor string is xterms: must != 2. */
   { "tnx-unsupported",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'RA---TNX'\n"
     "CTYPE2  = 'DEC--TNX'\n"
     "CRVAL1  =              180.000\n"
     "CRVAL2  =               45.000\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CD1_1   =              -0.0100\n"
     "CD2_2   =               0.0100\n"
     "WAT0_001= 'system=image'\n"
     "WAT1_001= 'wtype=tnx axtype=ra lngcor = \"3. 3. 3. 1. 0. 1. 0. 1. 0. 0. 0. 0. 0.\"'\n"
     "WAT2_001= 'wtype=tnx axtype=dec latcor = \"3. 3. 3. 1. 0. 1. 0. 1. 0. 0. 0. 0. 0.\"'",
     "tnx", 0, "unsupported IRAF", 0, NULL, NULL },

   /* --- zpx-unsupported (line 41570) ---
      ZPX header with lngcor using surface type 2 (unsupported).
      SpecTrans converts -ZPX to -ZPN-ZPX, then ZPXMapping parses WAT
      corrections via WATCoeffs. Surface type 2 sets ok=0.
      WAT values split across continuation cards due to 80-char limit. */
   { "zpx-unsupported",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'RA---ZPX'\n"
     "CTYPE2  = 'DEC--ZPX'\n"
     "CRVAL1  =                  0.0\n"
     "CRVAL2  =              -90.000\n"
     "CRPIX1  =              100.000\n"
     "CRPIX2  =              100.000\n"
     "CD1_1   =          -0.06666667\n"
     "CD2_2   =           0.06666667\n"
     "WAT0_001= 'system=image'\n"
     "WAT1_001= 'wtype=zpx axtype=ra projp1=1.0 lngcor = \"2. 3. 3. 2. -1'\n"
     "WAT1_002= '. 1. -1. 1. 0. 0. 0. 0. 0. 0.\"'\n"
     "WAT2_001= 'wtype=zpx axtype=dec projp1=1.0 latcor = \"2. 3. 3. 2. '\n"
     "WAT2_002= '-1. 1. -1. 1. 0. 0. 0. 0. 0. 0.\"'",
     "zpx", 0, "unsupported IRAF", 0, NULL, NULL },

   /* --- AIPS encoding rejection tests ---
      These headers read fine but cannot be written to FITS-AIPS because
      they use features that encoding doesn't support. astWrite returns 0. */

   /* AIT at non-origin → AIPS rejects (line 3252) */
   { "aips-reject-ait-nonorigin",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'RA---AIT'\n"
     "CTYPE2  = 'DEC--AIT'\n"
     "CRVAL1  =              180.000\n"
     "CRVAL2  =               45.000\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CDELT1  =              -0.0100\n"
     "CDELT2  =               0.0100\n"
     "RADESYS = 'FK5'\n"
     "EQUINOX =               2000.0",
     NULL, 0, NULL, 0, NULL, "FITS-AIPS" },

   /* Header with non-default LONPOLE → AIPS rejects (line 3299) */
   { "aips-reject-lonpole",
     TAN_BASE "\n"
     "LONPOLE =              150.000",
     NULL, 0, NULL, 0, NULL, "FITS-AIPS" },

   /* Unsupported spectral type: WAVE not FREQ/VELO/FELO → AIPS/AIPS++
      reject (lines 3318, 3822). */
   { "aips-reject-wave",
     "NAXIS1  =                 1024\n"
     "NAXIS2  =                  100\n"
     "NAXIS3  =                  100\n"
     "CTYPE1  = 'WAVE'\n"
     "CTYPE2  = 'RA---TAN'\n"
     "CTYPE3  = 'DEC--TAN'\n"
     "CRVAL1  =            5.5E-07\n"
     "CRVAL2  =              180.000\n"
     "CRVAL3  =               45.000\n"
     "CRPIX1  =              513.000\n"
     "CRPIX2  =               50.000\n"
     "CRPIX3  =               50.000\n"
     "CDELT1  =            1.0E-10\n"
     "CDELT2  =              -0.0100\n"
     "CDELT3  =               0.0100\n"
     "CUNIT1  = 'm'\n"
     "RADESYS = 'FK5'\n"
     "EQUINOX =               2000.0",
     NULL, 0, NULL, 0, NULL, "FITS-AIPS" },

   { "aips++-reject-wave",
     "NAXIS1  =                 1024\n"
     "NAXIS2  =                  100\n"
     "NAXIS3  =                  100\n"
     "CTYPE1  = 'WAVE'\n"
     "CTYPE2  = 'RA---TAN'\n"
     "CTYPE3  = 'DEC--TAN'\n"
     "CRVAL1  =            5.5E-07\n"
     "CRVAL2  =              180.000\n"
     "CRVAL3  =               45.000\n"
     "CRPIX1  =              513.000\n"
     "CRPIX2  =               50.000\n"
     "CRPIX3  =               50.000\n"
     "CDELT1  =            1.0E-10\n"
     "CDELT2  =              -0.0100\n"
     "CDELT3  =               0.0100\n"
     "CUNIT1  = 'm'\n"
     "RADESYS = 'FK5'\n"
     "EQUINOX =               2000.0",
     NULL, 0, NULL, 0, NULL, "FITS-AIPS++" },

   /* Unsupported SPECSYS: TOPOCENT not LSRK/BARYCENT/GEOCENTR → AIPS/AIPS++
      reject (lines 3337, 3841). */
   { "aips-reject-topocent",
     "NAXIS1  =                 1024\n"
     "NAXIS2  =                  100\n"
     "NAXIS3  =                  100\n"
     "CTYPE1  = 'FREQ'\n"
     "CTYPE2  = 'RA---TAN'\n"
     "CTYPE3  = 'DEC--TAN'\n"
     "CRVAL1  =          1.4204E+09\n"
     "CRVAL2  =              180.000\n"
     "CRVAL3  =               45.000\n"
     "CRPIX1  =              513.000\n"
     "CRPIX2  =               50.000\n"
     "CRPIX3  =               50.000\n"
     "CDELT1  =           1.0E+06\n"
     "CDELT2  =              -0.0100\n"
     "CDELT3  =               0.0100\n"
     "CUNIT1  = 'Hz'\n"
     "SPECSYS = 'TOPOCENT'\n"
     "RADESYS = 'FK5'\n"
     "EQUINOX =               2000.0",
     NULL, 0, NULL, 0, NULL, "FITS-AIPS" },

   { "aips++-reject-topocent",
     "NAXIS1  =                 1024\n"
     "NAXIS2  =                  100\n"
     "NAXIS3  =                  100\n"
     "CTYPE1  = 'FREQ'\n"
     "CTYPE2  = 'RA---TAN'\n"
     "CTYPE3  = 'DEC--TAN'\n"
     "CRVAL1  =          1.4204E+09\n"
     "CRVAL2  =              180.000\n"
     "CRVAL3  =               45.000\n"
     "CRPIX1  =              513.000\n"
     "CRPIX2  =               50.000\n"
     "CRPIX3  =               50.000\n"
     "CDELT1  =           1.0E+06\n"
     "CDELT2  =              -0.0100\n"
     "CDELT3  =               0.0100\n"
     "CUNIT1  = 'Hz'\n"
     "SPECSYS = 'TOPOCENT'\n"
     "RADESYS = 'FK5'\n"
     "EQUINOX =               2000.0",
     NULL, 0, NULL, 0, NULL, "FITS-AIPS++" },

   /* Asymmetric non-celestial CD matrix → AIPS rejects (line 3454),
      AIPS++ handles via CD matrix. */
   { "aips-reject-pixel-shear",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'PIXEL'\n"
     "CTYPE2  = 'PIXEL'\n"
     "CRVAL1  =                  0.0\n"
     "CRVAL2  =                  0.0\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CD1_1   =                  1.0\n"
     "CD1_2   =                  0.1\n"
     "CD2_1   =                 -0.8\n"
     "CD2_2   =                  1.0",
     NULL, 0, NULL, 0, NULL, "FITS-AIPS" },

   /* --- WcsCelestial read-side errors --- */

   /* Zero CDELT on celestial axis → singular diagonal matrix (line 35430).
      The error is annulled by the WCS read retry logic; AST falls back to
      a non-celestial interpretation. Verify read succeeds gracefully. */
   { "error-cdelt-zero",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'RA---TAN'\n"
     "CTYPE2  = 'DEC--TAN'\n"
     "CRVAL1  =              180.000\n"
     "CRVAL2  =               45.000\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CDELT1  =                  0.0\n"
     "CDELT2  =               0.0100\n"
     "RADESYS = 'FK5'\n"
     "EQUINOX =               2000.0",
     NULL, 0, NULL, 0, NULL, NULL },

   /* Unknown projection type → error (line 35680). */
   { "error-unknown-projection",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'RA---XXX'\n"
     "CTYPE2  = 'DEC--XXX'\n"
     "CRVAL1  =              180.000\n"
     "CRVAL2  =               45.000\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CDELT1  =              -0.0100\n"
     "CDELT2  =               0.0100",
     NULL, AST__BDFTS, NULL, 0, NULL, NULL },

   /* Duplicate longitude axes → error (line 35695). */
   { "error-duplicate-lon",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'RA---TAN'\n"
     "CTYPE2  = 'RA---TAN'\n"
     "CRVAL1  =              180.000\n"
     "CRVAL2  =              190.000\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CDELT1  =              -0.0100\n"
     "CDELT2  =              -0.0100",
     NULL, AST__BDFTS, NULL, 0, NULL, NULL },

   /* Mixed celestial systems: RA with GLAT → error (line 35762). */
   { "error-mixed-celestial",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'RA---TAN'\n"
     "CTYPE2  = 'GLAT-TAN'\n"
     "CRVAL1  =              180.000\n"
     "CRVAL2  =               45.000\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CDELT1  =              -0.0100\n"
     "CDELT2  =               0.0100",
     NULL, AST__BDFTS, NULL, 0, NULL, NULL },

   /* Mixed projections: TAN longitude with ARC latitude → error (line 35770). */
   { "error-mixed-projections",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'RA---TAN'\n"
     "CTYPE2  = 'DEC--ARC'\n"
     "CRVAL1  =              180.000\n"
     "CRVAL2  =               45.000\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CDELT1  =              -0.0100\n"
     "CDELT2  =               0.0100\n"
     "RADESYS = 'FK5'\n"
     "EQUINOX =               2000.0",
     NULL, AST__BDFTS, NULL, 0, NULL, NULL },

   /* --- Unknown encoding (line 27299) ---
      Setting Encoding to an unrecognized value → AST__BADAT. */
   { "error-bad-encoding",
     "DUMMY   = 0",
     NULL, AST__BADAT, NULL, 0, "Encoding=BADENC", NULL },

   /* --- Bad AltAxes value (line 27316) ---
      Setting AltAxes to an unrecognized value → AST__BADAT. */
   { "error-bad-altaxes",
     "DUMMY   = 0",
     NULL, AST__BADAT, NULL, 0, "AltAxes=BADVAL", NULL },

   /* --- Duplicate latitude axes (line 35745) ---
      Two DEC axes with the same projection → AST__BDFTS. */
   { "error-duplicate-lat",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'DEC--TAN'\n"
     "CTYPE2  = 'DEC--TAN'\n"
     "CRVAL1  =               45.000\n"
     "CRVAL2  =               55.000\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CDELT1  =               0.0100\n"
     "CDELT2  =               0.0100",
     NULL, AST__BDFTS, NULL, 0, NULL, NULL },

   /* --- Unknown RADESYS value (line 39106) ---
      RADESYS with an unrecognized value → AST__BDFTS. */
   { "error-bad-radesys",
     TAN_BASE "\n"
     "RADESYS = 'BADVAL'",
     NULL, AST__BDFTS, NULL, 0, NULL, NULL },

   /* --- Set read-only attribute (line 27447) ---
      Attempting to set Ncard → AST__NOWRT. */
   { "error-set-readonly",
     "DUMMY   = 0",
     NULL, AST__NOWRT, NULL, 0, "Ncard=5", NULL },

   /* --- badkeyname-nonprint (line 5956) ---
      Keyword name contains a non-printing control character (0x01).
      This warning fires during astPutFits, not astRead. */
   { "badkeyname-nonprint",
     "BAD\x01KEY = 0",
     "badkeyname", 0, "non-printing", 1, NULL, NULL },

   /* --- Unknown projection on latitude axis (line 35734) ---
      Valid longitude with unknown latitude projection → AST__BDFTS.
      Different path from error-unknown-projection which fires on longitude. */
   { "error-unknown-lat-projection",
     "NAXIS1  =                  100\n"
     "NAXIS2  =                  100\n"
     "CTYPE1  = 'RA---TAN'\n"
     "CTYPE2  = 'DEC--XXX'\n"
     "CRVAL1  =              180.000\n"
     "CRVAL2  =               45.000\n"
     "CRPIX1  =               50.000\n"
     "CRPIX2  =               50.000\n"
     "CDELT1  =              -0.0100\n"
     "CDELT2  =               0.0100",
     NULL, AST__BDFTS, NULL, 0, NULL, NULL },

   /* --- TIMESYS=UT warning (line 34567) ---
      UT in TIMESYS is interpreted as UTC with a warning. */
   { "badval-timesys-ut",
     TAN_BASE "\n"
     "MJD-OBS =            51544.500\n"
     "TIMESYS = 'UT'",
     "badval", 0, "UT", 0, NULL, NULL },

   /* --- TIMESYS=ET warning (line 34576) ---
      ET in TIMESYS is interpreted as TT with a warning. */
   { "badval-timesys-et",
     TAN_BASE "\n"
     "MJD-OBS =            51544.500\n"
     "TIMESYS = 'ET'",
     "badval", 0, "ET", 0, NULL, NULL },

   /* --- badpv longitude all-zero (line 14025) ---
      TAN with non-zero latitude PV but all-zero longitude PV.
      The longitude PV coefficients are all zero → warning on longitude. */
   { "badpv-lonaxis-allzero",
     TAN_BASE "\n"
     "PV2_1   =                  1.0\n"
     "PV2_3   =                0.001\n"
     "PV1_0   =                  0.0\n"
     "PV1_1   =                  0.0",
     "badpv", 0, "longitude axis", 0, NULL, NULL },

   /* --- error-unknown-spectral-algorithm (line 23596/39614) ---
      Spectral axis with unknown algorithm code -Z2F → AST__BDFTS.
      NonLinSpecWcs doesn't recognize 'Z' as a spectral system. */
   { "error-unknown-spectral-algorithm",
     "NAXIS1  =                 1024\n"
     "CTYPE1  = 'WAVE-Z2F'\n"
     "CRVAL1  =            5.5E-07\n"
     "CRPIX1  =              512.000\n"
     "CDELT1  =            1.0E-10\n"
     "CUNIT1  = 'm'\n"
     "RESTFRQ =          1.4204E+09",
     NULL, AST__BDFTS, NULL, 0, NULL, NULL },

};

#define NTESTS (sizeof(bad_headers)/sizeof(bad_headers[0]))

static int test_bad_header( const BadHeaderTest *t, int *status ) {
   int ok = 1;
   if( *status != 0 ) return 0;

   astBegin;
   AstFitsChan *fc = astFitsChan( NULL, NULL, " " );

   /* Enable warnings before inserting cards — some warnings (badkeyvalue,
      badkeyname) are issued during astPutFits, not during astRead. */
   if( t->warn_cat ) {
      astSetC( fc, "Warnings", t->warn_cat );
   }

   /* Split cards on \n and insert each via astPutFits. */
   {
      char *buf = astStore( NULL, t->cards, strlen( t->cards ) + 1 );
      char *line = buf;
      while( line && *line ) {
         char *nl = strchr( line, '\n' );
         if( nl ) *nl = '\0';
         while( *line == ' ' ) line++;
         if( *line ) astPutFits( fc, line, 0 );
         line = nl ? nl + 1 : NULL;
      }
      buf = astFree( buf );
   }
   astPutFits( fc, "END", 0 );

   /* Some errors (badkeyname) fire during astPutFits. Check early. */
   if( t->expect_error && !astOK ) {
      if( astStatus != t->expect_error ) {
         printf( "  %s: expected error %d got %d (during PutFits)\n",
                 t->name, t->expect_error, astStatus );
         ok = 0;
      }
      astClearStatus;
      fc = astAnnul( fc );
      astEnd;
      return ok;
   }

   astClear( fc, "Card" );
   if( t->attrs ) astSet( fc, "%s", t->attrs );

   /* Some errors fire during astSet (e.g., SourceFile). Check early. */
   if( t->expect_error && !astOK ) {
      if( astStatus != t->expect_error ) {
         printf( "  %s: expected error %d got %d (during attrs)\n",
                 t->name, t->expect_error, astStatus );
         ok = 0;
      }
      astClearStatus;
      fc = astAnnul( fc );
      astEnd;
      return ok;
   }

   AstObject *obj = NULL;
   if( !t->skip_read ) {
      obj = (AstObject *)astRead( fc );
      /* For warning tests, astRead may also set an error status. */
      if( !t->expect_error && !astOK ) astClearStatus;
   }

   if( t->expect_error ) {
      if( astOK ) {
         printf( "  %s: expected error %d but astRead succeeded\n",
                 t->name, t->expect_error );
         ok = 0;
      } else if( astStatus != t->expect_error ) {
         printf( "  %s: expected error %d got %d\n",
                 t->name, t->expect_error, astStatus );
         astClearStatus;
         ok = 0;
      } else {
         astClearStatus;
      }
   } else if( t->warn_cat ) {
      AstKeyMap *km = (AstKeyMap *)astWarnings( fc );
      if( !km || astMapSize( km ) == 0 ) {
         printf( "  %s: no warnings issued (expected '%s')\n",
                 t->name, t->warn_cat );
         ok = 0;
      }
      if( ok && t->expect_text && km ) {
         int found = 0;
         int nw = astMapSize( km );
         for( int i = 1; i <= nw; i++ ) {
            char key[20];
            const char *val;
            sprintf( key, "Warning_%d", i );
            if( astMapGet0C( km, key, &val ) &&
                strstr( val, t->expect_text ) ) {
               found = 1;
            }
         }
         if( !found ) {
            printf( "  %s: warning text does not contain '%s'\n",
                    t->name, t->expect_text );
            ok = 0;
         }
      }
      if( km ) km = astAnnul( km );
   } else if( t->write_enc && obj ) {
      /* Read succeeded; now write to specific encoding and verify failure. */
      AstFitsChan *wfc = astFitsChan( NULL, NULL, " " );
      astSetC( wfc, "Encoding", t->write_enc );
      int nw = astWrite( wfc, obj );
      if( nw != 0 ) {
         printf( "  %s: astWrite to %s returned %d, expected 0\n",
                 t->name, t->write_enc, nw );
         ok = 0;
      }
      /* Verify the FrameSet IS writable to FITS-WCS (the data is valid,
         just not representable in the limited encoding). */
      astEmptyFits( wfc );
      astSetC( wfc, "Encoding", "FITS-WCS" );
      nw = astWrite( wfc, obj );
      if( nw != 1 ) {
         printf( "  %s: astWrite to FITS-WCS returned %d, expected 1\n",
                 t->name, nw );
         ok = 0;
      }
      wfc = astAnnul( wfc );
   }

   if( obj ) obj = astAnnul( obj );
   fc = astAnnul( fc );
   astEnd;
   return ok;
}

int main( void ) {
   int status = 0;
   int fails = 0;

   astWatch( &status );

   for( size_t i = 0; i < NTESTS; i++ ) {
      if( !test_bad_header( &bad_headers[i], &status ) ) {
         fails++;
      }
   }

   /* --- Direct tests for attribute errors not fitting the table pattern --- */

   /* Clear read-only attribute Ncard → AST__NOWRT (line 7267). */
   {
      astBegin;
      AstFitsChan *fc = astFitsChan( NULL, NULL, " " );
      astClear( fc, "Ncard" );
      if( astOK ) {
         printf( "FAIL: clear-readonly-ncard: expected AST__NOWRT but no error\n" );
         fails++;
      } else if( astStatus != AST__NOWRT ) {
         printf( "FAIL: clear-readonly-ncard: expected AST__NOWRT got %d\n", astStatus );
         fails++;
      }
      astClearStatus;
      fc = astAnnul( fc );
      astEnd;
   }

   /* Clear read-only attribute AllWarnings → AST__NOWRT (line 7265). */
   {
      astBegin;
      AstFitsChan *fc = astFitsChan( NULL, NULL, " " );
      astClear( fc, "AllWarnings" );
      if( astOK ) {
         printf( "FAIL: clear-readonly-allwarnings: expected AST__NOWRT but no error\n" );
         fails++;
      } else if( astStatus != AST__NOWRT ) {
         printf( "FAIL: clear-readonly-allwarnings: expected AST__NOWRT got %d\n", astStatus );
         fails++;
      }
      astClearStatus;
      fc = astAnnul( fc );
      astEnd;
   }

   /* Unknown warning condition → AST__ATTIN (line 14136). */
   {
      astBegin;
      AstFitsChan *fc = astFitsChan( NULL, NULL, " " );
      astSetC( fc, "Warnings", "badxyz" );
      if( astOK ) {
         printf( "FAIL: unknown-warning-condition: expected AST__ATTIN but no error\n" );
         fails++;
      } else if( astStatus != AST__ATTIN ) {
         printf( "FAIL: unknown-warning-condition: expected AST__ATTIN got %d\n", astStatus );
         fails++;
      }
      astClearStatus;
      fc = astAnnul( fc );
      astEnd;
   }

   /* --- -TAB error tests requiring a tabsource callback --- */

   /* Helpers: minimal -TAB header cards for a 1D spectral axis. */
#define TAB_BASE_CARDS \
      "NAXIS   = 1", \
      "NAXIS1  = 100", \
      "CTYPE1  = 'FREQ-TAB'", \
      "CRVAL1  = 0.0", \
      "CRPIX1  = 1.0", \
      "CDELT1  = 1.0", \
      "CUNIT1  = 'Hz'", \
      "PS1_0   = 'WCS-TAB'", \
      "PS1_1   = 'COORDS'"

   /* -TAB test 1: Missing column — table exists but column COORDS absent.
      Triggers line 33550: !astHasColumn(table, coordscol) → AST__BADTAB. */
   {
      astBegin;
      AstFitsChan *fc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS,TabOK=1" );
      const char *cards[] = { TAB_BASE_CARDS, NULL };
      for( int i = 0; cards[i]; i++ ) astPutFits( fc, cards[i], 0 );
      astPutFits( fc, "END", 0 );

      AstFitsTable *tab = astFitsTable( NULL, " " );
      int dims[] = { 100 };
      astAddColumn( tab, "WRONG_NAME", AST__DOUBLETYPE, 1, dims, "Hz" );
      astPutTable( fc, tab, "WCS-TAB" );
      tab = astAnnul( tab );

      astClear( fc, "Card" );
      AstObject *obj = (AstObject *)astRead( fc );
      if( astOK ) {
         printf( "FAIL: tab-missing-column: expected AST__BADTAB but no error\n" );
         fails++;
      } else if( astStatus != AST__BADTAB ) {
         printf( "FAIL: tab-missing-column: expected AST__BADTAB got %d\n", astStatus );
         fails++;
      }
      astClearStatus;
      if( obj ) obj = astAnnul( obj );
      fc = astAnnul( fc );
      astEnd;
   }

   /* -TAB test 2: 1D column — table has COORDS but with only 1 dimension.
      FITS-WCS Paper III requires coordinate arrays to have ≥2 dimensions.
      Triggers line 33561: mdim == 1 → AST__BADTAB. */
   {
      astBegin;
      AstFitsChan *fc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS,TabOK=1" );
      const char *cards[] = { TAB_BASE_CARDS, NULL };
      for( int i = 0; cards[i]; i++ ) astPutFits( fc, cards[i], 0 );
      astPutFits( fc, "END", 0 );

      AstFitsTable *tab = astFitsTable( NULL, " " );
      int dims1d[] = { 100 };
      astAddColumn( tab, "COORDS", AST__DOUBLETYPE, 1, dims1d, "Hz" );
      astPutTable( fc, tab, "WCS-TAB" );
      tab = astAnnul( tab );

      astClear( fc, "Card" );
      AstObject *obj = (AstObject *)astRead( fc );
      if( astOK ) {
         printf( "FAIL: tab-1d-column: expected AST__BADTAB but no error\n" );
         fails++;
      } else if( astStatus != AST__BADTAB ) {
         printf( "FAIL: tab-1d-column: expected AST__BADTAB got %d\n", astStatus );
         fails++;
      }
      astClearStatus;
      if( obj ) obj = astAnnul( obj );
      fc = astAnnul( fc );
      astEnd;
   }

   /* -TAB test 3: Duplicate axis mapping — two FITS-WCS axes both map to
      dimension 1 of the same coordinate array.
      Triggers line 33610: marray[maxis] != -1 → AST__BADTAB.
      Need 2 spectral axes sharing the same table extension and column,
      both claiming PVi_3=1 (same coord array dimension). */
   {
      astBegin;
      AstFitsChan *fc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS,TabOK=1" );
      const char *cards2[] = {
         "NAXIS   = 2",
         "NAXIS1  = 100",
         "NAXIS2  = 100",
         "CTYPE1  = 'FREQ-TAB'",
         "CTYPE2  = 'FREQ-TAB'",
         "CRVAL1  = 0.0",
         "CRVAL2  = 0.0",
         "CRPIX1  = 1.0",
         "CRPIX2  = 1.0",
         "CDELT1  = 1.0",
         "CDELT2  = 1.0",
         "CUNIT1  = 'Hz'",
         "CUNIT2  = 'Hz'",
         "PS1_0   = 'WCS-TAB'",
         "PS1_1   = 'COORDS'",
         "PS2_0   = 'WCS-TAB'",
         "PS2_1   = 'COORDS'",
         "PV1_3   = 1",
         "PV2_3   = 1",
         NULL
      };
      for( int i = 0; cards2[i]; i++ ) astPutFits( fc, cards2[i], 0 );
      astPutFits( fc, "END", 0 );

      AstFitsTable *tab = astFitsTable( NULL, " " );
      int dims2d[] = { 2, 100 };
      astAddColumn( tab, "COORDS", AST__DOUBLETYPE, 2, dims2d, "Hz" );
      astPutTable( fc, tab, "WCS-TAB" );
      tab = astAnnul( tab );

      astClear( fc, "Card" );
      AstObject *obj = (AstObject *)astRead( fc );
      if( astOK ) {
         printf( "FAIL: tab-duplicate-axis: expected AST__BADTAB but no error\n" );
         fails++;
      } else if( astStatus != AST__BADTAB ) {
         printf( "FAIL: tab-duplicate-axis: expected AST__BADTAB got %d\n", astStatus );
         fails++;
      }
      astClearStatus;
      if( obj ) obj = astAnnul( obj );
      fc = astAnnul( fc );
      astEnd;
   }

   /* -TAB test 4: Missing axis for coordinate array dimension.
      A 3D coordinate array has dimensions 0 (lookup), 1, 2. Only one
      FITS-WCS axis maps to dimension 1 (PV1_3=1); dimension 2 has no
      corresponding axis → AST__BADTAB (line 33631). */
   {
      astBegin;
      AstFitsChan *fc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS,TabOK=1" );
      const char *cards[] = {
         "NAXIS   = 1",
         "NAXIS1  = 100",
         "CTYPE1  = 'FREQ-TAB'",
         "CRVAL1  = 0.0",
         "CRPIX1  = 1.0",
         "CDELT1  = 1.0",
         "CUNIT1  = 'Hz'",
         "PS1_0   = 'WCS-TAB'",
         "PS1_1   = 'COORDS'",
         "PV1_3   = 1",
         NULL
      };
      for( int i = 0; cards[i]; i++ ) astPutFits( fc, cards[i], 0 );
      astPutFits( fc, "END", 0 );

      AstFitsTable *tab = astFitsTable( NULL, " " );
      int dims3d[] = { 3, 100, 50 };
      astAddColumn( tab, "COORDS", AST__DOUBLETYPE, 3, dims3d, "Hz" );
      astPutTable( fc, tab, "WCS-TAB" );
      tab = astAnnul( tab );

      astClear( fc, "Card" );
      AstObject *obj = (AstObject *)astRead( fc );
      if( astOK ) {
         printf( "FAIL: tab-missing-axis: expected AST__BADTAB but no error\n" );
         fails++;
      } else if( astStatus != AST__BADTAB ) {
         printf( "FAIL: tab-missing-axis: expected AST__BADTAB got %d\n", astStatus );
         fails++;
      }
      astClearStatus;
      if( obj ) obj = astAnnul( obj );
      fc = astAnnul( fc );
      astEnd;
   }

   if( fails ) {
      printf( "%d tests failed\n", fails );
      return 1;
   }
   printf( "All %zu bad-header + 7 manual tests passed\n", NTESTS );
   return 0;
}
