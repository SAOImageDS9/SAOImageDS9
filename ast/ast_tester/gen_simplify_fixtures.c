/*
 * gen_simplify_fixtures.c
 *
 * Generates .map and .simp fixture files for the astSimplify branch
 * coverage campaign. Each fixture is created using the public C API,
 * serialized with astToString (.map), simplified with astSimplify,
 * then serialized again (.simp).
 *
 * Build:
 *   cmake --build build-dev --target gen_simplify_fixtures
 * Run:
 *   ./build-dev/ast_tester/gen_simplify_fixtures
 *
 * Output files go to the current working directory (run from ast_tester/).
 */

#include "ast.h"
#include "gen_simplify_flags.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void write_negative_fixture(const char *dir, const char *name, AstMapping *map);

static void write_fixture(const char *dir, const char *name, AstMapping *map) {
    char path_map[512], path_simp[512];
    AstChannel *chan;
    AstMapping *simp;

    snprintf(path_map, sizeof(path_map), "%s/%s.map", dir, name);
    snprintf(path_simp, sizeof(path_simp), "%s/%s.simp", dir, name);

    chan = astChannel(NULL, NULL, "SinkFile=%s", path_map);
    if (astWrite(chan, map) != 1) {
        fprintf(stderr, "ERROR: astWrite failed for %s.map\n", name);
        chan = astAnnul(chan);
        return;
    }
    chan = astAnnul(chan);

    simp = astSimplify(map);
    chan = astChannel(NULL, NULL, "SinkFile=%s", path_simp);
    if (astWrite(chan, simp) != 1) {
        fprintf(stderr, "ERROR: astWrite failed for %s.simp\n", name);
        chan = astAnnul(chan);
        simp = astAnnul(simp);
        return;
    }
    chan = astAnnul(chan);
    simp = astAnnul(simp);

    printf("  %s\n", name);
}

/* ===== ZoomMap fixtures ===== */

static void gen_zoom_fixtures(const char *dir) {
    printf("ZoomMap fixtures:\n");

    /* zoommap-03: single inverted ZoomMap normalizes */
    {
        AstZoomMap *zm = astZoomMap(2, 2.0, " ");
        astInvert(zm);
        write_fixture(dir, "zoom_invert_normalize", (AstMapping*)zm);
        zm = astAnnul(zm);
    }

    /* zoommap-05: parallel all-unit → UnitMap */
    {
        AstUnitMap *um = astUnitMap(2, " ");
        AstZoomMap *zm = astZoomMap(3, 1.0, " ");
        AstCmpMap *cm = astCmpMap(um, zm, 0, " ");
        write_fixture(dir, "zoom_parallel_all_unit", (AstMapping*)cm);
        cm = astAnnul(cm); um = astAnnul(um); zm = astAnnul(zm);
    }

    /* zoommap-06: parallel same factor → single ZoomMap */
    {
        AstZoomMap *z1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 2.0, " ");
        AstCmpMap *cm = astCmpMap(z1, z2, 0, " ");
        write_fixture(dir, "zoom_parallel_same_factor", (AstMapping*)cm);
        cm = astAnnul(cm); z1 = astAnnul(z1); z2 = astAnnul(z2);
    }

    /* zoommap-09: absorb into previous MatrixMap */
    {
        double diag[] = {3.0, 5.0};
        AstMatrixMap *mm = astMatrixMap(2, 2, 1, diag, " ");
        AstZoomMap *zm = astZoomMap(2, 2.0, " ");
        AstCmpMap *cm = astCmpMap(mm, zm, 1, " ");
        write_fixture(dir, "zoom_absorb_prev_matrix", (AstMapping*)cm);
        cm = astAnnul(cm); mm = astAnnul(mm); zm = astAnnul(zm);
    }

    /* zoommap-10: absorb into previous WinMap */
    {
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {4, 6};
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstZoomMap *zm = astZoomMap(2, 2.0, " ");
        AstCmpMap *cm = astCmpMap(wm, zm, 1, " ");
        write_fixture(dir, "zoom_absorb_prev_win", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); zm = astAnnul(zm);
    }

    /* zoommap-11: absorb into previous ShiftMap */
    {
        double shifts[] = {3.0, 5.0};
        AstShiftMap *sm = astShiftMap(2, shifts, " ");
        AstZoomMap *zm = astZoomMap(2, 2.0, " ");
        AstCmpMap *cm = astCmpMap(sm, zm, 1, " ");
        write_fixture(dir, "zoom_absorb_prev_shift", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); zm = astAnnul(zm);
    }

    /* zoommap-12: absorb into next MatrixMap */
    {
        double diag[] = {3.0, 5.0};
        AstZoomMap *zm = astZoomMap(2, 2.0, " ");
        AstMatrixMap *mm = astMatrixMap(2, 2, 1, diag, " ");
        AstCmpMap *cm = astCmpMap(zm, mm, 1, " ");
        write_fixture(dir, "zoom_absorb_next_matrix", (AstMapping*)cm);
        cm = astAnnul(cm); zm = astAnnul(zm); mm = astAnnul(mm);
    }

    /* zoommap-13: absorb into next WinMap */
    {
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {4, 6};
        AstZoomMap *zm = astZoomMap(2, 2.0, " ");
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(zm, wm, 1, " ");
        write_fixture(dir, "zoom_absorb_next_win", (AstMapping*)cm);
        cm = astAnnul(cm); zm = astAnnul(zm); wm = astAnnul(wm);
    }

    /* zoommap-14: absorb into next ShiftMap */
    {
        double shifts[] = {3.0, 5.0};
        AstZoomMap *zm = astZoomMap(2, 2.0, " ");
        AstShiftMap *sm = astShiftMap(2, shifts, " ");
        AstCmpMap *cm = astCmpMap(zm, sm, 1, " ");
        write_fixture(dir, "zoom_absorb_next_shift", (AstMapping*)cm);
        cm = astAnnul(cm); zm = astAnnul(zm); sm = astAnnul(sm);
    }
}

/* ===== WinMap fixtures ===== */

