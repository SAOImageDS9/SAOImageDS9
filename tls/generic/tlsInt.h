/*
 * Macro and structure definitions for TLS extension
 *
 * Copyright (C) 1997-2000 Matt Newman <matt@novadigm.com>
 *
 * Additional credit is due for Andreas Kupries (a.kupries@westend.com), for
 * providing the Tcl_ReplaceChannel mechanism and working closely with me
 * to enhance it to support full fileevent semantics.
 *
 * Also work done by the follow people provided the impetus to do this "right":-
 *	tclSSL (Colin McCormack, Shared Technology)
 *	SSLtcl (Peter Antman)
 *
 */
#ifndef _TLSINT_H
#define _TLSINT_H

/* Platform unique definitions */
#if ((defined(_WIN32)) || (defined(__MINGW32__)) || (defined(__MINGW64__)))
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>
#include <wincrypt.h> /* OpenSSL needs this on Windows */
#endif

#include "tls.h"
#include <errno.h>
#include <string.h>
#include <stdint.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/rand.h>
#include <openssl/opensslv.h>

/* Windows needs to know which symbols to export. */
#ifdef BUILD_tls
#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLEXPORT
#endif /* BUILD_tls */

/* Handle TCL 8.6 CONST changes */
#ifndef CONST86
#   if TCL_MAJOR_VERSION > 8
#	define CONST86 const
#   else
#	define CONST86
#   endif
#endif

/*
 * Backwards compatibility for size type change
 */
#if TCL_MAJOR_VERSION < 9 && TCL_MINOR_VERSION < 7
#include <limits.h>
#ifndef TCL_SIZE_MAX
#define TCL_SIZE_MAX INT_MAX
#endif

#ifndef Tcl_Size
    typedef int Tcl_Size;
#endif

#define TCL_SIZE_MODIFIER ""
#define Tcl_GetSizeIntFromObj Tcl_GetIntFromObj
#define Tcl_NewSizeIntObj     Tcl_NewIntObj
#define Tcl_NewSizeIntFromObj Tcl_NewWideIntObj
#endif

#ifndef JOIN
#  define JOIN(a,b) JOIN1(a,b)
#  define JOIN1(a,b) a##b
#endif

#ifndef TCL_UNUSED
# if defined(__cplusplus)
#   define TCL_UNUSED(T) T
# elif defined(__GNUC__) && (__GNUC__ > 2)
#   define TCL_UNUSED(T) T JOIN(dummy, __LINE__) __attribute__((unused))
# else
#   define TCL_UNUSED(T) T JOIN(dummy, __LINE__)
# endif
#endif


/* Define missing POSIX error codes */
#ifndef ECONNABORTED
#define ECONNABORTED	130	/* Software caused connection abort */
#endif
#ifndef ECONNRESET
#define ECONNRESET	131	/* Connection reset by peer */
#endif

