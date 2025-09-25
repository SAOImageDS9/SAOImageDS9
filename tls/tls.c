/*
 * Copyright (C) 1997-1999 Matt Newman <matt@novadigm.com>
 * some modifications:
 *	Copyright (C) 2000 Ajuba Solutions
 *	Copyright (C) 2002 ActiveState Corporation
 *	Copyright (C) 2004 Starfish Systems 
 *
 * $Header: /cvsroot/tls/tls/tls.c,v 1.37 2015/07/07 17:16:02 andreas_kupries Exp $
 *
 * TLS (aka SSL) Channel - can be layered on any bi-directional
 * Tcl_Channel (Note: Requires Trf Core Patch)
 *
 * This was built (almost) from scratch based upon observation of
 * OpenSSL 0.9.2B
 *
 * Addition credit is due for Andreas Kupries (a.kupries@westend.com), for
 * providing the Tcl_ReplaceChannel mechanism and working closely with me
 * to enhance it to support full fileevent semantics.
 *
 * Also work done by the follow people provided the impetus to do this "right":
 *	tclSSL (Colin McCormack, Shared Technology)
 *	SSLtcl (Peter Antman)
 *
 */

#include "tlsInt.h"
#include "tclOpts.h"
#include <stdlib.h>

/* Check, if Tcl version supports Tcl_Size,
   which was introduced in Tcl 8.7 and 9.
*/
#if TCL_MAJOR_VERSION <= 8 && TCL_MINOR_VERSION <= 6
typedef int Tcl_Size;
#endif

/*
 * External functions
 */

/*
 * Forward declarations
 */

#define F2N( key, dsp) \
	(((key) == NULL) ? (char *) NULL : \
		Tcl_TranslateFileName(interp, (key), (dsp)))
#define REASON()	ERR_reason_error_string(ERR_get_error())

static void	InfoCallback (const SSL *ssl, int where, int ret);

static int	CiphersObjCmd  (ClientData clientData,
			Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);

static int	HandshakeObjCmd  (ClientData clientData,
			Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);

static int	ImportObjCmd  (ClientData clientData,
			Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);

static int	StatusObjCmd  (ClientData clientData,
			Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);

static int	VersionObjCmd  (ClientData clientData,
			Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);

static int	MiscObjCmd  (ClientData clientData,
			Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);

static int	UnimportObjCmd  (ClientData clientData,
			Tcl_Interp *interp, int objc, Tcl_Obj *const objv[]);

static SSL_CTX *CTX_Init (State *statePtr, int proto, char *key,
			char *cert, char *CAdir, char *CAfile, char *ciphers,
			char *DHparams);

static int	TlsLibInit  () ;

#define TLS_PROTO_SSL2		0x01
#define TLS_PROTO_SSL3		0x02
#define TLS_PROTO_TLS1		0x04
#define TLS_PROTO_TLS1_1	0x08
#define TLS_PROTO_TLS1_2	0x10
#define ENABLED(flag, mask)	(((flag) & (mask)) == (mask))

/*
 * Static data structures
 */

#ifndef OPENSSL_NO_DH
/* code derived from output of 'openssl dhparam -C 2048' */

static unsigned char dh2048_p[]={
	0xEC,0xFD,0x6F,0x66,0xD8,0xBC,0xB4,0xCB,0xD7,0xE7,0xB4,0xAE,
	0xEC,0xC0,0x06,0x25,0x40,0x9F,0x3F,0xC4,0xAC,0x34,0x19,0x36,
	0x8A,0xAB,0xA9,0xF6,0x45,0x36,0x87,0x1F,0x10,0x35,0x3F,0x90,
	0x00,0xC6,0x7A,0xE8,0x51,0xF4,0x7F,0x50,0x0F,0xC2,0x82,0x91,
	0xAD,0x60,0x1B,0x49,0xB1,0x0B,0x23,0xC3,0x37,0xAE,0x0D,0x2C,
	0x49,0xC6,0xFB,0x60,0x9D,0x50,0x2F,0x8C,0x2F,0xDE,0xE6,0x5F,
	0x53,0x8B,0x5F,0xF9,0x70,0x16,0xEE,0x51,0xD1,0xAB,0x02,0x48,
	0x61,0xF1,0xA0,0xD7,0xBD,0x04,0x24,0xF0,0xE4,0xD1,0x0A,0x4C,
	0x28,0xDC,0x22,0x78,0x7C,0xED,0x2A,0xFA,0xF4,0x57,0x7C,0xAE,
	0xDF,0x52,0xC6,0xA2,0x11,0x28,0xC5,0x3B,0xB8,0x2F,0x95,0x3F,
	0x1E,0x05,0x66,0xFE,0x7D,0x1A,0x73,0xA0,0x45,0xF8,0xBB,0x8C,
	0x64,0xB9,0xA9,0x4D,0x23,0xBE,0x20,0x60,0xA2,0xF7,0xC7,0xD8,
	0xD8,0x49,0x28,0x9A,0x81,0xAC,0xF9,0x7F,0x3C,0xFC,0xBE,0x25,
	0x5B,0x1D,0xB6,0xAB,0x08,0x06,0x11,0x8D,0x94,0x69,0x3C,0x68,
	0x98,0x5A,0x90,0xF8,0xEB,0x19,0xCA,0x9F,0x1C,0x50,0x96,0x53,
	0xEF,0xEC,0x1B,0x93,0x4F,0x53,0xB7,0xD9,0x04,0x8E,0x48,0x99,
	0x6E,0x24,0xFF,0x66,0xF5,0xB0,0xDF,0x00,0xBA,0x22,0xE2,0xB6,
	0xE3,0x3A,0xC2,0x95,0xB1,0x14,0x68,0xFB,0xA5,0x37,0x22,0x78,
	0x56,0x5C,0xA4,0x23,0x31,0x02,0x97,0x7D,0xA9,0x84,0x0B,0x12,
	0x26,0x58,0x2F,0x86,0x10,0xAD,0xB0,0xAB,0xB9,0x7B,0x05,0x9A,
	0xDE,0x11,0xF1,0xE7,0x34,0xC7,0x95,0x42,0x1C,0x4F,0xA9,0xA8,
	0x92,0xDF,0x3F,0x7B,
	};
static unsigned char dh2048_g[]={
	0x02,
};


static DH *get_dh2048()
{
    DH *dh=NULL;

    if ((dh=DH_new()) == NULL) return(NULL);

    dh->p=BN_bin2bn(dh2048_p,sizeof(dh2048_p),NULL);
    dh->g=BN_bin2bn(dh2048_g,sizeof(dh2048_g),NULL);

    if ((dh->p == NULL) || (dh->g == NULL))
	return(NULL);
    return(dh);
}
#endif

/*
 * Defined in Tls_Init to determine what kind of channels we are using
 * (old-style 8.2.0-8.3.1 or new-style 8.3.2+).
 */
int channelTypeVersion;

/*
 * We lose the tcl password callback when we use the RSA BSAFE SSL-C 1.1.2
 * libraries instead of the current OpenSSL libraries.
 */

#ifdef BSAFE
#define PRE_OPENSSL_0_9_4 1
#endif

/*
 * Pre OpenSSL 0.9.4 Compat
 */

#ifndef STACK_OF
#define STACK_OF(x)			STACK
#define sk_SSL_CIPHER_num(sk)		sk_num((sk))
#define sk_SSL_CIPHER_value( sk, index)	(SSL_CIPHER*)sk_value((sk), (index))
#endif

/*
 * Thread-Safe TLS Code
 */

#ifdef TCL_THREADS
#define OPENSSL_THREAD_DEFINES
#include <openssl/opensslconf.h>

#ifdef OPENSSL_THREADS
#include <openssl/crypto.h>

/*
 * Threaded operation requires locking callbacks
 * Based from /crypto/cryptlib.c of OpenSSL and NSOpenSSL.
 */

static Tcl_Mutex locks[CRYPTO_NUM_LOCKS];
static Tcl_Mutex init_mx;
static int initialized;

static void CryptoThreadLockCallback (int mode, int n, const char *file, int line);
static unsigned long CryptoThreadIdCallback   (void);

