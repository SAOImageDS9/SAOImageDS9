/*
*  Name:
*     testplotter.c
*
*  Purpose:
*     Plots a standard grid from the specified fits header file, using
*     the specified attributes, and sends postscript output to the
*     specified ps file.
*
*  Usage:
*     testplotter <fits file> <attr1> <attr2> <ps file> [<xlo> <ylo> <xhi> <yhi>]
*
*     The fourth argument specifies the output file or interactive device:
*     - File ending in ".pdf": generates a PDF file (pdfcairo device).
*     - File ending in ".png": generates a PNG file (pngcairo device).
*     - Exactly "aqt", "xwin", "xcairo", or "qtwidget": opens an interactive graphical window.
*     - Any other name: defaults to PostScript (psc device).
*
*  Description:
*     C port of the Fortran plotter.f utility, leveraging PLplot.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <plplot.h>
#include "ast.h"
#include "plplotutil.h"

int main(int argc, char **argv) {
    int status = 0;
    AstFitsChan *fc;
    AstFrameSet *fs;
    AstPlot *pl;
    char *file, *attr1, *attr2, *psfile;
    FILE *fp;
    /* Buffer must exceed 80 so the 80-char FITS card plus its line
       terminator fits in a single fgets() call.  An 81-byte buffer
       reads only 80 chars and leaves the newline in the stream, so
       the next call returns a lone newline that becomes an empty
       card — fatal for CONTINUE cards which must immediately follow
       their parent. */
    char card[256];
    double pbox[4];
    float gbox[4];
    float range, delta, asp;
    PLFLT dx1, dx2, dy1, dy2;
    int naxis1 = 100, naxis2 = 100;

    astWatch(&status);

    if (argc < 5) {
        printf("Usage: testplotter <fits file> <attrs> <fattrs> <ps file> [<xlo> <ylo> <xhi> <yhi>]\n");
        return 1;
    }

    file = argv[1];
    attr1 = argv[2]; /* Plot attributes */
    attr2 = argv[3]; /* FitsChan attributes */
    psfile = argv[4];

    /* Note: In plotter.f it uses argument 3 (attr2) for FitsChan */
    fc = astFitsChan(NULL, NULL, "%s", attr2);

    fp = fopen(file, "r");
    if (!fp) {
        printf("Failed to open file %s\n", file);
        return 1;
    }

    while (fgets(card, sizeof(card), fp) != NULL) {
        size_t len = strlen(card);
        while (len > 0 && (card[len-1] == '\n' || card[len-1] == '\r')) {
            card[--len] = '\0';
        }
        astPutFits(fc, card, 0);
    }
    fclose(fp);

    if (argc > 8) {
        pbox[0] = atof(argv[5]);
        pbox[1] = atof(argv[6]);
        pbox[2] = atof(argv[7]);
        pbox[3] = atof(argv[8]);
    } else {
        astClear(fc, "Card");
        if (astFindFits(fc, "NAXIS1", card, 1)) {
            sscanf(card + 10, "%d", &naxis1);
        } else {
            naxis1 = 100;
        }

        astClear(fc, "Card");
        if (astFindFits(fc, "NAXIS2", card, 1)) {
            sscanf(card + 10, "%d", &naxis2);
        } else {
            naxis2 = 100;
        }

        pbox[0] = 0.5;
        pbox[1] = 0.5;
        pbox[2] = (double) naxis1 + 0.5;
        pbox[3] = (double) naxis2 + 0.5;
    }

    astClear(fc, "Card");
    fs = astRead(fc);

    if (fs == AST__NULL) {
        printf("!!! No object read from FitsChan!!!\n");
        astAnnul(fc);
        return 1;
    }

    if (astOK) {
        remove(psfile);

        /* Setup PLplot device based on file extension or interactive name */
        (void)astPlSetupDevice( psfile );

        /* Initialize PLplot */
        c_plinit();

        /* Let PLplot establish its normal equal-scale plotting viewport, but
           use the actual viewport bounds as the graphics area available to
           AST. If we instead hand AST the full 0..1 world window, it places
           exterior labels into the part of the world that PLplot clips away. */
        c_plenv(0.0, 1.0, 0.0, 1.0, 1, -2);
        c_plgvpd(&dx1, &dx2, &dy1, &dy2);

        gbox[0] = (float) dx1;
        gbox[2] = (float) dx2;
        gbox[1] = (float) dy1;
        gbox[3] = (float) dy2;

        range = gbox[2] - gbox[0];
        gbox[0] = gbox[0] + 0.05f * range;
        gbox[2] = gbox[2] - 0.05f * range;

        range = gbox[3] - gbox[1];
        gbox[1] = gbox[1] + 0.05f * range;
        gbox[3] = gbox[3] - 0.05f * range;

        asp = (float) ((pbox[3] - pbox[1]) / (pbox[2] - pbox[0]));
        if (asp < 0.05f || asp > 20.0f) asp = 1.0f;

        if (asp > 1.0f) {
            delta = 0.5f * ((gbox[2] - gbox[0]) - (gbox[3] - gbox[1]) / asp);
            gbox[2] = gbox[2] - delta;
            gbox[0] = gbox[0] + delta;
        } else {
            delta = 0.5f * ((gbox[3] - gbox[1]) - asp * (gbox[2] - gbox[0]));
            gbox[3] = gbox[3] - delta;
            gbox[1] = gbox[1] + delta;
        }

        pl = astPlot(fs, gbox, pbox, "title=A FITS test");
        astSet(pl, "%s", attr1);

        astGrid(pl);

        astAnnul(pl);
        c_plend();
    }

    if (fs != AST__NULL) astAnnul(fs);
    if (fc != AST__NULL) astAnnul(fc);

    return status == 0 ? 0 : 1;
}
