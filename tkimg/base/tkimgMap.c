/*
 *  tkimgMap.c
 */

#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include "tkimg.h"

#define IMG_MIN(a,b) ((a)<(b)? (a): (b))
#define IMG_MAX(a,b) ((a)>(b)? (a): (b))
#define IMG_CLAMP(val,minVal,maxVal) (IMG_MAX (minVal, IMG_MIN (val, maxVal)))

/* The size of the histogram and lookup tables for Automatic Gain Control */
#define IMG_HISTOGRAM_SIZE  256
#define IMG_HISTOGRAM_SCALE 255.0

/* This function determines at runtime, whether we are on an Intel (little-endian) system. */

int tkimg_IsIntel (void)
{
    unsigned long val = 513;
    /* On Intel (little-endian) systems this value is equal to "\01\02\00\00".
       On big-endian systems this value equals "\00\00\02\01" */
    return memcmp(&val, "\01\02", 2) == 0;
}

void tkimg_CreateGammaTable (double gammaVal, double *gammaTable)
{
    int i;

    for (i = 0; i < IMG_GAMMA_TABLE_SIZE - 1; i++) {
        gammaTable[i] = pow ((double) i / (double) (IMG_GAMMA_TABLE_SIZE - 2),
                        1.0 / gammaVal);
    }
    gammaTable[IMG_GAMMA_TABLE_SIZE - 1] = 1.0;
    return;
}

/* Given a pixel value in Float format, "valIn", and a gamma-correction
 * lookup table, "tab", macro "gcorrectFloat" returns the gamma-corrected
 * pixel value in "valOut".
 */

double tkimg_LookupGammaTable (double val, const double *gammaTable)
{
    int     gc_i;
    double  gc_t;
    gc_t = (val) * (IMG_GAMMA_TABLE_SIZE - 2);
    gc_i = gc_t;
    gc_t -= gc_i;
    return gammaTable[gc_i] * (1.0 - gc_t) + gammaTable[gc_i+1] * gc_t;
}