static void CryptoThreadLockCallback(int mode, int n, const char *file, int line)
{
    if (mode & CRYPTO_LOCK) {
       Tcl_MutexLock(&locks[n]);
    } else {
       Tcl_MutexUnlock(&locks[n]);
    }
}

static unsigned long CryptoThreadIdCallback(void)
{
    return (unsigned long) Tcl_GetCurrentThread();
}
#endif /* OPENSSL_THREADS */
#endif /* TCL_THREADS */


/*
 *-------------------------------------------------------------------
 *
 * InfoCallback --
 *
 *	monitors SSL connection process
 *
 * Results:
 *	None
 *
 * Side effects:
 *	Calls callback (if defined)
 *-------------------------------------------------------------------
 */
static void InfoCallback(const SSL *ssl, int where, int ret)
{
    State *statePtr = (State*)SSL_get_app_data((SSL *)ssl);
    Tcl_Obj *cmdPtr;
    char *major; char *minor;

    if (statePtr->callback == (Tcl_Obj*)NULL)
	return;

    cmdPtr = Tcl_DuplicateObj(statePtr->callback);

#if 0
    if (where & SSL_CB_ALERT) {
	sev = SSL_alert_type_string_long(ret);
	if (strcmp( sev, "fatal")==0) {	/* Map to error */
	    Tls_Error(statePtr, SSL_ERROR(ssl, 0));
	    return;
	}
    }
#endif
    if (where & SSL_CB_HANDSHAKE_START) {
	major = "handshake";
	minor = "start";
    } else if (where & SSL_CB_HANDSHAKE_DONE) {
	major = "handshake";
	minor = "done";
    } else {
	if (where & SSL_CB_ALERT)		major = "alert";
	else if (where & SSL_ST_CONNECT)	major = "connect";
	else if (where & SSL_ST_ACCEPT)		major = "accept";
	else					major = "unknown";

	if (where & SSL_CB_READ)		minor = "read";
	else if (where & SSL_CB_WRITE)		minor = "write";
	else if (where & SSL_CB_LOOP)		minor = "loop";
	else if (where & SSL_CB_EXIT)		minor = "exit";
	else					minor = "unknown";
    }

    Tcl_ListObjAppendElement( statePtr->interp, cmdPtr, 
	    Tcl_NewStringObj( "info", -1));

    Tcl_ListObjAppendElement( statePtr->interp, cmdPtr, 
	    Tcl_NewStringObj( Tcl_GetChannelName(statePtr->self), -1) );

    Tcl_ListObjAppendElement( statePtr->interp, cmdPtr,
	    Tcl_NewStringObj( major, -1) );

    Tcl_ListObjAppendElement( statePtr->interp, cmdPtr,
	    Tcl_NewStringObj( minor, -1) );

    if (where & (SSL_CB_LOOP|SSL_CB_EXIT)) {
	Tcl_ListObjAppendElement( statePtr->interp, cmdPtr,
	    Tcl_NewStringObj( SSL_state_string_long(ssl), -1) );
    } else if (where & SSL_CB_ALERT) {
	const char *cp = (char *) SSL_alert_desc_string_long(ret);

	Tcl_ListObjAppendElement( statePtr->interp, cmdPtr,
	    Tcl_NewStringObj( cp, -1) );
    } else {
	Tcl_ListObjAppendElement( statePtr->interp, cmdPtr,
	    Tcl_NewStringObj( SSL_state_string_long(ssl), -1) );
    }
    Tcl_Preserve( (ClientData) statePtr->interp);
    Tcl_Preserve( (ClientData) statePtr);

    Tcl_IncrRefCount( cmdPtr);
    (void) Tcl_EvalObjEx(statePtr->interp, cmdPtr, TCL_EVAL_GLOBAL);
    Tcl_DecrRefCount( cmdPtr);

    Tcl_Release( (ClientData) statePtr);
    Tcl_Release( (ClientData) statePtr->interp);

}

/*
 *-------------------------------------------------------------------
 *
 * VerifyCallback --
 *
 *	Monitors SSL certificate validation process.
 *	This is called whenever a certificate is inspected
 *	or decided invalid.
 *
 * Results:
 *	A callback bound to the socket may return one of:
 *	    0			- the certificate is deemed invalid
 *	    1			- the certificate is deemed valid
 *	    empty string	- no change to certificate validation
 *
 * Side effects:
 *	The err field of the currently operative State is set
 *	  to a string describing the SSL negotiation failure reason
 *-------------------------------------------------------------------
 */
static int VerifyCallback(int ok, X509_STORE_CTX *ctx)
{
    Tcl_Obj *cmdPtr, *result;
    char *errStr;
    char *string;
    Tcl_Size length;
    SSL   *ssl		= (SSL*)X509_STORE_CTX_get_app_data(ctx);
    X509  *cert		= X509_STORE_CTX_get_current_cert(ctx);
    State *statePtr	= (State*)SSL_get_app_data(ssl);
    int depth		= X509_STORE_CTX_get_error_depth(ctx);
    int err		= X509_STORE_CTX_get_error(ctx);

    dprintf(stderr, "Verify: %d\n", ok);

    if (!ok) {
	errStr = (char*)X509_verify_cert_error_string(err);
    } else {
	errStr = (char *)0;
    }

    if (statePtr->callback == (Tcl_Obj*)NULL) {
	if (statePtr->vflags & SSL_VERIFY_FAIL_IF_NO_PEER_CERT) {
	    return ok;
	} else {
	    return 1;
	}
    }
    cmdPtr = Tcl_DuplicateObj(statePtr->callback);

    Tcl_ListObjAppendElement( statePtr->interp, cmdPtr, 
	    Tcl_NewStringObj( "verify", -1));

    Tcl_ListObjAppendElement( statePtr->interp, cmdPtr, 
	    Tcl_NewStringObj( Tcl_GetChannelName(statePtr->self), -1) );

    Tcl_ListObjAppendElement( statePtr->interp, cmdPtr,
	    Tcl_NewIntObj( depth) );

    Tcl_ListObjAppendElement( statePtr->interp, cmdPtr,
	    Tls_NewX509Obj( statePtr->interp, cert) );

    Tcl_ListObjAppendElement( statePtr->interp, cmdPtr,
	    Tcl_NewIntObj( ok) );

    Tcl_ListObjAppendElement( statePtr->interp, cmdPtr,
	    Tcl_NewStringObj( errStr ? errStr : "", -1) );

    Tcl_Preserve( (ClientData) statePtr->interp);
    Tcl_Preserve( (ClientData) statePtr);

    statePtr->flags |= TLS_TCL_CALLBACK;

    Tcl_IncrRefCount( cmdPtr);
    if (Tcl_EvalObjEx(statePtr->interp, cmdPtr, TCL_EVAL_GLOBAL) != TCL_OK) {
	/* It got an error - reject the certificate.		*/
	Tcl_BackgroundError( statePtr->interp);
	ok = 0;
    } else {
	result = Tcl_GetObjResult(statePtr->interp);
	string = Tcl_GetStringFromObj(result, &length);
	/* An empty result leaves verification unchanged.	*/
	if (length > 0) {
	    if (Tcl_GetIntFromObj(statePtr->interp, result, &ok) != TCL_OK) {
		Tcl_BackgroundError(statePtr->interp);
		ok = 0;
	    }
	}
    }
    Tcl_DecrRefCount( cmdPtr);

    statePtr->flags &= ~(TLS_TCL_CALLBACK);

    Tcl_Release( (ClientData) statePtr);
    Tcl_Release( (ClientData) statePtr->interp);

    return(ok);	/* By default, leave verification unchanged.	*/
}

/*
 *-------------------------------------------------------------------
 *
 * Tls_Error --
 *
 *	Calls callback with $fd and $msg - so the callback can decide
 *	what to do with errors.
 *
 * Side effects:
 *	The err field of the currently operative State is set
 *	  to a string describing the SSL negotiation failure reason
 *-------------------------------------------------------------------
 */
