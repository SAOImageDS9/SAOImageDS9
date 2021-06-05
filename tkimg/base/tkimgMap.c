/*
 *  tkimgMap.c
 */

#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "tkimg.h"

#define IMG_MIN(a,b) ((a)<(b)? (a): (b))
#define IMG_MAX(a,b) ((a)>(b)? (a): (b))
#define IMG_CLAMP(val,minVal,maxVal) (IMG_MAX (minVal, IMG_MIN (val, maxVal)))

/* The size of the histogram and lookup tables for Automatic Gain Control */
#define IMG_HISTOGRAM_SIZE  256
#define IMG_HISTOGRAM_SCALE 255.0

/* This function determines at runtime, whether we are on an Intel system. */

int tkimg_IsIntel (void)
{
    unsigned long val = 513;
    /* On Intel (little-endian) systems this value is equal to "\01\02\00\00".
       On big-endian systems this value equals "\00\00\02\01" */
    return memcmp(&val, "\01\02", 2) == 0;
}

/*
 *----------------------------------------------------------------------
 *
 * tkimg_CreateGammaTable --
 *
 *  Returns the string representation's byte array pointer and length
 *  for an object.
 *
 * Results:
 *  Returns a pointer to the string representation of objPtr.  If
 *  lengthPtr isn't NULL, the length of the string representation is
 *  stored at *lengthPtr. The byte array referenced by the returned
 *  pointer must not be modified by the caller. Furthermore, the
 *  caller must copy the bytes if they need to retain them since the
 *  object's string rep can change as a result of other operations.
 *      REMARK: This function reacts a little bit different than
 *  Tcl_GetStringFromObj():
 *  - objPtr is allowed to be NULL. In that case the NULL pointer
 *    will be returned, and the length will be reported to be 0;
 *  In the tkimg_ code there is never a distinction between en empty
 *  string and a NULL pointer, while the latter is easier to check
 *  for. That's the reason for this difference.
 *
 * Side effects:
 *  May call the object's updateStringProc to update the string
 *  representation from the internal representation.
 *
 *----------------------------------------------------------------------
 */

void tkimg_CreateGammaTable (float gammaVal, float *gammaTable)
{
    int i;

    for (i = 0; i < IMG_GAMMA_TABLE_SIZE - 1; i++) {
        gammaTable[i] = pow ((float) i / (float) (IMG_GAMMA_TABLE_SIZE - 2), 
                        1.0 / gammaVal);
    }
    gammaTable[IMG_GAMMA_TABLE_SIZE - 1] = 1.0f;
    return;
}

/* Given a pixel value in Float format, "valIn", and a gamma-correction
 * lookup table, "tab", macro "gcorrectFloat" returns the gamma-corrected
 * pixel value in "valOut".
 */

float tkimg_LookupGammaTable (float val, const float *gammaTable)
{
    int     gc_i;
    float   gc_t;
    gc_t = (val) * (IMG_GAMMA_TABLE_SIZE - 2);
    gc_i = gc_t;
    gc_t -= gc_i;
    return gammaTable[gc_i] * (1.0f - gc_t) + gammaTable[gc_i+1] * gc_t;
}