void tkimg_UShortToUByte (int n, const unsigned short *shortIn,
                          const double *gammaTable, unsigned char *ubOut)
{
    const unsigned short *src, *stop;
    unsigned char *ubdest;
    double ftmp;
    int    itmp;

    src  = shortIn;
    stop = shortIn + n;
    ubdest = ubOut;

    /* Handle a gamma value of 1.0 (gammaTable == NULL) as a special case.
       Quite nice speed improvement for the maybe most used case. */
    if (gammaTable) {
        while (src < stop) {
            ftmp = *src / 65535.0;
            ftmp = IMG_CLAMP (ftmp, 0.0, 1.0);
            ftmp = tkimg_LookupGammaTable (ftmp, gammaTable);
            itmp = (int)(ftmp * 255.0 + 0.5);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    } else {
        while (src < stop) {
            itmp = (int)(*src / 256);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    }
    return;
}

void tkimg_ShortToUByte (int n, const short *shortIn,
                         const double *gammaTable, unsigned char *ubOut)
{
    const short *src, *stop;
    unsigned char *ubdest;
    double ftmp;
    int    itmp;

    src = shortIn;
    stop = shortIn + n;
    ubdest = ubOut;

    /* Handle a gamma value of 1.0 (gammaTable == NULL) as a special case.
       Quite nice speed improvement for the maybe most used case. */
    if (gammaTable) {
        while (src < stop) {
            /* Map short values from the range [MIN_SHORT .. MAX_SHORT] to
               the range [0.0 .. 1.0], do gamma correction and then map into
               the displayable range [0 .. 255]. */
            ftmp = (*src / 65535.0  + 0.5);
            ftmp = tkimg_LookupGammaTable (ftmp, gammaTable);
            itmp = (int)(ftmp * 255.0 + 0.5);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    } else {
        while (src < stop) {
            /* Map short values from the range [MIN_SHORT .. MAX_SHORT] to
               the displayable range [0 .. 255]. */
            itmp = (int)(*src * 255.0 / 65535.0  + 128.0);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    }
    return;
}

void tkimg_UIntToUByte (int n, const unsigned int *intIn,
                        const double *gammaTable, unsigned char *ubOut)
{
    const unsigned int *src, *stop;
    unsigned char *ubdest;
    double ftmp;
    int    itmp;

    src  = intIn;
    stop = intIn + n;
    ubdest = ubOut;

    /* Handle a gamma value of 1.0 (gammaTable == NULL) as a special case.
       Quite nice speed improvement for the maybe most used case. */
    if (gammaTable) {
        while (src < stop) {
            ftmp = (double)*src / 4294967295.0;
            ftmp = IMG_CLAMP (ftmp, 0.0, 1.0);
            ftmp = tkimg_LookupGammaTable (ftmp, gammaTable);
            itmp = (int)(ftmp * 255.0 + 0.5);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    } else {
        while (src < stop) {
            itmp = (int)(*src / 16777216);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    }
    return;
}

void tkimg_IntToUByte (int n, const int *intIn,
                       const double *gammaTable, unsigned char *ubOut)
{
    const int *src, *stop;
    unsigned char *ubdest;
    double ftmp;
    int    itmp;

    src = intIn;
    stop = intIn + n;
    ubdest = ubOut;

    /* Handle a gamma value of 1.0 (gammaTable == NULL) as a special case.
       Quite nice speed improvement for the maybe most used case. */
    if (gammaTable) {
        while (src < stop) {
            /* Map int values from the range [MIN_INT .. MAX_INT] to
               the range [0.0 .. 1.0], do gamma correction and then map into
               the displayable range [0 .. 255]. */
            ftmp = (double)*src / 4294967295.0  + 0.5;
            ftmp = tkimg_LookupGammaTable (ftmp, gammaTable);
            itmp = (int)(ftmp * 255.0 + 0.5);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    } else {
        while (src < stop) {
            /* Map int values from the range [MIN_INT .. MAX_INT] to
               the displayable range [0 .. 255]. */
            itmp = (int)(*src * 16777215.0 / 4294967295.0  + 128.0);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    }
    return;
}

/* If no gamma correction is needed (i.e. gamma == 1.0), specify NULL for
 * parameter gammaTable.
 */
void tkimg_FloatToUByte (int n, const float *floatIn,
                         const double *gammaTable, unsigned char *ubOut)
{
    const float *src, *stop;
    unsigned char *ubdest;
    double ftmp;
    int    itmp;

    src    = floatIn;
    stop   = floatIn + n;
    ubdest = ubOut;

    /* Handle a gamma value of 1.0 (gammaTable == NULL) as a special case.
       Quite nice speed improvement for the maybe most used case. */
    if (gammaTable) {
        while (src < stop) {
            ftmp = IMG_CLAMP (*src, 0.0, 1.0);
            ftmp = tkimg_LookupGammaTable (ftmp, gammaTable);
            itmp = (int)(ftmp * 255.0 + 0.5);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    } else {
        while (src < stop) {
            itmp = (int)(*src * 255.0 + 0.5);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    }
    return;
}

/* If no gamma correction is needed (i.e. gamma == 1.0), specify NULL for
 * parameter gammaTable.
 */
void tkimg_DoubleToUByte (int n, const double *doubleIn,
                          const double *gammaTable, unsigned char *ubOut)
{
    const double *src, *stop;
    unsigned char *ubdest;
    double ftmp;
    int    itmp;

    src    = doubleIn;
    stop   = doubleIn + n;
    ubdest = ubOut;

    /* Handle a gamma value of 1.0 (gammaTable == NULL) as a special case.
       Quite nice speed improvement for the maybe most used case. */
    if (gammaTable) {
        while (src < stop) {
            ftmp = IMG_CLAMP (*src, 0.0, 1.0);
            ftmp = tkimg_LookupGammaTable (ftmp, gammaTable);
            itmp = (int)(ftmp * 255.0 + 0.5);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    } else {
        while (src < stop) {
            itmp = (int)(*src * 255.0 + 0.5);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    }
    return;
}

int tkimg_ReadUByteRow (tkimg_Stream *handle, unsigned char *pixels, int nBytes)
{
#if DEBUG_READ == 1
    printf ("Reading %d UBytes\n", nBytes); fflush (stdout);
#endif
    if (nBytes != (int)tkimg_Read(handle, (char *)pixels, nBytes)) {
        return 0;
    }
    return 1;
}

int tkimg_ReadUShortRow (tkimg_Stream *handle, unsigned short *pixels, int nShorts,
                         char *buf, int swapBytes)
{
    int i;
    char *bufPtr = buf;
    unsigned short *mPtr = pixels;

#if DEBUG_READ == 1
    printf ("Reading %d UShorts\n", nShorts); fflush (stdout);
#endif
    if (2 * nShorts != (int)tkimg_Read(handle, buf, 2 * nShorts)) {
        return 0;
    }

    if (swapBytes) {
        for (i=0; i<nShorts; i++) {
            ((char *)mPtr)[0] = bufPtr[1];
            ((char *)mPtr)[1] = bufPtr[0];
            mPtr++;
            bufPtr += 2;
        }
    } else {
        for (i=0; i<nShorts; i++) {
            ((char *)mPtr)[0] = bufPtr[0];
            ((char *)mPtr)[1] = bufPtr[1];
            mPtr++;
            bufPtr += 2;
        }
    }
    return 1;
}

int tkimg_ReadShortRow (tkimg_Stream *handle, short *pixels, int nShorts,
                        char *buf, int swapBytes)
{
    int i;
    char *bufPtr = buf;
    short *mPtr = pixels;

#if DEBUG_READ == 1
    printf ("Reading %d Shorts\n", nShorts); fflush (stdout);
#endif
    if (2 * nShorts != (int)tkimg_Read(handle, buf, 2 * nShorts)) {
        return 0;
    }

    if (swapBytes) {
        for (i=0; i<nShorts; i++) {
            ((char *)mPtr)[0] = bufPtr[1];
            ((char *)mPtr)[1] = bufPtr[0];
            mPtr++;
            bufPtr += 2;
        }
    } else {
        for (i=0; i<nShorts; i++) {
            ((char *)mPtr)[0] = bufPtr[0];
            ((char *)mPtr)[1] = bufPtr[1];
            mPtr++;
            bufPtr += 2;
        }
    }
    return 1;
}

int tkimg_ReadUIntRow (tkimg_Stream *handle, unsigned int *pixels, int nInts,
                       char *buf, int swapBytes)
{
    int i;
    char *bufPtr = buf;
    unsigned int *mPtr = pixels;

#if DEBUG_READ == 1
    printf ("Reading %d UInts\n", nInts); fflush (stdout);
#endif
    if (4 * nInts != (int)tkimg_Read(handle, buf, 4 * nInts)) {
        return 0;
    }

    if (swapBytes) {
        for (i=0; i<nInts; i++) {
            ((char *)mPtr)[0] = bufPtr[3];
            ((char *)mPtr)[1] = bufPtr[2];
            ((char *)mPtr)[2] = bufPtr[1];
            ((char *)mPtr)[3] = bufPtr[0];
            mPtr++;
            bufPtr += 4;
        }
    } else {
        for (i=0; i<nInts; i++) {
            ((char *)mPtr)[0] = bufPtr[0];
            ((char *)mPtr)[1] = bufPtr[1];
            ((char *)mPtr)[2] = bufPtr[2];
            ((char *)mPtr)[3] = bufPtr[3];
            mPtr++;
            bufPtr += 4;
        }
    }
    return 1;
}

int tkimg_ReadIntRow (tkimg_Stream *handle, int *pixels, int nInts,
                      char *buf, int swapBytes)
{
    int i;
    char *bufPtr = buf;
    int  *mPtr = pixels;

#if DEBUG_READ == 1
    printf ("Reading %d Ints\n", nInts); fflush (stdout);
#endif
    if (4 * nInts != (int)tkimg_Read(handle, buf, 4 * nInts)) {
        return 0;
    }

    if (swapBytes) {
        for (i=0; i<nInts; i++) {
            ((char *)mPtr)[0] = bufPtr[3];
            ((char *)mPtr)[1] = bufPtr[2];
            ((char *)mPtr)[2] = bufPtr[1];
            ((char *)mPtr)[3] = bufPtr[0];
            mPtr++;
            bufPtr += 4;
        }
    } else {
        for (i=0; i<nInts; i++) {
            ((char *)mPtr)[0] = bufPtr[0];
            ((char *)mPtr)[1] = bufPtr[1];
            ((char *)mPtr)[2] = bufPtr[2];
            ((char *)mPtr)[3] = bufPtr[3];
            mPtr++;
            bufPtr += 4;
        }
    }
    return 1;
}

int tkimg_ReadFloatRow (tkimg_Stream *handle, float *pixels, int nFloats,
                        char *buf, int swapBytes)
{
    int i;
    char *bufPtr = buf;
    float *mPtr = pixels;

#if DEBUG_READ == 1
    printf ("Reading %d floats\n", nFloats); fflush (stdout);
#endif
    if (4 * nFloats != (int)tkimg_Read(handle, buf, 4 * nFloats)) {
        return 0;
    }

    if (swapBytes) {
        for (i=0; i<nFloats; i++) {
            ((char *)mPtr)[0] = bufPtr[3];
            ((char *)mPtr)[1] = bufPtr[2];
            ((char *)mPtr)[2] = bufPtr[1];
            ((char *)mPtr)[3] = bufPtr[0];
            mPtr++;
            bufPtr += 4;
        }
    } else {
        for (i=0; i<nFloats; i++) {
            ((char *)mPtr)[0] = bufPtr[0];
            ((char *)mPtr)[1] = bufPtr[1];
            ((char *)mPtr)[2] = bufPtr[2];
            ((char *)mPtr)[3] = bufPtr[3];
            mPtr++;
            bufPtr += 4;
        }
    }
    return 1;
}

int tkimg_ReadDoubleRow (tkimg_Stream *handle, double *pixels, int nDoubles,
                         char *buf, int swapBytes)
{
    int i;
    char *bufPtr = buf;
    double *mPtr = pixels;

#if DEBUG_READ == 1
    printf ("Reading %d doubles\n", nDoubles); fflush (stdout);
#endif
    if (8 * nDoubles != (int)tkimg_Read(handle, buf, 8 * nDoubles)) {
        return 0;
    }

    if (swapBytes) {
        for (i=0; i<nDoubles; i++) {
            ((char *)mPtr)[0] = bufPtr[7];
            ((char *)mPtr)[1] = bufPtr[6];
            ((char *)mPtr)[2] = bufPtr[5];
            ((char *)mPtr)[3] = bufPtr[4];
            ((char *)mPtr)[4] = bufPtr[3];
            ((char *)mPtr)[5] = bufPtr[2];
            ((char *)mPtr)[6] = bufPtr[1];
            ((char *)mPtr)[7] = bufPtr[0];
            mPtr++;
            bufPtr += 8;
        }
    } else {
        for (i=0; i<nDoubles; i++) {
            ((char *)mPtr)[0] = bufPtr[0];
            ((char *)mPtr)[1] = bufPtr[1];
            ((char *)mPtr)[2] = bufPtr[2];
            ((char *)mPtr)[3] = bufPtr[3];
            ((char *)mPtr)[4] = bufPtr[4];
            ((char *)mPtr)[5] = bufPtr[5];
            ((char *)mPtr)[6] = bufPtr[6];
            ((char *)mPtr)[7] = bufPtr[7];
            mPtr++;
            bufPtr += 8;
        }
    }
    return 1;
}

int tkimg_ReadUByteFile (tkimg_Stream *handle, unsigned char *buf, int width, int height,
                         int nchan, int verbose, int findMinMax,
                         double *minVals, double *maxVals)
{
    int x, y, c;
    unsigned char *bufPtr = buf;

#if DEBUG_READ == 1
    printf ("readUByteFile: Width=%d Height=%d nchan=%d findMinMax=%s\n",
             width, height, nchan, findMinMax? "yes": "no");
        fflush (stdout);
#endif
    for (c=0; c<nchan; c++) {
        minVals[c] =  DBL_MAX;
        maxVals[c] = -DBL_MAX;
    }
    for (y=0; y<height; y++) {
        if (! tkimg_ReadUByteRow (handle, bufPtr, nchan * width)) {
            return 0;
        }
        if (findMinMax) {
            for (x=0; x<width; x++) {
                for (c=0; c<nchan; c++) {
                    if (*bufPtr > maxVals[c]) maxVals[c] = *bufPtr;
                    if (*bufPtr < minVals[c]) minVals[c] = *bufPtr;
                    bufPtr++;
                }
            }
        } else {
            bufPtr += nchan * width;
        }
    }
    if (verbose && findMinMax) {
        printf ("\tMinimum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %u", (unsigned char)minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %u", (unsigned char)maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    return 1;
}

int tkimg_ReadUShortFile (tkimg_Stream *handle, unsigned short *buf, int width, int height,
                          int nchan, int swapBytes, int verbose, int findMinMax,
                          double *minVals, double *maxVals, double saturation)
{
    int x, y, c;
    unsigned short value;
    char *line;
    unsigned short *bufPtr = buf;

#if DEBUG_READ == 1
    printf ("readUShortFile: Width=%d Height=%d nchan=%d swapBytes=%s findMinMax=%s\n",
             width, height, nchan, swapBytes? "yes": "no", findMinMax? "yes": "no"); fflush (stdout);
#endif
    if (saturation <= 0.0) {
        saturation = 65535.0;
    }
    for (c=0; c<nchan; c++) {
        minVals[c] =  DBL_MAX;
        maxVals[c] = -DBL_MAX;
    }
    line = (char *)ckalloc (sizeof (unsigned short) * nchan * width);

    for (y=0; y<height; y++) {
        if (! tkimg_ReadUShortRow (handle, bufPtr, nchan * width, line, swapBytes)) {
            return 0;
        }
        if (findMinMax) {
            for (x=0; x<width; x++) {
                for (c=0; c<nchan; c++) {
                    value = IMG_MIN (*bufPtr, saturation);
                    if (value > maxVals[c]) maxVals[c] = value;
                    if (value < minVals[c]) minVals[c] = value;
                    bufPtr++;
                }
            }
        } else {
            bufPtr += nchan * width;
        }
    }
    if (verbose && findMinMax) {
        printf ("\tMinimum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %u", (unsigned short)minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %u", (unsigned short)maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    ckfree (line);
    return 1;
}

int tkimg_ReadUIntFile (tkimg_Stream *handle, unsigned int *buf, int width, int height,
                        int nchan, int swapBytes, int verbose, int findMinMax,
                        double *minVals, double *maxVals, double saturation)
{
    int x, y, c;
    unsigned int value;
    char *line;
    unsigned int *bufPtr = buf;

#if DEBUG_READ == 1
    printf ("readUIntFile: Width=%d Height=%d nchan=%d swapBytes=%s findMinMax=%s\n",
             width, height, nchan, swapBytes? "yes": "no", findMinMax? "yes": "no"); fflush (stdout);
#endif
    if (saturation <= 0.0) {
        saturation = 4294967295.0;
    }
    for (c=0; c<nchan; c++) {
        minVals[c] =  DBL_MAX;
        maxVals[c] = -DBL_MAX;
    }
    line = (char *)ckalloc (sizeof (unsigned int) * nchan * width);

    for (y=0; y<height; y++) {
        if (! tkimg_ReadUIntRow (handle, bufPtr, nchan * width, line, swapBytes)) {
            return 0;
        }
        if (findMinMax) {
            for (x=0; x<width; x++) {
                for (c=0; c<nchan; c++) {
                    value = IMG_MIN (*bufPtr, saturation);
                    if (value > maxVals[c]) maxVals[c] = value;
                    if (value < minVals[c]) minVals[c] = value;
                    bufPtr++;
                }
            }
        } else {
            bufPtr += nchan * width;
        }
    }
    if (verbose && findMinMax) {
        printf ("\tMinimum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %u", (unsigned int)minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %u", (unsigned int)maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    ckfree (line);
    return 1;
}

int tkimg_ReadFloatFile (tkimg_Stream *handle, float *buf, int width, int height,
                         int nchan, int swapBytes, int verbose, int findMinMax,
                         double *minVals, double *maxVals, double saturation)
{
    int x, y, c;
    float value;
    char  *line;
    float *bufPtr = buf;

#if DEBUG_READ == 1
    printf ("readFloatFile: Width=%d Height=%d nchan=%d swapBytes=%s findMinMax=%s\n",
             width, height, nchan, swapBytes? "yes": "no", findMinMax? "yes": "no"); fflush (stdout);
#endif
    if (saturation <= 0.0) {
        saturation = DBL_MAX;
    }
    for (c=0; c<nchan; c++) {
        minVals[c] =  DBL_MAX;
        maxVals[c] = -DBL_MAX;
    }
    line = (char *)ckalloc (sizeof (float) * nchan * width);

    for (y=0; y<height; y++) {
        if (! tkimg_ReadFloatRow (handle, bufPtr, nchan * width, line, swapBytes)) {
            return 0;
        }
        if (findMinMax) {
            for (x=0; x<width; x++) {
                for (c=0; c<nchan; c++) {
                    value = IMG_MIN (*bufPtr, saturation);
                    if (value > maxVals[c]) maxVals[c] = value;
                    if (value < minVals[c]) minVals[c] = value;
                    bufPtr++;
                }
            }
        } else {
            bufPtr += nchan * width;
        }
    }
    if (verbose && findMinMax) {
        printf ("\tMinimum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %f", minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %f", maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    ckfree (line);
    return 1;
}

int tkimg_ReadDoubleFile (tkimg_Stream *handle, double *buf, int width, int height,
                          int nchan, int swapBytes, int verbose, int findMinMax,
                          double *minVals, double *maxVals, double saturation)
{
    int x, y, c;
    double value;
    char   *line;
    double *bufPtr = buf;

#if DEBUG_READ == 1
    printf ("readDoubleFile: Width=%d Height=%d nchan=%d swapBytes=%s findMinMax=%s\n",
             width, height, nchan, swapBytes? "yes": "no", findMinMax? "yes": "no"); fflush (stdout);
#endif
    if (saturation <= 0.0) {
        saturation = DBL_MAX;
    }
    for (c=0; c<nchan; c++) {
        minVals[c] =  DBL_MAX;
        maxVals[c] = -DBL_MAX;
    }
    line = (char *)ckalloc (sizeof (double) * nchan * width);

    for (y=0; y<height; y++) {
        if (! tkimg_ReadDoubleRow (handle, bufPtr, nchan * width, line, swapBytes)) {
            return 0;
        }
        if (findMinMax) {
            for (x=0; x<width; x++) {
                for (c=0; c<nchan; c++) {
                    value = IMG_MIN (*bufPtr, saturation);
                    if (value > maxVals[c]) maxVals[c] = value;
                    if (value < minVals[c]) minVals[c] = value;
                    bufPtr++;
                }
            }
        } else {
            bufPtr += nchan * width;
        }
    }
    if (verbose && findMinMax) {
        printf ("\tMinimum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %lf", minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %lf", maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    ckfree (line);
    return 1;
}

static int getHistogramIndex (double val, double minVal, double maxVal )
{
    double scaledVal;
    int histoInd;

    scaledVal = IMG_HISTOGRAM_SCALE * (IMG_MAX (val - minVal, 0.0) / (maxVal - minVal));
    histoInd = (int) IMG_CLAMP (scaledVal, 0.0, IMG_HISTOGRAM_SCALE);
    return histoInd;
}

static void histogramUShort (unsigned short *buf, int width, int height, TCL_UNUSED(int) /* nchan */,
                             double minVals[], double maxVals[], int histogram[],
                             int printAgc)
{
    int x, y, c;
    int histoInd;
    unsigned short *bufPtr = buf;

    memset (histogram, 0, IMG_HISTOGRAM_SIZE * sizeof (int));
    /* Currently supported only for 1 channel images. */
    c = 0;
    for (y=0; y<height; y++) {
        for (x=0; x<width; x++) {
            histoInd = getHistogramIndex (*bufPtr, minVals[c], maxVals[c]);
            histogram[histoInd]++;
            bufPtr++;
        }
    }
    if (printAgc) {
        int i;
        int count = 0;
        printf("agc globalMin %lf\n", minVals[0]);
        printf("agc globalMax %lf\n", maxVals[0]);
        for(i=0; i<IMG_HISTOGRAM_SIZE; i++) {
            printf ("agc histogram %3d %5d\n", i, histogram[i]);
            if (histogram[i] != 0) count++;
        }
        printf( "agc histostat %d %d\n", count, IMG_HISTOGRAM_SIZE - count);
    }
    return;
}

void tkimg_RemapUShortValues (unsigned short *buf, int width, int height, int nchan,
                              double *minVals, double *maxVals,
                              double agcCutOffPercent, int printAgc)
{
    int x, y, c;
    double m[IMG_MAX_CHANNELS], t[IMG_MAX_CHANNELS];
    double scaledVal;
    unsigned short *bufPtr = buf;
    double minNewVals[IMG_MAX_CHANNELS], maxNewVals[IMG_MAX_CHANNELS];
 
    for (c=0; c<nchan; c++) {
        minNewVals[c] = minVals[c];
        maxNewVals[c] = maxVals[c];
    }

    if (agcCutOffPercent > 0.0) {
        int i;
        int minLutInd = -1, maxLutInd = -1;
        int histogram[IMG_HISTOGRAM_SIZE];
        double lut[IMG_HISTOGRAM_SIZE];
        double agcCutOff = IMG_CLAMP(agcCutOffPercent * 0.01, 0.0, 1.0);
        double sum = 0.0;

        /* Calculate histogram. */
        histogramUShort (buf, width, height, nchan, minVals, maxVals,
                         histogram, printAgc);

        /* Accumulate the histogram and divide by the image size. */
        for (i=0; i<IMG_HISTOGRAM_SIZE; i++) {
            sum = sum + histogram[i];
            lut[i] = sum / (double)(width * height);
            if( lut[i] >= agcCutOff && minLutInd < 0 ) {
                minLutInd = i;
            }
            if (lut[i] >= (1.0 - agcCutOff) && maxLutInd < 0) {
                maxLutInd = i;
            }
            if (printAgc) {
                printf ("agc lut %3d %.3f\n", i, lut[i]);
            }
        }

        for (c=0; c<nchan; c++) {
            minNewVals[c] = minLutInd * (maxVals[c] - minVals[c]) /
                            IMG_HISTOGRAM_SCALE + minVals[c];
            maxNewVals[c] = maxLutInd * (maxVals[c] - minVals[c]) /
                            IMG_HISTOGRAM_SCALE + minVals[c];
            if (printAgc) {
                printf ("agc cutOff %lf\n", agcCutOff);
                printf ("agc lutMinInd %d\n", minLutInd);
                printf ("agc lutMaxInd %d\n", maxLutInd);
                printf ("agc lutMin %lf\n", minNewVals[c]);
                printf ("agc lutMax %lf\n", maxNewVals[c]);
            }
        }
    }

    for (c=0; c<nchan; c++) {
        m[c] = (65535.0 - 0.0) / (maxNewVals[c] - minNewVals[c]);
        t[c] = 0.0 - m[c] * minNewVals[c];
    }

    for (y=0; y<height; y++) {
        for (x=0; x<width; x++) {
            for (c=0; c<nchan; c++) {
                scaledVal = *bufPtr * m[c] + t[c];
                *bufPtr = IMG_CLAMP (scaledVal, 0, 65535);
                bufPtr++;
            }
        }
    }
    return;
}

static void histogramUInt (unsigned int *buf, int width, int height, TCL_UNUSED(int) /* nchan */,
                           double minVals[], double maxVals[], int histogram[], int printAgc)
{
    int x, y, c;
    int histoInd;
    unsigned int *bufPtr = buf;

    memset (histogram, 0, IMG_HISTOGRAM_SIZE * sizeof (int));
    /* Currently supported only for 1 channel images. */
    c = 0;
    for (y=0; y<height; y++) {
        for (x=0; x<width; x++) {
            histoInd = getHistogramIndex (*bufPtr, minVals[c], maxVals[c]);
            histogram[histoInd]++;
            bufPtr++;
        }
    }
    if (printAgc) {
        int i;
        int count = 0;
        printf("agc globalMin %lf\n", minVals[0]);
        printf("agc globalMax %lf\n", maxVals[0]);
        for(i=0; i<IMG_HISTOGRAM_SIZE; i++) {
            printf ("agc histogram %3d %5d\n", i, histogram[i]);
            if (histogram[i] != 0) count++;
        }
        printf( "agc histostat %d %d\n", count, IMG_HISTOGRAM_SIZE - count);
    }
    return;
}

void tkimg_RemapUIntValues (unsigned int *buf, int width, int height, int nchan,
                            double *minVals, double *maxVals,
                            double agcCutOffPercent, int printAgc)
{
    int x, y, c;
    double m[IMG_MAX_CHANNELS], t[IMG_MAX_CHANNELS];
    double scaledVal;
    unsigned int *bufPtr = buf;
    double minNewVals[IMG_MAX_CHANNELS], maxNewVals[IMG_MAX_CHANNELS];

    for (c=0; c<nchan; c++) {
        minNewVals[c] = minVals[c];
        maxNewVals[c] = maxVals[c];
    }

    if (agcCutOffPercent > 0.0) {
        int i;
        int minLutInd = -1, maxLutInd = -1;
        int histogram[IMG_HISTOGRAM_SIZE];
        double lut[IMG_HISTOGRAM_SIZE];
        double agcCutOff = IMG_CLAMP(agcCutOffPercent * 0.01, 0.0, 1.0);
        double sum = 0.0;

        /* Calculate histogram. */
        histogramUInt (buf, width, height, nchan, minVals, maxVals,
                       histogram, printAgc);

        /* Accumulate the histogram and divide by the image size. */
        for (i=0; i<IMG_HISTOGRAM_SIZE; i++) {
            sum = sum + histogram[i];
            lut[i] = sum / (double)(width * height);
            if( lut[i] >= agcCutOff && minLutInd < 0 ) {
                minLutInd = i;
            }
            if (lut[i] >= (1.0 - agcCutOff) && maxLutInd < 0) {
                maxLutInd = i;
            }
            if (printAgc) {
                printf ("agc lut %3d %.3f\n", i, lut[i]);
            }
        }

        for (c=0; c<nchan; c++) {
            minNewVals[c] = minLutInd * (maxVals[c] - minVals[c]) /
                            IMG_HISTOGRAM_SCALE + minVals[c];
            maxNewVals[c] = maxLutInd * (maxVals[c] - minVals[c]) /
                            IMG_HISTOGRAM_SCALE + minVals[c];
            if (printAgc) {
                printf ("agc cutOff %lf\n", agcCutOff);
                printf ("agc lutMinInd %d\n", minLutInd);
                printf ("agc lutMaxInd %d\n", maxLutInd);
                printf ("agc lutMin %lf\n", minNewVals[c]);
                printf ("agc lutMax %lf\n", maxNewVals[c]);
            }
        }
    }

    for (c=0; c<nchan; c++) {
        m[c] = (4294967295.0 - 0.0) / (maxNewVals[c] - minNewVals[c]);
        t[c] = 0.0 - m[c] * minNewVals[c];
    }
    for (y=0; y<height; y++) {
        for (x=0; x<width; x++) {
            for (c=0; c<nchan; c++) {
                scaledVal = *bufPtr * m[c] + t[c];
                *bufPtr = IMG_CLAMP (scaledVal, 0, 4294967295);
                bufPtr++;
            }
        }
    }
    return;
}

static void histogramFloat (float *buf, int width, int height, TCL_UNUSED(int) /* nchan */,
                            double minVals[], double maxVals[], int histogram[],
                            int printAgc)
{
    int x, y, c;
    int histoInd;
    float *bufPtr = buf;

    memset (histogram, 0, IMG_HISTOGRAM_SIZE * sizeof (int));
    /* Currently supported only for 1 channel images. */
    c = 0;
    for (y=0; y<height; y++) {
        for (x=0; x<width; x++) {
            histoInd = getHistogramIndex (*bufPtr, minVals[c], maxVals[c]);
            histogram[histoInd]++;
            bufPtr++;
        }
    }
    if (printAgc) {
        int i;
        int count = 0;
        printf("agc globalMin %lf\n", minVals[0]);
        printf("agc globalMax %lf\n", maxVals[0]);
        for(i=0; i<IMG_HISTOGRAM_SIZE; i++) {
            printf ("agc histogram %3d %5d\n", i, histogram[i]);
            if (histogram[i] != 0) count++;
        }
        printf( "agc histostat %d %d\n", count, IMG_HISTOGRAM_SIZE - count);
    }
    return;
}

void tkimg_RemapFloatValues (float *buf, int width, int height, int nchan,
                             double *minVals, double *maxVals,
                             double agcCutOffPercent, int printAgc)
{
    int   x, y, c;
    float *bufPtr = buf;
    double m[IMG_MAX_CHANNELS], t[IMG_MAX_CHANNELS];
    double scaledVal;
    double minNewVals[IMG_MAX_CHANNELS], maxNewVals[IMG_MAX_CHANNELS];

    for (c=0; c<nchan; c++) {
        minNewVals[c] = minVals[c];
        maxNewVals[c] = maxVals[c];
    }

    if (agcCutOffPercent > 0.0) {
        int i;
        int minLutInd = -1, maxLutInd = -1;
        int histogram[IMG_HISTOGRAM_SIZE];
        double lut[IMG_HISTOGRAM_SIZE];
        double agcCutOff = IMG_CLAMP(agcCutOffPercent * 0.01, 0.0, 1.0);
        double sum = 0.0;

        /* Calculate histogram. */
        histogramFloat (buf, width, height, nchan, minVals, maxVals,
                        histogram, printAgc);

        /* Accumulate the histogram and divide by the image size. */
        for (i=0; i<IMG_HISTOGRAM_SIZE; i++) {
            sum = sum + histogram[i];
            lut[i] = sum / (double)(width * height);
            if( lut[i] >= agcCutOff && minLutInd < 0 ) {
                minLutInd = i;
            }
            if (lut[i] >= (1.0 - agcCutOff) && maxLutInd < 0) {
                maxLutInd = i;
            }
            if (printAgc) {
                printf ("agc lut %3d %.3f\n", i, lut[i]);
            }
        }

        for (c=0; c<nchan; c++) {
            minNewVals[c] = minLutInd * (maxVals[c] - minVals[c]) /
                            IMG_HISTOGRAM_SCALE + minVals[c];
            maxNewVals[c] = maxLutInd * (maxVals[c] - minVals[c]) /
                            IMG_HISTOGRAM_SCALE + minVals[c];
            if (printAgc) {
                printf ("agc cutOff %lf\n", agcCutOff);
                printf ("agc lutMinInd %d\n", minLutInd);
                printf ("agc lutMaxInd %d\n", maxLutInd);
                printf ("agc lutMin %lf\n", minNewVals[c]);
                printf ("agc lutMax %lf\n", maxNewVals[c]);
            }
        }
    }

    for (c=0; c<nchan; c++) {
        m[c] = (1.0 - 0.0) / (maxNewVals[c] - minNewVals[c]);
        t[c] = 0.0 - m[c] * minNewVals[c];
    }

    for (y=0; y<height; y++) {
        for (x=0; x<width; x++) {
            for (c=0; c<nchan; c++) {
                scaledVal = *bufPtr * m[c] + t[c];
                *bufPtr = IMG_CLAMP (scaledVal, 0.0, 1.0);
                bufPtr++;
            }
        }
    }
    return;
}

static void histogramDouble (double *buf, int width, int height, TCL_UNUSED(int) /* nchan */,
                             double minVals[], double maxVals[], int histogram[],
                             int printAgc)
{
    int x, y, c;
    int histoInd;
    double *bufPtr = buf;

    memset (histogram, 0, IMG_HISTOGRAM_SIZE * sizeof (int));
    /* Currently supported only for 1 channel images. */
    c = 0;
    for (y=0; y<height; y++) {
        for (x=0; x<width; x++) {
            histoInd = getHistogramIndex (*bufPtr, minVals[c], maxVals[c]);
            histogram[histoInd]++;
            bufPtr++;
        }
    }
    if (printAgc) {
        int i;
        int count = 0;
        printf("agc globalMin %lf\n", minVals[0]);
        printf("agc globalMax %lf\n", maxVals[0]);
        for(i=0; i<IMG_HISTOGRAM_SIZE; i++) {
            printf ("agc histogram %3d %5d\n", i, histogram[i]);
            if (histogram[i] != 0) count++;
        }
        printf( "agc histostat %d %d\n", count, IMG_HISTOGRAM_SIZE - count);
    }
    return;
}

void tkimg_RemapDoubleValues (double *buf, int width, int height, int nchan,
                              double *minVals, double *maxVals,
                              double agcCutOffPercent, int printAgc)
{
    int    x, y, c;
    double *bufPtr = buf;
    double m[IMG_MAX_CHANNELS], t[IMG_MAX_CHANNELS];
    double scaledVal;
    double minNewVals[IMG_MAX_CHANNELS], maxNewVals[IMG_MAX_CHANNELS];

    for (c=0; c<nchan; c++) {
        minNewVals[c] = minVals[c];
        maxNewVals[c] = maxVals[c];
    }

    if (agcCutOffPercent > 0.0) {
        int i;
        int minLutInd = -1, maxLutInd = -1;
        int histogram[IMG_HISTOGRAM_SIZE];
        double lut[IMG_HISTOGRAM_SIZE];
        double  agcCutOff = IMG_CLAMP(agcCutOffPercent * 0.01, 0.0, 1.0);
        double sum = 0.0;

        /* Calculate histogram. */
        histogramDouble (buf, width, height, nchan, minVals, maxVals,
                         histogram, printAgc);

        /* Accumulate the histogram and divide by the image size. */
        for (i=0; i<IMG_HISTOGRAM_SIZE; i++) {
            sum = sum + histogram[i];
            lut[i] = sum / (double)(width * height);
            if( lut[i] >= agcCutOff && minLutInd < 0 ) {
                minLutInd = i;
            }
            if (lut[i] >= (1.0 - agcCutOff) && maxLutInd < 0) {
                maxLutInd = i;
            }
            if (printAgc) {
                printf ("agc lut %3d %.3f\n", i, lut[i]);
            }
        }

        for (c=0; c<nchan; c++) {
            minNewVals[c] = minLutInd * (maxVals[c] - minVals[c]) /
                            IMG_HISTOGRAM_SCALE + minVals[c];
            maxNewVals[c] = maxLutInd * (maxVals[c] - minVals[c]) /
                            IMG_HISTOGRAM_SCALE + minVals[c];
            if (printAgc) {
                printf ("agc cutOff %lf\n", agcCutOff);
                printf ("agc lutMinInd %d\n", minLutInd);
                printf ("agc lutMaxInd %d\n", maxLutInd);
                printf ("agc lutMin %lf\n", minNewVals[c]);
                printf ("agc lutMax %lf\n", maxNewVals[c]);
            }
        }
    }

    for (c=0; c<nchan; c++) {
        m[c] = (1.0 - 0.0) / (maxNewVals[c] - minNewVals[c]);
        t[c] = 0.0 - m[c] * minNewVals[c];
    }

    for (y=0; y<height; y++) {
        for (x=0; x<width; x++) {
            for (c=0; c<nchan; c++) {
                scaledVal = *bufPtr * m[c] + t[c];
                *bufPtr = IMG_CLAMP (scaledVal, 0.0, 1.0);
                bufPtr++;
            }
        }
    }
    return;
}