void Tls_Error(State *statePtr, char *msg)
{
    Tcl_Obj *cmdPtr;

    if (msg && *msg) {
	Tcl_SetErrorCode(statePtr->interp, "SSL", msg, (char *)NULL);
    } else {
	msg = Tcl_GetStringFromObj(Tcl_GetObjResult(statePtr->interp), NULL);
    }
    statePtr->err = msg;

    if (statePtr->callback == (Tcl_Obj*)NULL) {
	char buf[BUFSIZ];
	sprintf(buf, "SSL channel \"%s\": error: %s",
	    Tcl_GetChannelName(statePtr->self), msg);
	Tcl_SetResult( statePtr->interp, buf, TCL_VOLATILE);
	Tcl_BackgroundError( statePtr->interp);
	return;
    }
    cmdPtr = Tcl_DuplicateObj(statePtr->callback);

    Tcl_ListObjAppendElement(statePtr->interp, cmdPtr, 
	    Tcl_NewStringObj("error", -1));

    Tcl_ListObjAppendElement(statePtr->interp, cmdPtr, 
	    Tcl_NewStringObj(Tcl_GetChannelName(statePtr->self), -1));

    Tcl_ListObjAppendElement(statePtr->interp, cmdPtr,
	    Tcl_NewStringObj(msg, -1));

    Tcl_Preserve((ClientData) statePtr->interp);
    Tcl_Preserve((ClientData) statePtr);

    Tcl_IncrRefCount(cmdPtr);
    if (Tcl_EvalObjEx(statePtr->interp, cmdPtr, TCL_EVAL_GLOBAL) != TCL_OK) {
	Tcl_BackgroundError(statePtr->interp);
    }
    Tcl_DecrRefCount(cmdPtr);

    Tcl_Release((ClientData) statePtr);
    Tcl_Release((ClientData) statePtr->interp);
}

/*
 *-------------------------------------------------------------------
 *
 * PasswordCallback -- 
 *
 *	Called when a password is needed to unpack RSA and PEM keys.
 *	Evals any bound password script and returns the result as
 *	the password string.
 *-------------------------------------------------------------------
 */
#ifdef PRE_OPENSSL_0_9_4
/*
 * No way to handle user-data therefore no way without a global
 * variable to access the Tcl interpreter.
*/
static int PasswordCallback(char *buf, int size, int verify)
{
    return -1;
}
#else
static int PasswordCallback(char *buf, int size, int verify, void *udata)
{
    State *statePtr	= (State *) udata;
    Tcl_Interp *interp	= statePtr->interp;
    Tcl_Obj *cmdPtr;
    int result;

    if (statePtr->password == NULL) {
	if (Tcl_EvalEx(interp, "tls::password", -1, TCL_EVAL_GLOBAL)
		== TCL_OK) {
	    char *ret = (char *) Tcl_GetStringResult(interp);
	    strncpy(buf, ret, (size_t) size);
	    return (int)strlen(ret);
	} else {
	    return -1;
	}
    }

    cmdPtr = Tcl_DuplicateObj(statePtr->password);

    Tcl_Preserve((ClientData) statePtr->interp);
    Tcl_Preserve((ClientData) statePtr);

    Tcl_IncrRefCount(cmdPtr);
    result = Tcl_EvalObjEx(interp, cmdPtr, TCL_EVAL_GLOBAL);
    if (result != TCL_OK) {
	Tcl_BackgroundError(statePtr->interp);
    }
    Tcl_DecrRefCount(cmdPtr);

    Tcl_Release((ClientData) statePtr);
    Tcl_Release((ClientData) statePtr->interp);

    if (result == TCL_OK) {
	char *ret = (char *) Tcl_GetStringResult(interp);
	strncpy(buf, ret, (size_t) size);
	return (int)strlen(ret);
    } else {
	return -1;
    }
}
#endif

/*
 *-------------------------------------------------------------------
 *
 * CiphersObjCmd -- list available ciphers
 *
 *	This procedure is invoked to process the "tls::ciphers" command
 *	to list available ciphers, based upon protocol selected.
 *
 * Results:
 *	A standard Tcl result list.
 *
 * Side effects:
 *	constructs and destroys SSL context (CTX)
 *
 *-------------------------------------------------------------------
 */
static int CiphersObjCmd(ClientData clientData, Tcl_Interp *interp,
			 int objc, Tcl_Obj *const objv[])
{
    static const char *protocols[] = {
	"ssl2",	"ssl3",	"tls1",	"tls1.1", "tls1.2", NULL
    };
    enum protocol {
	TLS_SSL2, TLS_SSL3, TLS_TLS1, TLS_TLS1_1, TLS_TLS1_2, TLS_NONE
    };
    Tcl_Obj *objPtr;
    SSL_CTX *ctx = NULL;
    SSL *ssl = NULL;
    STACK_OF(SSL_CIPHER) *sk;
    char *cp, buf[BUFSIZ];
    int index, verbose = 0;

    if (objc < 2 || objc > 3) {
	Tcl_WrongNumArgs(interp, 1, objv, "protocol ?verbose?");
	return TCL_ERROR;
    }
    if (Tcl_GetIndexFromObj( interp, objv[1], protocols, "protocol", 0,
	&index) != TCL_OK) {
	return TCL_ERROR;
    }
    if (objc > 2 && Tcl_GetBooleanFromObj( interp, objv[2],
	&verbose) != TCL_OK) {
	return TCL_ERROR;
    }
    switch ((enum protocol)index) {
    case TLS_SSL2:
#if defined(NO_SSL2)
		Tcl_AppendResult(interp, "protocol not supported", NULL);
		return TCL_ERROR;
#else
		ctx = SSL_CTX_new(SSLv2_method()); break;
#endif
    case TLS_SSL3:
#if defined(NO_SSL3)
		Tcl_AppendResult(interp, "protocol not supported", NULL);
		return TCL_ERROR;
#else
		ctx = SSL_CTX_new(SSLv3_method()); break;
#endif
    case TLS_TLS1:
#if defined(NO_TLS1)
		Tcl_AppendResult(interp, "protocol not supported", NULL);
		return TCL_ERROR;
#else
		ctx = SSL_CTX_new(TLSv1_method()); break;
#endif
    case TLS_TLS1_1:
#if defined(NO_TLS1_1)
		Tcl_AppendResult(interp, "protocol not supported", NULL);
		return TCL_ERROR;
#else
		ctx = SSL_CTX_new(TLSv1_1_method()); break;
#endif
    case TLS_TLS1_2:
#if defined(NO_TLS1_2)
		Tcl_AppendResult(interp, "protocol not supported", NULL);
		return TCL_ERROR;
#else
		ctx = SSL_CTX_new(TLSv1_2_method()); break;
#endif
    default:
		break;
    }
    if (ctx == NULL) {
	Tcl_AppendResult(interp, REASON(), (char *) NULL);
	return TCL_ERROR;
    }
    ssl = SSL_new(ctx);
    if (ssl == NULL) {
	Tcl_AppendResult(interp, REASON(), (char *) NULL);
	SSL_CTX_free(ctx);
	return TCL_ERROR;
    }
    objPtr = Tcl_NewListObj( 0, NULL);

    if (!verbose) {
	for (index = 0; ; index++) {
	    cp = (char*)SSL_get_cipher_list( ssl, index);
	    if (cp == NULL) break;
	    Tcl_ListObjAppendElement( interp, objPtr,
		Tcl_NewStringObj( cp, -1) );
	}
    } else {
	sk = SSL_get_ciphers(ssl);

	for (index = 0; index < sk_SSL_CIPHER_num(sk); index++) {
	    register size_t i;
	    SSL_CIPHER_description( sk_SSL_CIPHER_value( sk, index),
				    buf, sizeof(buf));
	    for (i = strlen(buf) - 1; i ; i--) {
		if (buf[i] == ' ' || buf[i] == '\n' ||
		    buf[i] == '\r' || buf[i] == '\t') {
		    buf[i] = '\0';
		} else {
		    break;
		}
	    }
	    Tcl_ListObjAppendElement( interp, objPtr,
		Tcl_NewStringObj( buf, -1) );
	}
    }
    SSL_free(ssl);
    SSL_CTX_free(ctx);

    Tcl_SetObjResult( interp, objPtr);
    return TCL_OK;
}

