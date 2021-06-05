/*
 *  tkimgUtils.tcl
 */

#include <string.h>
#include <stdlib.h>
#include "tkimg.h"

/*
 * The variable "tkimg_initialized" contains flags indicating which
 * version of Tcl or Perl we are running:
 *
 *  IMG_PERL        perl
 *  IMG_COMPOSITE   Photo image type proc signatures are 8.4 or higher.
 *  IMG_NOPANIC     Photo image type proc signatures are 8.5 or higher.
 *
 * These flags will be determined at runtime (except the IMG_PERL
 * flag, for now), so we can use the same dynamic library for all
 * Tcl/Tk versions (and for Perl/Tk in the future).
 *
 * The existence of the CPP macro _LANG implies usage in Perl/Tk.
 *
 * Img 1.4: Support for Tcl 8.2 and lower is dropped.
 */

int tkimg_initialized = 0;

int TkimgInitUtilities(
	Tcl_Interp *interp
) {
#ifdef _LANG
	tkimg_initialized = IMG_PERL;
#else

	int major, minor, patchlevel, type;
	tkimg_initialized = IMG_TCL;

	Tcl_GetVersion(&major, &minor, &patchlevel, &type);

	if ((major > 8) || ((major == 8) && (minor > 3))) {
		tkimg_initialized |= IMG_COMPOSITE;
	}
	if ((major > 8) || ((major == 8) && (minor > 4))) {
		tkimg_initialized |= IMG_NOPANIC;
	}

#endif
	return tkimg_initialized;
}


/*
 *----------------------------------------------------------------------
 *
 * tkimg_GetStringFromObj --
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

const char *tkimg_GetStringFromObj(
	Tcl_Obj *objPtr, /* Object whose string rep byte pointer
			  * should be returned, or NULL */
	int *lengthPtr /* If non-NULL, the location where the
			* string rep's byte array length should be
			* stored. If NULL, no length is stored. */
) {
	if (!objPtr) {
		if (lengthPtr) {
			*lengthPtr = 0;
		}
		return NULL;
	}
#ifdef _LANG
	{
		char *string = LangString((Arg) objPtr);
		if (lengthPtr) {
			*lengthPtr = string? strlen(string): 0;
		}
		return string;
	}
#else /* _LANG */
	return Tcl_GetStringFromObj(objPtr, lengthPtr);
#endif /* _LANG */
}

/*
 *----------------------------------------------------------------------
 *
 * tkimg_GetStringFromObj2 --
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

const char *tkimg_GetStringFromObj2(
	Tcl_Obj *objPtr, /* Object whose string rep byte pointer
			  * should be returned, or NULL */
	size_t *lengthPtr /* If non-NULL, the location where the
			   * string rep's byte array length should be
			   * stored. If NULL, no length is stored. */
) {
#ifndef _LANG
    const char *result;
#endif
	if (!objPtr) {
		if (lengthPtr) {
			*lengthPtr = 0;
		}
		return NULL;
	}
#ifdef _LANG
	{
		char *string = LangString((Arg) objPtr);
		if (lengthPtr) {
			*lengthPtr = string? strlen(string): 0;
		}
		return string;
	}
#else /* _LANG */
	result = Tcl_GetString(objPtr);
	if (lengthPtr) {
		*lengthPtr = objPtr->length;
	}
	return result;
#endif /* _LANG */
}

/*
 *----------------------------------------------------------------------
 *
 * tkimg_GetByteArrayFromObj --
 *
 *  Returns the binary representation and length
 *  for a byte array object.
 *
 * Results:
 *  Returns a pointer to the byte representation of objPtr.  If
 *  lengthPtr isn't NULL, the length of the string representation is
 *  stored at *lengthPtr. The byte array referenced by the returned
 *  pointer must not be modified by the caller. Furthermore, the
 *  caller must copy the bytes if they need to retain them since the
 *  objects representation can change as a result of other operations.
 *
 * Side effects:
 *  May call the object's updateStringProc to update the string
 *  representation from the internal representation.
 *
 *----------------------------------------------------------------------
 */
unsigned char *tkimg_GetByteArrayFromObj(
	Tcl_Obj *objPtr, /**< Object whose string rep byte pointer
			  * should be returned, or NULL */
	int *lengthPtr /**< If non-NULL, the location where the
		        * string rep's byte array length should be
		        * stored. If NULL, no length is stored. */
) {
#ifdef _LANG
	char *string = LangString((Arg) objPtr);
	if (lengthPtr) {
		*lengthPtr = string? strlen(string): 0;
	}
	return (unsigned char *) string;
#else /* _LANG */

	return Tcl_GetByteArrayFromObj(objPtr, lengthPtr);
#endif /* _LANG */
}

/*
 *----------------------------------------------------------------------
 *
 * tkimg_GetByteArrayFromObj2 --
 *
 *  Returns the binary representation and length
 *  for a byte array object.
 *
 * Results:
 *  Returns a pointer to the byte representation of objPtr.  If
 *  lengthPtr isn't NULL, the length of the string representation is
 *  stored at *lengthPtr. The byte array referenced by the returned
 *  pointer must not be modified by the caller. Furthermore, the
 *  caller must copy the bytes if they need to retain them since the
 *  objects representation can change as a result of other operations.
 *
 * Side effects:
 *  May call the object's updateStringProc to update the string
 *  representation from the internal representation.
 *
 *----------------------------------------------------------------------
 */
unsigned char *tkimg_GetByteArrayFromObj2(
	Tcl_Obj *objPtr, /**< Object whose string rep byte pointer
			  * should be returned, or NULL */
	size_t *lengthPtr /**< If non-NULL, the location where the
			   * string rep's byte array length should be
			   * stored. If NULL, no length is stored. */
) {
#ifdef _LANG
	char *string = LangString((Arg) objPtr);
	if (lengthPtr) {
		*lengthPtr = string? strlen(string): 0;
	}
	return (unsigned char *) string;
#else /* _LANG */
	int len;
	unsigned char *result = Tcl_GetByteArrayFromObj(objPtr, &len);
	if (lengthPtr) {
		*lengthPtr = len;
	}
	return result;
#endif /* _LANG */
}

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
	int *objc,
	Tcl_Obj ***objv
) {
	if (!objPtr) {
		*objc = 0;
		return TCL_OK;
	}
	return Tcl_ListObjGetElements(interp, objPtr, objc, objv);
}
