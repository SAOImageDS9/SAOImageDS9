/* Unit tests for transform_oracle_util.c pure helpers. */
#include "ast.h"
#include "transform_oracle.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

static int failures = 0;
#define CHECK(cond) do { if(!(cond)) { \
    fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #cond); failures++; } } while(0)

static void test_within_tol(void) {
    /* exact equality */
    CHECK(oracle_within_tol(1.0, 1.0, 0.0, 0.0) == 1);
    /* a few ULP apart, within default rtol */
    CHECK(oracle_within_tol(1.0 + 4e-16, 1.0, ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 1);
    /* gross difference rejected */
    CHECK(oracle_within_tol(1.0001, 1.0, ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 0);
    /* absolute floor near zero */
    CHECK(oracle_within_tol(5e-13, 0.0, ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 1);
    /* BAD matches BAD only */
    CHECK(oracle_within_tol(AST__BAD, AST__BAD, ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 1);
    CHECK(oracle_within_tol(AST__BAD, 1.0, ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 0);
    CHECK(oracle_within_tol(1.0, AST__BAD, ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 0);
    /* NaN never matches */
    CHECK(oracle_within_tol(NAN, 1.0, 1e9, 1e9) == 0);
    /* infinities match only an infinity of the same sign */
    CHECK(oracle_within_tol(INFINITY, INFINITY, 0.0, 0.0) == 1);
    CHECK(oracle_within_tol(-INFINITY, -INFINITY, 0.0, 0.0) == 1);
    CHECK(oracle_within_tol(INFINITY, -INFINITY, 1e9, 1e9) == 0);
    CHECK(oracle_within_tol(INFINITY, 1.0, 1e9, 1e9) == 0);
    CHECK(oracle_within_tol(1.0, INFINITY, 1e9, 1e9) == 0);
}

static void test_within_tol_wrap(void) {
    double twopi = 2.0 * acos(-1.0);
    /* plain matches still match */
    CHECK(oracle_within_tol_wrap(1.0, 1.0, ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 1);
    /* longitude emitted as 2*pi vs 0 -> same angle */
    CHECK(oracle_within_tol_wrap(twopi, 0.0, ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 1);
    CHECK(oracle_within_tol_wrap(0.0, twopi, ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 1);
    /* +pi vs -pi -> same angle (differ by 2*pi) */
    CHECK(oracle_within_tol_wrap(acos(-1.0), -acos(-1.0), ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 1);
    /* a genuine difference (not near a multiple of 2*pi) is still rejected */
    CHECK(oracle_within_tol_wrap(1.0, 2.0, ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 0);
    /* BAD vs finite never matches via wrap */
    CHECK(oracle_within_tol_wrap(AST__BAD, 0.0, ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 0);

    /* Exact cross-architecture (arm64 ref vs x86-64 got) pairs observed in
       CI; the golden comparison must accept all of them. */
    /* longitude 2*pi (arm) vs ~0 (x86) */
    CHECK(oracle_within_tol_wrap(5.0999352672935785e-17, 6.2831853071795862,
                                 ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 1);
    CHECK(oracle_within_tol_wrap(1.9478449064398693e-20, 6.2831853071795862,
                                 ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 1);
    /* +pi (x86) vs -pi (arm) */
    CHECK(oracle_within_tol_wrap(3.1415926535897931, -3.1415926535897931,
                                 ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 1);
    /* relativistic spectral inverse near beta=1: 1.0 (x86) vs 1.0000000047 (arm) */
    CHECK(oracle_within_tol_wrap(1.0, 1.0000000047018207,
                                 ORACLE_DEF_RTOL, ORACLE_DEF_ATOL) == 1);
}

static void test_halton(void) {
    /* Known radical-inverse base-2 values: 1->1/2, 2->1/4, 3->3/4. */
    CHECK(fabs(oracle_halton(1, 2) - 0.5)  < 1e-15);
    CHECK(fabs(oracle_halton(2, 2) - 0.25) < 1e-15);
    CHECK(fabs(oracle_halton(3, 2) - 0.75) < 1e-15);
    /* base-3: 1->1/3, 2->2/3. */
    CHECK(fabs(oracle_halton(1, 3) - 1.0/3.0) < 1e-15);
    CHECK(fabs(oracle_halton(2, 3) - 2.0/3.0) < 1e-15);
}

static void test_sample_points(void) {
    int n = oracle_sample_axis_count();
    CHECK(n >= 8);
    double lo[2] = {-10.0, -10.0}, hi[2] = {10.0, 10.0};
    double *col[2];
    col[0] = malloc(sizeof(double) * (size_t)n);
    col[1] = malloc(sizeof(double) * (size_t)n);
    oracle_sample_points(2, lo, hi, n, col);
    /* every sample inside the closed range */
    for (int a = 0; a < 2; a++)
        for (int i = 0; i < n; i++)
            CHECK(col[a][i] >= lo[a] - 1e-9 && col[a][i] <= hi[a] + 1e-9);
    /* edge points present: an all-lo and an all-hi row somewhere */
    int saw_lo = 0, saw_hi = 0;
    for (int i = 0; i < n; i++) {
        if (fabs(col[0][i]-lo[0])<1e-12 && fabs(col[1][i]-lo[1])<1e-12) saw_lo = 1;
        if (fabs(col[0][i]-hi[0])<1e-12 && fabs(col[1][i]-hi[1])<1e-12) saw_hi = 1;
    }
    CHECK(saw_lo && saw_hi);
    free(col[0]); free(col[1]);
}

static void test_format_parse(void) {
    char buf[64];
    int ok = 0;
    oracle_format_double(buf, sizeof buf, AST__BAD);
    CHECK(strcmp(buf, "BAD") == 0);
    double back = oracle_parse_double("BAD", &ok);
    CHECK(ok && back == AST__BAD);
    /* round-trip a representative double exactly via %.17g */
    double v = 1.0/3.0;
    oracle_format_double(buf, sizeof buf, v);
    back = oracle_parse_double(buf, &ok);
    CHECK(ok && back == v);
    oracle_parse_double("not_a_number", &ok);
    CHECK(ok == 0);
}

static void test_load_mapping(void) {
    const char *root = getenv("ORACLE_TEST_ROOT");
    if (!root) { fprintf(stderr, "skip test_load_mapping (no ORACLE_TEST_ROOT)\n"); return; }
    /* Two fixtures, to cover both branches of oracle_load_mapping: a native
       dump read through a Channel, and a FITS header read through a FitsChan.
       Both must be ones the default distribution carries, so that this
       self-test still runs from a tarball -- hence programs/ rather than a
       simplify fixture, which ships only with the full corpus. */
    AstMapping *m1 = oracle_load_mapping(
        root, "programs/testcmpmap/splittest1.ast", NULL, NULL);
    CHECK(m1 != NULL);
    if (m1) { CHECK(astGetI(m1, "Nin") == 4); m1 = astAnnul(m1); }
    AstFrame *base = NULL, *cur = NULL;
    AstMapping *m2 = oracle_load_mapping(
        root, "wcsconv/inputs/cobe.head", &base, &cur);
    CHECK(m2 != NULL);
    /* cobe.head is a sky FrameSet: base GRID, current SkyFrame. */
    CHECK(base != NULL && cur != NULL);
    if (cur) CHECK(astIsASkyFrame(cur));
    if (m2) { CHECK(astGetI(m2, "Nin") == 2); m2 = astAnnul(m2); }
    if (base) base = astAnnul(base);
    if (cur) cur = astAnnul(cur);
}

int main(void) {
    test_within_tol();
    test_within_tol_wrap();
    test_halton();
    test_sample_points();
    test_format_parse();
    test_load_mapping();
    if (failures) { fprintf(stderr, "%d failure(s)\n", failures); return 1; }
    printf("test_oracle_util: all passed\n");
    return 0;
}