/*
 *-------------------------------------------------------------------
 *
 * HandshakeObjCmd --
 *
 *	This command is used to verify whether the handshake is complete
 *	or not.
 *
 * Results:
 *	A standard Tcl result. 1 means handshake complete, 0 means pending.
 *
 * Side effects:
 *	May force SSL negotiation to take place.
 *
 *-------------------------------------------------------------------
 */

static int HandshakeObjCmd(ClientData clientData, Tcl_Interp *interp,
			   int objc, Tcl_Obj *const objv[])
{
    Tcl_Channel chan;		/* The channel to set a mode on. */
    State *statePtr;		/* client state for ssl socket */
    int ret = 1;

    if (objc != 2) {
	Tcl_WrongNumArgs(interp, 1, objv, "channel");
	return TCL_ERROR;
    }

    chan = Tcl_GetChannel(interp, Tcl_GetStringFromObj(objv[1], NULL), NULL);
    if (chan == (Tcl_Channel) NULL) {
	return TCL_ERROR;
    }
    if (channelTypeVersion == TLS_CHANNEL_VERSION_2) {
	/*
	 * Make sure to operate on the topmost channel
	 */
	chan = Tcl_GetTopChannel(chan);
    }
    if (Tcl_GetChannelType(chan) != Tls_ChannelType()) {
	Tcl_AppendResult(interp, "bad channel \"", Tcl_GetChannelName(chan),
		"\": not a TLS channel", NULL);
	return TCL_ERROR;
    }
    statePtr = (State *)Tcl_GetChannelInstanceData(chan);

    if (!SSL_is_init_finished(statePtr->ssl)) {
	int err;
	ret = Tls_WaitForConnect(statePtr, &err);
	if ((statePtr->flags & TLS_TCL_ASYNC) && err == EAGAIN) {
	    ret = 0;
	}
	if (ret < 0) {
	    const char *errStr = statePtr->err;
	    Tcl_ResetResult(interp);
	    Tcl_SetErrno(err);

	    if (!errStr || *errStr == 0) {
		errStr = Tcl_PosixError(interp);
	    }

	    Tcl_AppendResult(interp, "handshake failed: ", errStr,
		    (char *) NULL);
	    return TCL_ERROR;
	}
    }

    Tcl_SetObjResult(interp, Tcl_NewIntObj(ret));
    return TCL_OK;
}

/*
 *-------------------------------------------------------------------
 *
 * ImportObjCmd --
 *
 *	This procedure is invoked to process the "ssl" command
 *
 *	The ssl command pushes SSL over a (newly connected) tcp socket
 *
 * Results:
 *	A standard Tcl result.
 *
 * Side effects:
 *	May modify the behavior of an IO channel.
 *
 *-------------------------------------------------------------------
 */

static int ImportObjCmd(ClientData clientData, Tcl_Interp *interp, 
			int objc, Tcl_Obj *const objv[])
{
    Tcl_Channel chan;		/* The channel to set a mode on. */
    State *statePtr;		/* client state for ssl socket */
    SSL_CTX *ctx	= NULL;
    Tcl_Obj *script	= NULL;
    Tcl_Obj *password	= NULL;
    Tcl_Size len;
    int idx;
    int flags		= TLS_TCL_INIT;
    int server		= 0;	/* is connection incoming or outgoing? */
    char *key		= NULL;
    char *cert		= NULL;
    char *ciphers	= NULL;
    char *CAfile	= NULL;
    char *CAdir		= NULL;
    char *DHparams	= NULL;
    char *model		= NULL;
#ifndef OPENSSL_NO_TLSEXT
    char *servername	= NULL;	/* hostname for Server Name Indication */
#endif
#if defined(NO_SSL2)
    int ssl2 = 0;
#else
    int ssl2 = 1;
#endif
#if defined(NO_SSL3)
    int ssl3 = 0;
#else
    int ssl3 = 1;
#endif
    int tls1 = 1;
    int tls1_1 = 1;
    int tls1_2 = 1;
    int proto = 0;
    int verify = 0, require = 0, request = 1;

    if (objc < 2) {
	Tcl_WrongNumArgs(interp, 1, objv, "channel ?options?");
	return TCL_ERROR;
    }

    chan = Tcl_GetChannel(interp, Tcl_GetStringFromObj(objv[1], NULL), NULL);
    if (chan == (Tcl_Channel) NULL) {
	return TCL_ERROR;
    }
    if (channelTypeVersion == TLS_CHANNEL_VERSION_2) {
	/*
	 * Make sure to operate on the topmost channel
	 */
	chan = Tcl_GetTopChannel(chan);
    }

    for (idx = 2; idx < objc; idx++) {
	char *opt = Tcl_GetStringFromObj(objv[idx], NULL);

	if (opt[0] != '-')
	    break;

	OPTSTR( "-cadir", CAdir);
	OPTSTR( "-cafile", CAfile);
	OPTSTR( "-certfile", cert);
	OPTSTR( "-cipher", ciphers);
	OPTOBJ( "-command", script);
	OPTSTR( "-dhparams", DHparams);
	OPTSTR( "-keyfile", key);
	OPTSTR( "-model", model);
	OPTOBJ( "-password", password);
	OPTBOOL( "-require", require);
	OPTBOOL( "-request", request);
	OPTBOOL( "-server", server);
#ifndef OPENSSL_NO_TLSEXT
        OPTSTR( "-servername", servername);
#endif

	OPTBOOL( "-ssl2", ssl2);
	OPTBOOL( "-ssl3", ssl3);
	OPTBOOL( "-tls1", tls1);
	OPTBOOL( "-tls1.1", tls1_1);
	OPTBOOL( "-tls1.2", tls1_2);

	OPTBAD( "option", "-cadir, -cafile, -certfile, -cipher, -command, -dhparams, -keyfile, -model, -password, -require, -request, -server, -servername, -ssl2, -ssl3, -tls1, -tls1.1 or -tls1.2");

	return TCL_ERROR;
    }
    if (request)	    verify |= SSL_VERIFY_CLIENT_ONCE | SSL_VERIFY_PEER;
    if (request && require) verify |= SSL_VERIFY_FAIL_IF_NO_PEER_CERT;
    if (verify == 0)	verify = SSL_VERIFY_NONE;

    proto |= (ssl2 ? TLS_PROTO_SSL2 : 0);
    proto |= (ssl3 ? TLS_PROTO_SSL3 : 0);
    proto |= (tls1 ? TLS_PROTO_TLS1 : 0);
    proto |= (tls1_1 ? TLS_PROTO_TLS1_1 : 0);
    proto |= (tls1_2 ? TLS_PROTO_TLS1_2 : 0);

    /* reset to NULL if blank string provided */
    if (cert && !*cert)		cert	 = NULL;
    if (key && !*key)		key	 = NULL;
    if (ciphers && !*ciphers)	ciphers	 = NULL;
    if (CAfile && !*CAfile)	CAfile	 = NULL;
    if (CAdir && !*CAdir)	CAdir	 = NULL;
    if (DHparams && !*DHparams)	DHparams = NULL;

    /* new SSL state */
    statePtr		= (State *) ckalloc((unsigned) sizeof(State));
    memset(statePtr, 0, sizeof(State));

    statePtr->flags	= flags;
    statePtr->interp	= interp;
    statePtr->vflags	= verify;
    statePtr->err	= "";

    /* allocate script */
    if (script) {
	(void) Tcl_GetStringFromObj(script, &len);
	if (len) {
	    statePtr->callback = script;
	    Tcl_IncrRefCount(statePtr->callback);
	}
    }

    /* allocate password */
    if (password) {
	(void) Tcl_GetStringFromObj(password, &len);
	if (len) {
	    statePtr->password = password;
	    Tcl_IncrRefCount(statePtr->password);
	}
    }

    if (model != NULL) {
	int mode;
	/* Get the "model" context */
	chan = Tcl_GetChannel(interp, model, &mode);
	if (chan == (Tcl_Channel) NULL) {
	    Tls_Free((char *) statePtr);
	    return TCL_ERROR;
	}
	if (channelTypeVersion == TLS_CHANNEL_VERSION_2) {
	    /*
	     * Make sure to operate on the topmost channel
	     */
	    chan = Tcl_GetTopChannel(chan);
	}
	if (Tcl_GetChannelType(chan) != Tls_ChannelType()) {
	    Tcl_AppendResult(interp, "bad channel \"",
		    Tcl_GetChannelName(chan), "\": not a TLS channel", NULL);
	    Tls_Free((char *) statePtr);
	    return TCL_ERROR;
	}
	ctx = ((State *)Tcl_GetChannelInstanceData(chan))->ctx;
    } else {
	if ((ctx = CTX_Init(statePtr, proto, key, cert, CAdir, CAfile, ciphers,
		DHparams)) == (SSL_CTX*)0) {
	    Tls_Free((char *) statePtr);
	    return TCL_ERROR;
	}
    }

    statePtr->ctx = ctx;

    /*
     * We need to make sure that the channel works in binary (for the
     * encryption not to get goofed up).
     * We only want to adjust the buffering in pre-v2 channels, where
     * each channel in the stack maintained its own buffers.
     */
    Tcl_SetChannelOption(interp, chan, "-translation", "binary");
    if (channelTypeVersion == TLS_CHANNEL_VERSION_1) {
	Tcl_SetChannelOption(interp, chan, "-buffering", "none");
    }

    if (channelTypeVersion == TLS_CHANNEL_VERSION_2) {
	statePtr->self = Tcl_StackChannel(interp, Tls_ChannelType(),
		(ClientData) statePtr, (TCL_READABLE | TCL_WRITABLE), chan);
    } else {
	statePtr->self = chan;
	Tcl_StackChannel(interp, Tls_ChannelType(),
		(ClientData) statePtr, (TCL_READABLE | TCL_WRITABLE), chan);
    }
    if (statePtr->self == (Tcl_Channel) NULL) {
	/*
	 * No use of Tcl_EventuallyFree because no possible Tcl_Preserve.
	 */
	Tls_Free((char *) statePtr);
	return TCL_ERROR;
    }

    /*
     * SSL Initialization
     */

    statePtr->ssl = SSL_new(statePtr->ctx);
    if (!statePtr->ssl) {
	/* SSL library error */
	Tcl_AppendResult(interp, "couldn't construct ssl session: ", REASON(),
		(char *) NULL);
	Tls_Free((char *) statePtr);
	return TCL_ERROR;
    }

#ifndef OPENSSL_NO_TLSEXT
    if (servername) {
        if (!SSL_set_tlsext_host_name(statePtr->ssl, servername) && require) {
            Tcl_AppendResult(interp, "setting TLS host name extension failed",
                (char *) NULL);
            Tls_Free((char *) statePtr);
            return TCL_ERROR;
        }
    }
#endif

    /*
     * SSL Callbacks
     */

    SSL_set_app_data(statePtr->ssl, (void *)statePtr);	/* point back to us */

    SSL_set_verify(statePtr->ssl, verify, VerifyCallback);

    SSL_CTX_set_info_callback(statePtr->ctx, InfoCallback);

    /* Create Tcl_Channel BIO Handler */
    statePtr->p_bio	= BIO_new_tcl(statePtr, BIO_CLOSE);
    statePtr->bio	= BIO_new(BIO_f_ssl());

    if (server) {
	statePtr->flags |= TLS_TCL_SERVER;
	SSL_set_accept_state(statePtr->ssl);
    } else {
	SSL_set_connect_state(statePtr->ssl);
    }
    SSL_set_bio(statePtr->ssl, statePtr->p_bio, statePtr->p_bio);
    BIO_set_ssl(statePtr->bio, statePtr->ssl, BIO_NOCLOSE);

    /*
     * End of SSL Init
     */
    Tcl_SetResult(interp, (char *) Tcl_GetChannelName(statePtr->self),
	    TCL_VOLATILE);
    return TCL_OK;
}