static void gen_win_fixtures(const char *dir) {
    printf("WinMap fixtures:\n");

    /* winmap-05: WinMap + WinMap series */
    {
        double ina[] = {0}, inb[] = {1}, outa[] = {3}, outb[] = {5};
        double ina2[] = {0}, inb2[] = {1}, outa2[] = {5}, outb2[] = {9};
        AstWinMap *w1 = astWinMap(1, ina, inb, outa, outb, " ");
        AstWinMap *w2 = astWinMap(1, ina2, inb2, outa2, outb2, " ");
        AstCmpMap *cm = astCmpMap(w1, w2, 1, " ");
        write_fixture(dir, "win_win_series_merge", (AstMapping*)cm);
        cm = astAnnul(cm); w1 = astAnnul(w1); w2 = astAnnul(w2);
    }

    /* winmap-07: ZoomMap + WinMap series (reverse order) */
    {
        double ina[] = {0}, inb[] = {1}, outa[] = {5}, outb[] = {7};
        AstZoomMap *zm = astZoomMap(1, 3.0, " ");
        AstWinMap *wm = astWinMap(1, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(zm, wm, 1, " ");
        write_fixture(dir, "win_zoom_series_merge_rev", (AstMapping*)cm);
        cm = astAnnul(cm); zm = astAnnul(zm); wm = astAnnul(wm);
    }

    /* winmap-09: ShiftMap + WinMap series (reverse order) */
    {
        double shifts[] = {3.0};
        double ina[] = {0}, inb[] = {1}, outa[] = {5}, outb[] = {7};
        AstShiftMap *sm = astShiftMap(1, shifts, " ");
        AstWinMap *wm = astWinMap(1, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(sm, wm, 1, " ");
        write_fixture(dir, "win_shift_series_merge_rev", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); wm = astAnnul(wm);
    }

    /* winmap-11: DiagMatrixMap + WinMap series (reverse order) */
    {
        double diag[] = {3.0, 5.0};
        double ina[] = {0, 0}, inb[] = {1, 1}, outa[] = {1, 2}, outb[] = {5, 8};
        AstMatrixMap *mm = astMatrixMap(2, 2, 1, diag, " ");
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(mm, wm, 1, " ");
        write_fixture(dir, "win_matrix_series_merge_rev", (AstMapping*)cm);
        cm = astAnnul(cm); mm = astAnnul(mm); wm = astAnnul(wm);
    }

    /* winmap-12: WinMap + UnitMap series */
    {
        double ina[] = {0, 0}, inb[] = {1, 1}, outa[] = {3, 5}, outb[] = {5, 9};
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstUnitMap *um = astUnitMap(2, " ");
        AstCmpMap *cm = astCmpMap(wm, um, 1, " ");
        write_fixture(dir, "win_unit_series_merge", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); um = astAnnul(um);
    }

    /* winmap-29: WinMap + WinMap parallel */
    {
        double ina[] = {0}, inb[] = {1}, outa[] = {3}, outb[] = {5};
        double ina2[] = {0}, inb2[] = {1}, outa2[] = {7}, outb2[] = {11};
        AstWinMap *w1 = astWinMap(1, ina, inb, outa, outb, " ");
        AstWinMap *w2 = astWinMap(1, ina2, inb2, outa2, outb2, " ");
        AstCmpMap *cm = astCmpMap(w1, w2, 0, " ");
        write_fixture(dir, "win_win_parallel_merge", (AstMapping*)cm);
        cm = astAnnul(cm); w1 = astAnnul(w1); w2 = astAnnul(w2);
    }

    /* winmap-30: WinMap + ZoomMap parallel */
    {
        double ina[] = {0}, inb[] = {1}, outa[] = {3}, outb[] = {5};
        AstWinMap *wm = astWinMap(1, ina, inb, outa, outb, " ");
        AstZoomMap *zm = astZoomMap(1, 4.0, " ");
        AstCmpMap *cm = astCmpMap(wm, zm, 0, " ");
        write_fixture(dir, "win_zoom_parallel_merge", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); zm = astAnnul(zm);
    }

    /* winmap-34: WinMap + DiagMatrixMap parallel */
    {
        double ina[] = {0}, inb[] = {1}, outa[] = {3}, outb[] = {5};
        double diag[] = {7.0};
        AstWinMap *wm = astWinMap(1, ina, inb, outa, outb, " ");
        AstMatrixMap *mm = astMatrixMap(1, 1, 1, diag, " ");
        AstCmpMap *cm = astCmpMap(wm, mm, 0, " ");
        write_fixture(dir, "win_diagmatrix_parallel_merge", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); mm = astAnnul(mm);
    }

    /* winmap-36: WinMap + UnitMap parallel */
    {
        double ina[] = {0}, inb[] = {1}, outa[] = {3}, outb[] = {5};
        AstWinMap *wm = astWinMap(1, ina, inb, outa, outb, " ");
        AstUnitMap *um = astUnitMap(1, " ");
        AstCmpMap *cm = astCmpMap(wm, um, 0, " ");
        write_fixture(dir, "win_unit_parallel_merge", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); um = astAnnul(um);
    }

    /* winmap-31: ZoomMap + WinMap in parallel (ZoomMap first) */
    {
        double ina[] = {0}, inb[] = {1}, outa[] = {3}, outb[] = {5};
        AstZoomMap *zm = astZoomMap(1, 4.0, " ");
        AstWinMap *wm = astWinMap(1, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(zm, wm, 0, " ");
        write_fixture(dir, "win_zoom_parallel_merge_rev", (AstMapping*)cm);
        cm = astAnnul(cm); zm = astAnnul(zm); wm = astAnnul(wm);
    }

    /* winmap-33: ShiftMap + WinMap in parallel (ShiftMap first) */
    {
        double ina[] = {0}, inb[] = {1}, outa[] = {3}, outb[] = {5};
        double shifts[] = {7.0};
        AstShiftMap *sm = astShiftMap(1, shifts, " ");
        AstWinMap *wm = astWinMap(1, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(sm, wm, 0, " ");
        write_fixture(dir, "win_shift_parallel_merge_rev", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); wm = astAnnul(wm);
    }

    /* winmap-35: Diagonal MatrixMap + WinMap in parallel (MatrixMap first) */
    {
        double ina[] = {0}, inb[] = {1}, outa[] = {3}, outb[] = {5};
        double diag[] = {7.0};
        AstMatrixMap *mm = astMatrixMap(1, 1, 1, diag, " ");
        AstWinMap *wm = astWinMap(1, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(mm, wm, 0, " ");
        write_fixture(dir, "win_diagmatrix_parallel_merge_rev", (AstMapping*)cm);
        cm = astAnnul(cm); mm = astAnnul(mm); wm = astAnnul(wm);
    }

    /* winmap-37: UnitMap + WinMap in parallel (UnitMap first) */
    {
        double ina[] = {0}, inb[] = {1}, outa[] = {3}, outb[] = {5};
        AstUnitMap *um = astUnitMap(1, " ");
        AstWinMap *wm = astWinMap(1, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(um, wm, 0, " ");
        write_fixture(dir, "win_unit_parallel_merge_rev", (AstMapping*)cm);
        cm = astAnnul(cm); um = astAnnul(um); wm = astAnnul(wm);
    }
}

/* ===== UnitMap fixtures ===== */

static void gen_unit_fixtures(const char *dir) {
    printf("UnitMap fixtures:\n");

    /* unitmap-01: single inverted UnitMap → clears invert */
    {
        AstUnitMap *um = astUnitMap(2, " ");
        astInvert(um);
        write_fixture(dir, "unit_invert_clear", (AstMapping*)um);
        um = astAnnul(um);
    }
}

/* ===== MatrixMap fixtures ===== */

static void gen_matrix_fixtures(const char *dir) {
    printf("MatrixMap fixtures:\n");

    /* matrixmap-11: DiagMatrixMap + WinMap series → merged via MatWin2 */
    {
        double diag[] = {2.0, 3.0};
        double ina[] = {0, 0}, inb[] = {1, 1}, outa[] = {1, 2}, outb[] = {5, 8};
        AstMatrixMap *mm = astMatrixMap(2, 2, 1, diag, " ");
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(mm, wm, 1, " ");
        write_fixture(dir, "matrix_diagwin_series_merge", (AstMapping*)cm);
        cm = astAnnul(cm); mm = astAnnul(mm); wm = astAnnul(wm);
    }

    /* matrixmap-12: MatrixMap + UnitMap series → UnitMap eliminated */
    {
        double diag[] = {2.0, 3.0};
        AstMatrixMap *mm = astMatrixMap(2, 2, 1, diag, " ");
        AstUnitMap *um = astUnitMap(2, " ");
        AstCmpMap *cm = astCmpMap(mm, um, 1, " ");
        write_fixture(dir, "matrix_unit_series_merge", (AstMapping*)cm);
        cm = astAnnul(cm); mm = astAnnul(mm); um = astAnnul(um);
    }
}

/* ===== CmpMap fixtures ===== */

static void gen_cmpmap_fixtures(const char *dir) {
    printf("CmpMap fixtures:\n");

    /* cmpmap-01: CmpMap self-simplifies (internal inverse pair cancels) */
    {
        AstZoomMap *z1 = astZoomMap(2, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 2.0, " ");
        astInvert(z2);
        AstCmpMap *inner = astCmpMap(z1, z2, 1, " ");
        double shifts[] = {1.0, 2.0};
        AstShiftMap *sm = astShiftMap(2, shifts, " ");
        AstCmpMap *outer = astCmpMap(inner, sm, 1, " ");
        write_fixture(dir, "cmpmap_self_simplify", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        z1 = astAnnul(z1); z2 = astAnnul(z2); sm = astAnnul(sm);
    }
}

/* ===== TranMap fixtures ===== */

static void gen_tranmap_fixtures(const char *dir) {
    printf("TranMap fixtures:\n");

    /* tranmap-01: inverted TranMap → normalizes */
    {
        AstZoomMap *z1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(1, 0.5, " ");
        AstTranMap *tm = astTranMap(z1, z2, " ");
        astInvert(tm);
        write_fixture(dir, "tranmap_invert_normalize", (AstMapping*)tm);
        tm = astAnnul(tm); z1 = astAnnul(z1); z2 = astAnnul(z2);
    }

    /* tranmap-02: TranMap with simplifiable components */
    {
        AstZoomMap *za1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *za2 = astZoomMap(1, 3.0, " ");
        AstCmpMap *fwd = astCmpMap(za1, za2, 1, " ");
        AstZoomMap *zb1 = astZoomMap(1, 0.5, " ");
        AstZoomMap *zb2 = astZoomMap(1, 2.0, " ");
        AstCmpMap *inv = astCmpMap(zb1, zb2, 1, " ");
        AstTranMap *tm = astTranMap(fwd, inv, " ");
        write_fixture(dir, "tranmap_component_simplify", (AstMapping*)tm);
        tm = astAnnul(tm); fwd = astAnnul(fwd); inv = astAnnul(inv);
        za1 = astAnnul(za1); za2 = astAnnul(za2);
        zb1 = astAnnul(zb1); zb2 = astAnnul(zb2);
    }
}

/* ===== RateMap fixtures ===== */

static void gen_ratemap_fixtures(const char *dir) {
    printf("RateMap fixtures:\n");

    /* ratemap-01: RateMap with simplifiable interior */
    {
        AstZoomMap *z1 = astZoomMap(2, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 3.0, " ");
        AstCmpMap *inner = astCmpMap(z1, z2, 1, " ");
        AstRateMap *rm = astRateMap(inner, 1, 1, " ");
        write_fixture(dir, "ratemap_simplify_interior", (AstMapping*)rm);
        rm = astAnnul(rm); inner = astAnnul(inner);
        z1 = astAnnul(z1); z2 = astAnnul(z2);
    }

    /* ratemap-02: forward RateMap + inverted RateMap (same encapsulated
       mapping) → cancel via inverse */
    {
        AstZoomMap *z1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(1, 2.0, " ");
        AstRateMap *r1 = astRateMap(z1, 1, 1, " ");
        AstRateMap *r2 = astRateMap(z2, 1, 1, " ");
        astInvert(r2);
        AstCmpMap *cm = astCmpMap(r1, r2, 1, " ");
        write_fixture(dir, "ratemap_inverse_cancel", (AstMapping*)cm);
        cm = astAnnul(cm); r1 = astAnnul(r1); r2 = astAnnul(r2);
        z1 = astAnnul(z1); z2 = astAnnul(z2);
    }
}

/* ===== SlaMap fixtures ===== */

static void gen_slamap_fixtures(const char *dir) {
    printf("SlaMap fixtures:\n");

    /* slamap-04: single inverted SlaMap normalizes */
    {
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "EQGAL", 0, NULL);
        astInvert(sm);
        write_fixture(dir, "sla_invert_normalize", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-02: partial cancellation (3 steps, middle pair cancels) */
    {
        double beq[] = {1950.0};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "ADDET", 1, beq);
        astSlaAdd(sm, "SUBET", 1, beq);
        astSlaAdd(sm, "EQGAL", 0, NULL);
        write_fixture(dir, "sla_partial_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-03: multi-map merge without step reduction */
    {
        double beq[] = {1950.0};
        AstSlaMap *s1 = astSlaMap(0, " ");
        astSlaAdd(s1, "ADDET", 1, beq);
        AstSlaMap *s2 = astSlaMap(0, " ");
        astSlaAdd(s2, "EQGAL", 0, NULL);
        AstCmpMap *cm = astCmpMap(s1, s2, 1, " ");
        write_fixture(dir, "sla_merge_no_cancel", (AstMapping*)cm);
        cm = astAnnul(cm); s1 = astAnnul(s1); s2 = astAnnul(s2);
    }

    /* slamap-08: 0-arg supergalactic */
    {
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "GALSUP", 0, NULL);
        astSlaAdd(sm, "SUPGAL", 0, NULL);
        write_fixture(dir, "sla_supergalactic_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-09: 0-arg J2000 dynamical */
    {
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "J2000H", 0, NULL);
        astSlaAdd(sm, "HJ2000", 0, NULL);
        write_fixture(dir, "sla_j2000_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-10: 1-arg E-terms */
    {
        double beq[] = {1950.0};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "ADDET", 1, beq);
        astSlaAdd(sm, "SUBET", 1, beq);
        write_fixture(dir, "sla_eterms_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-11: 1-arg FK4/FK5 */
    {
        double beq[] = {1950.0};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "FK45Z", 1, beq);
        astSlaAdd(sm, "FK54Z", 1, beq);
        write_fixture(dir, "sla_fk45_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-12: 1-arg ICRS/FK5 */
    {
        double args[] = {2000.0};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "HFK5Z", 1, args);
        astSlaAdd(sm, "FK5HZ", 1, args);
        write_fixture(dir, "sla_icrs_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-13: 1-arg ecliptic */
    {
        double args[] = {2000.0};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "EQECL", 1, args);
        astSlaAdd(sm, "ECLEQ", 1, args);
        write_fixture(dir, "sla_ecliptic_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-16: 2-arg geocentric (cross-matched AMP+MAP) */
    {
        double amp_args[] = {51544.0, 2000.0};
        double map_args[] = {2000.0, 51544.0};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "AMP", 2, amp_args);
        astSlaAdd(sm, "MAP", 2, map_args);
        write_fixture(dir, "sla_geocentric_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-23: redundant precession (start==end) */
    {
        double args[] = {2000.0, 2000.0};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "PREC", 2, args);
        write_fixture(dir, "sla_prec_redundant", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-24: adjacent precession merge */
    {
        double args1[] = {1950.0, 1975.0};
        double args2[] = {1975.0, 2000.0};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "PREC", 2, args1);
        astSlaAdd(sm, "PREC", 2, args2);
        write_fixture(dir, "sla_prec_merge", (AstMapping*)sm);
        sm = astAnnul(sm);
    }
}

/* ===== SpecMap fixtures ===== */

static void gen_specmap_fixtures(const char *dir) {
    printf("SpecMap fixtures:\n");

    /* specmap-04: single inverted SpecMap normalizes */
    {
        double rf[] = {1.4e9, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        astSpecAdd(sm, "FRTOVL", 1, rf);
        astInvert(sm);
        write_fixture(dir, "spec_invert_normalize", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* specmap-02: partial cancellation */
    {
        double rf[] = {1.4e9, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        astSpecAdd(sm, "FRTOVL", 1, rf);
        astSpecAdd(sm, "VLTOFR", 1, rf);
        astSpecAdd(sm, "ENTOFR", 0, NULL);
        write_fixture(dir, "spec_partial_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* specmap-08: 0-arg unit conversion cancel */
    {
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        astSpecAdd(sm, "ENTOFR", 0, NULL);
        astSpecAdd(sm, "FRTOEN", 0, NULL);
        write_fixture(dir, "spec_unit_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* specmap-03: multi-map merge without step reduction */
    {
        double rf[] = {1.4e9, 0.0};
        AstSpecMap *s1 = astSpecMap(1, 0, " ");
        astSpecAdd(s1, "FRTOVL", 1, rf);
        AstSpecMap *s2 = astSpecMap(1, 0, " ");
        astSpecAdd(s2, "ENTOFR", 0, NULL);
        AstCmpMap *cm = astCmpMap(s1, s2, 1, " ");
        write_fixture(dir, "spec_merge_no_cancel", (AstMapping*)cm);
        cm = astAnnul(cm); s1 = astAnnul(s1); s2 = astAnnul(s2);
    }

    /* specmap-10: 2-arg local-standard cancel (szargs=3, pad to be safe) */
    {
        double args[] = {0.5, 1.2, 0.0, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        astSpecAdd(sm, "LKF2HL", 2, args);
        astSpecAdd(sm, "HLF2LK", 2, args);
        write_fixture(dir, "spec_lsr_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* specmap-11: 3-arg geocentric cancel (szargs=4, pad) */
    {
        double args[] = {0.5, 1.2, 51544.0, 0.0, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        astSpecAdd(sm, "GEF2HL", 3, args);
        astSpecAdd(sm, "HLF2GE", 3, args);
        write_fixture(dir, "spec_geocentric_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* specmap-12: 6-arg topocentric cancel (szargs=7, pad) */
    {
        double args[] = {-2.5, 0.9, 1000.0, 51544.0, 0.5, 1.2, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        astSpecAdd(sm, "TPF2HL", 6, args);
        astSpecAdd(sm, "HLF2TP", 6, args);
        write_fixture(dir, "spec_topocentric_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }
}

/* ===== TimeMap fixtures ===== */

static void gen_timemap_fixtures(const char *dir) {
    printf("TimeMap fixtures:\n");

    /* timemap-04: single inverted TimeMap normalizes (szargs=2, pad) */
    {
        double dut[] = {0.5, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "TAITOTT", 1, dut);
        astInvert(tm);
        write_fixture(dir, "time_invert_normalize", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* timemap-02: partial cancellation */
    {
        double dut[] = {0.5, 0.0};
        double dut2[] = {0.5, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "TAITOTT", 1, dut);
        astTimeAdd(tm, "TTTOTAI", 1, dut);
        astTimeAdd(tm, "TTTOTCG", 1, dut2);
        write_fixture(dir, "time_partial_cancel", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* timemap-03: multi-map merge without step reduction */
    {
        double dut[] = {0.5, 0.0};
        double dut2[] = {0.3, 0.0};
        AstTimeMap *t1 = astTimeMap(0, " ");
        astTimeAdd(t1, "TAITOTT", 1, dut);
        AstTimeMap *t2 = astTimeMap(0, " ");
        astTimeAdd(t2, "TTTOTCG", 1, dut2);
        AstCmpMap *cm = astCmpMap(t1, t2, 1, " ");
        write_fixture(dir, "time_merge_no_cancel", (AstMapping*)cm);
        cm = astAnnul(cm); t1 = astAnnul(t1); t2 = astAnnul(t2);
    }

    /* timemap-07: no-op MJDTOMJD step with zero offset (szargs=3, pad) */
    {
        double args[] = {0.0, 0.0, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "MJDTOMJD", 2, args);
        write_fixture(dir, "time_noop_eliminate", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* timemap-09: 2-arg swapped pair (MJDTOJD + JDTOMJD) (szargs=3) */
    {
        double args1[] = {0.0, 2400000.5, 0.0};
        double args2[] = {2400000.5, 0.0, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "MJDTOJD", 2, args1);
        astTimeAdd(tm, "JDTOMJD", 2, args2);
        write_fixture(dir, "time_2arg_swapped_cancel", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* timemap-10: 2-arg same-order pair (TAITOUTC + UTCTOTAI) (szargs=3) */
    {
        double args[] = {53000.0, 0.5, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "TAITOUTC", 2, args);
        astTimeAdd(tm, "UTCTOTAI", 2, args);
        write_fixture(dir, "time_2arg_same_cancel", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* timemap-11: 3-arg pair (GMSTTOLMST + LMSTTOGMST) (szargs=3, exact) */
    {
        double args[] = {-2.5, 1000.0, 1013.0, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "GMSTTOLMST", 3, args);
        astTimeAdd(tm, "LMSTTOGMST", 3, args);
        write_fixture(dir, "time_3arg_cancel", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* timemap-12: 5-arg pair (TTTOTDB + TDBTOTT) (szargs=7, pad) */
    {
        double args[] = {53000.0, 0.5, -2.5, 6378.0, 0.0, 0.0, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "TTTOTDB", 5, args);
        astTimeAdd(tm, "TDBTOTT", 5, args);
        write_fixture(dir, "time_5arg_cancel", (AstMapping*)tm);
        tm = astAnnul(tm);
    }
}

/* ===== PermMap fixtures ===== */

static void gen_permmap_fixtures(const char *dir) {
    printf("PermMap fixtures:\n");

    /* permmap-03: two PermMaps cancel to UnitMap */
    {
        int inperm[] = {2, 1};
        int outperm[] = {2, 1};
        AstPermMap *p1 = astPermMap(2, inperm, 2, outperm, NULL, " ");
        AstPermMap *p2 = astPermMap(2, inperm, 2, outperm, NULL, " ");
        AstCmpMap *cm = astCmpMap(p1, p2, 1, " ");
        write_fixture(dir, "perm_cancel_to_unit", (AstMapping*)cm);
        cm = astAnnul(cm); p1 = astAnnul(p1); p2 = astAnnul(p2);
    }

    /* permmap-04: single inverted PermMap normalizes */
    {
        int inperm[] = {2, 1};
        int outperm[] = {2, 1};
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, NULL, " ");
        astInvert(pm);
        write_fixture(dir, "perm_invert_normalize", (AstMapping*)pm);
        pm = astAnnul(pm);
    }
}

/* ===== NormMap fixtures ===== */

static void gen_normmap_fixtures(const char *dir) {
    printf("NormMap fixtures:\n");

    /* normmap-02: NormMap wrapping basic Frame → UnitMap */
    {
        AstFrame *f = astFrame(2, " ");
        AstNormMap *nm = astNormMap(f, " ");
        write_fixture(dir, "normmap_basic_frame_to_unit", (AstMapping*)nm);
        nm = astAnnul(nm); f = astAnnul(f);
    }

    /* normmap-03: inverse NormMap pair cancels (SkyFrame) */
    {
        AstSkyFrame *sf = astSkyFrame(" ");
        AstNormMap *n1 = astNormMap(sf, " ");
        AstNormMap *n2 = astNormMap(sf, " ");
        astInvert(n1);
        AstCmpMap *cm = astCmpMap(n1, n2, 1, " ");
        write_fixture(dir, "normmap_inverse_cancel", (AstMapping*)cm);
        cm = astAnnul(cm); n1 = astAnnul(n1); n2 = astAnnul(n2);
        sf = astAnnul(sf);
    }

    /* normmap-05: duplicate NormMaps (same direction) → extras become UnitMap */
    {
        AstSkyFrame *sf = astSkyFrame(" ");
        AstNormMap *n1 = astNormMap(sf, " ");
        AstNormMap *n2 = astNormMap(sf, " ");
        AstCmpMap *cm = astCmpMap(n1, n2, 1, " ");
        write_fixture(dir, "normmap_duplicate_elim", (AstMapping*)cm);
        cm = astAnnul(cm); n1 = astAnnul(n1); n2 = astAnnul(n2);
        sf = astAnnul(sf);
    }
}

/* ===== UnitNormMap fixtures ===== */

static void gen_unitnormmap_fixtures(const char *dir) {
    printf("UnitNormMap fixtures:\n");

    /* unitnormmap-01: ShiftMap + forward UnitNormMap → adjusted centre */
    {
        double centre[] = {1.0, 2.0};
        double shifts[] = {0.5, 0.5};
        AstUnitNormMap *unm = astUnitNormMap(2, centre, " ");
        AstShiftMap *sm = astShiftMap(2, shifts, " ");
        AstCmpMap *cm = astCmpMap(sm, unm, 1, " ");
        write_fixture(dir, "unitnormmap_shift_fwd_merge", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); unm = astAnnul(unm);
    }

    /* unitnormmap-04: inverted UnitNormMap + ShiftMap → adjusted centre */
    {
        double centre[] = {1.0, 2.0};
        double shifts[] = {0.5, 0.5};
        AstUnitNormMap *unm = astUnitNormMap(2, centre, " ");
        astInvert(unm);
        AstShiftMap *sm = astShiftMap(2, shifts, " ");
        AstCmpMap *cm = astCmpMap(unm, sm, 1, " ");
        write_fixture(dir, "unitnormmap_inv_shift_merge", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); unm = astAnnul(unm);
    }

    /* unitnormmap-07: fwd + inv with same centre → UnitMap */
    {
        double centre[] = {1.0, 2.0};
        AstUnitNormMap *u1 = astUnitNormMap(2, centre, " ");
        AstUnitNormMap *u2 = astUnitNormMap(2, centre, " ");
        astInvert(u2);
        AstCmpMap *cm = astCmpMap(u1, u2, 1, " ");
        write_fixture(dir, "unitnormmap_inverse_cancel", (AstMapping*)cm);
        cm = astAnnul(cm); u1 = astAnnul(u1); u2 = astAnnul(u2);
    }

    /* unitnormmap-08: inv + fwd with same centre → UnitMap */
    {
        double centre[] = {1.0, 2.0};
        AstUnitNormMap *u1 = astUnitNormMap(2, centre, " ");
        AstUnitNormMap *u2 = astUnitNormMap(2, centre, " ");
        astInvert(u1);
        AstCmpMap *cm = astCmpMap(u1, u2, 1, " ");
        write_fixture(dir, "unitnormmap_inv_fwd_cancel", (AstMapping*)cm);
        cm = astAnnul(cm); u1 = astAnnul(u1); u2 = astAnnul(u2);
    }

    /* unitnormmap-09: fwd + inv with different centres → ShiftMap */
    {
        double c1[] = {1.0, 2.0};
        double c2[] = {3.0, 4.0};
        AstUnitNormMap *u1 = astUnitNormMap(2, c1, " ");
        AstUnitNormMap *u2 = astUnitNormMap(2, c2, " ");
        astInvert(u2);
        AstCmpMap *cm = astCmpMap(u1, u2, 1, " ");
        write_fixture(dir, "unitnormmap_diff_centre_to_shift", (AstMapping*)cm);
        cm = astAnnul(cm); u1 = astAnnul(u1); u2 = astAnnul(u2);
    }
}

/* ===== GrismMap fixtures ===== */

#define GRISM_PARAMS \
    "GrismNR=1.5,GrismNRP=-1e-6,GrismWaveR=5000," \
    "GrismAlpha=0.1,GrismG=2e-4,GrismM=1," \
    "GrismEps=0.02,GrismTheta=0.03"

static void gen_grismmap_fixtures(const char *dir) {
    printf("GrismMap fixtures:\n");

    /* grismmap-03: ZoomMap + inverted GrismMap → absorbed */
    {
        AstGrismMap *gm = astGrismMap(" ");
        astInvert(gm);
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(zm, gm, 1, " ");
        write_fixture(dir, "grism_zoom_inv_merge", (AstMapping*)cm);
        cm = astAnnul(cm); gm = astAnnul(gm); zm = astAnnul(zm);
    }

    /* grismmap-01: forward GrismMap + ZoomMap → merge into a single GrismMap */
    {
        AstGrismMap *gm = astGrismMap(GRISM_PARAMS);
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(gm, zm, 1, " ");
        write_fixture(dir, "grism_zoom_merge", (AstMapping*)cm);
        cm = astAnnul(cm); gm = astAnnul(gm); zm = astAnnul(zm);
    }

    /* grismmap-02: forward GrismMap + inverted GrismMap (opposite GrmM) → cancel */
    {
        AstGrismMap *g1 = astGrismMap(GRISM_PARAMS);
        AstGrismMap *g2 = astGrismMap(
            "GrismNR=1.5,GrismNRP=-1e-6,GrismWaveR=5000,"
            "GrismAlpha=0.1,GrismG=2e-4,GrismM=-1,"
            "GrismEps=0.02,GrismTheta=0.03");
        astInvert(g2);
        AstCmpMap *cm = astCmpMap(g1, g2, 1, " ");
        write_fixture(dir, "grism_inverse_cancel", (AstMapping*)cm);
        cm = astAnnul(cm); g1 = astAnnul(g1); g2 = astAnnul(g2);
    }
}

/* ===== WcsMap fixtures ===== */

static void gen_wcsmap_fixtures(const char *dir) {
    printf("WcsMap fixtures:\n");

    /* wcsmap-01: AST__WCSBAD → UnitMap */
    {
        AstWcsMap *wm = astWcsMap(2, AST__WCSBAD, 1, 2, " ");
        write_fixture(dir, "wcsmap_bad_to_unit", (AstMapping*)wm);
        wm = astAnnul(wm);
    }

    /* wcsmap-03: WcsMap swaps past PermMap to reach inverse merge target */
    {
        int inperm[] = {2, 1};
        int outperm[] = {2, 1};
        AstWcsMap *w1 = astWcsMap(2, AST__TAN, 1, 2, " ");
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, NULL, " ");
        AstWcsMap *w2 = astWcsMap(2, AST__TAN, 2, 1, " ");
        astInvert(w2);
        AstCmpMap *inner = astCmpMap(pm, w2, 1, " ");
        AstCmpMap *outer = astCmpMap(w1, inner, 1, " ");
        write_fixture(dir, "wcsmap_perm_swap_cancel", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        w1 = astAnnul(w1); pm = astAnnul(pm); w2 = astAnnul(w2);
    }
}

/* ===== SphMap fixtures ===== */

static void gen_sphmap_fixtures(const char *dir) {
    printf("SphMap additional fixtures:\n");

    /* sphmap-02: SphMap(UnitRadius=1) + Inverse(SphMap) cancels */
    {
        AstSphMap *s1 = astSphMap("UnitRadius=1");
        AstSphMap *s2 = astSphMap("UnitRadius=1");
        astInvert(s2);
        AstCmpMap *cm = astCmpMap(s1, s2, 1, " ");
        write_fixture(dir, "sph_fwd_inv_unitradius_cancel", (AstMapping*)cm);
        cm = astAnnul(cm); s1 = astAnnul(s1); s2 = astAnnul(s2);
    }

    /* sphmap-09: Inv(SphMap) + ZoomMap + SphMap → WinMap (ZoomMap variant) */
    {
        AstSphMap *s1 = astSphMap("UnitRadius=1");
        astInvert(s1);
        AstZoomMap *zm = astZoomMap(3, -1.0, " ");
        AstSphMap *s2 = astSphMap("UnitRadius=1");
        AstCmpMap *inner = astCmpMap(zm, s2, 1, " ");
        AstCmpMap *outer = astCmpMap(s1, inner, 1, " ");
        write_fixture(dir, "sph_zoom_sandwich", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        s1 = astAnnul(s1); zm = astAnnul(zm); s2 = astAnnul(s2);
    }

    /* sphmap-XX: Inv(SphMap) + (Diagonal MatrixMap + SphMap) → MatrixMap.
       Tests the SphMap sandwich simplification with an explicit non-unit
       diagonal matrix in the middle. Setting PolarLong=0 explicitly so
       the resulting fixture pins PlrLg with a "set" flag. */
    {
        AstSphMap *s1 = astSphMap("PolarLong=0");
        astInvert(s1);
        double diag[] = {2.0, -2.0, 2.0};
        AstMatrixMap *mm = astMatrixMap(3, 3, 1, diag, " ");
        AstSphMap *s2 = astSphMap("PolarLong=0");
        AstCmpMap *inner = astCmpMap(mm, s2, 1, " ");
        AstCmpMap *outer = astCmpMap(s1, inner, 1, " ");
        write_fixture(dir, "sph_matrix_sandwich", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        s1 = astAnnul(s1); mm = astAnnul(mm); s2 = astAnnul(s2);
    }
}

/* ===== PcdMap fixtures ===== */

static void gen_pcdmap_fixtures(const char *dir) {
    printf("PcdMap fixtures:\n");

    /* pcdmap-03: PcdMap + UnitMap → UnitMap eliminated */
    {
        double pcdcen[] = {100.0, 100.0};
        AstPcdMap *pm = astPcdMap(0.001, pcdcen, " ");
        AstUnitMap *um = astUnitMap(2, " ");
        AstCmpMap *cm = astCmpMap(pm, um, 1, " ");
        write_fixture(dir, "pcd_unit_series_merge", (AstMapping*)cm);
        cm = astAnnul(cm); pm = astAnnul(pm); um = astAnnul(um);
    }

    /* pcdmap-04: PcdMap swaps with ZoomMap to reach inverse PcdMap */
    {
        double pcdcen[] = {0.0, 0.0};
        AstPcdMap *p1 = astPcdMap(0.001, pcdcen, " ");
        AstZoomMap *zm = astZoomMap(2, 1.0, " ");
        AstPcdMap *p2 = astPcdMap(0.001, pcdcen, " ");
        astInvert(p2);
        AstCmpMap *inner = astCmpMap(zm, p2, 1, " ");
        AstCmpMap *outer = astCmpMap(p1, inner, 1, " ");
        write_fixture(dir, "pcd_zoom_swap_cancel", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        p1 = astAnnul(p1); zm = astAnnul(zm); p2 = astAnnul(p2);
    }
}

/* ===== ChebyMap fixtures =====
 *
 * ChebyMap inherits from PolyMap and uses PolyMap's MapMerge, so the
 * simplification behaviour is the PolyMap rule set plus the ChebyMap-
 * specific dump format (an extra PolyMap "section" between Mapping and
 * ChebyMap holding the polynomial coefficients, with FSCL/FOFF emitted
 * as the ChebyMap-level attributes after `IsA PolyMap`).
 *
 * These fixtures exercise:
 *   - chebymap_inverse_cancel:    forward + inverted twin → UnitMap
 *   - neg_chebymap_standalone:    bare ChebyMap with no neighbour → no simplify
 *
 * The negative fixture is the primary diagnostic for byte-exact dumping:
 * any drift in the inheritance-section layout (Mapping → PolyMap → ChebyMap)
 * surfaces on the .map round-trip.
 */

static void gen_chebymap_fixtures(const char *dir) {
    printf("ChebyMap fixtures:\n");

    /* chebymap-01: forward ChebyMap followed by its inverted twin → cancel.
     *
     * Build a 1D ChebyMap with both forward and inverse Chebyshev
     * coefficients so the inverse direction is usable; pair it with an
     * identical-then-inverted twin, in series. PolyMap::MapMerge's
     * inverse-cancellation rule should collapse the pair to a UnitMap. */
    {
        double coeff_f[] = {
            /* y = 0.5 * T1(x) = 0.5 x  (T1(x) = x in Chebyshev basis) */
            0.5, 1, 1,
        };
        double coeff_i[] = {
            /* x = 2 * T1(y)  (inverse of y = 0.5 x) */
            2.0, 1, 1,
        };
        double lbnd[] = {-1.0};
        double ubnd[] = { 1.0};
        AstChebyMap *c1 = astChebyMap(1, 1, 1, coeff_f, 1, coeff_i,
                                      lbnd, ubnd, lbnd, ubnd, " ");
        AstChebyMap *c2 = astChebyMap(1, 1, 1, coeff_f, 1, coeff_i,
                                      lbnd, ubnd, lbnd, ubnd, " ");
        astInvert(c2);
        AstCmpMap *cm = astCmpMap(c1, c2, 1, " ");
        write_fixture(dir, "chebymap_inverse_cancel", (AstMapping*)cm);
        cm = astAnnul(cm); c1 = astAnnul(c1); c2 = astAnnul(c2);
    }

    /* chebymap-02: standalone non-trivial 2D ChebyMap → no simplification.
     *
     * Bounds [-2, 2]^2 (non-default), a small set of forward Chebyshev
     * coefficients, no inverse polynomial. With no neighbour and no
     * inverse pair to cancel against, astSimplify leaves it unchanged.
     * The .map and .simp dumps should be identical. */
    {
        double coeff_f[] = {
            /* (coeff, out_axis, px, py) */
            1.0,  1, 1, 0,
            0.05, 1, 0, 1,
            0.02, 1, 2, 0,
            1.0,  2, 0, 1,
            0.05, 2, 1, 0,
            0.02, 2, 0, 2,
        };
        double lbnd[] = {-2.0, -2.0};
        double ubnd[] = { 2.0,  2.0};
        AstChebyMap *cm = astChebyMap(2, 2, 6, coeff_f, 0, NULL,
                                       lbnd, ubnd, NULL, NULL, " ");
        write_negative_fixture(dir, "neg_chebymap_standalone",
                                (AstMapping*)cm);
        cm = astAnnul(cm);
    }
}

/* ===== SwitchMap fixtures ===== */

static void gen_switchmap_fixtures(const char *dir) {
    printf("SwitchMap fixtures:\n");

    /* switchmap-03: inverted SwitchMap normalizes */
    {
        AstZoomMap *fsel = astZoomMap(1, 1.0, " ");
        AstZoomMap *isel = astZoomMap(1, 1.0, " ");
        AstZoomMap *r1 = astZoomMap(1, 2.0, " ");
        AstMapping *routes[] = {(AstMapping*)r1};
        AstSwitchMap *sw = astSwitchMap(fsel, isel, 1, (void**)routes, " ");
        astInvert(sw);
        write_fixture(dir, "switchmap_invert_normalize", (AstMapping*)sw);
        sw = astAnnul(sw); fsel = astAnnul(fsel); isel = astAnnul(isel);
        r1 = astAnnul(r1);
    }

    /* switchmap-04: SwitchMap internal simplification */
    {
        AstZoomMap *fsel = astZoomMap(1, 1.0, " ");
        AstZoomMap *isel = astZoomMap(1, 1.0, " ");
        AstZoomMap *za = astZoomMap(1, 2.0, " ");
        AstZoomMap *zb = astZoomMap(1, 3.0, " ");
        AstCmpMap *route = astCmpMap(za, zb, 1, " ");
        AstMapping *routes[] = {(AstMapping*)route};
        AstSwitchMap *sw = astSwitchMap(fsel, isel, 1, (void**)routes, " ");
        write_fixture(dir, "switchmap_internal_simplify", (AstMapping*)sw);
        sw = astAnnul(sw); fsel = astAnnul(fsel); isel = astAnnul(isel);
        za = astAnnul(za); zb = astAnnul(zb); route = astAnnul(route);
    }
}

/* ===== TranMap additional fixtures ===== */

static void gen_tranmap_extra_fixtures(const char *dir) {
    printf("TranMap extra fixtures:\n");

    /* tranmap-04: adjacent TranMap merge in series */
    {
        AstZoomMap *z2 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z05 = astZoomMap(1, 0.5, " ");
        AstZoomMap *z3 = astZoomMap(1, 3.0, " ");
        AstZoomMap *z033 = astZoomMap(1, 1.0/3.0, " ");
        AstTranMap *t1 = astTranMap(z2, z05, " ");
        AstTranMap *t2 = astTranMap(z3, z033, " ");
        AstCmpMap *cm = astCmpMap(t1, t2, 1, " ");
        write_fixture(dir, "tranmap_adjacent_merge", (AstMapping*)cm);
        cm = astAnnul(cm); t1 = astAnnul(t1); t2 = astAnnul(t2);
        z2 = astAnnul(z2); z05 = astAnnul(z05);
        z3 = astAnnul(z3); z033 = astAnnul(z033);
    }

    /* tranmap-10: inverted TranMap nominated from inside a series list.
       tranmap.c:837-850 replaces it with the equal forward TranMap whose
       components are swapped and inverted, so the serialised result holds a
       forward TranMap. The neighbour is a ZoomMap, which the TranMap cannot
       merge with, so the list keeps two entries throughout: the companion
       negative neg_tranmap_nontranmap_neighbour is this same pair with the
       TranMap not inverted, and C leaves that one alone. */
    {
        AstZoomMap *z2 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z05 = astZoomMap(1, 0.5, " ");
        AstTranMap *tm = astTranMap(z2, z05, " ");
        astInvert(tm);
        AstZoomMap *z5 = astZoomMap(1, 5.0, " ");
        AstCmpMap *cm = astCmpMap(tm, z5, 1, " ");
        write_fixture(dir, "tranmap_invert_in_list", (AstMapping*)cm);
        cm = astAnnul(cm); tm = astAnnul(tm);
        z2 = astAnnul(z2); z05 = astAnnul(z05); z5 = astAnnul(z5);
    }

    /* tranmap-11: TranMap(m, m) nominated from inside a series list.
       Both components are defined in both directions and are equal, so
       tranmap.c:864-887 replaces the TranMap with one of them. The exposed
       ZoomMap then merges with its neighbour, so the whole Mapping collapses
       to a single ZoomMap and the replacement has to take part in further
       merging rather than end the pass. */
    {
        AstZoomMap *za = astZoomMap(1, 2.0, " ");
        AstZoomMap *zb = astZoomMap(1, 2.0, " ");
        AstTranMap *tm = astTranMap(za, zb, " ");
        AstZoomMap *z5 = astZoomMap(1, 5.0, " ");
        AstCmpMap *cm = astCmpMap(tm, z5, 1, " ");
        write_fixture(dir, "tranmap_equal_components_in_list", (AstMapping*)cm);
        cm = astAnnul(cm); tm = astAnnul(tm);
        za = astAnnul(za); zb = astAnnul(zb); z5 = astAnnul(z5);
    }
}

/* ===== MatrixMap cascade fixtures ===== */

static void gen_matrix_cascade_fixtures(const char *dir) {
    printf("MatrixMap cascade fixtures:\n");

    /* matrixmap-13: MatrixMap swaps past WinMap to reach merge target */
    {
        double diag1[] = {2.0, 3.0};
        double ina[] = {0, 0}, inb[] = {1, 1}, outa[] = {1, 2}, outb[] = {5, 8};
        double diag2[] = {4.0, 5.0};
        AstMatrixMap *m1 = astMatrixMap(2, 2, 1, diag1, " ");
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstMatrixMap *m2 = astMatrixMap(2, 2, 1, diag2, " ");
        AstCmpMap *inner = astCmpMap(wm, m2, 1, " ");
        AstCmpMap *outer = astCmpMap(m1, inner, 1, " ");
        write_fixture(dir, "matrix_swap_past_win", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        m1 = astAnnul(m1); wm = astAnnul(wm); m2 = astAnnul(m2);
    }

    /* matrixmap-15: Swap with WinMap for local simplification.
       A full (non-diagonal) MatrixMap can't directly merge with WinMap
       (MatWin2 requires diagonal). After MatWin swap, the resulting WinMap
       has all scales=1 (absorbed into MatrixMap) and simplifies to ShiftMap
       — a class change that triggers the swap acceptance. */
    {
        double mat[] = {1.0, 0.0, 1.0, 1.0};
        AstMatrixMap *mm = astMatrixMap(2, 2, 0, mat, " ");
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {4, 6};
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(mm, wm, 1, " ");
        write_fixture(dir, "matrix_swap_win_simplifies", (AstMapping*)cm);
        cm = astAnnul(cm); mm = astAnnul(mm); wm = astAnnul(wm);
    }

    /* matrixmap-14: MatrixMap swaps past PermMap to reach merge target */
    {
        double diag1[] = {2.0, 3.0};
        int inperm[] = {2, 1};
        int outperm[] = {2, 1};
        double diag2[] = {4.0, 5.0};
        AstMatrixMap *m1 = astMatrixMap(2, 2, 1, diag1, " ");
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, NULL, " ");
        AstMatrixMap *m2 = astMatrixMap(2, 2, 1, diag2, " ");
        AstCmpMap *inner = astCmpMap(pm, m2, 1, " ");
        AstCmpMap *outer = astCmpMap(m1, inner, 1, " ");
        write_fixture(dir, "matrix_swap_past_perm", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        m1 = astAnnul(m1); pm = astAnnul(pm); m2 = astAnnul(m2);
    }
}

/* ===== SlaMap remaining fixtures ===== */

static void gen_slamap_extra_fixtures(const char *dir) {
    printf("SlaMap extra fixtures:\n");

    /* slamap-14: 1-arg helio-ecliptic (EQHE+HEEQ) */
    {
        double args[] = {51544.0};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "EQHE", 1, args);
        astSlaAdd(sm, "HEEQ", 1, args);
        write_fixture(dir, "sla_helioecl_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-15: 1-arg HA (R2H+H2R) */
    {
        double args[] = {3.5};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "R2H", 1, args);
        astSlaAdd(sm, "H2R", 1, args);
        write_fixture(dir, "sla_ha_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-17: 2-arg AzEl (H2E+E2H) */
    {
        double args[] = {0.9, 0.001};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "H2E", 2, args);
        astSlaAdd(sm, "E2H", 2, args);
        write_fixture(dir, "sla_azel_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }
}

/* ===== SwitchMap extra fixtures ===== */

static void gen_switchmap_extra_fixtures(const char *dir) {
    printf("SwitchMap extra fixtures:\n");

    /* switchmap-01: SwitchMap + Inverse(SwitchMap) cancel to UnitMap */
    {
        AstZoomMap *fsel = astZoomMap(1, 1.0, " ");
        AstZoomMap *isel = astZoomMap(1, 1.0, " ");
        AstZoomMap *r1 = astZoomMap(1, 2.0, " ");
        AstMapping *routes[] = {(AstMapping*)r1};
        AstSwitchMap *s1 = astSwitchMap(fsel, isel, 1, (void**)routes, " ");
        AstSwitchMap *s2 = astSwitchMap(fsel, isel, 1, (void**)routes, " ");
        astInvert(s2);
        AstCmpMap *cm = astCmpMap(s1, s2, 1, " ");
        write_fixture(dir, "switchmap_inverse_cancel", (AstMapping*)cm);
        cm = astAnnul(cm); s1 = astAnnul(s1); s2 = astAnnul(s2);
        fsel = astAnnul(fsel); isel = astAnnul(isel); r1 = astAnnul(r1);
    }
}

/* ===== PcdMap extra fixtures ===== */

static void gen_pcdmap_extra_fixtures(const char *dir) {
    printf("PcdMap extra fixtures:\n");

    /* pcdmap-06: PcdMap swap without merge target — accepted because
       ZoomMap(1) simplifies to UnitMap after the swap. */
    {
        double pcdcen[] = {0.0, 0.0};
        AstPcdMap *pm = astPcdMap(0.001, pcdcen, " ");
        AstZoomMap *zm = astZoomMap(2, 1.0, " ");
        AstCmpMap *cm = astCmpMap(pm, zm, 1, " ");
        write_fixture(dir, "pcd_swap_zoom_simplifies", (AstMapping*)cm);
        cm = astAnnul(cm); pm = astAnnul(pm); zm = astAnnul(zm);
    }

    /* pcdmap-05: PcdMap swaps with PermMap(axis swap) to reach inverse */
    {
        double pcdcen[] = {0.0, 0.0};
        int inperm[] = {2, 1};
        int outperm[] = {2, 1};
        AstPcdMap *p1 = astPcdMap(0.001, pcdcen, " ");
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, NULL, " ");
        AstPcdMap *p2 = astPcdMap(0.001, pcdcen, " ");
        astInvert(p2);
        AstCmpMap *inner = astCmpMap(pm, p2, 1, " ");
        AstCmpMap *outer = astCmpMap(p1, inner, 1, " ");
        write_fixture(dir, "pcd_perm_swap_cancel", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        p1 = astAnnul(p1); pm = astAnnul(pm); p2 = astAnnul(p2);
    }
}

/* ===== WinMap extra cascade fixtures ===== */

static void gen_win_extra_cascade_fixtures(const char *dir) {
    printf("WinMap extra cascade fixtures:\n");

    /* winmap-26: Swap accepted because swapped Mapping simplifies.
       Setup: PermMap(2→3, passes axes 1,2 and adds constant on axis 3)
       followed by WinMap(3D, a=[0,0,5], b=[1,1,3]).
       After WinPerm swap: new WinMap(2D, a=[0,0], b=[1,1]) → simplifies to UnitMap. */
    {
        int inperm[] = {1, 2};
        int outperm[] = {1, 2, -1};
        double consts[] = {5.0};
        AstPermMap *pm = astPermMap(2, inperm, 3, outperm, consts, " ");
        double ina[] = {0, 0, 0}, inb[] = {1, 1, 1};
        double outa[] = {0, 0, 5}, outb[] = {1, 1, 8};
        AstWinMap *wm = astWinMap(3, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(pm, wm, 1, " ");
        write_fixture(dir, "win_swap_simplifies", (AstMapping*)cm);
        cm = astAnnul(cm); pm = astAnnul(pm); wm = astAnnul(wm);
    }

    /* winmap-27: Swap accepted because outer neighbours can merge.
       Setup: [PermMap(swap)] [WinMap(2D)] [PermMap(swap)]
       WinMap can't merge directly with PermMap. After swap with left PermMap,
       the resulting PermMap is adjacent to the right PermMap and they merge. */
    {
        int inperm[] = {2, 1};
        int outperm[] = {2, 1};
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {4, 6};
        AstPermMap *p1 = astPermMap(2, inperm, 2, outperm, NULL, " ");
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstPermMap *p2 = astPermMap(2, inperm, 2, outperm, NULL, " ");
        AstCmpMap *inner = astCmpMap(wm, p2, 1, " ");
        AstCmpMap *outer = astCmpMap(p1, inner, 1, " ");
        write_fixture(dir, "win_swap_outer_merge", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        p1 = astAnnul(p1); wm = astAnnul(wm); p2 = astAnnul(p2);
    }

    /* winmap-14: WinMap merges with neighbouring parallel CmpMap (lower) */
    {
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {3, 5};
        double shifts[] = {1.0};
        AstShiftMap *sm1 = astShiftMap(1, shifts, " ");
        double shifts2[] = {2.0};
        AstShiftMap *sm2 = astShiftMap(1, shifts2, " ");
        AstCmpMap *par = astCmpMap(sm1, sm2, 0, " ");
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(par, wm, 1, " ");
        write_fixture(dir, "win_cmpmap_parallel_merge", (AstMapping*)cm);
        cm = astAnnul(cm); par = astAnnul(par); wm = astAnnul(wm);
        sm1 = astAnnul(sm1); sm2 = astAnnul(sm2);
    }
}

/* ===== SlaMap 4-arg fixtures ===== */

static void gen_slamap_4arg_fixtures(const char *dir) {
    printf("SlaMap 4-arg fixtures:\n");

    /* slamap-18: 4-arg HPC (HPCEQ+EQHPC) */
    {
        double args[] = {51544.0, 0.5, 1.2, 150.0e6};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "HPCEQ", 4, args);
        astSlaAdd(sm, "EQHPC", 4, args);
        write_fixture(dir, "sla_hpc_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-19: 4-arg HPR (HPREQ+EQHPR) */
    {
        double args[] = {51544.0, 0.5, 1.2, 150.0e6};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "HPREQ", 4, args);
        astSlaAdd(sm, "EQHPR", 4, args);
        write_fixture(dir, "sla_hpr_cancel", (AstMapping*)sm);
        sm = astAnnul(sm);
    }
}

/* ===== WinMap cascade fixtures ===== */

static void gen_win_cascade_fixtures(const char *dir) {
    printf("WinMap cascade fixtures:\n");

    /* winmap-18: WinMap swaps past MatrixMap to reach merge target */
    {
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa1[] = {1, 2}, outb1[] = {3, 4};
        double outa2[] = {5, 6}, outb2[] = {7, 8};
        double diag[] = {2.0, 3.0};
        AstWinMap *w1 = astWinMap(2, ina, inb, outa1, outb1, " ");
        AstMatrixMap *mm = astMatrixMap(2, 2, 1, diag, " ");
        AstWinMap *w2 = astWinMap(2, ina, inb, outa2, outb2, " ");
        AstCmpMap *inner = astCmpMap(mm, w2, 1, " ");
        AstCmpMap *outer = astCmpMap(w1, inner, 1, " ");
        write_fixture(dir, "win_swap_past_matrix", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        w1 = astAnnul(w1); mm = astAnnul(mm); w2 = astAnnul(w2);
    }

    /* winmap-20: WinMap swaps past WcsMap to reach merge target */
    {
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa1[] = {0, 0}, outb1[] = {1, 1};
        double outa2[] = {0, 0}, outb2[] = {1, 1};
        AstWinMap *w1 = astWinMap(2, ina, inb, outa1, outb1, " ");
        AstWcsMap *wcs = astWcsMap(2, AST__TAN, 1, 2, " ");
        AstWinMap *w2 = astWinMap(2, ina, inb, outa2, outb2, " ");
        AstCmpMap *inner = astCmpMap(wcs, w2, 1, " ");
        AstCmpMap *outer = astCmpMap(w1, inner, 1, " ");
        write_fixture(dir, "win_swap_past_wcsmap", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        w1 = astAnnul(w1); wcs = astAnnul(wcs); w2 = astAnnul(w2);
    }
}

/* ===== SelectorMap fixtures ===== */

static void gen_selectormap_fixtures(const char *dir) {
    printf("SelectorMap fixtures:\n");

    /* selectormap-05: SelectorMap + Inverse(SelectorMap) cancel to UnitMap */
    {
        AstFrame *f = astFrame(2, " ");
        double lbnd[] = {0.0, 0.0};
        double ubnd[] = {10.0, 10.0};
        AstBox *box = astBox(f, 1, lbnd, ubnd, NULL, " ");
        AstMapping *regs[] = {(AstMapping*)box};
        AstSelectorMap *s1 = astSelectorMap(1, (void**)regs, AST__BAD, " ");
        AstSelectorMap *s2 = astSelectorMap(1, (void**)regs, AST__BAD, " ");
        astInvert(s2);
        AstCmpMap *cm = astCmpMap(s1, s2, 1, " ");
        write_fixture(dir, "selectormap_inverse_cancel", (AstMapping*)cm);
        cm = astAnnul(cm); s1 = astAnnul(s1); s2 = astAnnul(s2);
        box = astAnnul(box); f = astAnnul(f);
    }
}

/* ===== DssMap fixtures ===== */

static void gen_dssmap_fixtures(const char *dir) {
    printf("DssMap fixtures:\n");

    /* dssmap-07: non-inverted DssMap absorbs preceding WinMap.
       Read DSS headers from dss.fits-dss to create a FrameSet, extract
       the Mapping (which contains a DssMap), then compose with a WinMap. */
    {
        FILE *fp = fopen(
            "ast_tester/fixtures/wcsconv/inputs/dss.fits-dss", "r");
        if (fp) {
            char line[256];
            AstFitsChan *fc = astFitsChan(NULL, NULL, "Encoding=DSS");
            while (fgets(line, sizeof(line), fp)) {
                size_t len = strlen(line);
                if (len > 0 && line[len-1] == '\n') line[len-1] = '\0';
                astPutFits(fc, line, 0);
            }
            fclose(fp);
            astClear(fc, "Card");
            AstFrameSet *fs = (AstFrameSet *)astRead(fc);
            if (fs && astIsAFrameSet(fs)) {
                AstMapping *map = astGetMapping(fs, AST__BASE, AST__CURRENT);
                /* Use unsimplified map — it should contain a DssMap. */
                double ina[] = {0, 0}, inb[] = {1, 1};
                double outa[] = {1, 1}, outb[] = {2, 2};
                AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
                AstCmpMap *cm = astCmpMap(wm, map, 1, " ");
                write_fixture(dir, "dss_winmap_absorb", (AstMapping*)cm);
                cm = astAnnul(cm); wm = astAnnul(wm);
                map = astAnnul(map);
                fs = astAnnul(fs);
            } else {
                fprintf(stderr, "WARNING: Could not read DSS FrameSet\n");
            }
            fc = astAnnul(fc);
        } else {
            fprintf(stderr, "WARNING: Could not open ast_tester/dss.fits-dss\n");
        }
    }
}

/* ===== Negative (guard-rejection) fixtures ===== */
/* These test that astSimplify does NOT structurally change the input.
   Only the .map file is generated; the test uses the same file as both
   input and reference with skip_string_compare=yes (astequal only). */

static void write_negative_fixture(const char *dir, const char *name, AstMapping *map) {
    char path_map[512];
    AstChannel *chan;
    extern int *astGetStatusPtr_( void );

    if (!astOK) astClearStatus;

    snprintf(path_map, sizeof(path_map), "%s/%s.map", dir, name);

    chan = astChannel(NULL, NULL, "SinkFile=%s", path_map);
    if (astWrite(chan, map) != 1) {
        fprintf(stderr, "ERROR: astWrite failed for %s.map\n", name);
    }
    chan = astAnnul(chan);
    printf("  %s\n", name);
}

/* The public astMapRegion simplifies the Region it returns (region.c:14024),
   which would leave the .map file holding the already-simplified Region. The
   protected astMapRegion_ does not simplify, so Region fixtures whose subject
   is the base->current Mapping call it directly. It returns a true Object
   pointer rather than an identifier, so the writers below use the protected
   astWrite_ and astSimplify_ too. */
extern void *astMapRegion_(void *, void *, void *, int *);
extern int *astGetStatusPtr_(void);

static void *map_region_unsimplified(void *region, void *map, void *frame) {
    return astMapRegion_(astMakePointer(region), astMakePointer(map),
                         astMakePointer(frame), astGetStatusPtr_());
}

static void write_object(const char *path, void *obj, const char *name) {
    AstChannel *chan = astChannel(NULL, NULL, "SinkFile=%s", path);
    if (astWrite_((AstChannel *) astMakePointer(chan), (AstObject *) obj,
                  astGetStatusPtr_()) != 1) {
        fprintf(stderr, "ERROR: astWrite failed for %s\n", name);
    }
    chan = astAnnul(chan);
}

static void write_region_fixture(const char *dir, const char *name, void *reg) {
    char path[512];
    void *simp;

    snprintf(path, sizeof(path), "%s/%s.map", dir, name);
    write_object(path, reg, name);

    simp = astSimplify_((AstMapping *) reg, astGetStatusPtr_());
    snprintf(path, sizeof(path), "%s/%s.simp", dir, name);
    write_object(path, simp, name);

    printf("  %s\n", name);
}

static void write_negative_region_fixture(const char *dir, const char *name,
                                          void *reg) {
    char path[512];

    if (!astOK) astClearStatus;
    snprintf(path, sizeof(path), "%s/%s.map", dir, name);
    write_object(path, reg, name);
    printf("  %s\n", name);
}

static void gen_negative_fixtures(const char *dir) {
    if (!astOK) astClearStatus;
    printf("Negative (guard-rejection) fixtures:\n");

    /* matrixmap-04: diagonal MatrixMap with unequal elements — can't become ZoomMap */
    {
        double diag[] = {2.0, 3.0};
        AstMatrixMap *mm = astMatrixMap(2, 2, 1, diag, " ");
        write_negative_fixture(dir, "neg_matrix_diag_unequal", (AstMapping*)mm);
        mm = astAnnul(mm);
    }

    /* matrixmap-06: full MatrixMap with non-zero off-diagonal — stays full */
    {
        double mat[] = {1.0, 2.0, 3.0, 4.0};
        AstMatrixMap *mm = astMatrixMap(2, 2, 0, mat, " ");
        write_negative_fixture(dir, "neg_matrix_full_offdiag", (AstMapping*)mm);
        mm = astAnnul(mm);
    }

    /* matrixmap-17: full MatrixMap in parallel — no merge attempted */
    {
        double mat[] = {1.0, 2.0, 3.0, 4.0};
        AstMatrixMap *mm = astMatrixMap(2, 2, 0, mat, " ");
        AstZoomMap *zm = astZoomMap(1, 5.0, " ");
        AstCmpMap *cm = astCmpMap(mm, zm, 0, " ");
        write_negative_fixture(dir, "neg_matrix_parallel_no_merge", (AstMapping*)cm);
        cm = astAnnul(cm); mm = astAnnul(mm); zm = astAnnul(zm);
    }

    /* winmap-13: WinMap with non-mergeable neighbour in series.
       Use a MathMap (not directly mergeable with WinMap) with matching dims. */
    {
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {4, 6};
        const char *fwd[] = {"y1 = x1", "y2 = x2"};
        const char *inv[] = {"x1 = y1", "x2 = y2"};
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstMathMap *mm = astMathMap(2, 2, 2, fwd, 2, inv, " ");
        AstCmpMap *cm = astCmpMap(wm, mm, 1, " ");
        write_negative_fixture(dir, "neg_win_nonmergeable_series", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); mm = astAnnul(mm);
    }

    /* winmap-38: WinMap with non-mergeable neighbour in parallel */
    {
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {4, 6};
        double mat[] = {1.0, 2.0, 3.0, 4.0};
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstMatrixMap *mm = astMatrixMap(2, 2, 0, mat, " ");
        AstCmpMap *cm = astCmpMap(wm, mm, 0, " ");
        write_negative_fixture(dir, "neg_win_nonmergeable_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); mm = astAnnul(mm);
    }

    /* polymap-05: non-linear PolyMap — linearization refused */
    {
        double coeff_f[] = {2.0, 1, 2, 0,
                            3.0, 1, 0, 1};
        int ncoeff_f = 2;
        AstPolyMap *pm = astPolyMap(2, 1, ncoeff_f, coeff_f, 0, NULL, " ");
        write_negative_fixture(dir, "neg_poly_nonlinear", (AstMapping*)pm);
        pm = astAnnul(pm);
    }

    /* polymap-09: two forward non-linear PolyMaps in series — same direction refuses */
    {
        double coeff_f[] = {1.0, 1, 2};
        AstPolyMap *p1 = astPolyMap(1, 1, 1, coeff_f, 0, NULL, " ");
        AstPolyMap *p2 = astPolyMap(1, 1, 1, coeff_f, 0, NULL, " ");
        AstCmpMap *cm = astCmpMap(p1, p2, 1, " ");
        write_negative_fixture(dir, "neg_poly_same_direction", (AstMapping*)cm);
        cm = astAnnul(cm); p1 = astAnnul(p1); p2 = astAnnul(p2);
    }

    /* mathmap-05: MathMap pair without SimpFI — refuses cancellation */
    {
        const char *fwd[] = {"y = x"};
        const char *inv[] = {"x = y"};
        AstMathMap *m1 = astMathMap(1, 1, 1, fwd, 1, inv, "SimpFI=0,SimpIF=0");
        AstMathMap *m2 = astMathMap(1, 1, 1, fwd, 1, inv, "SimpFI=0,SimpIF=0");
        astInvert(m2);
        AstCmpMap *cm = astCmpMap(m1, m2, 1, " ");
        write_negative_fixture(dir, "neg_math_no_simpfi", (AstMapping*)cm);
        cm = astAnnul(cm); m1 = astAnnul(m1); m2 = astAnnul(m2);
    }

    /* slamap-20: 1-arg pair with mismatched argument — prevents cancel */
    {
        double args1[] = {1950.0};
        double args2[] = {2000.0};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "ADDET", 1, args1);
        astSlaAdd(sm, "SUBET", 1, args2);
        write_negative_fixture(dir, "neg_sla_arg_mismatch", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* specmap-13: 1-arg pair with mismatched argument */
    {
        double rf1[] = {1.4e9, 0.0};
        double rf2[] = {2.0e9, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        astSpecAdd(sm, "FRTOVL", 1, rf1);
        astSpecAdd(sm, "VLTOFR", 1, rf2);
        write_negative_fixture(dir, "neg_spec_arg_mismatch", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* timemap-13: 1-arg pair with mismatched argument */
    {
        double dut1[] = {0.5, 0.0};
        double dut2[] = {0.3, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "TAITOTT", 1, dut1);
        astTimeAdd(tm, "TTTOTAI", 1, dut2);
        write_negative_fixture(dir, "neg_time_arg_mismatch", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* sphmap-07: SphMap followed by non-SphMap — refuses simplification.
       SphMap forward is 3in→2out (Cartesian to spherical). Follow with ZoomMap(2). */
    {
        if (!astOK) astClearStatus;
        AstSphMap *sm = astSphMap("UnitRadius=1");
        AstZoomMap *zm = astZoomMap(2, 2.0, " ");
        AstCmpMap *cm = astCmpMap(sm, zm, 1, " ");
        write_negative_fixture(dir, "neg_sph_non_sphmap_neighbour", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); zm = astAnnul(zm);
    }

    /* grismmap-08: two GrismMaps same direction — refuses cancel */
    {
        if (!astOK) astClearStatus;
        AstGrismMap *g1 = astGrismMap(" ");
        AstGrismMap *g2 = astGrismMap(" ");
        AstCmpMap *cm = astCmpMap(g1, g2, 1, " ");
        write_negative_fixture(dir, "neg_grism_same_direction", (AstMapping*)cm);
        cm = astAnnul(cm); g1 = astAnnul(g1); g2 = astAnnul(g2);
    }

    /* wcsmap-08: two WcsMaps same direction — refuses cancel */
    {
        if (!astOK) astClearStatus;
        AstWcsMap *w1 = astWcsMap(2, AST__TAN, 1, 2, " ");
        AstWcsMap *w2 = astWcsMap(2, AST__TAN, 1, 2, " ");
        AstCmpMap *cm = astCmpMap(w1, w2, 1, " ");
        write_negative_fixture(dir, "neg_wcs_same_direction", (AstMapping*)cm);
        cm = astAnnul(cm); w1 = astAnnul(w1); w2 = astAnnul(w2);
    }

    /* slamap-25: adjacent precession with non-common equinox */
    {
        double args1[] = {1950.0, 1975.0};
        double args2[] = {2000.0, 2025.0};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "PREC", 2, args1);
        astSlaAdd(sm, "PREC", 2, args2);
        write_negative_fixture(dir, "neg_sla_prec_no_common", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* unitnormmap-03: WinMap(non-unit scale) + UnitNormMap — refuses merge.
       The WinMap needs a non-zero shift as well as its non-unit scales: a
       pure-scale WinMap self-simplifies to a MatrixMap before the UnitNormMap
       merge is ever attempted, which would leave the fixture simplified for an
       unrelated reason. The unit-scale form of this shape does merge (the
       shift folds into the UnitNormMap centre), so the merge path is reached
       and the non-unit scale is what refuses it. */
    {
        double centre[] = {1.0, 2.0};
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {3, 5};
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstUnitNormMap *unm = astUnitNormMap(2, centre, " ");
        AstCmpMap *cm = astCmpMap(wm, unm, 1, " ");
        write_negative_fixture(dir, "neg_unitnormmap_nonunit_scale", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); unm = astAnnul(unm);
    }
}

/* ===== Negative fixtures batch 2 ===== */

static void gen_negative_fixtures_2(const char *dir) {
    if (!astOK) astClearStatus;
    printf("Negative fixtures batch 2:\n");

    /* zoommap-15: ZoomMap can't be absorbed — neighbours not MatrixMap/WinMap/ShiftMap.
       SphMap(forward) is 3in→2out, so pair with ZoomMap(2) for valid dims. */
    {
        if (!astOK) astClearStatus;
        AstSphMap *sm = astSphMap("UnitRadius=1");
        AstZoomMap *zm = astZoomMap(2, 2.0, " ");
        AstCmpMap *cm = astCmpMap(sm, zm, 1, " ");
        write_negative_fixture(dir, "neg_zoom_no_absorb", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); zm = astAnnul(zm);
    }

    /* lutmap-05: non-linear LutMap — WinMap replacement refused */
    {
        if (!astOK) astClearStatus;
        double lut[] = {0.0, 1.0, 4.0, 9.0, 16.0};
        AstLutMap *lm = astLutMap(5, lut, 1.0, 1.0, " ");
        write_negative_fixture(dir, "neg_lut_nonlinear", (AstMapping*)lm);
        lm = astAnnul(lm);
    }

    /* lutmap-09: neighbouring LutMap not inverse-equal (different tables) */
    {
        if (!astOK) astClearStatus;
        double lut1[] = {0.0, 1.0, 4.0, 9.0, 16.0};
        double lut2[] = {0.0, 2.0, 6.0, 12.0, 20.0};
        AstLutMap *l1 = astLutMap(5, lut1, 1.0, 1.0, " ");
        AstLutMap *l2 = astLutMap(5, lut2, 1.0, 1.0, " ");
        astInvert(l2);
        AstCmpMap *cm = astCmpMap(l1, l2, 1, " ");
        write_negative_fixture(dir, "neg_lut_different_tables", (AstMapping*)cm);
        cm = astAnnul(cm); l1 = astAnnul(l1); l2 = astAnnul(l2);
    }

    /* pcdmap-08: two PcdMaps in parallel — refuses simplification */
    {
        if (!astOK) astClearStatus;
        double cen[] = {0.0, 0.0};
        AstPcdMap *p1 = astPcdMap(0.001, cen, " ");
        AstPcdMap *p2 = astPcdMap(0.002, cen, " ");
        AstCmpMap *cm = astCmpMap(p1, p2, 0, " ");
        write_negative_fixture(dir, "neg_pcd_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); p1 = astAnnul(p1); p2 = astAnnul(p2);
    }

    /* pcdmap-09: PcdMap + non-PcdMap neighbour in series — refuses merge */
    {
        if (!astOK) astClearStatus;
        double cen[] = {0.0, 0.0};
        double shifts[] = {1.0, 2.0};
        AstPcdMap *pm = astPcdMap(0.001, cen, " ");
        AstShiftMap *sm = astShiftMap(2, shifts, " ");
        AstCmpMap *cm = astCmpMap(pm, sm, 1, " ");
        write_negative_fixture(dir, "neg_pcd_nonpcd_neighbour", (AstMapping*)cm);
        cm = astAnnul(cm); pm = astAnnul(pm); sm = astAnnul(sm);
    }

    /* cmpmap-04: series CmpMap in parallel list — mode mismatch refuses
       decomposition. Every component is a MathMap, which merges with nothing,
       so neither the inner series pair nor the outer parallel pair can reduce
       on its own; the only thing on offer is the decomposition the mode
       mismatch refuses. ZoomMap components would fuse and hide it.

       The expressions stay within range over the oracle's +/-1000 sampling
       interval. MathMap turns an overflow into AST__BAD only when libm sets
       errno to ERANGE (mathmap.c:2172), which glibc does and Apple's libm does
       not, so an expression that overflows records as AST__BAD on one platform
       and as an infinity on the other and no tolerance can bridge the two. */
    {
        if (!astOK) astClearStatus;
        const char *f1[] = {"y=x*x+1"}; const char *i1[] = {"x=sqrt(y-1)"};
        const char *f2[] = {"y=3*x+2"}; const char *i2[] = {"x=(y-2)/3"};
        const char *f3[] = {"y=atan(x)"}; const char *i3[] = {"x=tan(y)"};
        AstMathMap *m1 = astMathMap(1, 1, 1, f1, 1, i1, " ");
        AstMathMap *m2 = astMathMap(1, 1, 1, f2, 1, i2, " ");
        AstMathMap *m3 = astMathMap(1, 1, 1, f3, 1, i3, " ");
        AstCmpMap *series_inner = astCmpMap(m1, m2, 1, " ");
        AstCmpMap *par = astCmpMap(series_inner, m3, 0, " ");
        write_negative_fixture(dir, "neg_cmpmap_mode_mismatch", (AstMapping*)par);
        par = astAnnul(par); series_inner = astAnnul(series_inner);
        m1 = astAnnul(m1); m2 = astAnnul(m2); m3 = astAnnul(m3);
    }

    /* wcsmap-07: WcsMap adjacent to different projection type — refuses merge */
    {
        if (!astOK) astClearStatus;
        AstWcsMap *w1 = astWcsMap(2, AST__TAN, 1, 2, " ");
        AstWcsMap *w2 = astWcsMap(2, AST__SIN, 1, 2, " ");
        astInvert(w2);
        AstCmpMap *cm = astCmpMap(w1, w2, 1, " ");
        write_negative_fixture(dir, "neg_wcs_different_projection", (AstMapping*)cm);
        cm = astAnnul(cm); w1 = astAnnul(w1); w2 = astAnnul(w2);
    }

    /* tranmap-07: TranMap with unequal components — not simplified */
    {
        if (!astOK) astClearStatus;
        AstZoomMap *z1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(1, 3.0, " ");
        AstTranMap *tm = astTranMap(z1, z2, " ");
        write_negative_fixture(dir, "neg_tranmap_unequal_components", (AstMapping*)tm);
        tm = astAnnul(tm); z1 = astAnnul(z1); z2 = astAnnul(z2);
    }

    /* splinemap-06: two SplineMaps same direction — refuses cancel */
    {
        if (!astOK) astClearStatus;
        double tx[] = {0, 1}, ty[] = {0, 1};
        double cu[] = {1.5}, cv[] = {2.5};
        AstSplineMap *s1 = astSplineMap(1, 1, 1, 1, tx, ty, cu, cv, " ");
        AstSplineMap *s2 = astSplineMap(1, 1, 1, 1, tx, ty, cu, cv, " ");
        AstCmpMap *cm = astCmpMap(s1, s2, 1, " ");
        write_negative_fixture(dir, "neg_spline_same_direction", (AstMapping*)cm);
        cm = astAnnul(cm); s1 = astAnnul(s1); s2 = astAnnul(s2);
    }

    /* normmap-11: NormMap in parallel — no simplification */
    {
        if (!astOK) astClearStatus;
        AstSkyFrame *sf = astSkyFrame(" ");
        AstNormMap *nm = astNormMap(sf, " ");
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(nm, zm, 0, " ");
        write_negative_fixture(dir, "neg_normmap_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); nm = astAnnul(nm); zm = astAnnul(zm);
        sf = astAnnul(sf);
    }

    /* permmap-08: lone canonical PermMap with no mergeable neighbours */
    {
        if (!astOK) astClearStatus;
        int inperm[] = {2, 1};
        int outperm[] = {2, 1};
        const char *fwd[] = {"y1 = x1", "y2 = x2"};
        const char *inv[] = {"x1 = y1", "x2 = y2"};
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, NULL, " ");
        AstMathMap *mm = astMathMap(2, 2, 2, fwd, 2, inv, " ");
        AstCmpMap *cm = astCmpMap(pm, mm, 1, " ");
        write_negative_fixture(dir, "neg_perm_no_merge", (AstMapping*)cm);
        cm = astAnnul(cm); pm = astAnnul(pm); mm = astAnnul(mm);
    }
}

/* ===== Negative fixtures batch 3 ===== */

static void gen_negative_fixtures_3(const char *dir) {
    if (!astOK) astClearStatus;
    printf("Negative fixtures batch 3:\n");

    /* winmap-17: WinMap next to a parallel CmpMap whose split does not
       simplify. WinMap converts itself into a parallel CmpMap, composes each
       half with the neighbour's corresponding component in series, and keeps
       the result only if one of those compositions simplifies
       (winmap.c:1362-1375). Both components here are series MathMap pairs
       that merge with nothing and that a WinMap cannot absorb, so neither
       composition reduces and the merge is refused.

       This is not winmap-16: a *series* CmpMap neighbour is flattened out of
       a series list by astMapList before the WinMap is ever nominated, so the
       neighbour the WinMap sees is never a series CmpMap. */
    {
        if (!astOK) astClearStatus;
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {4, 6};
        const char *f1[] = {"y=x*x+1"}; const char *i1[] = {"x=sqrt(y-1)"};
        const char *f2[] = {"y=3*x+2"}; const char *i2[] = {"x=(y-2)/3"};
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstMathMap *m1 = astMathMap(1, 1, 1, f1, 1, i1, " ");
        AstMathMap *m2 = astMathMap(1, 1, 1, f2, 1, i2, " ");
        AstCmpMap *series = astCmpMap(m1, m2, 1, " ");
        AstCmpMap *par = astCmpMap(series, series, 0, " ");
        AstCmpMap *cm = astCmpMap(par, wm, 1, " ");
        write_negative_fixture(dir, "neg_win_cmpmap_split_no_simplify",
                               (AstMapping*)cm);
        cm = astAnnul(cm); par = astAnnul(par); series = astAnnul(series);
        wm = astAnnul(wm); m1 = astAnnul(m1); m2 = astAnnul(m2);
    }

    /* winmap-28: WinMap swap refused — neither swapped Mapping simplifies */
    {
        if (!astOK) astClearStatus;
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {4, 6};
        double mat[] = {1.0, 2.0, 3.0, 4.0};
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstMatrixMap *mm = astMatrixMap(2, 2, 0, mat, " ");
        AstCmpMap *cm = astCmpMap(wm, mm, 1, " ");
        write_negative_fixture(dir, "neg_win_swap_no_simplify", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); mm = astAnnul(mm);
    }

    /* matrixmap-10: PermMap not bidirectional — direct merge blocked */
    {
        if (!astOK) astClearStatus;
        double diag[] = {2.0, 3.0};
        int inperm[] = {1, -1};
        int outperm[] = {1, -1};
        double consts[] = {5.0, 7.0};
        AstMatrixMap *mm = astMatrixMap(2, 2, 1, diag, " ");
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, consts, " ");
        AstCmpMap *cm = astCmpMap(mm, pm, 1, " ");
        write_negative_fixture(dir, "neg_matrix_perm_not_bidirectional", (AstMapping*)cm);
        cm = astAnnul(cm); mm = astAnnul(mm); pm = astAnnul(pm);
    }

    /* ratemap-09: RateMap where upper neighbour is not a RateMap */
    {
        if (!astOK) astClearStatus;
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstRateMap *rm = astRateMap(zm, 1, 1, " ");
        AstZoomMap *z2 = astZoomMap(1, 3.0, " ");
        AstCmpMap *cm = astCmpMap(rm, z2, 1, " ");
        write_negative_fixture(dir, "neg_ratemap_nonratemap_neighbour", (AstMapping*)cm);
        cm = astAnnul(cm); rm = astAnnul(rm); z2 = astAnnul(z2);
        zm = astAnnul(zm);
    }

    /* ratemap-08: RateMaps with different encapsulated Mappings */
    {
        if (!astOK) astClearStatus;
        AstZoomMap *z1 = astZoomMap(2, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 3.0, " ");
        AstRateMap *r1 = astRateMap(z1, 1, 1, " ");
        AstRateMap *r2 = astRateMap(z2, 1, 1, " ");
        astInvert(r2);
        AstCmpMap *cm = astCmpMap(r1, r2, 1, " ");
        write_negative_fixture(dir, "neg_ratemap_different_inner", (AstMapping*)cm);
        cm = astAnnul(cm); r1 = astAnnul(r1); r2 = astAnnul(r2);
        z1 = astAnnul(z1); z2 = astAnnul(z2);
    }


    /* sphmap-03: Inverse(SphMap) + SphMap but PolarLong differs */
    {
        if (!astOK) astClearStatus;
        AstSphMap *s1 = astSphMap("PolarLong=0");
        astInvert(s1);
        AstSphMap *s2 = astSphMap("PolarLong=3.14159");
        AstCmpMap *cm = astCmpMap(s1, s2, 1, " ");
        write_negative_fixture(dir, "neg_sph_polarlong_mismatch", (AstMapping*)cm);
        cm = astAnnul(cm); s1 = astAnnul(s1); s2 = astAnnul(s2);
    }

    /* sphmap-04: SphMap(fwd) + Inverse(SphMap) but UnitRadius not set */
    {
        if (!astOK) astClearStatus;
        AstSphMap *s1 = astSphMap(" ");
        AstSphMap *s2 = astSphMap(" ");
        astInvert(s2);
        AstCmpMap *cm = astCmpMap(s1, s2, 1, " ");
        write_negative_fixture(dir, "neg_sph_no_unitradius", (AstMapping*)cm);
        cm = astAnnul(cm); s1 = astAnnul(s1); s2 = astAnnul(s2);
    }

    /* polymap-10: two different PolyMaps in opposite directions — astEqual
       fails. Both need a second-order term: a lone first-power term makes the
       PolyMap linear, so each self-simplifies to a ZoomMap and the pair fuses
       before the inverse-cancel comparison is reached. With the square term
       the identical-coefficient form of this shape cancels to a UnitMap, so
       the comparison is reached and the differing coefficients refuse it. */
    {
        if (!astOK) astClearStatus;
        double coeff_f1[] = {2.0, 1, 1,  1.0, 1, 2};
        double coeff_f2[] = {3.0, 1, 1,  1.0, 1, 2};
        AstPolyMap *p1 = astPolyMap(1, 1, 2, coeff_f1, 0, NULL, " ");
        AstPolyMap *p2 = astPolyMap(1, 1, 2, coeff_f2, 0, NULL, " ");
        astInvert(p2);
        AstCmpMap *cm = astCmpMap(p1, p2, 1, " ");
        write_negative_fixture(dir, "neg_poly_different_coeffs", (AstMapping*)cm);
        cm = astAnnul(cm); p1 = astAnnul(p1); p2 = astAnnul(p2);
    }

    /* lutmap-07: two LutMaps in parallel — cancellation not attempted */
    {
        if (!astOK) astClearStatus;
        double lut[] = {0.0, 1.0, 4.0, 9.0, 16.0};
        AstLutMap *l1 = astLutMap(5, lut, 1.0, 1.0, " ");
        AstLutMap *l2 = astLutMap(5, lut, 1.0, 1.0, " ");
        AstCmpMap *cm = astCmpMap(l1, l2, 0, " ");
        write_negative_fixture(dir, "neg_lut_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); l1 = astAnnul(l1); l2 = astAnnul(l2);
    }
}

/* ===== Negative fixtures batch 4 ===== */

static void gen_negative_fixtures_4(const char *dir) {
    if (!astOK) astClearStatus;
    printf("Negative fixtures batch 4:\n");

    /* slamap-21: 2-arg pair with mismatched arguments (AMP+MAP) */
    {
        if (!astOK) astClearStatus;
        double amp_args[] = {51544.0, 2000.0};
        double map_args[] = {2001.0, 51544.0};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "AMP", 2, amp_args);
        astSlaAdd(sm, "MAP", 2, map_args);
        write_negative_fixture(dir, "neg_sla_2arg_mismatch", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* specmap-14: 2-arg pair with mismatched arguments */
    {
        if (!astOK) astClearStatus;
        double args1[] = {0.5, 1.2, 0.0, 0.0};
        double args2[] = {0.5, 1.3, 0.0, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        astSpecAdd(sm, "LKF2HL", 2, args1);
        astSpecAdd(sm, "HLF2LK", 2, args2);
        write_negative_fixture(dir, "neg_spec_2arg_mismatch", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* specmap-15: 3-arg pair with mismatched arguments */
    {
        if (!astOK) astClearStatus;
        double args1[] = {0.5, 1.2, 51544.0, 0.0, 0.0};
        double args2[] = {0.5, 1.2, 51545.0, 0.0, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        astSpecAdd(sm, "GEF2HL", 3, args1);
        astSpecAdd(sm, "HLF2GE", 3, args2);
        write_negative_fixture(dir, "neg_spec_3arg_mismatch", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* timemap-14: 2-arg swapped pair with mismatched arguments. The pair
       cancels only when the two arguments are swapped copies of each other
       (timemap.c:2301), which 1,0 against 0,2 is not. Both steps must also
       avoid being no-ops in their own right, since the earlier
       zero-combined-offset rule (timemap.c:2261) would drop one and leave the
       fixture simplified for an unrelated reason: MJDTOJD derives
       a - b + 2400000.5 and JDTOMJD derives a - b - 2400000.5, so these
       arguments give 2400001.5 and -2400002.5, neither of them zero. */
    {
        if (!astOK) astClearStatus;
        double args1[] = {1.0, 0.0, 0.0};
        double args2[] = {0.0, 2.0, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "MJDTOJD", 2, args1);
        astTimeAdd(tm, "JDTOMJD", 2, args2);
        write_negative_fixture(dir, "neg_time_2arg_mismatch", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* timemap-15: 3-arg pair with mismatched arguments */
    {
        if (!astOK) astClearStatus;
        double args1[] = {-2.5, 1000.0, 1013.0, 0.0};
        double args2[] = {-2.6, 1000.0, 1013.0, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "GMSTTOLMST", 3, args1);
        astTimeAdd(tm, "LMSTTOGMST", 3, args2);
        write_negative_fixture(dir, "neg_time_3arg_mismatch", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* grismmap-06: two GrismMaps with different attributes */
    {
        if (!astOK) astClearStatus;
        AstGrismMap *g1 = astGrismMap("GrismNR=1.0");
        AstGrismMap *g2 = astGrismMap("GrismNR=1.5");
        astInvert(g2);
        AstCmpMap *cm = astCmpMap(g1, g2, 1, " ");
        write_negative_fixture(dir, "neg_grism_different_attrs", (AstMapping*)cm);
        cm = astAnnul(cm); g1 = astAnnul(g1); g2 = astAnnul(g2);
    }

    /* normmap-07: inverse NormMap pair with different Frames */
    {
        if (!astOK) astClearStatus;
        AstSkyFrame *sf1 = astSkyFrame("System=FK5");
        AstSkyFrame *sf2 = astSkyFrame("System=FK4");
        AstNormMap *n1 = astNormMap(sf1, " ");
        AstNormMap *n2 = astNormMap(sf2, " ");
        astInvert(n1);
        AstCmpMap *cm = astCmpMap(n1, n2, 1, " ");
        write_negative_fixture(dir, "neg_normmap_different_frames", (AstMapping*)cm);
        cm = astAnnul(cm); n1 = astAnnul(n1); n2 = astAnnul(n2);
        sf1 = astAnnul(sf1); sf2 = astAnnul(sf2);
    }

    /* unitnormmap-15: two forward UnitNormMaps — same direction refuses */
    {
        if (!astOK) astClearStatus;
        double c1[] = {1.0, 2.0};
        double c2[] = {3.0, 4.0};
        AstUnitNormMap *u1 = astUnitNormMap(2, c1, " ");
        AstUnitNormMap *u2 = astUnitNormMap(2, c2, " ");
        AstCmpMap *cm = astCmpMap(u1, u2, 1, " ");
        write_negative_fixture(dir, "neg_unitnormmap_same_direction", (AstMapping*)cm);
        cm = astAnnul(cm); u1 = astAnnul(u1); u2 = astAnnul(u2);
    }

    /* unitnormmap-13: forward UnitNormMap + ShiftMap — wrong order refuses */
    {
        if (!astOK) astClearStatus;
        double centre[] = {1.0, 2.0};
        double shifts[] = {0.5, 0.5};
        AstUnitNormMap *unm = astUnitNormMap(2, centre, " ");
        AstShiftMap *sm = astShiftMap(2, shifts, " ");
        AstCmpMap *cm = astCmpMap(unm, sm, 1, " ");
        write_negative_fixture(dir, "neg_unitnormmap_fwd_then_shift", (AstMapping*)cm);
        cm = astAnnul(cm); unm = astAnnul(unm); sm = astAnnul(sm);
    }

    /* wcsmap-10: two WcsMaps with different projection parameters */
    {
        if (!astOK) astClearStatus;
        AstWcsMap *w1 = astWcsMap(2, AST__TAN, 1, 2, "PV1_1=0.5");
        AstWcsMap *w2 = astWcsMap(2, AST__TAN, 1, 2, "PV1_1=1.0");
        astInvert(w2);
        AstCmpMap *cm = astCmpMap(w1, w2, 1, " ");
        write_negative_fixture(dir, "neg_wcs_different_params", (AstMapping*)cm);
        cm = astAnnul(cm); w1 = astAnnul(w1); w2 = astAnnul(w2);
    }

    /* slamap-06: single forward SlaMap with no neighbours — nothing simplifies */
    {
        if (!astOK) astClearStatus;
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "EQGAL", 0, NULL);
        write_negative_fixture(dir, "neg_sla_lone_forward", (AstMapping*)sm);
        sm = astAnnul(sm);
    }
}

/* ===== Negative fixtures batch 5 ===== */

static void gen_negative_fixtures_5(const char *dir) {
    if (!astOK) astClearStatus;
    printf("Negative fixtures batch 5:\n");

    /* slamap-05: SlaMap in parallel — refuses simplification */
    {
        if (!astOK) astClearStatus;
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "EQGAL", 0, NULL);
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(sm, zm, 0, " ");
        write_negative_fixture(dir, "neg_sla_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); zm = astAnnul(zm);
    }

    /* specmap-05: SpecMap in parallel — refuses simplification */
    {
        if (!astOK) astClearStatus;
        double rf[] = {1.4e9, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        astSpecAdd(sm, "FRTOVL", 1, rf);
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(sm, zm, 0, " ");
        write_negative_fixture(dir, "neg_spec_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); zm = astAnnul(zm);
    }

    /* timemap-05: TimeMap in parallel — refuses simplification */
    {
        if (!astOK) astClearStatus;
        double dut[] = {0.5, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "TAITOTT", 1, dut);
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(tm, zm, 0, " ");
        write_negative_fixture(dir, "neg_time_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); tm = astAnnul(tm); zm = astAnnul(zm);
    }

    /* grismmap-04: GrismMap in parallel — refuses */
    {
        if (!astOK) astClearStatus;
        AstGrismMap *gm = astGrismMap(" ");
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(gm, zm, 0, " ");
        write_negative_fixture(dir, "neg_grism_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); gm = astAnnul(gm); zm = astAnnul(zm);
    }

    /* grismmap-09: inverted GrismMap followed by ZoomMap — wrong order */
    {
        if (!astOK) astClearStatus;
        AstGrismMap *gm = astGrismMap(" ");
        astInvert(gm);
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(gm, zm, 1, " ");
        write_negative_fixture(dir, "neg_grism_inv_then_zoom", (AstMapping*)cm);
        cm = astAnnul(cm); gm = astAnnul(gm); zm = astAnnul(zm);
    }

    /* grismmap-10: forward GrismMap followed by non-ZoomMap */
    {
        if (!astOK) astClearStatus;
        AstGrismMap *gm = astGrismMap(" ");
        double shifts[] = {1.0};
        AstShiftMap *sm = astShiftMap(1, shifts, " ");
        AstCmpMap *cm = astCmpMap(gm, sm, 1, " ");
        write_negative_fixture(dir, "neg_grism_fwd_then_nonzoom", (AstMapping*)cm);
        cm = astAnnul(cm); gm = astAnnul(gm); sm = astAnnul(sm);
    }

    /* mathmap-04: MathMap followed by non-MathMap */
    {
        if (!astOK) astClearStatus;
        const char *fwd[] = {"y = x"};
        const char *inv[] = {"x = y"};
        AstMathMap *mm = astMathMap(1, 1, 1, fwd, 1, inv, "SimpFI=1");
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(mm, zm, 1, " ");
        write_negative_fixture(dir, "neg_math_nonmath_neighbour", (AstMapping*)cm);
        cm = astAnnul(cm); mm = astAnnul(mm); zm = astAnnul(zm);
    }

    /* wcsmap-06: WcsMap in parallel — refuses */
    {
        if (!astOK) astClearStatus;
        AstWcsMap *wm = astWcsMap(2, AST__TAN, 1, 2, " ");
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(wm, zm, 0, " ");
        write_negative_fixture(dir, "neg_wcs_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); zm = astAnnul(zm);
    }

    /* polymap-07: two non-linear PolyMaps in parallel — refuses cancel */
    {
        if (!astOK) astClearStatus;
        double coeff_f[] = {1.0, 1, 2};
        AstPolyMap *p1 = astPolyMap(1, 1, 1, coeff_f, 0, NULL, " ");
        AstPolyMap *p2 = astPolyMap(1, 1, 1, coeff_f, 0, NULL, " ");
        astInvert(p2);
        AstCmpMap *cm = astCmpMap(p1, p2, 0, " ");
        write_negative_fixture(dir, "neg_poly_parallel_nonlinear", (AstMapping*)cm);
        cm = astAnnul(cm); p1 = astAnnul(p1); p2 = astAnnul(p2);
    }

    /* splinemap-03: SplineMap in parallel — refuses */
    {
        if (!astOK) astClearStatus;
        double tx[] = {0, 1}, ty[] = {0, 1};
        double cu[] = {1.5}, cv[] = {2.5};
        AstSplineMap *sm = astSplineMap(1, 1, 1, 1, tx, ty, cu, cv, " ");
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(sm, zm, 0, " ");
        write_negative_fixture(dir, "neg_spline_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); zm = astAnnul(zm);
    }

    /* lutmap-08: LutMap with non-LutMap neighbour — refuses cancel */
    {
        if (!astOK) astClearStatus;
        double lut[] = {0.0, 1.0, 4.0, 9.0, 16.0};
        AstLutMap *lm = astLutMap(5, lut, 1.0, 1.0, " ");
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(lm, zm, 1, " ");
        write_negative_fixture(dir, "neg_lut_nonlut_neighbour", (AstMapping*)cm);
        cm = astAnnul(cm); lm = astAnnul(lm); zm = astAnnul(zm);
    }
}

/* ===== Negative fixtures batch 6 ===== */

static void gen_negative_fixtures_6(const char *dir) {
    if (!astOK) astClearStatus;
    printf("Negative fixtures batch 6:\n");

    /* specmap-06: lone forward SpecMap — nothing simplifies */
    {
        if (!astOK) astClearStatus;
        double rf[] = {1.4e9, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        astSpecAdd(sm, "FRTOVL", 1, rf);
        write_negative_fixture(dir, "neg_spec_lone_forward", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* timemap-06: lone forward TimeMap — nothing simplifies */
    {
        if (!astOK) astClearStatus;
        double dut[] = {0.5, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "TAITOTT", 1, dut);
        write_negative_fixture(dir, "neg_time_lone_forward", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* grismmap-13: GrismMap + ZoomMap(0) — zero zoom prevents merge */
    {
        if (!astOK) astClearStatus;
        AstGrismMap *gm = astGrismMap(" ");
        AstZoomMap *zm = astZoomMap(1, 0.0, " ");
        AstCmpMap *cm = astCmpMap(gm, zm, 1, " ");
        write_negative_fixture(dir, "neg_grism_zoom_zero", (AstMapping*)cm);
        cm = astAnnul(cm); gm = astAnnul(gm); zm = astAnnul(zm);
    }

    /* polymap-08: PolyMap neighbour is not PolyMap — refuses cancel */
    {
        if (!astOK) astClearStatus;
        double coeff_f[] = {1.0, 1, 2};
        AstPolyMap *pm = astPolyMap(1, 1, 1, coeff_f, 0, NULL, " ");
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(pm, zm, 1, " ");
        write_negative_fixture(dir, "neg_poly_nonpoly_neighbour", (AstMapping*)cm);
        cm = astAnnul(cm); pm = astAnnul(pm); zm = astAnnul(zm);
    }

    /* splinemap-05: SplineMap with non-SplineMap neighbour */
    {
        if (!astOK) astClearStatus;
        double tx[] = {0, 1}, ty[] = {0, 1};
        double cu[] = {1.5}, cv[] = {2.5};
        AstSplineMap *sm = astSplineMap(1, 1, 1, 1, tx, ty, cu, cv, " ");
        AstZoomMap *zm = astZoomMap(2, 2.0, " ");
        AstCmpMap *cm = astCmpMap(sm, zm, 1, " ");
        write_negative_fixture(dir, "neg_spline_nonspline_neighbour", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); zm = astAnnul(zm);
    }

    /* matrixmap-16: MatrixMap swap with WinMap refused (neither simplifies) —
       already covered by neg_win_swap_no_simplify from the WinMap side.
       Test from MatrixMap perspective with different structure. */
    {
        if (!astOK) astClearStatus;
        double mat[] = {1.0, 2.0, 3.0, 4.0};
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {3, 5};
        AstMatrixMap *mm = astMatrixMap(2, 2, 0, mat, " ");
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(mm, wm, 1, " ");
        write_negative_fixture(dir, "neg_matrix_swap_refused", (AstMapping*)cm);
        cm = astAnnul(cm); mm = astAnnul(mm); wm = astAnnul(wm);
    }
}

/* ===== Negative fixtures batch 7 ===== */

static void gen_negative_fixtures_7(const char *dir) {
    if (!astOK) astClearStatus;
    printf("Negative fixtures batch 7:\n");

    /* polymap-04: PolyMap with nin != nout — linearization refused.
       2 inputs, 1 output, linear terms — but nin(2)!=nout(1) blocks linearize. */
    {
        if (!astOK) astClearStatus;
        double coeff_f[] = {3.0, 1, 1, 0,
                            5.0, 1, 0, 1};
        AstPolyMap *pm = astPolyMap(2, 1, 2, coeff_f, 0, NULL, " ");
        write_negative_fixture(dir, "neg_poly_nin_ne_nout", (AstMapping*)pm);
        pm = astAnnul(pm);
    }

    /* tranmap-05: TranMaps in parallel — refuses adjacent merge */
    {
        if (!astOK) astClearStatus;
        AstZoomMap *z1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(1, 0.5, " ");
        AstZoomMap *z3 = astZoomMap(1, 3.0, " ");
        AstZoomMap *z4 = astZoomMap(1, 1.0/3.0, " ");
        AstTranMap *t1 = astTranMap(z1, z2, " ");
        AstTranMap *t2 = astTranMap(z3, z4, " ");
        AstCmpMap *cm = astCmpMap(t1, t2, 0, " ");
        write_negative_fixture(dir, "neg_tranmap_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); t1 = astAnnul(t1); t2 = astAnnul(t2);
        z1 = astAnnul(z1); z2 = astAnnul(z2);
        z3 = astAnnul(z3); z4 = astAnnul(z4);
    }

    /* tranmap-08: TranMap where higher neighbour is not a TranMap */
    {
        if (!astOK) astClearStatus;
        AstZoomMap *z1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(1, 0.5, " ");
        AstTranMap *tm = astTranMap(z1, z2, " ");
        AstZoomMap *z3 = astZoomMap(1, 5.0, " ");
        AstCmpMap *cm = astCmpMap(tm, z3, 1, " ");
        write_negative_fixture(dir, "neg_tranmap_nontranmap_neighbour", (AstMapping*)cm);
        cm = astAnnul(cm); tm = astAnnul(tm);
        z1 = astAnnul(z1); z2 = astAnnul(z2); z3 = astAnnul(z3);
    }

    /* sphmap-11: SphMap sandwich middle is not ZoomMap/diagonal MatrixMap */
    {
        if (!astOK) astClearStatus;
        double shifts[] = {1.0, 2.0, 3.0};
        AstSphMap *s1 = astSphMap("UnitRadius=1");
        astInvert(s1);
        AstShiftMap *sm = astShiftMap(3, shifts, " ");
        AstSphMap *s2 = astSphMap("UnitRadius=1");
        AstCmpMap *inner = astCmpMap(sm, s2, 1, " ");
        AstCmpMap *outer = astCmpMap(s1, inner, 1, " ");
        write_negative_fixture(dir, "neg_sph_sandwich_wrong_middle", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        s1 = astAnnul(s1); sm = astAnnul(sm); s2 = astAnnul(s2);
    }

    /* sphmap-14: SphMap sandwich MatrixMap with unequal magnitude diagonals */
    {
        if (!astOK) astClearStatus;
        double diag[] = {1.0, 2.0, 3.0};
        AstSphMap *s1 = astSphMap("UnitRadius=1");
        astInvert(s1);
        AstMatrixMap *mm = astMatrixMap(3, 3, 1, diag, " ");
        AstSphMap *s2 = astSphMap("UnitRadius=1");
        AstCmpMap *inner = astCmpMap(mm, s2, 1, " ");
        AstCmpMap *outer = astCmpMap(s1, inner, 1, " ");
        write_negative_fixture(dir, "neg_sph_sandwich_unequal_diag", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        s1 = astAnnul(s1); mm = astAnnul(mm); s2 = astAnnul(s2);
    }

    /* pcdmap-10: PcdMap intervening mapping not ZoomMap/PermMap — blocks swap */
    {
        if (!astOK) astClearStatus;
        double cen[] = {0.0, 0.0};
        double shifts[] = {1.0, 2.0};
        AstPcdMap *p1 = astPcdMap(0.001, cen, " ");
        AstShiftMap *sm = astShiftMap(2, shifts, " ");
        AstPcdMap *p2 = astPcdMap(0.001, cen, " ");
        astInvert(p2);
        AstCmpMap *inner = astCmpMap(sm, p2, 1, " ");
        AstCmpMap *outer = astCmpMap(p1, inner, 1, " ");
        write_negative_fixture(dir, "neg_pcd_nonswappable_between", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        p1 = astAnnul(p1); sm = astAnnul(sm); p2 = astAnnul(p2);
    }

    /* wcsmap-11: WcsMap with non-PermMap intervening — blocks swap.
       Use a MathMap as the non-swappable blocker (non-zero shifts would
       self-simplify away, and ShiftMap(0,0) becomes UnitMap). */
    {
        if (!astOK) astClearStatus;
        const char *fwd[] = {"y1 = x1", "y2 = x2"};
        const char *inv[] = {"x1 = y1", "x2 = y2"};
        AstWcsMap *w1 = astWcsMap(2, AST__TAN, 1, 2, " ");
        AstMathMap *mm = astMathMap(2, 2, 2, fwd, 2, inv, " ");
        AstWcsMap *w2 = astWcsMap(2, AST__TAN, 1, 2, " ");
        astInvert(w2);
        AstCmpMap *inner = astCmpMap(mm, w2, 1, " ");
        AstCmpMap *outer = astCmpMap(w1, inner, 1, " ");
        write_negative_fixture(dir, "neg_wcs_nonperm_between", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        w1 = astAnnul(w1); mm = astAnnul(mm); w2 = astAnnul(w2);
    }
}

/* ===== Negative fixtures batch 8 ===== */

static void gen_negative_fixtures_8(const char *dir) {
    if (!astOK) astClearStatus;
    printf("Negative fixtures batch 8:\n");

    /* sphmap-06: SphMap in parallel — refuses */
    {
        if (!astOK) astClearStatus;
        AstSphMap *sm = astSphMap("UnitRadius=1");
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *cm = astCmpMap(sm, zm, 0, " ");
        write_negative_fixture(dir, "neg_sph_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); zm = astAnnul(zm);
    }

    /* sphmap-13: sandwich MatrixMap not diagonal (full matrix) */
    {
        if (!astOK) astClearStatus;
        double mat[] = {1.0, 0.5, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0};
        AstSphMap *s1 = astSphMap("UnitRadius=1");
        astInvert(s1);
        AstMatrixMap *mm = astMatrixMap(3, 3, 0, mat, " ");
        AstSphMap *s2 = astSphMap("UnitRadius=1");
        AstCmpMap *inner = astCmpMap(mm, s2, 1, " ");
        AstCmpMap *outer = astCmpMap(s1, inner, 1, " ");
        write_negative_fixture(dir, "neg_sph_sandwich_full_matrix", (AstMapping*)outer);
        outer = astAnnul(outer); inner = astAnnul(inner);
        s1 = astAnnul(s1); mm = astAnnul(mm); s2 = astAnnul(s2);
    }

    /* normmap-08: NormMap followed by non-NormMap — no cancel */
    {
        if (!astOK) astClearStatus;
        AstSkyFrame *sf = astSkyFrame(" ");
        AstNormMap *nm = astNormMap(sf, " ");
        AstZoomMap *zm = astZoomMap(2, 2.0, " ");
        AstCmpMap *cm = astCmpMap(nm, zm, 1, " ");
        write_negative_fixture(dir, "neg_normmap_nonnorm_neighbour", (AstMapping*)cm);
        cm = astAnnul(cm); nm = astAnnul(nm); zm = astAnnul(zm);
        sf = astAnnul(sf);
    }

    /* grismmap-11: ZoomMap before forward (non-inverted) GrismMap — wrong config */
    {
        if (!astOK) astClearStatus;
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstGrismMap *gm = astGrismMap(" ");
        AstCmpMap *cm = astCmpMap(zm, gm, 1, " ");
        write_negative_fixture(dir, "neg_grism_zoom_before_fwd", (AstMapping*)cm);
        cm = astAnnul(cm); zm = astAnnul(zm); gm = astAnnul(gm);
    }

    /* grismmap-12: non-ZoomMap before inverted GrismMap */
    {
        if (!astOK) astClearStatus;
        double shifts[] = {1.0};
        AstShiftMap *sm = astShiftMap(1, shifts, " ");
        AstGrismMap *gm = astGrismMap(" ");
        astInvert(gm);
        AstCmpMap *cm = astCmpMap(sm, gm, 1, " ");
        write_negative_fixture(dir, "neg_grism_nonzoom_before_inv", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); gm = astAnnul(gm);
    }

    /* unitnormmap-16: UnitNormMap with non-mergeable neighbour.
       UnitNormMap(2) forward: Nin=2, Nout=3. Follow with ZoomMap(3). */
    {
        if (!astOK) astClearStatus;
        double centre[] = {1.0, 2.0};
        AstUnitNormMap *unm = astUnitNormMap(2, centre, " ");
        AstZoomMap *zm = astZoomMap(3, 2.0, " ");
        AstCmpMap *cm = astCmpMap(unm, zm, 1, " ");
        write_negative_fixture(dir, "neg_unitnormmap_nonmergeable", (AstMapping*)cm);
        cm = astAnnul(cm); unm = astAnnul(unm); zm = astAnnul(zm);
    }
}

/* ===== Positive cascade fixtures batch 2 ===== */

static void gen_cascade_positives_2(const char *dir) {
    if (!astOK) astClearStatus;
    printf("Cascade positives batch 2:\n");

    /* cmpmap-09: two parallel CmpMaps in series, components pair and simplify.
       Use MathMaps (non-simplifiable as parallel) so the parallel CmpMaps
       don't self-simplify before the pairing code runs.
       CmpMap(MathMap(2x)||MathMap(3x)) then CmpMap(MathMap(x/2)||MathMap(x/3))
       with SimpFI=1 so the pairs cancel. */
    {
        if (!astOK) astClearStatus;
        const char *fwd1[] = {"y = 2*x"};
        const char *inv1[] = {"x = 0.5*y"};
        const char *fwd2[] = {"y = 3*x"};
        const char *inv2[] = {"x = y/3"};
        AstMathMap *ma1 = astMathMap(1, 1, 1, fwd1, 1, inv1, "SimpFI=1,SimpIF=1");
        AstMathMap *mb1 = astMathMap(1, 1, 1, fwd2, 1, inv2, "SimpFI=1,SimpIF=1");
        AstCmpMap *par1 = astCmpMap(ma1, mb1, 0, " ");

        AstMathMap *ma2 = astMathMap(1, 1, 1, fwd1, 1, inv1, "SimpFI=1,SimpIF=1");
        AstMathMap *mb2 = astMathMap(1, 1, 1, fwd2, 1, inv2, "SimpFI=1,SimpIF=1");
        astInvert(ma2);
        astInvert(mb2);
        AstCmpMap *par2 = astCmpMap(ma2, mb2, 0, " ");

        AstCmpMap *cm = astCmpMap(par1, par2, 1, " ");
        write_fixture(dir, "cmpmap_parallel_in_series_merge", (AstMapping*)cm);
        cm = astAnnul(cm); par1 = astAnnul(par1); par2 = astAnnul(par2);
        ma1 = astAnnul(ma1); mb1 = astAnnul(mb1);
        ma2 = astAnnul(ma2); mb2 = astAnnul(mb2);
    }

    /* cmpmap-09 variant: parallel CmpMaps with mismatched component dimensions.
       CmpMap(MathMap(2D)||MathMap(1D)) in series with
       CmpMap(MathMap(1D)||MathMap(2D)) — dimension pairing needs accumulation.
       Uses the subout1 < subin2 / subin2 < subout1 paths (lines 1689-1707). */
    {
        if (!astOK) astClearStatus;
        const char *fwd2[] = {"y1 = 2*x1", "y2 = 3*x2"};
        const char *inv2[] = {"x1 = 0.5*y1", "x2 = y2/3"};
        const char *fwd1[] = {"y = 4*x"};
        const char *inv1[] = {"x = 0.25*y"};
        AstMathMap *m2d_a = astMathMap(2, 2, 2, fwd2, 2, inv2, "SimpFI=1,SimpIF=1");
        AstMathMap *m1d_a = astMathMap(1, 1, 1, fwd1, 1, inv1, "SimpFI=1,SimpIF=1");
        AstCmpMap *par1 = astCmpMap(m2d_a, m1d_a, 0, " ");

        AstMathMap *m1d_b = astMathMap(1, 1, 1, fwd1, 1, inv1, "SimpFI=1,SimpIF=1");
        AstMathMap *m2d_b = astMathMap(2, 2, 2, fwd2, 2, inv2, "SimpFI=1,SimpIF=1");
        astInvert(m1d_b);
        astInvert(m2d_b);
        AstCmpMap *par2 = astCmpMap(m1d_b, m2d_b, 0, " ");

        AstCmpMap *cm = astCmpMap(par1, par2, 1, " ");
        write_fixture(dir, "cmpmap_parallel_series_dim_mismatch", (AstMapping*)cm);
        cm = astAnnul(cm); par1 = astAnnul(par1); par2 = astAnnul(par2);
        m2d_a = astAnnul(m2d_a); m1d_a = astAnnul(m1d_a);
        m1d_b = astAnnul(m1d_b); m2d_b = astAnnul(m2d_b);
    }

    /* cmpmap-18: PermMap swap with aconstants — first component gets constants.
       Use MathMaps (non-simplifiable) as CmpMap components so the parallel
       CmpMap doesn't self-simplify before the PermMap swap code runs.
       Square PermMap(2→2): output 1 = constant, output 2 = input 1. */
    {
        if (!astOK) astClearStatus;
        int inperm[] = {2, -1};
        int outperm[] = {-1, 1};
        double consts[] = {99.0};
        const char *fwda[] = {"y = 2*x"};
        const char *inva[] = {"x = 0.5*y"};
        const char *fwdb[] = {"y = 3*x"};
        const char *invb[] = {"x = y/3"};
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, consts, " ");
        AstMathMap *ma = astMathMap(1, 1, 1, fwda, 1, inva, " ");
        AstMathMap *mb = astMathMap(1, 1, 1, fwdb, 1, invb, " ");
        AstCmpMap *par = astCmpMap(ma, mb, 0, " ");
        AstCmpMap *cm = astCmpMap(pm, par, 1, " ");
        write_fixture(dir, "cmpmap_perm_swap_aconstants", (AstMapping*)cm);
        cm = astAnnul(cm); pm = astAnnul(pm); par = astAnnul(par);
        ma = astAnnul(ma); mb = astAnnul(mb);
    }

    /* cmpmap-19: PermMap swap with bconstants — second component gets constants.
       For canswap: outperm[0]=from input at index npin-nin2a=1 (public: 2),
       outperm[1]<0 (constant), inperm[1]=from output 0 (public: 1),
       inperm[0]<0 (constant, avoids bidirectional check failure). */
    {
        if (!astOK) astClearStatus;
        int inperm[] = {-1, 1};
        int outperm[] = {2, -1};
        double consts[] = {99.0};
        const char *fwda[] = {"y = 2*x"};
        const char *inva[] = {"x = 0.5*y"};
        const char *fwdb[] = {"y = 3*x"};
        const char *invb[] = {"x = y/3"};
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, consts, " ");
        AstMathMap *ma = astMathMap(1, 1, 1, fwda, 1, inva, " ");
        AstMathMap *mb = astMathMap(1, 1, 1, fwdb, 1, invb, " ");
        AstCmpMap *par = astCmpMap(ma, mb, 0, " ");
        AstCmpMap *cm = astCmpMap(pm, par, 1, " ");
        write_fixture(dir, "cmpmap_perm_swap_bconstants", (AstMapping*)cm);
        cm = astAnnul(cm); pm = astAnnul(pm); par = astAnnul(par);
        ma = astAnnul(ma); mb = astAnnul(mb);
    }

    /* A NormMap over a CmpFrame whose first component is a FrameSet that
       reduces. astSimplify on the CmpFrame simplifies each component and
       rebuilds around the results (cmpframe.c:9018-9034), so the NormMap is
       rebuilt around the changed CmpFrame (normmap.c:619-631) instead of
       reaching the basic-Frame test that would give a UnitMap
       (normmap.c:632-640). The FrameSet's base->current Mapping is a
       CmpMap(Zoom 2, Zoom 3), which simplifies to a single ZoomMap. */
    {
        if (!astOK) astClearStatus;
        AstFrame *base = astFrame(2, "Domain=PIXEL");
        AstFrame *curr = astFrame(2, "Domain=ZOOMED");
        AstZoomMap *z1 = astZoomMap(2, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 3.0, " ");
        AstCmpMap *map = astCmpMap(z1, z2, 1, " ");
        AstFrameSet *fset = astFrameSet(base, " ");
        astAddFrame(fset, AST__BASE, map, curr);
        AstFrame *spec = astFrame(1, "Domain=OTHER");
        AstCmpFrame *cf = astCmpFrame(fset, spec, " ");
        AstNormMap *nm = astNormMap((AstFrame *)cf, " ");
        write_fixture(dir, "cap_normmap_cmpframe", (AstMapping*)nm);
        nm = astAnnul(nm); cf = astAnnul(cf); spec = astAnnul(spec);
        fset = astAnnul(fset); map = astAnnul(map);
        base = astAnnul(base); curr = astAnnul(curr);
        z1 = astAnnul(z1); z2 = astAnnul(z2);
    }

    /* normmap-04: NormMap cancels with inverse UPPER neighbour.
       NormMap(forward) + Inverse(NormMap) with same Frame. */
    {
        if (!astOK) astClearStatus;
        AstSkyFrame *sf = astSkyFrame(" ");
        AstNormMap *n1 = astNormMap(sf, " ");
        AstNormMap *n2 = astNormMap(sf, " ");
        astInvert(n2);
        AstCmpMap *cm = astCmpMap(n1, n2, 1, " ");
        write_fixture(dir, "normmap_inverse_cancel_upper", (AstMapping*)cm);
        cm = astAnnul(cm); n1 = astAnnul(n1); n2 = astAnnul(n2);
        sf = astAnnul(sf);
    }

    /* unitmap-05: parallel UnitMap with Invert=1 flanked by non-UnitMaps.
       The code clears the invert flag since there are no adjacent UnitMaps. */
    {
        if (!astOK) astClearStatus;
        const char *fwd[] = {"y = 2*x"};
        const char *inv[] = {"x = 0.5*y"};
        AstMathMap *mm = astMathMap(1, 1, 1, fwd, 1, inv, " ");
        AstUnitMap *um = astUnitMap(1, " ");
        astInvert(um);
        AstCmpMap *cm = astCmpMap(mm, um, 0, " ");
        write_fixture(dir, "unit_parallel_invert_clear", (AstMapping*)cm);
        cm = astAnnul(cm); mm = astAnnul(mm); um = astAnnul(um);
    }

    /* permmap-06: PermMap simplified because inperm array differs after
       constant folding. Compose a PermMap that has a constant on one inverse
       axis with a UnitMap — after composition the inperm changes. */
    {
        if (!astOK) astClearStatus;
        int inperm[] = {1, -1};
        int outperm[] = {1, 2};
        double consts[] = {42.0};
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, consts, " ");
        AstUnitMap *um = astUnitMap(2, " ");
        AstCmpMap *cm = astCmpMap(um, pm, 1, " ");
        write_fixture(dir, "perm_inperm_constant_fold", (AstMapping*)cm);
        cm = astAnnul(cm); pm = astAnnul(pm); um = astAnnul(um);
    }

    /* permmap-07: PermMap simplified because outperm array differs.
       Compose PermMap(with constant on forward output) with UnitMap —
       the outperm changes after re-computation. */
    {
        if (!astOK) astClearStatus;
        int inperm[] = {1, 2};
        int outperm[] = {1, -1};
        double consts[] = {42.0};
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, consts, " ");
        AstUnitMap *um = astUnitMap(2, " ");
        AstCmpMap *cm = astCmpMap(pm, um, 1, " ");
        write_fixture(dir, "perm_outperm_constant_fold", (AstMapping*)cm);
        cm = astAnnul(cm); pm = astAnnul(pm); um = astAnnul(um);
    }

    /* permmap-10: Series composition propagates AST__BAD through.
       First PermMap drops an axis (output undefined), second routes it. */
    {
        if (!astOK) astClearStatus;
        int in1[] = {1, 2};
        int out1[] = {1, 0};
        AstPermMap *p1 = astPermMap(2, in1, 2, out1, NULL, " ");
        int in2[] = {1, 2};
        int out2[] = {2, 1};
        AstPermMap *p2 = astPermMap(2, in2, 2, out2, NULL, " ");
        AstCmpMap *cm = astCmpMap(p1, p2, 1, " ");
        write_fixture(dir, "perm_bad_propagation", (AstMapping*)cm);
        cm = astAnnul(cm); p1 = astAnnul(p1); p2 = astAnnul(p2);
    }

    /* cmpmap-03 (where>0): CmpMap decomposition when not first in list.
       MathMap || CmpMap(MathMap||MathMap) || MathMap in parallel.
       Use MathMaps to prevent premature merging of ZoomMaps. */
    {
        if (!astOK) astClearStatus;
        const char *f1[] = {"y = 2*x"};
        const char *i1[] = {"x = 0.5*y"};
        const char *f2[] = {"y = 3*x"};
        const char *i2[] = {"x = y/3"};
        const char *f3[] = {"y = 4*x"};
        const char *i3[] = {"x = 0.25*y"};
        const char *f4[] = {"y = 5*x"};
        const char *i4[] = {"x = 0.2*y"};
        AstMathMap *m1 = astMathMap(1, 1, 1, f1, 1, i1, " ");
        AstMathMap *m2 = astMathMap(1, 1, 1, f2, 1, i2, " ");
        AstMathMap *m3 = astMathMap(1, 1, 1, f3, 1, i3, " ");
        AstCmpMap *inner = astCmpMap(m2, m3, 0, " ");
        AstCmpMap *left = astCmpMap(m1, inner, 0, " ");
        AstMathMap *m4 = astMathMap(1, 1, 1, f4, 1, i4, " ");
        AstCmpMap *outer = astCmpMap(left, m4, 0, " ");
        write_fixture(dir, "cmpmap_decompose_middle", (AstMapping*)outer);
        outer = astAnnul(outer); left = astAnnul(left);
        inner = astAnnul(inner);
        m1 = astAnnul(m1); m2 = astAnnul(m2);
        m3 = astAnnul(m3); m4 = astAnnul(m4);
    }

    /* cmpmap-07 with invert: series CmpMaps in parallel, one inverted.
       Use MathMaps so they don't self-simplify before the merge fires.
       Tests line 1567-1568 (invert1 flag flip). */
    {
        if (!astOK) astClearStatus;
        const char *fwd[] = {"y = 2*x"};
        const char *inv[] = {"x = 0.5*y"};
        AstMathMap *m1a = astMathMap(1, 1, 1, fwd, 1, inv, "SimpFI=1,SimpIF=1");
        AstMathMap *m1b = astMathMap(1, 1, 1, fwd, 1, inv, "SimpFI=1,SimpIF=1");
        AstCmpMap *ser1 = astCmpMap(m1a, m1b, 1, " ");
        astInvert(ser1);

        AstMathMap *m2a = astMathMap(1, 1, 1, fwd, 1, inv, "SimpFI=1,SimpIF=1");
        AstMathMap *m2b = astMathMap(1, 1, 1, fwd, 1, inv, "SimpFI=1,SimpIF=1");
        AstCmpMap *ser2 = astCmpMap(m2a, m2b, 1, " ");

        AstCmpMap *par = astCmpMap(ser1, ser2, 0, " ");
        write_fixture(dir, "cmpmap_series_in_parallel_inverted", (AstMapping*)par);
        par = astAnnul(par); ser1 = astAnnul(ser1); ser2 = astAnnul(ser2);
        m1a = astAnnul(m1a); m1b = astAnnul(m1b);
        m2a = astAnnul(m2a); m2b = astAnnul(m2b);
    }

    /* winmap-15: WinMap merges with UPPER parallel CmpMap neighbour.
       Parallel CmpMap follows the WinMap in the series. */
    {
        if (!astOK) astClearStatus;
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {3, 5};
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        double shifts1[] = {1.0};
        double shifts2[] = {2.0};
        AstShiftMap *sm1 = astShiftMap(1, shifts1, " ");
        AstShiftMap *sm2 = astShiftMap(1, shifts2, " ");
        AstCmpMap *par = astCmpMap(sm1, sm2, 0, " ");
        AstCmpMap *cm = astCmpMap(wm, par, 1, " ");
        write_fixture(dir, "win_upper_cmpmap_parallel_merge", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); par = astAnnul(par);
        sm1 = astAnnul(sm1); sm2 = astAnnul(sm2);
    }

    /* permmap-09: constant propagation through series composition.
       First PermMap has a constant output, second PermMap routes that
       constant through — the combined PermMap propagates the constant. */
    {
        if (!astOK) astClearStatus;
        int in1[] = {1, -1};
        int out1[] = {1, 2};
        double c1[] = {42.0};
        AstPermMap *p1 = astPermMap(2, in1, 2, out1, c1, " ");
        int in2[] = {2, 1};
        int out2[] = {2, 1};
        AstPermMap *p2 = astPermMap(2, in2, 2, out2, NULL, " ");
        AstCmpMap *cm = astCmpMap(p1, p2, 1, " ");
        write_fixture(dir, "perm_constant_propagation", (AstMapping*)cm);
        cm = astAnnul(cm); p1 = astAnnul(p1); p2 = astAnnul(p2);
    }

    /* unitnormmap-02: WinMap(unit scale) + forward UnitNormMap → adjusted centre */
    {
        if (!astOK) astClearStatus;
        double centre[] = {1.0, 2.0};
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {0.5, 0.5}, outb[] = {1.5, 1.5};
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstUnitNormMap *unm = astUnitNormMap(2, centre, " ");
        AstCmpMap *cm = astCmpMap(wm, unm, 1, " ");
        write_fixture(dir, "unitnormmap_winmap_fwd_merge", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); unm = astAnnul(unm);
    }

    /* unitnormmap-05: inverted UnitNormMap + WinMap(unit scale) → adjusted centre.
       Inverted UnitNormMap(2): Nin=3, Nout=2. WinMap must have Nin=2. */
    {
        if (!astOK) astClearStatus;
        double centre[] = {1.0, 2.0};
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {0.5, 0.5}, outb[] = {1.5, 1.5};
        AstUnitNormMap *unm = astUnitNormMap(2, centre, " ");
        astInvert(unm);
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        AstCmpMap *cm = astCmpMap(unm, wm, 1, " ");
        write_fixture(dir, "unitnormmap_inv_winmap_merge", (AstMapping*)cm);
        cm = astAnnul(cm); unm = astAnnul(unm); wm = astAnnul(wm);
    }
}

/* ===== Positive cascade fixtures batch 3 ===== */

static void gen_cascade_positives_3(const char *dir) {
    if (!astOK) astClearStatus;
    printf("Cascade positives batch 3:\n");

    /* wcsmap-04: WcsMap + PermMap swap for local simplification.
       WcsMap(3,TAN,lonax=1,latax=2) has internal lonax=0, latax=1.
       PermMap(3→1) where inverse assigns constants to both celestial
       axes (inperm[0]<0,inperm[1]<0). After WcsPerm: the WcsMap
       becomes a UnitMap (class change triggers swap acceptance). */
    {
        if (!astOK) astClearStatus;
        int inperm[] = {-1, -2, 1};
        int outperm[] = {3};
        double consts[] = {0.5, 0.5};
        AstWcsMap *wm = astWcsMap(3, AST__TAN, 1, 2, " ");
        AstPermMap *pm = astPermMap(3, inperm, 1, outperm, consts, " ");
        AstCmpMap *cm = astCmpMap(wm, pm, 1, " ");
        write_fixture(dir, "wcsmap_perm_swap_simplify", (AstMapping*)cm);
        cm = astAnnul(cm); wm = astAnnul(wm); pm = astAnnul(pm);
    }

    /* permmap-05: PermMap with redundant outperm simplifies after
       composition with UnitMap. A 3-axis PermMap that passes axes 1,2
       through and assigns axis 3 a constant — composed with a UnitMap(3)
       should merge and potentially simplify the stored arrays. */
    {
        if (!astOK) astClearStatus;
        int inperm[] = {1, 2, -1};
        int outperm[] = {1, 2, 0};
        double consts[] = {42.0};
        AstPermMap *pm = astPermMap(3, inperm, 3, outperm, consts, " ");
        AstUnitMap *um = astUnitMap(3, " ");
        AstCmpMap *cm = astCmpMap(pm, um, 1, " ");
        write_fixture(dir, "perm_array_simplify", (AstMapping*)cm);
        cm = astAnnul(cm); pm = astAnnul(pm); um = astAnnul(um);
    }

    /* permmap-05 variant: PermMap with explicit identity outperm=[1,2]
       composed with UnitMap. The composition should detect identity and
       null out the array. */
    {
        if (!astOK) astClearStatus;
        int inperm[] = {2, 1};
        int outperm[] = {1, 2};
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, NULL, " ");
        AstUnitMap *um = astUnitMap(2, " ");
        AstCmpMap *cm = astCmpMap(pm, um, 1, " ");
        write_fixture(dir, "perm_identity_array_null", (AstMapping*)cm);
        cm = astAnnul(cm); pm = astAnnul(pm); um = astAnnul(um);
    }
}

/* ===== Negative fixtures batch 9 ===== */

static void gen_negative_fixtures_9(const char *dir) {
    if (!astOK) astClearStatus;
    printf("Negative fixtures batch 9:\n");

    /* winmap-04: standalone WinMap with mixed shifts/scales — no self-simplify */
    {
        if (!astOK) astClearStatus;
        double ina[] = {0, 0}, inb[] = {1, 1};
        double outa[] = {1, 2}, outb[] = {4, 6};
        AstWinMap *wm = astWinMap(2, ina, inb, outa, outb, " ");
        write_negative_fixture(dir, "neg_win_mixed_no_selfsimplify", (AstMapping*)wm);
        wm = astAnnul(wm);
    }

    /* ratemap-04: RateMaps in parallel — refuses */
    {
        if (!astOK) astClearStatus;
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstRateMap *r1 = astRateMap(zm, 1, 1, " ");
        AstRateMap *r2 = astRateMap(zm, 1, 1, " ");
        AstCmpMap *cm = astCmpMap(r1, r2, 0, " ");
        write_negative_fixture(dir, "neg_ratemap_parallel", (AstMapping*)cm);
        cm = astAnnul(cm); r1 = astAnnul(r1); r2 = astAnnul(r2);
        zm = astAnnul(zm);
    }

    /* timemap-16: 5-arg pair with mismatched arguments */
    {
        if (!astOK) astClearStatus;
        double args1[] = {53000.0, 0.5, -2.5, 6378.0, 0.0, 0.0, 0.0};
        double args2[] = {53000.0, 0.5, -2.6, 6378.0, 0.0, 0.0, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "TTTOTDB", 5, args1);
        astTimeAdd(tm, "TDBTOTT", 5, args2);
        write_negative_fixture(dir, "neg_time_5arg_mismatch", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* specmap-16: 6-arg pair with mismatched arguments */
    {
        if (!astOK) astClearStatus;
        double args1[] = {-2.5, 0.9, 1000.0, 51544.0, 0.5, 1.2, 0.0};
        double args2[] = {-2.5, 0.9, 1000.0, 51544.0, 0.5, 1.3, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        astSpecAdd(sm, "TPF2HL", 6, args1);
        astSpecAdd(sm, "HLF2TP", 6, args2);
        write_negative_fixture(dir, "neg_spec_6arg_mismatch", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* slamap-22: 4-arg pair with mismatched arguments (HPCEQ+EQHPC) */
    {
        if (!astOK) astClearStatus;
        double args1[] = {51544.0, 0.5, 1.2, 150.0e6};
        double args2[] = {51544.0, 0.5, 1.2, 151.0e6};
        AstSlaMap *sm = astSlaMap(0, " ");
        astSlaAdd(sm, "HPCEQ", 4, args1);
        astSlaAdd(sm, "EQHPC", 4, args2);
        write_negative_fixture(dir, "neg_sla_4arg_mismatch", (AstMapping*)sm);
        sm = astAnnul(sm);
    }

    /* polymap-03: PolyMap with only inverse coefficients — no forward → linearize refused */
    {
        if (!astOK) astClearStatus;
        double coeff_i[] = {1.0, 1, 1};
        AstPolyMap *pm = astPolyMap(1, 1, 0, NULL, 1, coeff_i, " ");
        write_negative_fixture(dir, "neg_poly_no_forward", (AstMapping*)pm);
        pm = astAnnul(pm);
    }

    /* splinemap-07: two different SplineMaps in opposite directions — astEqual fails */
    {
        if (!astOK) astClearStatus;
        double tx[] = {0, 1}, ty[] = {0, 1};
        double cu1[] = {1.5}, cv1[] = {2.5};
        double cu2[] = {3.0}, cv2[] = {4.0};
        AstSplineMap *s1 = astSplineMap(1, 1, 1, 1, tx, ty, cu1, cv1, " ");
        AstSplineMap *s2 = astSplineMap(1, 1, 1, 1, tx, ty, cu2, cv2, " ");
        astInvert(s2);
        AstCmpMap *cm = astCmpMap(s1, s2, 1, " ");
        write_negative_fixture(dir, "neg_spline_different_coeffs", (AstMapping*)cm);
        cm = astAnnul(cm); s1 = astAnnul(s1); s2 = astAnnul(s2);
    }
}

/* ===== Region fixtures ===== */

static void gen_region_fixtures(const char *dir) {
    if (!astOK) astClearStatus;
    printf("Region fixtures:\n");

    /* box-01: Box self-simplification. Create a Box, then use
       astMapRegion with CmpMap(Zoom,Zoom) to produce a new Box with
       an unsimplified internal FrameSet. astSimplify then reduces it. */
    {
        if (!astOK) astClearStatus;
        AstFrame *f = astFrame(2, " ");
        double lbnd[] = {0.0, 0.0};
        double ubnd[] = {10.0, 10.0};
        AstBox *box = astBox(f, 1, lbnd, ubnd, NULL, " ");
        AstZoomMap *z1 = astZoomMap(2, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 3.0, " ");
        AstCmpMap *map = astCmpMap(z1, z2, 1, " ");
        AstFrame *f2 = astFrame(2, "Domain=ZOOMED");
        AstRegion *mapped = astMapRegion(box, map, f2);
        write_fixture(dir, "box_self_simplify", (AstMapping*)mapped);
        mapped = astAnnul(mapped); box = astAnnul(box);
        map = astAnnul(map); f = astAnnul(f); f2 = astAnnul(f2);
        z1 = astAnnul(z1); z2 = astAnnul(z2);
    }

    /* box-03/04: Box parallel merge. Two 1D Boxes in parallel should
       merge into a 2D Box. */
    {
        if (!astOK) astClearStatus;
        AstFrame *f1 = astFrame(1, " ");
        double lb1[] = {0.0}, ub1[] = {10.0};
        AstBox *b1 = astBox(f1, 1, lb1, ub1, NULL, " ");
        AstFrame *f2 = astFrame(1, " ");
        double lb2[] = {-5.0}, ub2[] = {5.0};
        AstBox *b2 = astBox(f2, 1, lb2, ub2, NULL, " ");
        AstCmpMap *cm = astCmpMap(b1, b2, 0, " ");
        write_fixture(dir, "box_parallel_merge", (AstMapping*)cm);
        cm = astAnnul(cm); b1 = astAnnul(b1); b2 = astAnnul(b2);
        f1 = astAnnul(f1); f2 = astAnnul(f2);
    }

    /* interval-01: Interval self-simplification. */
    {
        if (!astOK) astClearStatus;
        AstFrame *base = astFrame(2, "Domain=PIXEL");
        AstFrame *curr = astFrame(2, "Domain=ZOOMED");
        AstZoomMap *z1 = astZoomMap(2, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 3.0, " ");
        AstCmpMap *map = astCmpMap(z1, z2, 1, " ");
        AstFrameSet *fs = astFrameSet(base, " ");
        astAddFrame(fs, AST__BASE, map, curr);
        double lbnd[] = {0.0, 0.0};
        double ubnd[] = {10.0, 10.0};
        AstInterval *intv = astInterval(fs, lbnd, ubnd, NULL, " ");
        write_fixture(dir, "interval_self_simplify", (AstMapping*)intv);
        intv = astAnnul(intv); fs = astAnnul(fs); map = astAnnul(map);
        base = astAnnul(base); curr = astAnnul(curr);
        z1 = astAnnul(z1); z2 = astAnnul(z2);
    }

    /* interval-03/04: Interval parallel merge. */
    {
        if (!astOK) astClearStatus;
        AstFrame *f1 = astFrame(1, " ");
        double lb1[] = {0.0}, ub1[] = {10.0};
        AstInterval *i1 = astInterval(f1, lb1, ub1, NULL, " ");
        AstFrame *f2 = astFrame(1, " ");
        double lb2[] = {-5.0}, ub2[] = {5.0};
        AstInterval *i2 = astInterval(f2, lb2, ub2, NULL, " ");
        AstCmpMap *cm = astCmpMap(i1, i2, 0, " ");
        write_fixture(dir, "interval_parallel_merge", (AstMapping*)cm);
        cm = astAnnul(cm); i1 = astAnnul(i1); i2 = astAnnul(i2);
        f1 = astAnnul(f1); f2 = astAnnul(f2);
    }

    /* nullregion-01: NullRegion self-simplification. */
    {
        if (!astOK) astClearStatus;
        AstFrame *base = astFrame(2, "Domain=PIXEL");
        AstFrame *curr = astFrame(2, "Domain=ZOOMED");
        AstZoomMap *z1 = astZoomMap(2, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 3.0, " ");
        AstCmpMap *map = astCmpMap(z1, z2, 1, " ");
        AstFrameSet *fs = astFrameSet(base, " ");
        astAddFrame(fs, AST__BASE, map, curr);
        AstNullRegion *nr = astNullRegion(fs, NULL, " ");
        write_fixture(dir, "nullregion_self_simplify", (AstMapping*)nr);
        nr = astAnnul(nr); fs = astAnnul(fs); map = astAnnul(map);
        base = astAnnul(base); curr = astAnnul(curr);
        z1 = astAnnul(z1); z2 = astAnnul(z2);
    }

    /* nullregion-03/04: NullRegion parallel merge. */
    {
        if (!astOK) astClearStatus;
        AstFrame *f1 = astFrame(1, " ");
        AstNullRegion *n1 = astNullRegion(f1, NULL, " ");
        AstFrame *f2 = astFrame(1, " ");
        double lb[] = {0.0}, ub[] = {10.0};
        AstBox *b2 = astBox(f2, 1, lb, ub, NULL, " ");
        AstCmpMap *cm = astCmpMap(n1, b2, 0, " ");
        write_fixture(dir, "nullregion_parallel_merge", (AstMapping*)cm);
        cm = astAnnul(cm); n1 = astAnnul(n1); b2 = astAnnul(b2);
        f1 = astAnnul(f1); f2 = astAnnul(f2);
    }

    /* pointlist-01: PointList self-simplification. */
    {
        if (!astOK) astClearStatus;
        AstFrame *base = astFrame(2, "Domain=PIXEL");
        AstFrame *curr = astFrame(2, "Domain=ZOOMED");
        AstZoomMap *z1 = astZoomMap(2, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 3.0, " ");
        AstCmpMap *map = astCmpMap(z1, z2, 1, " ");
        AstFrameSet *fs = astFrameSet(base, " ");
        astAddFrame(fs, AST__BASE, map, curr);
        double points[] = {1.0, 2.0, 3.0, 4.0};
        AstPointList *pl = astPointList(fs, 2, 2, 2, points, NULL, " ");
        write_fixture(dir, "pointlist_self_simplify", (AstMapping*)pl);
        pl = astAnnul(pl); fs = astAnnul(fs); map = astAnnul(map);
        base = astAnnul(base); curr = astAnnul(curr);
        z1 = astAnnul(z1); z2 = astAnnul(z2);
    }

    /* selectormap-01: SelectorMap with simplifiable Region. */
    {
        if (!astOK) astClearStatus;
        AstFrame *base = astFrame(2, "Domain=PIXEL");
        AstFrame *curr = astFrame(2, "Domain=ZOOMED");
        AstZoomMap *z1 = astZoomMap(2, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 3.0, " ");
        AstCmpMap *map = astCmpMap(z1, z2, 1, " ");
        AstFrameSet *fs = astFrameSet(base, " ");
        astAddFrame(fs, AST__BASE, map, curr);
        double lbnd[] = {0.0, 0.0};
        double ubnd[] = {10.0, 10.0};
        AstBox *box = astBox(fs, 1, lbnd, ubnd, NULL, " ");
        AstMapping *regs[] = {(AstMapping*)box};
        AstSelectorMap *sm = astSelectorMap(1, (void**)regs, AST__BAD, " ");
        write_fixture(dir, "selectormap_region_simplify", (AstMapping*)sm);
        sm = astAnnul(sm); box = astAnnul(box); fs = astAnnul(fs);
        map = astAnnul(map); base = astAnnul(base); curr = astAnnul(curr);
        z1 = astAnnul(z1); z2 = astAnnul(z2);
    }
}

/* ===== IntraMap fixtures ===== */
/* Note: IntraMap requires registered functions, skip for now */

/* ===== Main ===== */

/* ===== Audit-gap fixtures =====
 *
 * Each case here isolates a step of a MapMerge or Simplify body that the
 * existing corpus reaches only by a route that produces the same answer for a
 * different reason. A lone step, with no partner to cancel against, separates
 * the two.
 */

static void gen_audit_gap_fixtures(const char *dir) {
    printf("Audit-gap fixtures:\n");

    /* A lone MJDTOJD whose JD offset absorbs the 2400000.5 constant. Its
       derived third argument is zero, so MapMerge drops it as a change of
       system with no effect (timemap.c:2260) and the TimeMap becomes a
       UnitMap. time_2arg_swapped_cancel reaches a UnitMap too, but by
       cancelling an inverse pair, so it does not exercise this rule. */
    {
        double args[] = {0.0, 2400000.5, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "MJDTOJD", 2, args);
        write_fixture(dir, "time_mjdtojd_noop", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* The same for JDTOMJD, whose derived argument subtracts the constant. */
    {
        double args[] = {2400000.5, 0.0, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "JDTOMJD", 2, args);
        write_fixture(dir, "time_jdtomjd_noop", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* Negative control: an MJDTOJD whose offsets do not absorb the constant is
       a real conversion and must survive. */
    {
        double args[] = {0.0, 0.0, 0.0};
        AstTimeMap *tm = astTimeMap(0, " ");
        astTimeAdd(tm, "MJDTOJD", 2, args);
        write_negative_fixture(dir, "neg_time_mjdtojd_real", (AstMapping*)tm);
        tm = astAnnul(tm);
    }

    /* An inverted UnitMap in parallel with a Mapping that cannot absorb it.
       MapMerge clears the Invert flag and reports that as a change
       (unitmap.c:579-587). A PcdMap is the neighbour because it combines with
       nothing in parallel (pcdmap.c:1729), where a ZoomMap, WinMap or PermMap
       would swallow the UnitMap into its own parallel merge and so not
       exercise this step. */
    {
        double pcdcen[] = {100.0, 100.0};
        AstUnitMap *um = astUnitMap(1, " ");
        AstPcdMap *pm = astPcdMap(0.001, pcdcen, " ");
        AstCmpMap *cm;
        astInvert(um);
        cm = astCmpMap(um, pm, 0, " ");
        write_fixture(dir, "unit_parallel_invert_pcd", (AstMapping*)cm);
        cm = astAnnul(cm); um = astAnnul(um); pm = astAnnul(pm);
    }

    /* A zero-distortion PcdMap is a UnitMap, and MapMerge replaces it as its
       opening move, before any neighbour is considered (pcdmap.c:1420). Placed
       between two MatrixMaps that can only merge with each other once the
       PcdMap has become a UnitMap, so the reduction has to happen to a nominee
       inside the list rather than to a lone Mapping. */
    {
        double pcdcen[] = {0.0, 0.0};
        double m1[] = {2.0, 0.0, 0.0, 3.0};
        double m2[] = {5.0, 0.0, 0.0, 7.0};
        AstMatrixMap *ma = astMatrixMap(2, 2, 0, m1, " ");
        AstPcdMap *pm = astPcdMap(0.0, pcdcen, " ");
        AstMatrixMap *mb = astMatrixMap(2, 2, 0, m2, " ");
        AstCmpMap *inner = astCmpMap(ma, pm, 1, " ");
        AstCmpMap *cm = astCmpMap(inner, mb, 1, " ");
        write_fixture(dir, "pcd_zero_disc_series", (AstMapping*)cm);
        cm = astAnnul(cm); inner = astAnnul(inner);
        ma = astAnnul(ma); pm = astAnnul(pm); mb = astAnnul(mb);
    }

    /* An inverted parallel CmpMap that has to be re-emitted while the tree is
       rebuilt around it: the two trailing ZoomMaps merge, so the list changes
       and reconstruction runs, but the parallel component itself merges with
       nothing. This is the shape cmpmap.rs's `invert_into_structure` exists for
       -- the claim being that C pushes the inversion down so intermediate
       parallel CmpMaps stay forward and the innermost carries InvA/InvB. */
    {
        const char *f1[] = {"y=x*x+1"};
        const char *i1[] = {"x=sqrt(y-1)"};
        const char *f2[] = {"y=exp(x)"};
        const char *i2[] = {"x=log(y)"};
        AstMathMap *ma = astMathMap(1, 1, 1, f1, 1, i1, " ");
        AstMathMap *mb = astMathMap(1, 1, 1, f2, 1, i2, " ");
        AstCmpMap *par = astCmpMap(ma, mb, 0, " ");
        AstZoomMap *z1 = astZoomMap(2, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 3.0, " ");
        AstCmpMap *zz = astCmpMap(z1, z2, 1, " ");
        AstCmpMap *cm;
        astInvert(par);
        cm = astCmpMap(par, zz, 1, " ");
        write_fixture(dir, "parcomp_inverted_reemitted", (AstMapping*)cm);
        cm = astAnnul(cm); zz = astAnnul(zz); par = astAnnul(par);
        z1 = astAnnul(z1); z2 = astAnnul(z2); ma = astAnnul(ma); mb = astAnnul(mb);
    }

    /* The same with the parallel component nested one level deeper, so the
       "intermediate stays forward, innermost carries the flags" claim has an
       intermediate to be wrong about. */
    {
        const char *f1[] = {"y=x*x+1"};
        const char *i1[] = {"x=sqrt(y-1)"};
        const char *f2[] = {"y=exp(x)"};
        const char *i2[] = {"x=log(y)"};
        AstMathMap *ma = astMathMap(1, 1, 1, f1, 1, i1, " ");
        AstMathMap *mb = astMathMap(1, 1, 1, f2, 1, i2, " ");
        AstUnitMap *um = astUnitMap(1, " ");
        AstCmpMap *inner = astCmpMap(ma, mb, 0, " ");
        AstCmpMap *outer = astCmpMap(inner, um, 0, " ");
        AstZoomMap *z1 = astZoomMap(3, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(3, 3.0, " ");
        AstCmpMap *zz = astCmpMap(z1, z2, 1, " ");
        AstCmpMap *cm;
        astInvert(outer);
        cm = astCmpMap(outer, zz, 1, " ");
        write_fixture(dir, "parcomp_inverted_nested_reemitted", (AstMapping*)cm);
        cm = astAnnul(cm); zz = astAnnul(zz); outer = astAnnul(outer);
        inner = astAnnul(inner); um = astAnnul(um);
        z1 = astAnnul(z1); z2 = astAnnul(z2); ma = astAnnul(ma); mb = astAnnul(mb);
    }

    /* A lookup table that departs from linear by more than DBL_EPSILON and far
       less than 1e-10. C's GetLinear scales its tolerance by the LutEpsilon
       attribute, which defaults to DBL_EPSILON (lutmap.c:598-627), so C keeps
       this a LutMap; a looser fixed tolerance would call it linear and replace
       it with a WinMap. The departure is put on the middle sample so the
       endpoint-based shortcut cannot see it. */
    {
        double lut[9];
        AstLutMap *lm;
        int i;
        for( i = 0; i < 9; i++ ) lut[ i ] = 1.0 + 0.5*i;
        lut[ 4 ] += 1.0e-12;
        lm = astLutMap( 9, lut, 0.0, 1.0, " " );
        write_negative_fixture(dir, "neg_lut_near_linear", (AstMapping*)lm);
        lm = astAnnul(lm);
    }

    /* The control: a table that is linear to the last bit, which C does replace
       with a WinMap. Without this the fixture above could pass for a port that
       never converts a LutMap at all. */
    {
        double lut[9];
        AstLutMap *lm;
        int i;
        for( i = 0; i < 9; i++ ) lut[ i ] = 1.0 + 0.5*i;
        lm = astLutMap( 9, lut, 0.0, 1.0, " " );
        write_fixture(dir, "lut_exactly_linear", (AstMapping*)lm);
        lm = astAnnul(lm);
    }

    /* Two adjacent parallel CmpMaps in series, the shape C's "Parallel CmpMaps
       in series" branch handles (cmpmap.c:1624-1783). C expands both into
       lists, divides them into aligned sub-lists, composes each aligned pair
       *in series*, and simplifies the composition -- it never offers an
       expanded member to its own MapMerge. These two bracket that: the first
       has aligned pairs that both reduce, the second has aligned pairs that
       reduce nothing, so C merges one and leaves the other. Any change to the
       expansion helpers has to keep both. */
    {
        AstZoomMap *a1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *b1 = astZoomMap(1, 3.0, " ");
        AstZoomMap *a2 = astZoomMap(1, 5.0, " ");
        AstZoomMap *b2 = astZoomMap(1, 7.0, " ");
        AstCmpMap *p1 = astCmpMap(a1, b1, 0, " ");
        AstCmpMap *p2 = astCmpMap(a2, b2, 0, " ");
        AstCmpMap *cm = astCmpMap(p1, p2, 1, " ");
        write_fixture(dir, "parpair_aligned_reduces", (AstMapping*)cm);
        cm = astAnnul(cm); p1 = astAnnul(p1); p2 = astAnnul(p2);
        a1 = astAnnul(a1); b1 = astAnnul(b1); a2 = astAnnul(a2); b2 = astAnnul(b2);
    }

    /* The negative half: the same shape with MathMap components, which merge
       with nothing, so every aligned series composition is irreducible and C
       makes no change. A helper that nominated the expanded members instead of
       composing them would still find nothing here, which is the point -- this
       pins the shape as untouched so a future change cannot quietly start
       rewriting it.

       Both compositions stay in range over the oracle's +/-1000 sampling
       interval; see the note on gen_negative_fixtures cmpmap-04 for why an
       overflowing expression cannot be recorded portably. */
    {
        const char *f1[] = {"y=x*x+1"};
        const char *i1[] = {"x=sqrt(y-1)"};
        const char *f2[] = {"y=3*x+2"};
        const char *i2[] = {"x=(y-2)/3"};
        AstMathMap *a1 = astMathMap(1, 1, 1, f1, 1, i1, " ");
        AstMathMap *b1 = astMathMap(1, 1, 1, f2, 1, i2, " ");
        AstMathMap *a2 = astMathMap(1, 1, 1, f2, 1, i2, " ");
        AstMathMap *b2 = astMathMap(1, 1, 1, f1, 1, i1, " ");
        AstCmpMap *p1 = astCmpMap(a1, b1, 0, " ");
        AstCmpMap *p2 = astCmpMap(a2, b2, 0, " ");
        AstCmpMap *cm = astCmpMap(p1, p2, 1, " ");
        write_negative_fixture(dir, "neg_parpair_aligned_irreducible", (AstMapping*)cm);
        cm = astAnnul(cm); p1 = astAnnul(p1); p2 = astAnnul(p2);
        a1 = astAnnul(a1); b1 = astAnnul(b1); a2 = astAnnul(a2); b2 = astAnnul(b2);
    }

    /* One aligned pair reduces and the other does not, which is C's "only
       proceed if at least one sub-pair genuinely simplified" condition
       (cmpmap.c:1362-1370) seen from the inside. */
    {
        const char *f1[] = {"y=x*x+1"};
        const char *i1[] = {"x=sqrt(y-1)"};
        AstZoomMap *a1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *a2 = astZoomMap(1, 5.0, " ");
        AstMathMap *b1 = astMathMap(1, 1, 1, f1, 1, i1, " ");
        AstMathMap *b2 = astMathMap(1, 1, 1, f1, 1, i1, " ");
        AstCmpMap *p1 = astCmpMap(a1, b1, 0, " ");
        AstCmpMap *p2 = astCmpMap(a2, b2, 0, " ");
        AstCmpMap *cm = astCmpMap(p1, p2, 1, " ");
        write_fixture(dir, "parpair_one_side_reduces", (AstMapping*)cm);
        cm = astAnnul(cm); p1 = astAnnul(p1); p2 = astAnnul(p2);
        a1 = astAnnul(a1); a2 = astAnnul(a2); b1 = astAnnul(b1); b2 = astAnnul(b2);
    }

    /* An inverted series CmpMap whose two components do not merge with each
       other. The question is whether astSimplify keeps the inversion as a flag
       with the components in their constructed order, or folds it into the
       structure by reversing them and inverting each. cap_cmpmap_01 shows C
       taking the first route on a sub-Mapping; these ask it directly, at the
       top level and one level down. */
    {
        double rf[] = {1.4e9, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        AstZoomMap *zm;
        AstCmpMap *cm;
        astSpecAdd(sm, "FRTOWV", 0, rf);
        zm = astZoomMap(1, 1.0e10, " ");
        cm = astCmpMap(sm, zm, 1, " ");
        astInvert(cm);
        write_fixture(dir, "cmpmap_inverted_lone", (AstMapping*)cm);
        cm = astAnnul(cm); sm = astAnnul(sm); zm = astAnnul(zm);
    }

    /* The same inverted CmpMap as a component of an outer series CmpMap, so it
       is reached as a nominee rather than as the whole Mapping. */
    {
        double rf[] = {1.4e9, 0.0};
        AstSpecMap *sm = astSpecMap(1, 0, " ");
        AstZoomMap *zm;
        AstCmpMap *inner, *cm;
        AstMathMap *mm;
        const char *fwd[] = {"y=2*x"};
        const char *inv[] = {"x=0.5*y"};
        astSpecAdd(sm, "FRTOWV", 0, rf);
        zm = astZoomMap(1, 1.0e10, " ");
        inner = astCmpMap(sm, zm, 1, " ");
        astInvert(inner);
        mm = astMathMap(1, 1, 1, fwd, 1, inv, " ");
        cm = astCmpMap(inner, mm, 1, " ");
        write_fixture(dir, "cmpmap_inverted_nested", (AstMapping*)cm);
        cm = astAnnul(cm); mm = astAnnul(mm); inner = astAnnul(inner);
        sm = astAnnul(sm); zm = astAnnul(zm);
    }

    /* A RateMap whose encapsulated Mapping only reduces when simplified: a
       series pair of ZoomMaps that fuse to one. C's MapMerge opens by
       simplifying that Mapping and rebuilding the RateMap around the result
       (ratemap.c:717-727). Wrapped in a series CmpMap so the RateMap is
       nominated from inside a list, which is the only place C runs that step. */
    {
        AstZoomMap *z1 = astZoomMap(2, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 3.0, " ");
        AstCmpMap *inner = astCmpMap(z1, z2, 1, " ");
        AstRateMap *rm = astRateMap(inner, 1, 1, " ");
        AstUnitMap *um = astUnitMap(1, " ");
        AstCmpMap *cm = astCmpMap(rm, um, 1, " ");
        write_fixture(dir, "rate_inner_reduce_series", (AstMapping*)cm);
        cm = astAnnul(cm); um = astAnnul(um); rm = astAnnul(rm);
        inner = astAnnul(inner); z1 = astAnnul(z1); z2 = astAnnul(z2);
    }

    /* The same RateMap on its own, which reaches the rebuild through the base
       Simplify rather than through a nomination inside a list. */
    {
        AstZoomMap *z1 = astZoomMap(2, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(2, 3.0, " ");
        AstCmpMap *inner = astCmpMap(z1, z2, 1, " ");
        AstRateMap *rm = astRateMap(inner, 1, 1, " ");
        write_fixture(dir, "rate_inner_reduce_lone", (AstMapping*)rm);
        rm = astAnnul(rm); inner = astAnnul(inner);
        z1 = astAnnul(z1); z2 = astAnnul(z2);
    }

    /* A lone zero-distortion PcdMap, which reaches the same replacement through
       the base Simplify rather than through a nomination inside a list. */
    {
        double pcdcen[] = {0.0, 0.0};
        AstPcdMap *pm = astPcdMap(0.0, pcdcen, " ");
        write_fixture(dir, "pcd_zero_disc_lone", (AstMapping*)pm);
        pm = astAnnul(pm);
    }

    /* Negative control: the same pair with the UnitMap already forward has
       nothing to clear. */
    {
        double pcdcen[] = {100.0, 100.0};
        AstUnitMap *um = astUnitMap(1, " ");
        AstPcdMap *pm = astPcdMap(0.001, pcdcen, " ");
        AstCmpMap *cm = astCmpMap(um, pm, 0, " ");
        write_negative_fixture(dir, "neg_unit_parallel_forward", (AstMapping*)cm);
        cm = astAnnul(cm); um = astAnnul(um); pm = astAnnul(pm);
    }

    /* A ChebyMap whose forward transformation holds a single T_1 term over
       bounds that are not the identity interval. A ChebyMap inherits PolyMap's
       MapMerge -- polymap.c:2439 is the only place the slot is filled -- whose
       replace-with-simpler half rebuilds an all-linear polynomial as a
       MatrixMap and a ShiftMap from coeff_f and power_f alone
       (polymap.c:3757-3850), never consulting the scale and offset that map
       the input onto [-1,1]. The reduction therefore changes the
       transformation: this pair simplifies to a ZoomMap of 2 where the
       ChebyMap gives 0.4x-2. These two are the reproduction for that finding
       and are deliberately not part of the Rust port's simplify corpus, which
       would have to reproduce the wrong Mapping to consume them. See
       docs/issues/c-library-quirks.md in the port. The control is the same
       ChebyMap with a T_2 term, which is not linear and which C leaves
       alone. */
    {
        double lbnd[] = {0.0};
        double ubnd[] = {10.0};
        double coeff_f[] = {2.0, 1.0, 1.0};
        AstChebyMap *cm = astChebyMap(1, 1, 1, coeff_f, 0, NULL,
                                      lbnd, ubnd, NULL, NULL, " ");
        write_fixture(dir, "cheby_linear_lone_reduce", (AstMapping*)cm);
        cm = astAnnul(cm);
    }
    {
        double lbnd[] = {0.0};
        double ubnd[] = {10.0};
        double coeff_f[] = {2.0, 1.0, 2.0};
        AstChebyMap *cm = astChebyMap(1, 1, 1, coeff_f, 0, NULL,
                                      lbnd, ubnd, NULL, NULL, " ");
        write_negative_fixture(dir, "neg_cheby_quadratic_no_reduce",
                               (AstMapping*)cm);
        cm = astAnnul(cm);
    }

    /* A WcsMap whose projection type is AST__WCSBAD, which MapMerge replaces
       with a UnitMap without reference to its neighbours (wcsmap.c:3095-3105).
       astWcsMap rejects AST__WCSBAD (wcsmap.c:5824), so the only way to build
       one is the way C itself does: read a native description with no Type
       value, which the loader turns into AST__WCSBAD (wcsmap.c:6052). The
       control is a TAN WcsMap, which is a genuine projection and survives. */
    {
        char path[512];
        AstChannel *chan;
        AstObject *obj;
        FILE *fd;

        snprintf(path, sizeof(path), "%s/wcs_unknown_lone_reduce.in", dir);
        fd = fopen(path, "w");
        if (fd) {
            fprintf(fd,
                    " Begin WcsMap \t# FITS-WCS sky projection\n"
                    "    Nin = 2 \t# Number of input coordinates\n"
                    " IsA Mapping \t# Mapping between coordinate systems\n"
                    " End WcsMap\n");
            fclose(fd);
            chan = astChannel(NULL, NULL, "SourceFile=%s", path);
            obj = astRead(chan);
            chan = astAnnul(chan);
            if (obj) {
                write_fixture(dir, "wcs_unknown_lone_reduce", (AstMapping*)obj);
                obj = astAnnul(obj);
            } else {
                fprintf(stderr, "ERROR: astRead failed for a WCSBAD WcsMap\n");
            }
            remove(path);
        } else {
            fprintf(stderr, "ERROR: cannot write %s\n", path);
        }
    }
    {
        AstWcsMap *wm = astWcsMap(2, AST__TAN, 1, 2, " ");
        write_negative_fixture(dir, "neg_wcs_tan_no_reduce", (AstMapping*)wm);
        wm = astAnnul(wm);
    }

    /* A series CmpMap nested eleven deep, each level holding a ZoomMap, which C
       collapses to a single ZoomMap. astCmpMap puts the accumulated nest in the
       first slot each time, so the tree is left-deep rather than a flat
       eleven-element series list. Nothing bounds the recursion depth in C --
       simplify_stackmaps grows with astGrow (cmpmap.c:3496) and exists only to
       detect a Mapping already being simplified. */
    {
        AstMapping *acc = (AstMapping *) astZoomMap(1, 2.0, " ");
        int i;
        for (i = 0; i < 11; i++) {
            AstMapping *z = (AstMapping *) astZoomMap(1, 1.5, " ");
            AstMapping *next = (AstMapping *) astCmpMap(acc, z, 1, " ");
            acc = astAnnul(acc);
            z = astAnnul(z);
            acc = next;
        }
        write_fixture(dir, "cap_deep_nest_zoom", acc);
        acc = astAnnul(acc);
    }

    /* A FrameSet whose single edge is a UnitMap. The edge simplifies to itself,
       so `simpler` stays 0 and Simplify returns astClone(this)
       (frameset.c:10226). The copy Simplify worked on is a deep one
       (frameset.c:10175), so no edge in the returned object carries an IsSimp
       stamp of its own, and Frame overrides GetIsSimple to zero
       (frame.c:5590) so the FrameSet itself dumps no IsSimp card either: the
       .simp is byte-identical to the .map. */
    {
        AstFrame *f1 = astFrame(2, "Domain=PIXEL");
        AstFrame *f2 = astFrame(2, "Domain=GRID");
        AstUnitMap *um = astUnitMap(2, " ");
        AstFrameSet *fs = astFrameSet(f1, " ");
        astAddFrame(fs, 1, um, f2);
        write_fixture(dir, "cap_frameset_nochange", (AstMapping*)fs);
        f1 = astAnnul(f1);
        f2 = astAnnul(f2);
        um = astAnnul(um);
        fs = astAnnul(fs);
    }

    /* A restricted simplify with one eligible and one ineligible component,
       one of them an inverted CmpMap. This one pins the tail of astSimplify_:
       AllowSimplify is cleared on the result and RestrictedSimplify with it,
       and a restricted simplify does not set IsSimple, so the .simp carries
       none of the three cards (mapping.c:24779-24788). The chain does collapse
       to a single ZoomMap -- the eligible ZoomMap's own MapMerge reaches across
       its ineligible neighbours -- so this pair does not gate the `simpler`
       reset; cap_restricted_no_eligible does. */
    {
        AstZoomMap *z1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(1, 3.0, " ");
        AstCmpMap *inner = astCmpMap(z1, z2, 1, " ");
        AstZoomMap *z3 = astZoomMap(1, 5.0, " ");
        AstCmpMap *outer;

        astInvert(inner);              /* the inverted CmpMap astMapList sees */
        gen_set_allow_simplify(z3);    /* eligible */
        outer = astCmpMap(inner, z3, 1, " ");
        gen_set_restricted_simplify(outer);

        write_fixture(dir, "cap_restricted_inverted", (AstMapping*)outer);
        z1 = astAnnul(z1);
        z2 = astAnnul(z2);
        z3 = astAnnul(z3);
        inner = astAnnul(inner);
        outer = astAnnul(outer);
    }

    /* The same tree with nothing eligible. astMapList still finds the inverted
       CmpMap and reports `simpler`, but the restricted mode discards that
       (cmpmap.c:3530) and the nominate loop skips every component
       (cmpmap.c:3569), so no merge follows and Simplify returns astClone(this)
       (cmpmap.c:3641): the swapped, inverted decomposition is thrown away and
       the tree comes back as supplied, less the ReSimp card that astSimplify
       clears on the result (mapping.c:24783). */
    {
        AstZoomMap *z1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(1, 3.0, " ");
        AstCmpMap *inner = astCmpMap(z1, z2, 1, " ");
        AstZoomMap *z3 = astZoomMap(1, 5.0, " ");
        AstCmpMap *outer;

        astInvert(inner);
        outer = astCmpMap(inner, z3, 1, " ");
        gen_set_restricted_simplify(outer);

        write_fixture(dir, "cap_restricted_no_eligible", (AstMapping*)outer);
        z1 = astAnnul(z1);
        z2 = astAnnul(z2);
        z3 = astAnnul(z3);
        inner = astAnnul(inner);
        outer = astAnnul(outer);
    }

    /* A restricted simplify that does rebuild, with an eligible component the
       rebuild keeps. The two adjacent eligible ZoomMaps merge, so `simpler`
       becomes 1 and the sequence is folded back into a CmpMap; the third
       eligible ZoomMap sits next to a MathMap and merges with nothing, so it
       survives into the result still carrying its AllowSimplify flag. C clears
       that flag on every component as it folds (cmpmap.c:3692), so no AlSimp
       card reaches the dump. */
    {
        const char *fwd[] = { "y = 2*x" };
        const char *inv[] = { "x = 0.5*y" };
        AstZoomMap *z1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(1, 3.0, " ");
        AstMathMap *math = astMathMap(1, 1, 1, fwd, 1, inv, " ");
        AstZoomMap *z4 = astZoomMap(1, 7.0, " ");
        AstCmpMap *left = astCmpMap(z1, z2, 1, " ");
        AstCmpMap *right = astCmpMap(math, z4, 1, " ");
        AstCmpMap *outer;

        gen_set_allow_simplify(z1);
        gen_set_allow_simplify(z2);
        gen_set_allow_simplify(z4);
        outer = astCmpMap(left, right, 1, " ");
        gen_set_restricted_simplify(outer);

        write_fixture(dir, "cap_restricted_component_flags", (AstMapping*)outer);
        z1 = astAnnul(z1);
        z2 = astAnnul(z2);
        z4 = astAnnul(z4);
        math = astAnnul(math);
        left = astAnnul(left);
        right = astAnnul(right);
        outer = astAnnul(outer);
    }

    /* A series CmpMap of ZoomMaps whose inner CmpMap carries Ident. C refuses
       to decompose that CmpMap (astMapList consults astDoNotSimplify,
       cmpmap.c:1154) and refuses to reach its Simplify slot (mapping.c:24764),
       both on the base rule that a set Ident means the user wants the Mapping
       left intact (mapping.c:1150). The inner CmpMap therefore survives with
       its two ZoomMaps unmerged, while the outer chain around it simplifies. */
    {
        AstZoomMap *z1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(1, 3.0, " ");
        AstZoomMap *z3 = astZoomMap(1, 5.0, " ");
        AstCmpMap *inner = astCmpMap(z1, z2, 1, " ");
        AstCmpMap *outer;

        astSetC(inner, "Ident", "keepme");
        outer = astCmpMap(inner, z3, 1, " ");

        write_fixture(dir, "cap_ident_cmpmap", (AstMapping*)outer);
        z1 = astAnnul(z1);
        z2 = astAnnul(z2);
        z3 = astAnnul(z3);
        inner = astAnnul(inner);
        outer = astAnnul(outer);
    }

    /* The negative control for the same rule: a FrameSet -- which is a Frame,
       and Frame overrides astDoNotSimplify to zero (frame.c:3511) -- carrying
       the same Ident. Its base-to-current Mapping is a CmpMap of two ZoomMaps,
       so if the Ident were honoured here the pair would come back unchanged. */
    {
        AstFrame *f1 = astFrame(1, "Domain=BASE");
        AstFrame *f2 = astFrame(1, "Domain=CURRENT");
        AstZoomMap *z1 = astZoomMap(1, 2.0, " ");
        AstZoomMap *z2 = astZoomMap(1, 3.0, " ");
        AstCmpMap *cm = astCmpMap(z1, z2, 1, " ");
        AstFrameSet *fs = astFrameSet(f1, " ");

        astAddFrame(fs, AST__BASE, cm, f2);
        astSetC(fs, "Ident", "keepme");

        write_fixture(dir, "cap_ident_frame", (AstMapping*)fs);
        f1 = astAnnul(f1);
        f2 = astAnnul(f2);
        z1 = astAnnul(z1);
        z2 = astAnnul(z2);
        cm = astAnnul(cm);
        fs = astAnnul(fs);
    }

    /* [ZoomMap, PermMap, parallel CmpMap, ZoomMap] in series. The CmpMap /
       PermMap swap (cmpmap.c:1816) brings a Mapping next to each outer
       ZoomMap, so which merge the nominate loop reaches first depends on the
       index the swap reports. */
    {
        if (!astOK) astClearStatus;
        int inperm[] = {2, 1};
        int outperm[] = {2, 1};
        const char *fwda[] = {"y = 2*x"};
        const char *inva[] = {"x = 0.5*y"};
        const char *fwdb[] = {"y = 3*x"};
        const char *invb[] = {"x = y/3"};
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, NULL, " ");
        AstMathMap *ma = astMathMap(1, 1, 1, fwda, 1, inva, " ");
        AstMathMap *mb = astMathMap(1, 1, 1, fwdb, 1, invb, " ");
        AstCmpMap *par = astCmpMap(ma, mb, 0, " ");
        AstZoomMap *za = astZoomMap(2, 2.0, " ");
        AstZoomMap *zb = astZoomMap(2, 3.0, " ");
        AstCmpMap *c1 = astCmpMap(za, pm, 1, " ");
        AstCmpMap *c2 = astCmpMap(c1, par, 1, " ");
        AstCmpMap *c3 = astCmpMap(c2, zb, 1, " ");
        write_fixture(dir, "cap_cmpperm_resume", (AstMapping*)c3);
        c3 = astAnnul(c3); c2 = astAnnul(c2); c1 = astAnnul(c1);
        za = astAnnul(za); zb = astAnnul(zb);
        par = astAnnul(par); pm = astAnnul(pm);
        ma = astAnnul(ma); mb = astAnnul(mb);
    }

    /* The same swap with the PermMap stored inverted, so permmap.c::MapMerge
       has a canonical rebuild available at the PermMap's own nomination
       (permmap.c:1362). C takes that rebuild first, clearing the inversion,
       and the swap then runs on the rebuilt PermMap. */
    {
        if (!astOK) astClearStatus;
        int inperm[] = {2, 1};
        int outperm[] = {2, 1};
        const char *fwda[] = {"y = 2*x"};
        const char *inva[] = {"x = 0.5*y"};
        const char *fwdb[] = {"y = 3*x"};
        const char *invb[] = {"x = y/3"};
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, NULL, " ");
        AstMathMap *ma = astMathMap(1, 1, 1, fwda, 1, inva, " ");
        AstMathMap *mb = astMathMap(1, 1, 1, fwdb, 1, invb, " ");
        AstCmpMap *par = astCmpMap(ma, mb, 0, " ");
        astInvert(pm);
        AstCmpMap *c1 = astCmpMap(pm, par, 1, " ");
        write_fixture(dir, "cap_cmpperm_resume_inv", (AstMapping*)c1);
        c1 = astAnnul(c1); par = astAnnul(par); pm = astAnnul(pm);
        ma = astAnnul(ma); mb = astAnnul(mb);
    }

    /* Two forward terms with identical powers for output 1: C's PolyMap
       MapMerge consolidation (polymap.c:3624) adds them, and chebymap.c
       inherits it. The third term is a T_3, so the polynomial is not linear and
       C does not go on to the replacement that reads Chebyshev coefficients as
       monomial (polymap.c:3747). In a series list so the ChebyMap is reached as
       a nominee. */
    {
        double lbnd[] = {0.0};
        double ubnd[] = {10.0};
        double coeff_f[] = {1.5, 1, 2,
                            2.5, 1, 2,
                            1.0, 1, 3};
        AstChebyMap *cm = astChebyMap(1, 1, 3, coeff_f, 0, NULL,
                                      lbnd, ubnd, NULL, NULL, " ");
        AstZoomMap *zm = astZoomMap(1, 2.0, " ");
        AstCmpMap *c1 = astCmpMap(zm, cm, 1, " ");
        write_fixture(dir, "cap_cheby_consolidate", (AstMapping*)c1);
        c1 = astAnnul(c1); zm = astAnnul(zm); cm = astAnnul(cm);
    }

    /* A 2-D Box whose base->current Mapping is a PermMap with a third output
       fed a constant. box.c:3762 gives that current-Frame axis equal limits,
       so the simplified Region is a 3-D Box pinned on axis 3. astMapRegion is
       the only public way to install a base->current Mapping in a Region;
       astBox would resolve a FrameSet to its current Frame
       (region.c:10730). */
    {
        if (!astOK) astClearStatus;
        AstFrame *base = astFrame(2, "Domain=PIXEL");
        AstFrame *curr = astFrame(3, "Domain=SLICE");
        int inperm[] = {1, 2};
        int outperm[] = {1, 2, -1};
        double consts[] = {5.0};
        AstPermMap *pm = astPermMap(2, inperm, 3, outperm, consts, " ");
        double lbnd[] = {0.0, 0.0};
        double ubnd[] = {10.0, 20.0};
        AstBox *box = astBox(base, 1, lbnd, ubnd, NULL, " ");
        void *reg = map_region_unsimplified(box, pm, curr);
        write_region_fixture(dir, "cap_box_permmap_const", reg);
        box = astAnnul(box); pm = astAnnul(pm);
        base = astAnnul(base); curr = astAnnul(curr);
    }

    /* The same construction with the PermMap feeding base axis 2 a constant
       that lies outside the Box. box.c:3809 then reports the slice as missing
       the Box, so the simplified Region is a NullRegion. */
    {
        if (!astOK) astClearStatus;
        AstFrame *base = astFrame(2, "Domain=PIXEL");
        AstFrame *curr = astFrame(2, "Domain=SLICE");
        int inperm[] = {1, -1};
        int outperm[] = {1, 2};
        double consts[] = {99.0};
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, consts, " ");
        double lbnd[] = {0.0, 0.0};
        double ubnd[] = {10.0, 20.0};
        AstBox *box = astBox(base, 1, lbnd, ubnd, NULL, " ");
        void *reg = map_region_unsimplified(box, pm, curr);
        write_region_fixture(dir, "cap_box_permmap_null", reg);
        box = astAnnul(box); pm = astAnnul(pm);
        base = astAnnul(base); curr = astAnnul(curr);
    }

    /* Negative control: both outputs are fed base axis 1, so the relation
       between the two Frames is not bi-directional. box.c:3818 abandons the
       branch, and abandoning it discards the parent simplification too, so the
       Region is returned exactly as supplied. */
    {
        if (!astOK) astClearStatus;
        AstFrame *base = astFrame(2, "Domain=PIXEL");
        AstFrame *curr = astFrame(2, "Domain=SLICE");
        int inperm[] = {1, 2};
        int outperm[] = {1, 1};
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, NULL, " ");
        double lbnd[] = {0.0, 0.0};
        double ubnd[] = {10.0, 20.0};
        AstBox *box = astBox(base, 1, lbnd, ubnd, NULL, " ");
        void *reg = map_region_unsimplified(box, pm, curr);
        write_negative_region_fixture(dir, "cap_box_permmap_nonbidi", reg);
        box = astAnnul(box); pm = astAnnul(pm);
        base = astAnnul(base); curr = astAnnul(curr);
    }

    /* There is no fixture for the bad-vertex guard at polygon.c:5400. A
       Polygon cannot hold a bad vertex (polygon.c:7131 rejects one), and
       astMapRegion refuses any Mapping that sends a defining point to
       AST__BAD (region.c:5546), so no public construction reaches the guard.
    */

    /* Polygon carrying an explicit uncertainty, mapped by a ZoomMap.
       polygon.c:5384 asks for the uncertainty in the *current* Frame, so the
       replacement Polygon's Unc block is the supplied Box scaled by the zoom
       factor, not the base-Frame Box. */
    {
        if (!astOK) astClearStatus;
        AstFrame *base = astFrame(2, "Domain=PIXEL");
        AstFrame *curr = astFrame(2, "Domain=ZOOMED");
        AstZoomMap *zm = astZoomMap(2, 4.0, " ");
        double ulb[] = {-0.1, -0.1}, uub[] = {0.1, 0.1};
        AstBox *unc = astBox(base, 1, ulb, uub, NULL, " ");
        double verts[] = { 0.0, 10.0, 10.0,  0.0,
                           0.0,  0.0, 20.0, 20.0 };
        AstPolygon *poly = astPolygon(base, 4, 4, verts, (AstRegion *) unc, " ");
        void *reg = map_region_unsimplified(poly, zm, curr);
        write_region_fixture(dir, "cap_poly_unc_frame", reg);
        poly = astAnnul(poly); unc = astAnnul(unc); zm = astAnnul(zm);
        base = astAnnul(base); curr = astAnnul(curr);
    }

    /* SimpVertices=0 with a Mapping that bows the edges. polygon.c:5415 meshes
       the mapped Polygon and asks the straight-edged replacement whether every
       mesh point lands on its boundary. The 0.005*x2*x2 term displaces the
       midpoint of the x1=0 edge by 0.5 from the chord, far outside the 0.01
       uncertainty, so astRegPins fails and C keeps the original. */
    {
        if (!astOK) astClearStatus;
        AstFrame *base = astFrame(2, "Domain=PIXEL");
        AstFrame *curr = astFrame(2, "Domain=BOWED");
        const char *fwd[] = {"y1=x1+0.005*x2*x2", "y2=x2"};
        const char *inv[] = {"x1=y1-0.005*y2*y2", "x2=y2"};
        AstMathMap *mm = astMathMap(2, 2, 2, fwd, 2, inv, " ");
        double ulb[] = {-0.01, -0.01}, uub[] = {0.01, 0.01};
        AstBox *unc = astBox(base, 1, ulb, uub, NULL, " ");
        double verts[] = { 0.0, 10.0, 10.0,  0.0,
                           0.0,  0.0, 20.0, 20.0 };
        AstPolygon *poly = astPolygon(base, 4, 4, verts, (AstRegion *) unc, " ");
        astSetI(poly, "SimpVertices", 0);
        void *reg = map_region_unsimplified(poly, mm, curr);
        write_region_fixture(dir, "cap_poly_bent_edges", reg);
        poly = astAnnul(poly); unc = astAnnul(unc); mm = astAnnul(mm);
        base = astAnnul(base); curr = astAnnul(curr);
    }

    /* The same bowed Mapping with SimpVertices left at its default 1.
       polygon.c:5415 is then skipped and C replaces the Polygon with its
       transformed vertices, bowed edges and all. The pair discriminates the
       SimpVertices branch from the vertex transform itself. */
    {
        if (!astOK) astClearStatus;
        AstFrame *base = astFrame(2, "Domain=PIXEL");
        AstFrame *curr = astFrame(2, "Domain=BOWED");
        const char *fwd[] = {"y1=x1+0.005*x2*x2", "y2=x2"};
        const char *inv[] = {"x1=y1-0.005*y2*y2", "x2=y2"};
        AstMathMap *mm = astMathMap(2, 2, 2, fwd, 2, inv, " ");
        double ulb[] = {-0.01, -0.01}, uub[] = {0.01, 0.01};
        AstBox *unc = astBox(base, 1, ulb, uub, NULL, " ");
        double verts[] = { 0.0, 10.0, 10.0,  0.0,
                           0.0,  0.0, 20.0, 20.0 };
        AstPolygon *poly = astPolygon(base, 4, 4, verts, (AstRegion *) unc, " ");
        void *reg = map_region_unsimplified(poly, mm, curr);
        write_region_fixture(dir, "cap_poly_bend_allowed", reg);
        poly = astAnnul(poly); unc = astAnnul(unc); mm = astAnnul(mm);
        base = astAnnul(base); curr = astAnnul(curr);
    }
}

/* ===== Fixtures adopted from the Rust port's parity work ===== */

/* WcsMap's swap search: a WcsMap next to a PermMap that cannot be swapped past
   it, so no reduction is available. */
static void gen_wcsmap_perm_fixtures(const char *dir) {
    printf("WcsMap/PermMap swap-refusal fixtures:\n");
    {
        /* Every PermMap output is a constant, so nothing connects through. */
        AstWcsMap *w = astWcsMap(2, AST__TAN, 1, 2, " ");
        int inperm[2] = { -1, -2 };
        int outperm[2] = { -1, -2 };
        double con[2] = { 0.25, 0.5 };
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, con, " ");
        AstCmpMap *cm = astCmpMap(w, pm, 1, " ");
        write_negative_fixture(dir, "neg_wcsmap_perm_allconst", (AstMapping *) cm);
        cm = astAnnul(cm);
        pm = astAnnul(pm);
        w = astAnnul(w);
    }
    {
        /* A PermMap on both sides of the WcsMap: swapping one would only move
           the obstruction to the other. */
        int perm[2] = { 2, 1 };
        AstPermMap *p1 = astPermMap(2, perm, 2, perm, NULL, " ");
        AstWcsMap *w = astWcsMap(2, AST__TAN, 1, 2, " ");
        AstCmpMap *inner = astCmpMap(p1, w, 1, " ");
        AstPermMap *p2 = astPermMap(2, perm, 2, perm, NULL, " ");
        AstCmpMap *cm = astCmpMap(inner, p2, 1, " ");
        write_negative_fixture(dir, "neg_wcsmap_perm_both_sides", (AstMapping *) cm);
        cm = astAnnul(cm);
        p2 = astAnnul(p2);
        inner = astAnnul(inner);
        w = astAnnul(w);
        p1 = astAnnul(p1);
    }
}

/* Region attributes that must survive a merge: a product of FillFactors, and a
   MeshSize that scales with the merged Region's axis count. */
static void gen_merge_attr_fixtures(const char *dir) {
    printf("Region merge-attribute fixtures:\n");
    {
        /* MeshSize is per-Region, and the merged Region's value has to be
           derived from both rather than inherited from one. */
        AstFrame *fa = astFrame(1, " ");
        double acen[1] = { 5.0 }, acor[1] = { 10.0 };
        AstBox *ba = astBox(fa, 0, acen, acor, NULL, "MeshSize=30");
        AstFrame *fb = astFrame(1, " ");
        double bcen[1] = { 0.0 }, bcor[1] = { 5.0 };
        AstBox *bb = astBox(fb, 0, bcen, bcor, NULL, "MeshSize=50");
        AstCmpMap *cm = astCmpMap(ba, bb, 0, " ");
        write_fixture(dir, "merge_box_meshsize_scaled", (AstMapping *) cm);
        cm = astAnnul(cm);
        bb = astAnnul(bb);
        fb = astAnnul(fb);
        ba = astAnnul(ba);
        fa = astAnnul(fa);
    }
    {
        /* Two FillFactors must combine as a product, not be taken from one
           side: the merged Region covers the product of the two fractions. */
        AstFrame *fa = astFrame(1, " ");
        double acen[1] = { 5.0 }, acor[1] = { 10.0 };
        AstBox *ba = astBox(fa, 0, acen, acor, NULL, "FillFactor=0.5");
        AstFrame *fb = astFrame(1, " ");
        double bcen[1] = { 0.0 }, bcor[1] = { 5.0 };
        AstBox *bb = astBox(fb, 0, bcen, bcor, NULL, "FillFactor=0.8");
        AstCmpMap *cm = astCmpMap(ba, bb, 0, " ");
        write_fixture(dir, "merge_box_fillfactor_product", (AstMapping *) cm);
        cm = astAnnul(cm);
        bb = astAnnul(bb);
        fb = astAnnul(fb);
        ba = astAnnul(ba);
        fa = astAnnul(fa);
    }
    {
        AstFrame *f1 = astFrame(1, " ");
        double lb1[1] = { 0.0 }, ub1[1] = { AST__BAD };
        AstInterval *i1 = astInterval(f1, lb1, ub1, NULL, "MeshSize=30");
        AstFrame *f2 = astFrame(1, " ");
        double lb2[1] = { -5.0 }, ub2[1] = { AST__BAD };
        AstInterval *i2 = astInterval(f2, lb2, ub2, NULL, "MeshSize=50");
        AstCmpMap *cm = astCmpMap(i1, i2, 0, " ");
        write_fixture(dir, "merge_interval_meshsize_scaled", (AstMapping *) cm);
        cm = astAnnul(cm);
        i2 = astAnnul(i2);
        f2 = astAnnul(f2);
        i1 = astAnnul(i1);
        f1 = astAnnul(f1);
    }
}

/* Default uncertainties.  Each fixture is the Region astGetUnc hands back for a
   Region that carries none, which is otherwise invisible: the default depends on
   the Region's class and bounds, and a port that returns the wrong shape or the
   wrong extent has nothing to be caught by. */
static void gen_defunc_fixtures(const char *dir) {
    printf("Default-uncertainty fixtures:\n");
    {
        /* A NullRegion's default is a zero-radius Circle, not a Box. */
        AstFrame *f = astFrame(2, " ");
        AstNullRegion *nr = astNullRegion(f, NULL, " ");
        AstRegion *unc = astGetUnc(nr, 1);
        write_fixture(dir, "defunc_nullregion_2d", (AstMapping *) unc);
        unc = astAnnul(unc);
        nr = astAnnul(nr);
        f = astAnnul(f);
    }
    {
        /* One bounded axis and one half-open axis: the bounded axis gets an
           extent-derived width, the open axis gets zero. */
        AstFrame *f = astFrame(2, " ");
        double lbnd[2] = { 5.0, 0.0 };
        double ubnd[2] = { 8.0, AST__BAD };
        AstInterval *iv = astInterval(f, lbnd, ubnd, NULL, " ");
        AstRegion *unc = astGetUnc(iv, 1);
        write_fixture(dir, "defunc_interval_unbounded", (AstMapping *) unc);
        unc = astAnnul(unc);
        iv = astAnnul(iv);
        f = astAnnul(f);
    }
    {
        /* When a component carries an explicit uncertainty the CmpRegion's
           default is that one, not a box round the whole thing. */
        AstFrame *f = astFrame(2, " ");
        double ucen[2] = { -0.25, -0.25 }, ucor[2] = { 0.25, 0.25 };
        AstBox *unc1 = astBox(f, 0, ucen, ucor, NULL, " ");
        double acen[2] = { 0.0, 0.0 }, acor[2] = { 10.0, 10.0 };
        AstBox *b1 = astBox(f, 0, acen, acor, (AstRegion *) unc1, " ");
        double bcen[2] = { 5.0, 5.0 }, bcor[2] = { 15.0, 15.0 };
        AstBox *b2 = astBox(f, 0, bcen, bcor, NULL, " ");
        AstCmpRegion *cr = astCmpRegion(b1, b2, AST__AND, " ");
        AstRegion *unc = astGetUnc(cr, 1);
        write_fixture(dir, "defunc_cmpregion_component_unc", (AstMapping *) unc);
        unc = astAnnul(unc);
        cr = astAnnul(cr);
        b2 = astAnnul(b2);
        b1 = astAnnul(b1);
        unc1 = astAnnul(unc1);
        f = astAnnul(f);
    }
    {
        /* A Prism's default is a Prism of its components' defaults. */
        AstFrame *f2 = astFrame(2, " ");
        double bcen[2] = { 0.0, 0.0 }, bcor[2] = { 4.0, 6.0 };
        AstBox *box = astBox(f2, 0, bcen, bcor, NULL, " ");
        AstFrame *f1 = astFrame(1, " ");
        double ilb[1] = { 1.0 }, iub[1] = { 9.0 };
        AstInterval *iv = astInterval(f1, ilb, iub, NULL, " ");
        AstPrism *pr = astPrism(box, iv, " ");
        AstRegion *unc = astGetUnc(pr, 1);
        write_fixture(dir, "defunc_prism_box_interval", (AstMapping *) unc);
        unc = astAnnul(unc);
        pr = astAnnul(pr);
        iv = astAnnul(iv);
        f1 = astAnnul(f1);
        box = astAnnul(box);
        f2 = astAnnul(f2);
    }
}

/* Circle/Ellipse re-fitting.  Simplifying a mapped Circle re-fits the shape in
   the new Frame, and the class of the result depends on what the Mapping did to
   the axes.  A port that always keeps the original class, or always degrades to
   a Frame, passes neither of the first two. */
static void gen_cefit_fixtures(const char *dir) {
    printf("Circle/Ellipse re-fit fixtures:\n");
    {
        /* Anisotropic scaling turns a circle into an ellipse.

           The centre is away from the origin deliberately.  Centred on it, with
           the scaling aligned to the axes, a defining coordinate of the fitted
           ellipse is a residual that should be zero and is in fact rounding
           noise around 1e-15 -- and the fit is numerical, so that noise moves
           when the compiler contracts a multiply and an add, which is enough to
           make astEqual call two otherwise identical Ellipses different.  A
           fixture should not rest on a value that means nothing. */
        AstFrame *f = astFrame(2, " ");
        double centre[2] = { 10.0, 20.0 };
        double radius[1] = { 3.0 };
        AstCircle *c = astCircle(f, 1, centre, radius, NULL, " ");
        double diag[2] = { 2.0, 5.0 };
        AstMatrixMap *mm = astMatrixMap(2, 2, 1, diag, " ");
        AstRegion *mapped = astMapRegion(c, (AstMapping *) mm, f);
        write_fixture(dir, "cefit_circle_to_ellipse", (AstMapping *) mapped);
        mapped = astAnnul(mapped);
        mm = astAnnul(mm);
        c = astAnnul(c);
        f = astAnnul(f);
    }
    {
        /* And a Mapping that equalises the axes turns an ellipse into a
           circle, so the degradation runs both ways. */
        AstFrame *f = astFrame(2, " ");
        double centre[2] = { 0.0, 0.0 };
        double p1[2] = { 5.0, 0.0 };
        double p2[2] = { 0.0, 1.0 };
        AstEllipse *e = astEllipse(f, 0, centre, p1, p2, NULL, " ");
        double diag[2] = { 0.2, 1.0 };
        AstMatrixMap *mm = astMatrixMap(2, 2, 1, diag, " ");
        AstRegion *mapped = astMapRegion(e, (AstMapping *) mm, f);
        write_fixture(dir, "cefit_ellipse_to_circle", (AstMapping *) mapped);
        mapped = astAnnul(mapped);
        mm = astAnnul(mm);
        e = astAnnul(e);
        f = astAnnul(f);
    }
    {
        /* An isotropic zoom keeps a circle a circle. */
        AstFrame *f = astFrame(2, " ");
        double centre[2] = { 1.0, 2.0 };
        double radius[1] = { 3.0 };
        AstCircle *c = astCircle(f, 1, centre, radius, NULL, " ");
        AstZoomMap *z = astZoomMap(2, 4.0, " ");
        AstRegion *mapped = astMapRegion(c, (AstMapping *) z, f);
        write_fixture(dir, "cefit_circle_conformal", (AstMapping *) mapped);
        mapped = astAnnul(mapped);
        z = astAnnul(z);
        c = astAnnul(c);
        f = astAnnul(f);
    }
    {
        /* A non-linear Mapping is required for the keep branch: any linear
           shear or rotation of a circle is still an ellipse, which the ellipse
           fit would validate. */
        AstFrame *f = astFrame(2, " ");
        double centre[2] = { 2.0, 2.0 };
        double radius[1] = { 1.0 };
        AstCircle *c = astCircle(f, 1, centre, radius, NULL, " ");
        const char *fwd[2] = { "y1 = x1 * x1", "y2 = x2" };
        const char *inv[2] = { "x1 = sqrt( y1 )", "x2 = y2" };
        AstMathMap *mm = astMathMap(2, 2, 2, fwd, 2, inv, " ");
        AstRegion *mapped = astMapRegion(c, (AstMapping *) mm, f);
        write_fixture(dir, "cefit_circle_nonconformal_keep",
                      (AstMapping *) mapped);
        mapped = astAnnul(mapped);
        mm = astAnnul(mm);
        c = astAnnul(c);
        f = astAnnul(f);
    }
}

/* RegBasePick: simplifying a Region whose Mapping splits cleanly on a subset of
   axes should keep the Region's class by picking the corresponding sub-region,
   rather than falling back to a bounding box or a bare Frame. */
static void gen_regbasepick_fixtures(const char *dir) {
    printf("RegBasePick fixtures:\n");
    {
        /* A clean axis swap: every axis is permuted, so the copy path runs. */
        AstFrame *f = astFrame(2, " ");
        double centre[2] = { 1.0, 2.0 };
        double radius[1] = { 0.5 };
        AstCircle *c = astCircle(f, 1, centre, radius, NULL, " ");
        int perm[2] = { 2, 1 };
        AstPermMap *pm = astPermMap(2, perm, 2, perm, NULL, " ");
        AstRegion *mapped = astMapRegion(c, (AstMapping *) pm, f);
        write_fixture(dir, "regbasepick_circle_permaxes", (AstMapping *) mapped);
        mapped = astAnnul(mapped);
        pm = astAnnul(pm);
        c = astAnnul(c);
        f = astAnnul(f);
    }
    {
        /* A CmpRegion over {0,1} and {2} with a Mapping that splits on the
           same boundary: each component is picked separately. */
        AstFrame *f3 = astFrame(3, " ");
        /* A Box cannot leave an axis unconstrained -- that is what an Interval
           with AST__BAD bounds is for -- so both components are Intervals: one
           bounding axes 1 and 2, one bounding axis 3. */
        double blb[3] = { 0.0, 0.0, AST__BAD }, bub[3] = { 4.0, 6.0, AST__BAD };
        AstInterval *box = astInterval(f3, blb, bub, NULL, " ");
        double ilb[3] = { AST__BAD, AST__BAD, 1.0 };
        double iub[3] = { AST__BAD, AST__BAD, 9.0 };
        AstInterval *iv = astInterval(f3, ilb, iub, NULL, " ");
        AstCmpRegion *cr = astCmpRegion(box, iv, AST__AND, " ");
        double diag[3] = { 2.0, 3.0, 5.0 };
        AstMatrixMap *mm = astMatrixMap(3, 3, 1, diag, " ");
        AstRegion *mapped = astMapRegion(cr, (AstMapping *) mm, f3);
        write_fixture(dir, "regbasepick_cmpregion_subset", (AstMapping *) mapped);
        mapped = astAnnul(mapped);
        mm = astAnnul(mm);
        cr = astAnnul(cr);
        iv = astAnnul(iv);
        box = astAnnul(box);
        f3 = astAnnul(f3);
    }
    {
        /* The same split, but the Region is a Prism, whose own pick has to run
           over its two components. */
        AstFrame *f2 = astFrame(2, " ");
        double bcen[2] = { 0.0, 0.0 }, bcor[2] = { 4.0, 6.0 };
        AstBox *box = astBox(f2, 0, bcen, bcor, NULL, " ");
        AstFrame *f1 = astFrame(1, " ");
        double ilb[1] = { 1.0 }, iub[1] = { 9.0 };
        AstInterval *iv = astInterval(f1, ilb, iub, NULL, " ");
        AstPrism *pr = astPrism(box, iv, " ");
        AstFrame *f3 = astFrame(3, " ");
        double diag[3] = { 2.0, 3.0, 5.0 };
        AstMatrixMap *mm = astMatrixMap(3, 3, 1, diag, " ");
        AstRegion *mapped = astMapRegion(pr, (AstMapping *) mm, f3);
        write_fixture(dir, "regbasepick_prism_subset", (AstMapping *) mapped);
        mapped = astAnnul(mapped);
        mm = astAnnul(mm);
        f3 = astAnnul(f3);
        pr = astAnnul(pr);
        iv = astAnnul(iv);
        f1 = astAnnul(f1);
        box = astAnnul(box);
        f2 = astAnnul(f2);
    }
}

/* astSetUnc: an uncertainty supplied by a caller is not stored as given.  It is
   remapped into the Region's own base Frame, re-centred, negated if it was
   unbounded, and has its FrameSet dropped when the Mapping is a UnitMap. */
static void gen_setunc_fixtures(const char *dir) {
    printf("astSetUnc fixtures:\n");
    {
        /* The uncertainty is defined in a zoomed Frame, so storing it has to
           remap it into the Box's base Frame and re-centre it. */
        AstFrame *f = astFrame(2, " ");
        double bcen[2] = { 0.0, 0.0 }, bcor[2] = { 10.0, 10.0 };
        AstBox *box = astBox(f, 0, bcen, bcor, NULL, " ");
        AstFrame *fz = astFrame(2, " ");
        double ucen[2] = { 0.0, 0.0 }, ucor[2] = { 0.5, 0.5 };
        AstBox *raw = astBox(fz, 0, ucen, ucor, NULL, " ");
        AstZoomMap *z = astZoomMap(2, 2.0, " ");
        AstRegion *unc = astMapRegion(raw, (AstMapping *) z, f);
        astSetUnc(box, unc);
        write_fixture(dir, "setunc_box_remapped_unc", (AstMapping *) box);
        unc = astAnnul(unc);
        z = astAnnul(z);
        raw = astAnnul(raw);
        fz = astAnnul(fz);
        box = astAnnul(box);
        f = astAnnul(f);
    }
    {
        /* A negated Box is unbounded as supplied, and has to be negated back
           to a bounded form before it can be stored. */
        AstFrame *f = astFrame(2, " ");
        double bcen[2] = { 0.0, 0.0 }, bcor[2] = { 10.0, 10.0 };
        AstBox *box = astBox(f, 0, bcen, bcor, NULL, " ");
        double ucen[2] = { -0.5, -0.5 }, ucor[2] = { 0.5, 0.5 };
        AstBox *unc = astBox(f, 0, ucen, ucor, NULL, " ");
        astNegate(unc);
        astSetUnc(box, unc);
        write_fixture(dir, "setunc_unbounded_negated", (AstMapping *) box);
        unc = astAnnul(unc);
        box = astAnnul(box);
        f = astAnnul(f);
    }
    {
        /* When the uncertainty's own base-to-current Mapping is a UnitMap its
           FrameSet carries nothing and is left out of the dump. */
        AstFrame *f = astFrame(2, " ");
        double bcen[2] = { 0.0, 0.0 }, bcor[2] = { 10.0, 10.0 };
        AstBox *box = astBox(f, 0, bcen, bcor, NULL, " ");
        double ucen[2] = { -0.5, -0.5 }, ucor[2] = { 0.5, 0.5 };
        AstBox *unc = astBox(f, 0, ucen, ucor, NULL, " ");
        astSetUnc(box, unc);
        write_fixture(dir, "setunc_unitmap_regionfs_omitted", (AstMapping *) box);
        unc = astAnnul(unc);
        box = astAnnul(box);
        f = astAnnul(f);
    }
}

/* Simplifying a Region simplifies its uncertainty too -- but only when the
   simplified uncertainty is stable across the Region.  A Mapping whose
   linearisation varies corner to corner must keep the unsimplified form, which
   is the branch a naive "always simplify the uncertainty" port gets wrong. */
static void gen_simpstab_fixtures(const char *dir) {
    printf("Uncertainty-stability fixtures:\n");
    {
        /* Linear: the uncertainty is the same everywhere, so it simplifies. */
        AstFrame *f = astFrame(2, " ");
        double ucen[2] = { -0.5, -0.5 }, ucor[2] = { 0.5, 0.5 };
        AstBox *unc = astBox(f, 0, ucen, ucor, NULL, " ");
        double bcen[2] = { 0.0, 0.0 }, bcor[2] = { 10.0, 10.0 };
        AstBox *box = astBox(f, 0, bcen, bcor, (AstRegion *) unc, " ");
        double shift[2] = { 3.0, -2.0 };
        AstZoomMap *z = astZoomMap(2, 2.0, " ");
        AstShiftMap *sm = astShiftMap(2, shift, " ");
        AstCmpMap *cm = astCmpMap(z, sm, 1, " ");
        AstRegion *mapped = astMapRegion(box, (AstMapping *) cm, f);
        write_fixture(dir, "simpstab_box_linear_unc", (AstMapping *) mapped);
        mapped = astAnnul(mapped);
        cm = astAnnul(cm);
        sm = astAnnul(sm);
        z = astAnnul(z);
        box = astAnnul(box);
        unc = astAnnul(unc);
        f = astAnnul(f);
    }
    {
        /* Non-linear: the uncertainty width changes across the Region, so the
           unsimplified form has to be kept. */
        AstFrame *f = astFrame(2, " ");
        double ucen[2] = { -0.5, -0.5 }, ucor[2] = { 0.5, 0.5 };
        AstBox *unc = astBox(f, 0, ucen, ucor, NULL, " ");
        double bcen[2] = { 1.0, 1.0 }, bcor[2] = { 10.0, 10.0 };
        AstBox *box = astBox(f, 0, bcen, bcor, (AstRegion *) unc, " ");
        const char *fwd[2] = { "y1 = x1 * x1", "y2 = x2" };
        const char *inv[2] = { "x1 = sqrt( y1 )", "x2 = y2" };
        AstMathMap *mm = astMathMap(2, 2, 2, fwd, 2, inv, " ");
        AstRegion *mapped = astMapRegion(box, (AstMapping *) mm, f);
        write_fixture(dir, "simpstab_box_nonlinear_unc", (AstMapping *) mapped);
        mapped = astAnnul(mapped);
        mm = astAnnul(mm);
        box = astAnnul(box);
        unc = astAnnul(unc);
        f = astAnnul(f);
    }
    {
        /* A PermMap slice, where nin differs from nout, so the uncertainty has
           to be re-centred on the sliced axes. */
        AstFrame *f3 = astFrame(3, " ");
        double ucen[3] = { -0.5, -0.5, -0.5 }, ucor[3] = { 0.5, 0.5, 0.5 };
        AstBox *unc = astBox(f3, 0, ucen, ucor, NULL, " ");
        double bcen[3] = { 0.0, 0.0, 0.0 }, bcor[3] = { 10.0, 10.0, 10.0 };
        AstBox *box = astBox(f3, 0, bcen, bcor, (AstRegion *) unc, " ");
        AstFrame *f2 = astFrame(2, " ");
        int inperm[3] = { 1, 2, -1 };
        int outperm[2] = { 1, 2 };
        double con[1] = { 0.0 };
        AstPermMap *pm = astPermMap(3, inperm, 2, outperm, con, " ");
        AstRegion *mapped = astMapRegion(box, (AstMapping *) pm, f2);
        write_fixture(dir, "simpstab_permmap_slice_unc", (AstMapping *) mapped);
        mapped = astAnnul(mapped);
        pm = astAnnul(pm);
        f2 = astAnnul(f2);
        box = astAnnul(box);
        unc = astAnnul(unc);
        f3 = astAnnul(f3);
    }
}

/* A CmpMap tree in which an inner node carries the simplified record and the
   outer node does not, so a dump has a nested IsSimp card.  Built by simplifying
   a tree and using the result as the fixture, which is the only way to get that
   shape: the tag is set by astSimplify, never by a constructor. */
static void gen_nested_tag_fixture(const char *dir) {
    printf("Nested IsSimp fixture:\n");
    {
        int inperm[2] = { 1, 0 };
        int outperm[2] = { 1, 1 };
        double con[1] = { 0.0 };
        AstPermMap *pm = astPermMap(2, inperm, 2, outperm, con, " ");
        double shift[1] = { 2.8653885237872601e-05 };
        AstShiftMap *sm = astShiftMap(1, shift, " ");
        AstCmpMap *par = astCmpMap(pm, sm, 0, " ");
        AstUnitMap *um = astUnitMap(3, " ");
        AstCmpMap *inner = astCmpMap(par, um, 1, " ");
        AstMapping *simp = astSimplify(inner);
        AstUnitMap *u3 = astUnitMap(3, " ");
        AstCmpMap *outer;

        astInvert(u3);
        outer = astCmpMap(u3, simp, 1, " ");
        write_fixture(dir, "cap_cmpmap_nested_tag", (AstMapping *) outer);
        outer = astAnnul(outer);
        u3 = astAnnul(u3);
        simp = astAnnul(simp);
        inner = astAnnul(inner);
        um = astAnnul(um);
        par = astAnnul(par);
        sm = astAnnul(sm);
        pm = astAnnul(pm);
    }
}

/* The LSST WCS as a scenario fixture: a real, large CmpMap rather than a shape
   built to reach one rule.  The input is a FrameSet, and what is interesting is
   its base-to-current Mapping, so the Mapping is extracted here and written as
   the fixture.  That keeps the pair in the corpus's usual .map/.simp form, so
   the harness needs no mode for reading a FrameSet and simplifying its Mapping
   instead. */
static void gen_lsst_scenario_fixture(const char *dir) {
    AstChannel *chan;
    AstFrameSet *fs;
    AstMapping *map;

    printf("LSST scenario fixture:\n");
    chan = astChannel(NULL, NULL, "SourceFile=ast_tester/fixtures/wcsconv/inputs/lsst.ast");
    fs = (AstFrameSet *) astRead(chan);
    chan = astAnnul(chan);
    if (!fs) {
        fprintf(stderr, "ERROR: could not read wcsconv/inputs/lsst.ast\n");
        return;
    }
    map = astGetMapping(fs, AST__BASE, AST__CURRENT);
    write_fixture(dir, "lsst", map);
    map = astAnnul(map);
    fs = astAnnul(fs);
}

int main(void) {
    int status = 0;
    const char *dir = "ast_tester/fixtures/simplify";

    astWatch(&status);
    astBegin;

    gen_audit_gap_fixtures(dir);
    gen_zoom_fixtures(dir);
    gen_win_fixtures(dir);
    gen_unit_fixtures(dir);
    gen_matrix_fixtures(dir);
    gen_cmpmap_fixtures(dir);
    gen_tranmap_fixtures(dir);
    gen_ratemap_fixtures(dir);
    gen_slamap_fixtures(dir);
    gen_specmap_fixtures(dir);
    gen_timemap_fixtures(dir);
    gen_permmap_fixtures(dir);
    gen_normmap_fixtures(dir);
    gen_unitnormmap_fixtures(dir);
    gen_grismmap_fixtures(dir);
    gen_wcsmap_fixtures(dir);
    gen_sphmap_fixtures(dir);
    gen_pcdmap_fixtures(dir);
    gen_chebymap_fixtures(dir);
    gen_switchmap_fixtures(dir);
    gen_tranmap_extra_fixtures(dir);
    gen_matrix_cascade_fixtures(dir);
    gen_slamap_extra_fixtures(dir);
    gen_slamap_4arg_fixtures(dir);
    gen_win_cascade_fixtures(dir);
    gen_selectormap_fixtures(dir);
    gen_switchmap_extra_fixtures(dir);
    gen_pcdmap_extra_fixtures(dir);
    gen_win_extra_cascade_fixtures(dir);
    /* DssMap: skipped — protected constructor, and DSS FitsChan encoding
       no longer creates DssMap objects (decomposes to WcsMap pipeline). */

    gen_lsst_scenario_fixture(dir);
    gen_defunc_fixtures(dir);
    gen_cefit_fixtures(dir);
    gen_regbasepick_fixtures(dir);
    gen_setunc_fixtures(dir);
    gen_simpstab_fixtures(dir);
    gen_nested_tag_fixture(dir);
    gen_wcsmap_perm_fixtures(dir);
    gen_merge_attr_fixtures(dir);

    gen_negative_fixtures(dir);
    gen_negative_fixtures_2(dir);
    gen_negative_fixtures_3(dir);
    gen_negative_fixtures_4(dir);
    gen_negative_fixtures_5(dir);
    gen_negative_fixtures_6(dir);
    gen_negative_fixtures_7(dir);
    gen_negative_fixtures_8(dir);
    gen_cascade_positives_2(dir);
    gen_cascade_positives_3(dir);
    gen_region_fixtures(dir);
    gen_negative_fixtures_9(dir);

    astEnd;

    if (!astOK) {
        fprintf(stderr, "AST error occurred (status=%d)\n", status);
        return 1;
    }

    printf("\nAll fixtures generated successfully.\n");
    return 0;
}