/* Debug and error macros */
#ifdef TCLEXT_TCLTLS_DEBUG
#include <ctype.h>
#define dprintf(...) { \
	char dprintfBuffer[8192], *dprintfBuffer_p; \
	dprintfBuffer_p = &dprintfBuffer[0]; \
	dprintfBuffer_p += sprintf(dprintfBuffer_p, "%s:%i:%s():", __FILE__, __LINE__, __func__); \
	dprintfBuffer_p += sprintf(dprintfBuffer_p, __VA_ARGS__); \
	fprintf(stderr, "%s\n", dprintfBuffer); \
}
#define dprintBuffer(bufferName, bufferLength) { \
	int dprintBufferIdx; \
	unsigned char dprintBufferChar; \
	fprintf(stderr, "%s:%i:%s():%s[%llu]={", __FILE__, __LINE__, __func__, #bufferName, (unsigned long long) bufferLength); \
	for (dprintBufferIdx = 0; dprintBufferIdx < bufferLength; dprintBufferIdx++) { \
		dprintBufferChar = bufferName[dprintBufferIdx]; \
		if (isalpha(dprintBufferChar) || isdigit(dprintBufferChar)) { \
			fprintf(stderr, "'%c' ", dprintBufferChar); \
		} else { \
			fprintf(stderr, "%02x ", (unsigned int) dprintBufferChar); \
		}; \
	}; \
	fprintf(stderr, "}\n"); \
}
#define dprintFlags(statePtr) { \
	char dprintfBuffer[8192], *dprintfBuffer_p; \
	dprintfBuffer_p = &dprintfBuffer[0]; \
	dprintfBuffer_p += sprintf(dprintfBuffer_p, "%s:%i:%s():%s->flags=0", __FILE__, __LINE__, __func__, #statePtr); \
	if (((statePtr)->flags & TLS_TCL_ASYNC) == TLS_TCL_ASYNC) { dprintfBuffer_p += sprintf(dprintfBuffer_p, "|TLS_TCL_ASYNC"); }; \
	if (((statePtr)->flags & TLS_TCL_SERVER) == TLS_TCL_SERVER) { dprintfBuffer_p += sprintf(dprintfBuffer_p, "|TLS_TCL_SERVER"); }; \
	if (((statePtr)->flags & TLS_TCL_INIT) == TLS_TCL_INIT) { dprintfBuffer_p += sprintf(dprintfBuffer_p, "|TLS_TCL_INIT"); }; \
	if (((statePtr)->flags & TLS_TCL_DEBUG) == TLS_TCL_DEBUG) { dprintfBuffer_p += sprintf(dprintfBuffer_p, "|TLS_TCL_DEBUG"); }; \
	if (((statePtr)->flags & TLS_TCL_CALLBACK) == TLS_TCL_CALLBACK) { dprintfBuffer_p += sprintf(dprintfBuffer_p, "|TLS_TCL_CALLBACK"); }; \
	if (((statePtr)->flags & TLS_TCL_FATAL_ERROR) == TLS_TCL_FATAL_ERROR) { dprintfBuffer_p += sprintf(dprintfBuffer_p, "|TLS_TCL_FATAL_ERROR"); }; \
	if (((statePtr)->flags & TLS_TCL_FASTPATH) == TLS_TCL_FASTPATH) { dprintfBuffer_p += sprintf(dprintfBuffer_p, "|TLS_TCL_FASTPATH"); }; \
	fprintf(stderr, "%s\n", dprintfBuffer); \
}
#else
#define dprintf(...) if (0) { fprintf(stderr, __VA_ARGS__); }
#define dprintBuffer(bufferName, bufferLength) /**/
#define dprintFlags(statePtr) /**/
#endif

#define GET_ERR_REASON()	ERR_reason_error_string(ERR_get_error())

/* Common list append macros */
#define LAPPEND_BARRAY(interp, obj, text, value, size) {\
    if (text != NULL) Tcl_ListObjAppendElement(interp, obj, Tcl_NewStringObj(text, -1)); \
    Tcl_ListObjAppendElement(interp, obj, Tcl_NewByteArrayObj(value, size)); \
}
#define LAPPEND_STR(interp, obj, text, value, size) {\
    if (text != NULL) Tcl_ListObjAppendElement(interp, obj, Tcl_NewStringObj(text, -1)); \
    Tcl_ListObjAppendElement(interp, obj, Tcl_NewStringObj(value, size)); \
}
#define LAPPEND_INT(interp, obj, text, value) {\
    if (text != NULL) Tcl_ListObjAppendElement(interp, obj, Tcl_NewStringObj(text, -1)); \
    Tcl_ListObjAppendElement(interp, obj, Tcl_NewIntObj(value)); \
}
#define LAPPEND_LONG(interp, obj, text, value) {\
    if (text != NULL) Tcl_ListObjAppendElement(interp, obj, Tcl_NewStringObj(text, -1)); \
    Tcl_ListObjAppendElement(interp, obj, Tcl_NewLongObj(value)); \
}
#define LAPPEND_BOOL(interp, obj, text, value) {\
    if (text != NULL) Tcl_ListObjAppendElement(interp, obj, Tcl_NewStringObj(text, -1)); \
    Tcl_ListObjAppendElement(interp, obj, Tcl_NewBooleanObj(value)); \
}
#define LAPPEND_OBJ(interp, obj, text, tclObj) {\
    if (text != NULL) Tcl_ListObjAppendElement(interp, obj, Tcl_NewStringObj(text, -1)); \
    Tcl_ListObjAppendElement(interp, obj, (tclObj != NULL) ? tclObj : Tcl_NewStringObj("", 0)); \
}
#define LAPPEND_WIDE(interp, obj, text, value) {\
    if (text != NULL) Tcl_ListObjAppendElement(interp, obj, Tcl_NewStringObj(text, -1)); \
    Tcl_ListObjAppendElement(interp, obj, Tcl_NewWideIntObj(value)); \
}