/*
 *-------------------------------------------------------------------
 *
 * UnimportObjCmd --
 *
 *	This procedure is invoked to remove the topmost channel filter.
 *
 * Results:
 *	A standard Tcl result.
 *
 * Side effects:
 *	May modify the behavior of an IO channel.
 *
 *-------------------------------------------------------------------
 */

static int UnimportObjCmd(ClientData clientData, Tcl_Interp *interp,
			  int objc, Tcl_Obj *const objv[])
{
    Tcl_Channel chan;		/* The channel to set a mode on. */

    if (objc != 2) {
	Tcl_WrongNumArgs(interp, 1, objv, "channel");
	return TCL_ERROR;
    }

    chan = Tcl_GetChannel(interp, Tcl_GetString(objv[1]), NULL);
    if (chan == (Tcl_Channel) NULL) {
	return TCL_ERROR;
    }

    if (channelTypeVersion == TLS_CHANNEL_VERSION_2) {
	/*
	 * Make sure to operate on the topmost channel
	 */
	chan = Tcl_GetTopChannel(chan);
    }

    if (Tcl_GetChannelType(chan) != Tls_ChannelType()) {
	Tcl_AppendResult(interp, "bad channel \"", Tcl_GetChannelName(chan),
		"\": not a TLS channel", NULL);
	return TCL_ERROR;
    }

    if (Tcl_UnstackChannel(interp, chan) == TCL_ERROR) {
	return TCL_ERROR;
    }

    return TCL_OK;
}

/*
 *-------------------------------------------------------------------
 *
 * CTX_Init -- construct a SSL_CTX instance
 *
 * Results:
 *	A valid SSL_CTX instance or NULL.
 *
 * Side effects:
 *	constructs SSL context (CTX)
 *
 *-------------------------------------------------------------------
 */

