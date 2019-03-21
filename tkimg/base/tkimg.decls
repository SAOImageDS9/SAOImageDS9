# tkimg.decls -- -*- tcl -*-
#
# This file contains the declarations for all supported public functions
# that are exported by the TKIMG library via the stubs table. This file
# is used to generate the tkimgDecls.h/tkimgStubsLib.c/tkimgStubsInit.c
# files.
#

# Declare each of the functions in the public tkimg interface.
# Note that an index should never be reused for a different 
# function in order to preserve backwards compatibility.

library tkimg

# Define the TKIMG interface:

interface tkimg
scspec TKIMGAPI

#########################################################################
###  Reading and writing image data from channels and/or strings.

declare 0 {
    Tcl_Channel tkimg_OpenFileChannel(Tcl_Interp *interp,
	const char *fileName, int permissions)
}
declare 1 {
    int tkimg_ReadInit(Tcl_Obj *data, int c, tkimg_MFile *handle)
}
declare 2 {
    void tkimg_WriteInit(Tcl_DString *buffer, tkimg_MFile *handle)
}
declare 3 {
    int tkimg_Getc(tkimg_MFile *handle)
}
declare 4 {
    int tkimg_Read(tkimg_MFile *handle, char *dst, int count)
}
declare 5 {
    int tkimg_Putc(int c, tkimg_MFile *handle)
}
declare 6 {
    int tkimg_Write(tkimg_MFile *handle, const char *src, int count)
}
declare 7 {
    void tkimg_ReadBuffer(int onOff)
}
declare 8 {
    size_t tkimg_Read2(tkimg_MFile *handle, char *dst, size_t count)
}
declare 9 {
    size_t tkimg_Write2(tkimg_MFile *handle, const char *src, size_t count)
}

#########################################################################
###  Specialized put block handling transparency

declare 10 {
    int tkimg_PhotoPutBlock(Tcl_Interp *interp, Tk_PhotoHandle handle,
	Tk_PhotoImageBlock *blockPtr, int x, int y, int width, int height, int flags)
}
declare 11 {
    int tkimg_PhotoExpand(Tcl_Interp *interp, Tk_PhotoHandle handle,
	int width, int height)
}
declare 12 {
    int tkimg_PhotoSetSize(Tcl_Interp *interp, Tk_PhotoHandle handle,
	int width, int height)
}

#########################################################################
###  Like the core functions, except that they accept objPtr == NULL.
###  The byte array function also handles both UTF and non-UTF cores.

declare 30 {
    const char *tkimg_GetStringFromObj(Tcl_Obj *objPtr, int *lengthPtr)
}
declare 31 {
    unsigned char *tkimg_GetByteArrayFromObj(Tcl_Obj *objPtr, int *lengthPtr)
}
declare 32 {
    int tkimg_ListObjGetElements(Tcl_Interp *interp, Tcl_Obj *objPtr, int *argc, Tcl_Obj ***argv)
}
declare 33 {
    const char *tkimg_GetStringFromObj2(Tcl_Obj *objPtr, size_t *lengthPtr)
}
declare 34 {
    unsigned char *tkimg_GetByteArrayFromObj2(Tcl_Obj *objPtr, size_t *lengthPtr)
}

#########################################################################
###  Specialized functions for handling images containing short or float values.

declare 50 {
    int tkimg_IsIntel (void)
}
declare 51 {
    void tkimg_CreateGammaTable(float gammaVal, float *gammaTable)
}
declare 52 {
    float tkimg_LookupGammaTable(float val, const float *gammaTable)
}
declare 53 {
    void tkimg_UShortToUByte (int n, const unsigned short *shortIn,
         const float *gammaTable, unsigned char *ubOut)
}
declare 54 {
    void tkimg_ShortToUByte (int n, const short *shortIn,
         const float *gammaTable, unsigned char *ubOut)
}
declare 55 {
    void tkimg_FloatToUByte (int n, const float *floatIn,
         const float *gammaTable, unsigned char *ubOut)
}
declare 56 {
    int tkimg_ReadUByteRow (tkimg_MFile *handle, unsigned char *pixels, int nBytes)
}
declare 57 {
    int tkimg_ReadUShortRow (tkimg_MFile *handle, unsigned short *pixels,
        int nShorts, char *buf, int swapBytes)
}
declare 58 {
    int tkimg_ReadShortRow (tkimg_MFile *handle, short *pixels,
        int nShorts, char *buf, int swapBytes)
}
declare 59 {
    int tkimg_ReadFloatRow (tkimg_MFile *handle, float *pixels,
        int nFloats, char *buf, int swapBytes)
}
declare 60 {
    int tkimg_ReadUByteFile (tkimg_MFile *handle, unsigned char *buf, 
        int width, int height,
        int nchan, int verbose, int findMinMax,
        float *minVals, float *maxVals)
}
declare 61 {
    int tkimg_ReadUShortFile (tkimg_MFile *handle, unsigned short *buf,
        int width, int height,
        int nchan, int swapBytes, int verbose, int findMinMax,
        float *minVals, float *maxVals)
}
declare 62 {
    int tkimg_ReadFloatFile (tkimg_MFile *handle, float *buf,
        int width, int height,
        int nchan, int swapBytes, int verbose, int findMinMax,
        float *minVals, float *maxVals, float saturation)
}
declare 63 {
    void tkimg_RemapUShortValues (unsigned short *buf, int width, int height,
         int nchan, float *minVals, float *maxVals)
}
declare 64 {
    void tkimg_RemapFloatValues (float *buf, int width, int height, int nchan,
         float *minVals, float *maxVals, float agcCutOffPercent, int printAgc)
}

#########################################################################