/*
 * Defines for State.flags
 */
#define TLS_TCL_ASYNC		(1<<0)	/* Non-blocking mode */
#define TLS_TCL_SERVER		(1<<1)	/* Server-Side */
#define TLS_TCL_INIT		(1<<2)	/* Initializing connection */
#define TLS_TCL_DEBUG		(1<<3)	/* Show debug tracing */
#define TLS_TCL_CALLBACK	(1<<4)	/* In a callback, prevent update
					 * looping problem. [Bug 1652380] */
#define TLS_TCL_FATAL_ERROR	(1<<5)	/* Set on handshake failure or other fatal error. All
					 * further I/O will result in ECONNABORTED errors. */
#define TLS_TCL_FASTPATH	(1<<6)	/* The parent channel is being used
					 * directly by the SSL library. */
#define TLS_TCL_EOF		(1<<7)	/* At EOF. Can't read, but can write. */

/* Set timer delay */
#define TLS_TCL_DELAY (5)

/*
 * This structure describes the per-instance state of an SSL channel.
 *
 * The SSL processing context is maintained here, in the ClientData
 */
typedef struct State {
	Tcl_Channel self;	/* This socket channel */
	Tcl_TimerToken timer;	/* I/O timer handle */

	int flags;		/* See State.flags above  */
	int watchMask;		/* Current WatchProc mask */
	int want;		/* Pending wants from OpenSSL */
	int mode;		/* Current mode of parent channel */

	Tcl_Interp *interp;	/* Interpreter in which this resides */
	Tcl_Obj *callback;	/* Script called for tracing, info, and errors */
	Tcl_Obj *password;	/* Script called for certificate password */
	Tcl_Obj *vcmd;		/* Script called to verify or validate protocol config */

	int vflags;		/* Verify flags */
	SSL *ssl;		/* Struct for SSL processing */
	SSL_CTX *ctx;		/* SSL Context */
	BIO *bio;		/* Struct for SSL processing */
	BIO *p_bio;		/* Parent BIO (that is layered on Tcl_Channel) */

	size_t protos_len; /* Length of protos */
	unsigned char *protos;	/* List of supported protocols in protocol format */

	const char *err;
} State;

#ifdef USE_TCL_STUBS
#ifndef Tcl_StackChannel
#error "Unable to compile on this version of Tcl"
#endif /* Tcl_GetStackedChannel */
#endif /* USE_TCL_STUBS */

#if TCL_MAJOR_VERSION < 9
    typedef char tls_free_type;
#else
    typedef void tls_free_type;
#endif

/*
 * Forward declarations
 */
const Tcl_ChannelType *Tls_ChannelType(void);
Tcl_Channel	Tls_GetParent(State *statePtr, int maskFlags);

Tcl_Obj		*Tls_NewX509Obj(Tcl_Interp *interp, X509 *cert, int all);
Tcl_Obj		*Tls_NewCAObj(Tcl_Interp *interp, const SSL *ssl, int peer);
void		Tls_Error(State *statePtr, const char *msg);
void		Tls_Free(tls_free_type *blockPtr);
int		Tls_WaitForConnect(State *statePtr, int *errorCodePtr, int handshakeFailureIsPermanent);

BIO		*BIO_new_tcl(State* statePtr, int flags);
int		BIO_cleanup();

#define PTR2INT(x) ((int) ((intptr_t) (x)))

#endif /* _TLSINT_H */
