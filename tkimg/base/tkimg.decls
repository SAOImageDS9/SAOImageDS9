# tkimg.decls -- -*- tcl -*-
#
# This file contains the declarations for all supported public functions
# that are exported by the tkimg library via the stubs table. This file
# is used to generate the tkimgDecls.h, tkimgStubsLib.c and
# tkimgStubsInit.c files.
#

# Declare each of the functions in the public tkimg interface.
# Note that an index should never be reused for a different
# function in order to preserve backwards compatibility.

library tkimg

# Define the TKIMG interface:

interface tkimg
scspec TKIMGAPI

#########################################################################
###  Reading and writing image data from channels or strings.
###  Functions are implemented in file tkimgIO.c.

declare 0 {
    Tcl_Channel tkimg_OpenFileChannel(Tcl_Interp *interp,
        const char *fileName, const char *mode)
}
declare 1 {
    void tkimg_ReadInitFile(tkimg_Stream *handle, Tcl_Channel chan)
}
declare 2 {
    int tkimg_ReadInitString(tkimg_Stream *handle, Tcl_Obj *data)
}
declare 3 {
    void tkimg_WriteInitFile(tkimg_Stream *handle, Tcl_Channel chan)
}
declare 4 {
    void tkimg_WriteInitString(tkimg_Stream *handle)
}
declare 5 {
    void tkimg_EnableReadBuffer(tkimg_Stream *handle, int onOff)
}
declare 6 {
    Tcl_Size tkimg_Read(tkimg_Stream *handle, char *dst, Tcl_Size count)
}
declare 7 {
    Tcl_Size tkimg_Write(tkimg_Stream *handle, const char *src, Tcl_Size count)
}
declare 8 {
    int tkimg_Putc(tkimg_Stream *handle, int c)
}
declare 9 {
    void tkimg_GetTemporaryFileName(Tcl_DString * fileName)
}
declare 10 {
    void tkimg_DeleteFile( const char * fileName )
}

#########################################################################
###  Like the core functions, except that they accept objPtr == NULL.
###  The byte array function also handles both UTF and non-UTF cores.
###  Functions are implemented in file tkimgUtils.c.

declare 30 {
    int tkimg_GetDistanceValue(Tcl_Interp *interp, const char *string, double *doublePtr)
}
declare 31 {
    int tkimg_SetResolution(Tcl_Obj *metadataDict, double xdpi, double ydpi)
}
declare 32 {
    int tkimg_GetResolution(Tcl_Interp *interp, Tcl_Obj *metadataDict, double * xdpi, double * ydpi)
}
declare 33 {
    int tkimg_SetNumPages(Tcl_Obj *metadataDict, int numImages)
}
declare 34 {
    int tkimg_GetNumPages(Tcl_Interp *interp, Tcl_Obj *metadataDict, int * numImages)
}
declare 35 {
    int tkimg_ListObjGetElements(Tcl_Interp *interp, Tcl_Obj *objPtr, Tcl_Size *argc, Tcl_Obj ***argv)
}

#########################################################################
###  Specialized functions for handling images containing 
###  short, int, float or double values.
###  Functions are implemented in file tkimgMap.c.

declare 50 {
    int tkimg_IsIntel (void)
}
declare 51 {
    void tkimg_CreateGammaTable(double gammaVal, double *gammaTable)
}
declare 52 {
    double tkimg_LookupGammaTable(double val, const double *gammaTable)
}
declare 53 {
    void tkimg_UShortToUByte (int n, const unsigned short *shortIn,
         const double *gammaTable, unsigned char *ubOut)
}
declare 54 {
    void tkimg_ShortToUByte (int n, const short *shortIn,
         const double *gammaTable, unsigned char *ubOut)
}
declare 55 {
    void tkimg_FloatToUByte (int n, const float *floatIn,
         const double *gammaTable, unsigned char *ubOut)
}
declare 56 {
    int tkimg_ReadUByteRow (tkimg_Stream *handle, unsigned char *pixels, int nBytes)
}
declare 57 {
    int tkimg_ReadUShortRow (tkimg_Stream *handle, unsigned short *pixels,
        int nShorts, char *buf, int swapBytes)
}
declare 58 {
    int tkimg_ReadShortRow (tkimg_Stream *handle, short *pixels,
        int nShorts, char *buf, int swapBytes)
}
declare 59 {
    int tkimg_ReadFloatRow (tkimg_Stream *handle, float *pixels,
        int nFloats, char *buf, int swapBytes)
}
declare 60 {
    int tkimg_ReadUByteFile (tkimg_Stream *handle, unsigned char *buf,
        int width, int height,
        int nchan, int verbose, int findMinMax,
        double *minVals, double *maxVals)
}
declare 61 {
    int tkimg_ReadUShortFile (tkimg_Stream *handle, unsigned short *buf,
        int width, int height,
        int nchan, int swapBytes, int verbose, int findMinMax,
        double *minVals, double *maxVals, double saturation)
}
declare 62 {
    int tkimg_ReadFloatFile (tkimg_Stream *handle, float *buf,
        int width, int height,
        int nchan, int swapBytes, int verbose, int findMinMax,
        double *minVals, double *maxVals, double saturation)
}
declare 63 {
    void tkimg_RemapUShortValues (unsigned short *buf, int width, int height,
         int nchan, double *minVals, double *maxVals, double agcCutOffPercent, int printAgc)
}
declare 64 {
    void tkimg_RemapFloatValues (float *buf, int width, int height, int nchan,
         double *minVals, double *maxVals, double agcCutOffPercent, int printAgc)
}
declare 65 {
    void tkimg_UIntToUByte (int n, const unsigned int *intIn,
         const double *gammaTable, unsigned char *ubOut)
}
declare 66 {
    void tkimg_IntToUByte (int n, const int *intIn,
         const double *gammaTable, unsigned char *ubOut)
}
declare 67 {
    int tkimg_ReadUIntRow (tkimg_Stream *handle, unsigned int *pixels,
        int nInts, char *buf, int swapBytes)
}
declare 68 {
    int tkimg_ReadIntRow (tkimg_Stream *handle, int *pixels,
        int nInts, char *buf, int swapBytes)
}
declare 69 {
    int tkimg_ReadUIntFile (tkimg_Stream *handle, unsigned int *buf,
        int width, int height,
        int nchan, int swapBytes, int verbose, int findMinMax,
        double *minVals, double *maxVals, double saturation)
}
declare 70 {
    void tkimg_RemapUIntValues (unsigned int *buf, int width, int height,
         int nchan, double *minVals, double *maxVals, double agcCutOffPercent, int printAgc)
}
declare 71 {
    void tkimg_DoubleToUByte (int n, const double *doubleIn,
         const double *gammaTable, unsigned char *ubOut)
}
declare 72 {
    int tkimg_ReadDoubleRow (tkimg_Stream *handle, double *pixels,
        int nDoubles, char *buf, int swapBytes)
}
declare 73 {
    int tkimg_ReadDoubleFile (tkimg_Stream *handle, double *buf,
        int width, int height,
        int nchan, int swapBytes, int verbose, int findMinMax,
        double *minVals, double *maxVals, double saturation)
}
declare 74 {
    void tkimg_RemapDoubleValues (double *buf, int width, int height, int nchan,
         double *minVals, double *maxVals, double agcCutOffPercent, int printAgc)
}

#########################################################################
