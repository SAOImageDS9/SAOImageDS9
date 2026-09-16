#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <plplot.h>
#include "ast.h"
#include "grf.h"

int main() {
    float alpha, beta;
    float xb[4], yb[4];
    int status = 0;
    
    astWatch(&status);
    
    // Initialize PLplot
    c_plsdev("null");
    c_plinit();
    c_plenv(0.0, 1.0, 0.0, 1.0, 1, -2);
    
    // Initialize plotting
    AstFitsChan *fc = astFitsChan(NULL, NULL, "");
    astPutFits(fc, "NAXIS1  = 100", 0);
    astPutFits(fc, "NAXIS2  = 100", 0);
    astClear(fc, "Card");
    AstFrameSet *fs = astRead(fc);

    float gbox[4] = { 0.05, 0.05, 0.95, 0.95 };
    double pbox[4] = { 0.5, 0.5, 100.5, 100.5 };
    
    AstPlot *pl = astPlot(fs, gbox, pbox, "title=A FITS test");

    // The GRF context should now be active
    int ok = astGTxExt("-10.0", 0.5f, 0.5f, "BC", 0.0f, 1.0f, xb, yb);
    if (ok) {
        printf("astGTxExt(\"-10.0\", x=0.5, y=0.5, BC, up=(0,1)):\n");
        for(int i=0; i<4; i++) {
            printf("  [%d]: %f, %f\n", i, xb[i], yb[i]);
        }
    } else {
        printf("astGTxExt failed\n");
    }

    astAnnul(pl);
    astAnnul(fs);
    astAnnul(fc);
    return 0;
}