/*
 *  tkimgUtils.c
 */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "tkimg.h"

/*
 *----------------------------------------------------------------------
 *
 * tkimg_ListObjGetElements --
 *
 *  Splits an object into its components.
 *
 * Results:
 *  If objPtr is a valid list (or can be converted to one),
 *  TCL_OK will be returned. The object will be split in
 *  its components.
 *  Otherwise TCL_ERROR is returned. If interp is not a NULL
 *  pointer, an error message will be left in it as well.
 *
 * Side effects:
 *  May call the object's updateStringProc to update the string
 *  representation from the internal representation.
 *
 *----------------------------------------------------------------------
 */

int tkimg_ListObjGetElements(
    Tcl_Interp *interp,
    Tcl_Obj *objPtr,
    Tcl_Size *objc,
    Tcl_Obj ***objv
) {
    if (!objPtr) {
        *objc = 0;
        return TCL_OK;
    }
    return Tcl_ListObjGetElements(interp, objPtr, objc, objv);
}

#define METER_TO_INCH(m) ((m) / 0.0254)
int tkimg_GetDistanceValue(
    Tcl_Interp *interp,    /* Use this for error reporting. */
    const char *string,    /* String describing the distance. */
    double *doublePtr      /* Place to store converted result. */
) {
    char *end;
    double d;

    d = strtod(string, &end);
    if (end == string) {
        goto error;
    }
    while ((*end != '\0') && isspace((unsigned char)(*end))) {
        end++;
    }
    switch (*end) {
        case 0: {
            break;
        }
        case 'i': {
            end++;
            break;
        }
        case 'p': {
            d *= 72.0;
            end++;
            break;
        }
        case 'c': {
            d = d / 100.0;
            d = METER_TO_INCH(d);
            end++;
            break;
        }
        case 'm': {
            d = d / 1000.0;
            d = METER_TO_INCH(d);
            end++;
            break;
        }
        default:
            goto error;
    }
    while ((*end != '\0') && isspace((unsigned char)(*end))) {
        end++;
    }
    if (*end != 0) {
        goto error;
    }
    if (d < 0.0) {
        goto error;
    }
    *doublePtr = d;
    return TCL_OK;

  error:
    Tcl_SetObjResult(interp, Tcl_ObjPrintf(
        "Invalid resolution value \"%s\"", string));
    Tcl_SetErrorCode(interp, "TK", "VALUE", "SCREEN_DISTANCE", (char *)NULL);
    return TCL_ERROR;
}

int tkimg_SetResolution(Tcl_Obj *metadataDict, double xdpi, double ydpi)
{
    double dpi;
    double aspect;

    if (! metadataDict) {
        return TCL_OK;
    }
    dpi = xdpi;
    if (xdpi == 0.0 || ydpi == 0.0) {
        aspect = 1.0;
    } else {
        aspect = xdpi / ydpi;
    }
    if (TCL_ERROR == Tcl_DictObjPut(NULL, metadataDict, Tcl_NewStringObj("DPI", -1), Tcl_NewDoubleObj(dpi))) {
        return TCL_ERROR;
    }
    if (TCL_ERROR == Tcl_DictObjPut(NULL, metadataDict, Tcl_NewStringObj("aspect", -1), Tcl_NewDoubleObj(aspect))) {
        return TCL_ERROR;
    }
    return TCL_OK;
}

int tkimg_GetResolution(Tcl_Interp *interp, Tcl_Obj *metadataDict, double * xdpi, double * ydpi)
{
    Tcl_Obj *itemData;
    double dpi    = 0.0;
    double aspect = 1.0;

    if (! metadataDict) {
        *xdpi = 0.0;
        *ydpi = 0.0;
        return TCL_OK;
    }

    if (TCL_ERROR == Tcl_DictObjGet(interp, metadataDict, Tcl_NewStringObj("DPI", -1), &itemData)) {
        return TCL_ERROR;
    }
    if (itemData != NULL) {
        if (TCL_ERROR == Tcl_GetDoubleFromObj(interp, itemData, &dpi)) {
            return TCL_ERROR;
        }
    }
    if (TCL_ERROR == Tcl_DictObjGet(interp, metadataDict, Tcl_NewStringObj("aspect", -1), &itemData)) {
        return TCL_ERROR;
    }
    if (itemData != NULL) {
        if (TCL_ERROR == Tcl_GetDoubleFromObj(interp, itemData, &aspect)) {
            return TCL_ERROR;
        }
        if (aspect == 0.0) {
            aspect = 1.0;
        }
    }
    *xdpi = dpi;
    *ydpi = dpi / aspect;
    return TCL_OK;
}


int tkimg_SetNumPages(Tcl_Obj *metadataDict, int numImages)
{
    if (! metadataDict) {
        return TCL_OK;
    }
    if (TCL_ERROR == Tcl_DictObjPut(NULL, metadataDict, Tcl_NewStringObj("numpages", -1), Tcl_NewIntObj(numImages))) {
        return TCL_ERROR;
    }
    return TCL_OK;
}

int tkimg_GetNumPages(Tcl_Interp *interp, Tcl_Obj *metadataDict, int * numImages)
{
    Tcl_Obj *itemData;
    int numImgs = 1;

    if (! metadataDict) {
        *numImages = numImgs;
        return TCL_OK;
    }

    if (TCL_ERROR == Tcl_DictObjGet(interp, metadataDict, Tcl_NewStringObj("numpages", -1), &itemData)) {
        return TCL_ERROR;
    }
    if (itemData != NULL) {
        if (TCL_ERROR == Tcl_GetIntFromObj(interp, itemData, &numImgs)) {
            return TCL_ERROR;
        }
    }
    *numImages = numImgs;
    return TCL_OK;
}