void tkimg_UShortToUByte (int n, const unsigned short *shortIn,
                          const float *gammaTable, unsigned char *ubOut)
{
    const unsigned short *src, *stop;
    unsigned char *ubdest;
    float ftmp;
    int   itmp;

    src  = shortIn;
    stop = shortIn + n;
    ubdest = ubOut;

    /* Handle a gamma value of 1.0 (gammaTable == NULL) as a special case.
       Quite nice speed improvement for the maybe most used case. */
    if (gammaTable) {
        while (src < stop) {
            ftmp = *src / 65535.0f;
            ftmp = IMG_CLAMP (ftmp, 0.0f, 1.0f);
            ftmp = tkimg_LookupGammaTable (ftmp, gammaTable);
            itmp = (int)(ftmp * 255.0f + 0.5f);
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
                         const float *gammaTable, unsigned char *ubOut)
{
    const short *src, *stop;
    unsigned char *ubdest;
    float ftmp;
    int   itmp;

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
            ftmp = (*src * 1.0f / 65535.0f  + 0.5f);
            ftmp = tkimg_LookupGammaTable (ftmp, gammaTable);
            itmp = (int)(ftmp * 255.0f + 0.5f);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    } else {
        while (src < stop) {
            /* Map short values from the range [MIN_SHORT .. MAX_SHORT] to
               the displayable range [0 .. 255]. */
            itmp = (int)(*src * 255.0f / 65535.0f  + 128);
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
                         const float *gammaTable, unsigned char *ubOut)
{
    const float *src, *stop;
    unsigned char *ubdest;
    float ftmp;
    int   itmp;

    src    = floatIn;
    stop   = floatIn + n;
    ubdest = ubOut;

    /* Handle a gamma value of 1.0 (gammaTable == NULL) as a special case.
       Quite nice speed improvement for the maybe most used case. */
    if (gammaTable) {
        while (src < stop) {
            ftmp = IMG_CLAMP (*src, 0.0f, 1.0f);
            ftmp = tkimg_LookupGammaTable (ftmp, gammaTable);
            itmp = (int)(ftmp * 255.0f + 0.5f);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    } else {
        while (src < stop) {
            itmp = (int)(*src * 255.0f + 0.5f);
            *ubdest = IMG_CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    }
    return;
}

int tkimg_ReadUByteRow (tkimg_MFile *handle, unsigned char *pixels, int nBytes)
{
#if DEBUG_READ == 1
    printf ("Reading %d UBytes\n", nBytes); fflush (stdout);
#endif
    if (nBytes != tkimg_Read2(handle, (char *)pixels, nBytes)) {
        return 0;
    }
    return 1;
}

int tkimg_ReadUShortRow (tkimg_MFile *handle, unsigned short *pixels, int nShorts,
                         char *buf, int swapBytes)
{
    int i;
    char *bufPtr = buf;
    unsigned short *mPtr = pixels;

#if DEBUG_READ == 1
    printf ("Reading %d UShorts\n", nShorts); fflush (stdout);
#endif
    if (2 * nShorts != tkimg_Read2(handle, buf, 2 * nShorts)) {
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

int tkimg_ReadShortRow (tkimg_MFile *handle, short *pixels, int nShorts,
                        char *buf, int swapBytes)
{
    int i;
    char *bufPtr = buf;
    short *mPtr = pixels;

#if DEBUG_READ == 1
    printf ("Reading %d Shorts\n", nShorts); fflush (stdout);
#endif
    if (2 * nShorts != tkimg_Read2(handle, buf, 2 * nShorts)) {
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

int tkimg_ReadFloatRow (tkimg_MFile *handle, float *pixels, int nFloats,
                        char *buf, int swapBytes)
{
    int i;
    char *bufPtr = buf;
    float *mPtr = pixels;

#if DEBUG_READ == 1
    printf ("Reading %d floats\n", nFloats); fflush (stdout);
#endif
    if (4 * nFloats != tkimg_Read2(handle, buf, 4 * nFloats)) {
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

int tkimg_ReadUByteFile (tkimg_MFile *handle, unsigned char *buf, int width, int height,
                         int nchan, int verbose, int findMinMax,
                         float *minVals, float *maxVals)
{
    int x, y, c;
    unsigned char *bufPtr = buf;

#if DEBUG_READ == 1
    printf ("readUByteFile: Width=%d Height=%d nchan=%d findMinMax=%s\n",
             width, height, nchan, findMinMax? "yes": "no");
        fflush (stdout);
#endif
    for (c=0; c<nchan; c++) {
        minVals[c] = (float) 1.0E30;
        maxVals[c] = (float)-1.0E30;
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
            printf (" %d", (unsigned char)minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %d", (unsigned char)maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    return 1;
}

int tkimg_ReadUShortFile (tkimg_MFile *handle, unsigned short *buf, int width, int height,
                          int nchan, int swapBytes, int verbose, int findMinMax,
                          float *minVals, float *maxVals)
{
    int x, y, c;
    char *line;
    unsigned short *bufPtr = buf;

#if DEBUG_READ == 1
    printf ("readUShortFile: Width=%d Height=%d nchan=%d swapBytes=%s findMinMax=%s\n",
             width, height, nchan, swapBytes? "yes": "no", findMinMax? "yes": "no"); fflush (stdout);
#endif
    for (c=0; c<nchan; c++) {
        minVals[c] = (float) 1.0E30;
        maxVals[c] = (float)-1.0E30;
    }
    line = ckalloc (sizeof (unsigned short) * nchan * width);

    for (y=0; y<height; y++) {
        if (! tkimg_ReadUShortRow (handle, bufPtr, nchan * width, line, swapBytes)) {
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
            printf (" %d", (unsigned short)minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %d", (unsigned short)maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    ckfree (line);
    return 1;
}

int tkimg_ReadFloatFile (tkimg_MFile *handle, float *buf, int width, int height,
                         int nchan, int swapBytes, int verbose, int findMinMax,
                         float *minVals, float *maxVals, float saturation)
{
    int x, y, c;
    float value;
    char  *line;
    float *bufPtr = buf;

#if DEBUG_READ == 1
    printf ("readFloatFile: Width=%d Height=%d nchan=%d swapBytes=%s findMinMax=%s\n",
             width, height, nchan, swapBytes? "yes": "no", findMinMax? "yes": "no"); fflush (stdout);
#endif
    if (saturation <= 0.0f) {
        saturation = (float) 1.0E30;
    }
    for (c=0; c<nchan; c++) {
        minVals[c] = (float) 1.0E30;
        maxVals[c] = (float)-1.0E30;
    }
    line = ckalloc (sizeof (float) * nchan * width);

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

void tkimg_RemapUShortValues (unsigned short *buf, int width, int height, int nchan,
                              float *minVals, float *maxVals)
{
    int x, y, c;
    float m[IMG_MAX_CHANNELS], t[IMG_MAX_CHANNELS];
    unsigned int scaledVal;
    unsigned short *bufPtr = buf;

    for (c=0; c<nchan; c++) {
        m[c] = (65535.0 - 0.0) / (maxVals[c] - minVals[c]);
        t[c] = 0.0 - m[c] * minVals[c];
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

static int getHistogramIndex (float val, float minVal, float maxVal )
{
    float scaledVal;
    int histoInd;

    scaledVal = IMG_HISTOGRAM_SCALE * (IMG_MAX (val - minVal, 0.0) / (maxVal - minVal));
    histoInd = (int) IMG_CLAMP (scaledVal, 0.0, IMG_HISTOGRAM_SCALE);
    return histoInd;
}

static void histogramFloat (float *buf, int width, int height, int nchan,
                            float minVals[], float maxVals[], int histogram[],
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
        printf("agc globalMin %f\n", minVals[0]);
        printf("agc globalMax %f\n", maxVals[0]);
        for(i=0; i<IMG_HISTOGRAM_SIZE; i++) {
            printf ("agc histogram %3d %5d\n", i, histogram[i]);
            if (histogram[i] != 0) count++;
        }
        printf( "agc histostat %d %d\n", count, IMG_HISTOGRAM_SIZE - count);
    }
    return;
}

void tkimg_RemapFloatValues (float *buf, int width, int height, int nchan,
                             float *minVals, float *maxVals,
                             float agcCutOffPercent, int printAgc)
{
    int   x, y, c;
    float *bufPtr = buf;
    float m[IMG_MAX_CHANNELS], t[IMG_MAX_CHANNELS];
    float scaledVal;
    float minNewVals[IMG_MAX_CHANNELS], maxNewVals[IMG_MAX_CHANNELS];

    for (c=0; c<nchan; c++) {
        minNewVals[c] = minVals[c];
        maxNewVals[c] = maxVals[c];
    }

    if (agcCutOffPercent > 0.0) {
        int i;
        int minLutInd = -1, maxLutInd = -1;
        int histogram[IMG_HISTOGRAM_SIZE];
        float lut[IMG_HISTOGRAM_SIZE];
        float agcCutOff = IMG_CLAMP(agcCutOffPercent * 0.01, 0.0, 1.0);
        float sum = 0.0;

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
                printf ("agc cutOff %f\n", agcCutOff);
                printf ("agc lutMinInd %d\n", minLutInd);
                printf ("agc lutMaxInd %d\n", maxLutInd);
                printf ("agc lutMin %f\n", minNewVals[c]);
                printf ("agc lutMax %f\n", maxNewVals[c]);
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