static SSL_CTX *CTX_Init(State *statePtr,
			 int proto, 
			 char *key,
			 char *cert,
			 char *CAdir,
			 char *CAfile,
			 char *ciphers,
			 char *DHparams)
{
    Tcl_Interp *interp = statePtr->interp;
    SSL_CTX *ctx = NULL;
    Tcl_DString ds;
    Tcl_DString ds1;
    int off = 0;
    const SSL_METHOD *method;

    if (!proto) {
	Tcl_AppendResult(interp, "no valid protocol selected", NULL);
	return (SSL_CTX *)0;
    }

    /* create SSL context */
#if defined(NO_SSL2)
    if (ENABLED(proto, TLS_PROTO_SSL2)) {
	Tcl_AppendResult(interp, "protocol not supported", NULL);
	return (SSL_CTX *)0;
    }
#endif
#if defined(NO_SSL3)
    if (ENABLED(proto, TLS_PROTO_SSL3)) {
	Tcl_AppendResult(interp, "protocol not supported", NULL);
	return (SSL_CTX *)0;
    }
#endif
#if defined(NO_TLS1)
    if (ENABLED(proto, TLS_PROTO_TLS1)) {
	Tcl_AppendResult(interp, "protocol not supported", NULL);
	return (SSL_CTX *)0;
    }
#endif
#if defined(NO_TLS1_1)
    if (ENABLED(proto, TLS_PROTO_TLS1_1)) {
	Tcl_AppendResult(interp, "protocol not supported", NULL);
	return (SSL_CTX *)0;
    }
#endif
#if defined(NO_TLS1_2)
    if (ENABLED(proto, TLS_PROTO_TLS1_2)) {
	Tcl_AppendResult(interp, "protocol not supported", NULL);
	return (SSL_CTX *)0;
    }
#endif

    switch (proto) {
#if !defined(NO_SSL2)
    case TLS_PROTO_SSL2:
	method = SSLv2_method ();
	break;
#endif
#if !defined(NO_SSL3)
    case TLS_PROTO_SSL3:
	method = SSLv3_method ();
	break;
#endif
#if !defined(NO_TLS1)
    case TLS_PROTO_TLS1:
	method = TLSv1_method ();
	break;
#endif
#if !defined(NO_TLS1_1)
    case TLS_PROTO_TLS1_1:
	method = TLSv1_1_method ();
	break;
#endif
#if !defined(NO_TLS1_2)
    case TLS_PROTO_TLS1_2:
	method = TLSv1_2_method ();
	break;
#endif
    default:
        method = SSLv23_method ();
#if !defined(NO_SSL2)
	off |= (ENABLED(proto, TLS_PROTO_SSL2)   ? 0 : SSL_OP_NO_SSLv2);
#endif
#if !defined(NO_SSL3)
	off |= (ENABLED(proto, TLS_PROTO_SSL3)   ? 0 : SSL_OP_NO_SSLv3);
#endif
#if !defined(NO_TLS1)
	off |= (ENABLED(proto, TLS_PROTO_TLS1)   ? 0 : SSL_OP_NO_TLSv1);
#endif
#if !defined(NO_TLS1_1)
	off |= (ENABLED(proto, TLS_PROTO_TLS1_1) ? 0 : SSL_OP_NO_TLSv1_1);
#endif
#if !defined(NO_TLS1_2)
	off |= (ENABLED(proto, TLS_PROTO_TLS1_2) ? 0 : SSL_OP_NO_TLSv1_2);
#endif
	break;
    }
    
    ctx = SSL_CTX_new (method);
    
    SSL_CTX_set_app_data( ctx, (void*)interp);	/* remember the interpreter */
    SSL_CTX_set_options( ctx, SSL_OP_ALL);	/* all SSL bug workarounds */
    SSL_CTX_set_options( ctx, off);	/* all SSL bug workarounds */
    SSL_CTX_sess_set_cache_size( ctx, 128);

    if (ciphers != NULL)
	SSL_CTX_set_cipher_list(ctx, ciphers);

    /* set some callbacks */
    SSL_CTX_set_default_passwd_cb(ctx, PasswordCallback);

#ifndef BSAFE
    SSL_CTX_set_default_passwd_cb_userdata(ctx, (void *)statePtr);
#endif

    /* read a Diffie-Hellman parameters file, or use the built-in one */
#ifdef OPENSSL_NO_DH
    if (DHparams != NULL) {
	Tcl_AppendResult(interp,
	    "DH parameter support not available", (char *) NULL);
	SSL_CTX_free(ctx);
	return (SSL_CTX *)0;
    }
#else
    {
	DH* dh;
	if (DHparams != NULL) {
	    BIO *bio;
	    Tcl_DStringInit(&ds);
	    bio = BIO_new_file(F2N(DHparams, &ds), "r");
	    if (!bio) {
		Tcl_DStringFree(&ds);
		Tcl_AppendResult(interp,
		    "Could not find DH parameters file", (char *) NULL);
		SSL_CTX_free(ctx);
		return (SSL_CTX *)0;
	    }
	    
	    dh = PEM_read_bio_DHparams(bio, NULL, NULL, NULL);
	    BIO_free(bio);
	    Tcl_DStringFree(&ds);
	    if (!dh) {
		Tcl_AppendResult(interp,
		    "Could not read DH parameters from file", (char *) NULL);
		SSL_CTX_free(ctx);
		return (SSL_CTX *)0;
	    }
	} else {
	    dh = get_dh2048();
	}
	SSL_CTX_set_tmp_dh(ctx, dh);
	DH_free(dh);
    }
#endif

    /* set our certificate */
    if (cert != NULL) {
	Tcl_DStringInit(&ds);

	if (SSL_CTX_use_certificate_file(ctx, F2N( cert, &ds),
					SSL_FILETYPE_PEM) <= 0) {
	    Tcl_DStringFree(&ds);
	    Tcl_AppendResult(interp,
			     "unable to set certificate file ", cert, ": ",
			     REASON(), (char *) NULL);
	    SSL_CTX_free(ctx);
	    return (SSL_CTX *)0;
	}

	/* get the private key associated with this certificate */
	if (key == NULL) key=cert;

	if (SSL_CTX_use_PrivateKey_file(ctx, F2N( key, &ds),
					SSL_FILETYPE_PEM) <= 0) {
	    Tcl_DStringFree(&ds);
	    /* flush the passphrase which might be left in the result */
	    Tcl_SetResult(interp, NULL, TCL_STATIC);
	    Tcl_AppendResult(interp,
			     "unable to set public key file ", key, " ",
			     REASON(), (char *) NULL);
	    SSL_CTX_free(ctx);
	    return (SSL_CTX *)0;
	}
	Tcl_DStringFree(&ds);
	/* Now we know that a key and cert have been set against
	 * the SSL context */
	if (!SSL_CTX_check_private_key(ctx)) {
	    Tcl_AppendResult(interp,
			     "private key does not match the certificate public key",
			     (char *) NULL);
	    SSL_CTX_free(ctx);
	    return (SSL_CTX *)0;
	}
    } else {
	cert = (char*)X509_get_default_cert_file();

	if (SSL_CTX_use_certificate_file(ctx, cert,
					SSL_FILETYPE_PEM) <= 0) {
#if 0
	    Tcl_DStringFree(&ds);
	    Tcl_AppendResult(interp,
			     "unable to use default certificate file ", cert, ": ",
			     REASON(), (char *) NULL);
	    SSL_CTX_free(ctx);
	    return (SSL_CTX *)0;
#endif
	}
    }
	
    Tcl_DStringInit(&ds);
    Tcl_DStringInit(&ds1);
    if (!SSL_CTX_load_verify_locations(ctx, F2N(CAfile, &ds), F2N(CAdir, &ds1)) ||
	!SSL_CTX_set_default_verify_paths(ctx)) {
#if 0
	Tcl_DStringFree(&ds);
	Tcl_DStringFree(&ds1);
	/* Don't currently care if this fails */
	Tcl_AppendResult(interp, "SSL default verify paths: ",
		REASON(), (char *) NULL);
	SSL_CTX_free(ctx);
	return (SSL_CTX *)0;
#endif
    }

    /* https://sourceforge.net/p/tls/bugs/57/ */
    if ( CAfile != NULL ) {
        STACK_OF(X509_NAME) *certNames = SSL_load_client_CA_file( F2N(CAfile, &ds) );
	if ( certNames != NULL ) { 
	    SSL_CTX_set_client_CA_list(ctx, certNames );
	}
    }

    Tcl_DStringFree(&ds);
    Tcl_DStringFree(&ds1);
    return ctx;
}

/*
 *-------------------------------------------------------------------
 *
 * StatusObjCmd -- return certificate for connected peer.
 *
 * Results:
 *	A standard Tcl result.
 *
 * Side effects:
 *	None.
 *
 *-------------------------------------------------------------------
 */
static int StatusObjCmd(ClientData clientData, Tcl_Interp *interp,
			int objc, Tcl_Obj *const objv[])
{
    State *statePtr;
    X509 *peer;
    Tcl_Obj *objPtr;
    Tcl_Channel chan;
    char *channelName, *ciphers;
    int mode;

    switch (objc) {
	case 2:
	    channelName = Tcl_GetStringFromObj(objv[1], NULL);
	    break;

	case 3:
	    if (!strcmp (Tcl_GetString (objv[1]), "-local")) {
		channelName = Tcl_GetStringFromObj(objv[2], NULL);
		break;
	    }
	    /* else fall... */
	default:
	    Tcl_WrongNumArgs(interp, 1, objv, "?-local? channel");
	    return TCL_ERROR;
    }

    chan = Tcl_GetChannel(interp, channelName, &mode);
    if (chan == (Tcl_Channel) NULL) {
	return TCL_ERROR;
    }
    if (channelTypeVersion == TLS_CHANNEL_VERSION_2) {
	/*
	 * Make sure to operate on the topmost channel
	 */
	chan = Tcl_GetTopChannel(chan);
    }
    if (Tcl_GetChannelType(chan) != Tls_ChannelType()) {
	Tcl_AppendResult(interp, "bad channel \"", Tcl_GetChannelName(chan),
		"\": not a TLS channel", NULL);
	return TCL_ERROR;
    }
    statePtr = (State *) Tcl_GetChannelInstanceData(chan);
    if (objc == 2) {
	peer = SSL_get_peer_certificate(statePtr->ssl);
    } else {
	peer = SSL_get_certificate(statePtr->ssl);
    }
    if (peer) {
	objPtr = Tls_NewX509Obj(interp, peer);
	if (objc == 2) { X509_free(peer); }
    } else {
	objPtr = Tcl_NewListObj(0, NULL);
    }

    Tcl_ListObjAppendElement (interp, objPtr,
	    Tcl_NewStringObj ("sbits", -1));
    Tcl_ListObjAppendElement (interp, objPtr,
	    Tcl_NewIntObj (SSL_get_cipher_bits (statePtr->ssl, NULL)));

    ciphers = (char*)SSL_get_cipher(statePtr->ssl);
    if (ciphers != NULL && strcmp(ciphers, "(NONE)")!=0) {
	Tcl_ListObjAppendElement(interp, objPtr,
		Tcl_NewStringObj("cipher", -1));
	Tcl_ListObjAppendElement(interp, objPtr,
		Tcl_NewStringObj(SSL_get_cipher(statePtr->ssl), -1));
    }
    Tcl_SetObjResult( interp, objPtr);
    return TCL_OK;
}

/*
 *-------------------------------------------------------------------
 *
 * VersionObjCmd -- return version string from OpenSSL.
 *
 * Results:
 *	A standard Tcl result.
 *
 * Side effects:
 *	None.
 *
 *-------------------------------------------------------------------
 */
static int VersionObjCmd(ClientData clientData, Tcl_Interp *interp,
			 int objc, Tcl_Obj *const objv[])
{
    Tcl_Obj *objPtr;

    objPtr = Tcl_NewStringObj(OPENSSL_VERSION_TEXT, -1);

    Tcl_SetObjResult(interp, objPtr);
    return TCL_OK;
}

/*
 *-------------------------------------------------------------------
 *
 * MiscObjCmd -- misc commands
 *
 * Results:
 *	A standard Tcl result.
 *
 * Side effects:
 *	None.
 *
 *-------------------------------------------------------------------
 */
static int MiscObjCmd(ClientData clientData, Tcl_Interp *interp,
		      int objc, Tcl_Obj	*const objv[])
{
    static const char *commands [] = { "req", NULL };
    enum command { C_REQ, C_DUMMY };
    int cmd;

    if (objc < 2) {
	Tcl_WrongNumArgs(interp, 1, objv, "subcommand ?args?");
	return TCL_ERROR;
    }
    if (Tcl_GetIndexFromObj(interp, objv[1], commands,
	    "command", 0,&cmd) != TCL_OK) {
	return TCL_ERROR;
    }

    switch ((enum command) cmd) {
	case C_REQ: {
	    EVP_PKEY *pkey=NULL;
	    X509 *cert=NULL;
	    X509_NAME *name=NULL;
	    Tcl_Obj **listv;
	    Tcl_Size listc;
	    int i;

	    BIO *out=NULL;

	    char *k_C="",*k_ST="",*k_L="",*k_O="",*k_OU="",*k_CN="",*k_Email="";
	    char *keyout,*pemout,*str;
	    int keysize,serial=0,days=365;
	    
	    if ((objc<5) || (objc>6)) {
		Tcl_WrongNumArgs(interp, 2, objv, "keysize keyfile certfile ?info?");
		return TCL_ERROR;
	    }

	    if (Tcl_GetIntFromObj(interp, objv[2], &keysize) != TCL_OK) {
		return TCL_ERROR;
	    }
	    keyout=Tcl_GetString(objv[3]);
	    pemout=Tcl_GetString(objv[4]);

	    if (objc>=6) {
		if (Tcl_ListObjGetElements(interp, objv[5],
			&listc, &listv) != TCL_OK) {
		    return TCL_ERROR;
		}

		if ((listc%2) != 0) {
		    Tcl_SetResult(interp,"Information list must have even number of arguments",NULL);
		    return TCL_ERROR;
		}
		for (i=0; i<listc; i+=2) {
		    str=Tcl_GetString(listv[i]);
		    if (strcmp(str,"days")==0) {
			if (Tcl_GetIntFromObj(interp,listv[i+1],&days)!=TCL_OK)
			    return TCL_ERROR;
		    } else if (strcmp(str,"serial")==0) {
			if (Tcl_GetIntFromObj(interp,listv[i+1],&serial)!=TCL_OK)
			    return TCL_ERROR;
		    } else if (strcmp(str,"serial")==0) {
			if (Tcl_GetIntFromObj(interp,listv[i+1],&serial)!=TCL_OK)
			    return TCL_ERROR;
		    } else if (strcmp(str,"C")==0) {
			k_C=Tcl_GetString(listv[i+1]);
		    } else if (strcmp(str,"ST")==0) {
			k_ST=Tcl_GetString(listv[i+1]);
		    } else if (strcmp(str,"L")==0) {
			k_L=Tcl_GetString(listv[i+1]);
		    } else if (strcmp(str,"O")==0) {
			k_O=Tcl_GetString(listv[i+1]);
		    } else if (strcmp(str,"OU")==0) {
			k_OU=Tcl_GetString(listv[i+1]);
		    } else if (strcmp(str,"CN")==0) {
			k_CN=Tcl_GetString(listv[i+1]);
		    } else if (strcmp(str,"Email")==0) {
			k_Email=Tcl_GetString(listv[i+1]);
		    } else {
			Tcl_SetResult(interp,"Unknown parameter",NULL);
			return TCL_ERROR;
		    }
		}
	    }
	    if ((pkey = EVP_PKEY_new()) != NULL) {
		if (!EVP_PKEY_assign_RSA(pkey,
			RSA_generate_key(keysize, 0x10001, NULL, NULL))) {
		    Tcl_SetResult(interp,"Error generating private key",NULL);
		    EVP_PKEY_free(pkey);
		    return TCL_ERROR;
		}
		out=BIO_new(BIO_s_file());
		BIO_write_filename(out,keyout);
		PEM_write_bio_PrivateKey(out,pkey,NULL,NULL,0,NULL,NULL);
		BIO_free_all(out);

		if ((cert=X509_new())==NULL) {
		    Tcl_SetResult(interp,"Error generating certificate request",NULL);
		    EVP_PKEY_free(pkey);
		    return(TCL_ERROR);
		}

		X509_set_version(cert,2);
		ASN1_INTEGER_set(X509_get_serialNumber(cert),serial);
		X509_gmtime_adj(X509_get_notBefore(cert),0);
		X509_gmtime_adj(X509_get_notAfter(cert),(long)60*60*24*days);
		X509_set_pubkey(cert,pkey);
		
		name=X509_get_subject_name(cert);

		X509_NAME_add_entry_by_txt(name,"C", MBSTRING_ASC, (const unsigned char*)k_C, -1, -1, 0);
		X509_NAME_add_entry_by_txt(name,"ST", MBSTRING_ASC, (const unsigned char*)k_ST, -1, -1, 0);
		X509_NAME_add_entry_by_txt(name,"L", MBSTRING_ASC, (const unsigned char*)k_L, -1, -1, 0);
		X509_NAME_add_entry_by_txt(name,"O", MBSTRING_ASC, (const unsigned char*)k_O, -1, -1, 0);
		X509_NAME_add_entry_by_txt(name,"OU", MBSTRING_ASC, (const unsigned char*)k_OU, -1, -1, 0);
		X509_NAME_add_entry_by_txt(name,"CN", MBSTRING_ASC, (const unsigned char*)k_CN, -1, -1, 0);
		X509_NAME_add_entry_by_txt(name,"Email", MBSTRING_ASC, (const unsigned char*)k_Email, -1, -1, 0);

		X509_set_subject_name(cert,name);

		if (!X509_sign(cert,pkey,EVP_md5())) {
		    X509_free(cert);
		    EVP_PKEY_free(pkey);
		    Tcl_SetResult(interp,"Error signing certificate",NULL);
		    return TCL_ERROR;
		}

		out=BIO_new(BIO_s_file());
		BIO_write_filename(out,pemout);

		PEM_write_bio_X509(out,cert);
		BIO_free_all(out);

		X509_free(cert);
		EVP_PKEY_free(pkey);
	    } else {
		Tcl_SetResult(interp,"Error generating private key",NULL);
		return TCL_ERROR;
	    }
	}
	break;
    default:
	break;
    }
    return TCL_OK;
}

/*
 *-------------------------------------------------------------------
 *
 * Tls_Free --
 *
 *	This procedure cleans up when a SSL socket based channel
 *	is closed and its reference count falls below 1
 *
 * Results:
 *	none
 *
 * Side effects:
 *	Frees all the state
 *
 *-------------------------------------------------------------------
 */
void Tls_Free( char *blockPtr )
{
    State *statePtr = (State *)blockPtr;

    Tls_Clean(statePtr);
    ckfree(blockPtr);
}

/*
 *-------------------------------------------------------------------
 *
 * Tls_Clean --
 *
 *	This procedure cleans up when a SSL socket based channel
 *	is closed and its reference count falls below 1.  This should
 *	be called synchronously by the CloseProc, not in the
 *	EventuallyFree callback.
 *
 * Results:
 *	none
 *
 * Side effects:
 *	Frees all the state
 *
 *-------------------------------------------------------------------
 */
void Tls_Clean(State *statePtr)
{
    /*
     * we're assuming here that we're single-threaded
     */

    if (statePtr->timer != (Tcl_TimerToken) NULL) {
	Tcl_DeleteTimerHandler(statePtr->timer);
	statePtr->timer = NULL;
    }

    if (statePtr->bio) {
	/* This will call SSL_shutdown. Bug 1414045 */
	dprintf(stderr, "BIO_free_all(%p)\n", statePtr->bio);
	BIO_free_all(statePtr->bio);
	statePtr->bio = NULL;
    }
    if (statePtr->ssl) {
	dprintf(stderr, "SSL_free(%p)\n", statePtr->ssl);
	SSL_free(statePtr->ssl);
	statePtr->ssl = NULL;
    }
    if (statePtr->ctx) {
	SSL_CTX_free(statePtr->ctx);
	statePtr->ctx = NULL;
    }
    if (statePtr->callback) {
	Tcl_DecrRefCount(statePtr->callback);
	statePtr->callback = NULL;
    }
    if (statePtr->password) {
	Tcl_DecrRefCount(statePtr->password);
	statePtr->password = NULL;
    }
}

/*
 *-------------------------------------------------------------------
 *
 * Tls_Init --
 *
 *	This is a package initialization procedure, which is called
 *	by Tcl when this package is to be added to an interpreter.
 *
 * Results:  Ssl configured and loaded
 *
 * Side effects:
 *	 create the ssl command, initialise ssl context
 *
 *-------------------------------------------------------------------
 */

int Tls_Init(Tcl_Interp *interp)
{
    int major, minor, patchlevel, release;

    /*
     * The original 8.2.0 stacked channel implementation (and the patch
     * that preceded it) had problems with scalability and robustness.
     * These were address in 8.3.2 / 8.4a2, so we now require that as a
     * minimum for TLS 1.4+.  We only support 8.2+ now (8.3.2+ preferred).
     */
    if (
#ifdef USE_TCL_STUBS
	Tcl_InitStubs(interp, "8.2", 0)
#else
	Tcl_PkgRequire(interp, "Tcl", "8.2", 0)
#endif
	== NULL) {
	return TCL_ERROR;
    }

    /*
     * Get the version so we can runtime switch on available functionality.
     * TLS should really only be used in 8.3.2+, but the other works for
     * some limited functionality, so an attempt at support is made.
     */
    Tcl_GetVersion(&major, &minor, &patchlevel, &release);
    if ((major > 8) || ((major == 8) && ((minor > 3) || ((minor == 3) &&
	    (release == TCL_FINAL_RELEASE) && (patchlevel >= 2))))) {
	/* 8.3.2+ */
	channelTypeVersion = TLS_CHANNEL_VERSION_2;
    } else {
	/* 8.2.0 - 8.3.1 */
	channelTypeVersion = TLS_CHANNEL_VERSION_1;
    }

    if (TlsLibInit() != TCL_OK) {
	Tcl_AppendResult(interp, "could not initialize SSL library", NULL);
	return TCL_ERROR;
    }

    Tcl_CreateObjCommand(interp, "tls::ciphers", CiphersObjCmd,
	    (ClientData) 0, (Tcl_CmdDeleteProc *) NULL);

    Tcl_CreateObjCommand(interp, "tls::handshake", HandshakeObjCmd,
	    (ClientData) 0, (Tcl_CmdDeleteProc *) NULL);

    Tcl_CreateObjCommand(interp, "tls::import", ImportObjCmd,
	    (ClientData) 0, (Tcl_CmdDeleteProc *) NULL);

    Tcl_CreateObjCommand(interp, "tls::unimport", UnimportObjCmd,
	    (ClientData) 0, (Tcl_CmdDeleteProc *) NULL);

    Tcl_CreateObjCommand(interp, "tls::status", StatusObjCmd,
	    (ClientData) 0, (Tcl_CmdDeleteProc *) NULL);

    Tcl_CreateObjCommand(interp, "tls::version", VersionObjCmd,
	    (ClientData) 0, (Tcl_CmdDeleteProc *) NULL);

    Tcl_CreateObjCommand(interp, "tls::misc", MiscObjCmd,
	    (ClientData) 0, (Tcl_CmdDeleteProc *) NULL);

    return Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION);
}

/*
 *------------------------------------------------------*
 *
 *	Tls_SafeInit --
 *
 *	------------------------------------------------*
 *	Standard procedure required by 'load'. 
 *	Initializes this extension for a safe interpreter.
 *	------------------------------------------------*
 *
 *	Sideeffects:
 *		As of 'Tls_Init'
 *
 *	Result:
 *		A standard Tcl error code.
 *
 *------------------------------------------------------*
 */

int Tls_SafeInit (Tcl_Interp* interp)
{
    return Tls_Init (interp);
}


/*
 *------------------------------------------------------*
 *
 *	TlsLibInit --
 *
 *	------------------------------------------------*
 *	Initializes SSL library once per application
 *	------------------------------------------------*
 *
 *	Side effects:
 *		initilizes SSL library
 *
 *	Result:
 *		none
 *
 *------------------------------------------------------*
 */
static int TlsLibInit ()
{
    int i;
    char rnd_seed[16] = "GrzSlplKqUdnnzP!";	/* 16 bytes */
#if defined(OPENSSL_THREADS) && defined(TCL_THREADS)
    size_t num_locks;
#endif
    int status=TCL_OK;

    if (!initialized) {
	Tcl_MutexLock(&init_mx);
	if (!initialized) {
	    initialized = 1;

	    if (CRYPTO_set_mem_functions((void *(*)(size_t))Tcl_Alloc,
					 (void *(*)(void *, size_t))Tcl_Realloc,
					 (void(*)(void *))Tcl_Free) == 0) {
	       /* Not using Tcl's mem functions ... not critical */
	    }

#if defined(OPENSSL_THREADS) && defined(TCL_THREADS)
	    /* should we consider allocating mutexes? */
	    num_locks = CRYPTO_num_locks();
	    if (num_locks > CRYPTO_NUM_LOCKS) {
		status=TCL_ERROR;
		goto done;
	    }

	    CRYPTO_set_locking_callback(CryptoThreadLockCallback);
	    CRYPTO_set_id_callback(CryptoThreadIdCallback);
#endif

	    if (SSL_library_init() != 1) {
	    	status=TCL_ERROR;
		goto done;
	    }
	    SSL_load_error_strings();
	    ERR_load_crypto_strings();

	    /*
	     * Seed the random number generator in the SSL library,
	     * using the do/while construct because of the bug note in the
	     * OpenSSL FAQ at http://www.openssl.org/support/faq.html#USER1
	     *
	     * The crux of the problem is that Solaris 7 does not have a 
	     * /dev/random or /dev/urandom device so it cannot gather enough
	     * entropy from the RAND_seed() when TLS initializes and refuses
	     * to go further. Earlier versions of OpenSSL carried on regardless.
	     */
	    srand((unsigned int) time((time_t *) NULL));
	    do {
		for (i = 0; i < 16; i++) {
		    rnd_seed[i] = 1 + (char) (255.0 * rand()/(RAND_MAX+1.0));
		}
		RAND_seed(rnd_seed, sizeof(rnd_seed));
	    } while (RAND_status() != 1);
	}
    	done:

	Tcl_MutexUnlock(&init_mx);
    }
    return status;
}
