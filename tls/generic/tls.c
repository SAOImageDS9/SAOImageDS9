/*
 * TLS Channel - This extension provides a encrypted communication channel
 * using the TLS or SSL protocols. It can be layered on top of any
 * bi-directional Tcl_Channel.
 *
 * This was initially built (almost) from scratch based upon observation of
 * OpenSSL 0.9.2B.
 *
 * Copyright (C) 1997-1999 Matt Newman <matt@novadigm.com>
 * some modifications:
 *	Copyright (C) 2000 Ajuba Solutions
 *	Copyright (C) 2002 ActiveState Corporation
 *	Copyright (C) 2004 Starfish Systems
 *	Copyright (C) 2023-2025 Brian O'Hagan
 *
 * Additional credit is due for Andreas Kupries (a.kupries@westend.com), for
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
#include "tlsUuid.h"
#include <stdio.h>
#include <stdlib.h>
#include <openssl/ssl.h>
#include <openssl/crypto.h>
#include <openssl/opensslconf.h>
#include <openssl/rsa.h>
#include <openssl/safestack.h>
#if OPENSSL_VERSION_NUMBER < 0x30000000L
    #include <openssl/bn.h>
    #include <openssl/dh.h>
#endif

/* Min OpenSSL version */
#if OPENSSL_VERSION_NUMBER < 0x10101000L
#error "Only OpenSSL v1.1.1 or later is supported"
#endif


/*
 * Forward declarations
 */

#define F2N(key, dsp) \
	(((key) == NULL) ? (char *)NULL : \
		Tcl_TranslateFileName(interp, (key), (dsp)))

static SSL_CTX *CTX_Init(State *statePtr, int isServer, int proto, char *key,
		char *certfile, unsigned char *key_asn1, unsigned char *cert_asn1,
		Tcl_Size key_asn1_len, Tcl_Size cert_asn1_len, char *CApath, char *CAstore,
		char *CAfile, char *ciphers, char *ciphersuites, int level, char *DHparams);

#define TLS_PROTO_SSL2		0x01
#define TLS_PROTO_SSL3		0x02
#define TLS_PROTO_TLS1		0x04
#define TLS_PROTO_TLS1_1	0x08
#define TLS_PROTO_TLS1_2	0x10
#define TLS_PROTO_TLS1_3	0x20
#define ENABLED(flag, mask)	(((flag) & (mask)) == (mask))

#define SSLKEYLOGFILE		"SSLKEYLOGFILE"


/********************/
/* Callbacks        */
/********************/

/*
 *-------------------------------------------------------------------
 *
 * Eval Callback Command --
 *
 *	Eval callback command and catch any errors
 *
 * Results:
 *	0 = Command returned fail or eval returned TCL_ERROR
 *	1 = Command returned success or eval returned TCL_OK
 *
 * Side effects:
 *	Evaluates callback command
 *
 *-------------------------------------------------------------------
 */

static int
EvalCallback(
    Tcl_Interp *interp,		/* Tcl interpreter */
    State *statePtr,		/* Client state for TLS socket */
    Tcl_Obj *cmdPtr)		/* Command to eval as a Tcl object */
{
    int code, ok = 0;

    dprintf("Called");

    Tcl_Preserve((void *) interp);
    Tcl_Preserve((void *) statePtr);

    /* Eval callback with success for ok or return value 1, fail for error or return value 0 */
    Tcl_ResetResult(interp);
    code = Tcl_EvalObjEx(interp, cmdPtr, TCL_EVAL_GLOBAL);
    dprintf("EvalCallback code: %d", code);
    if (code == TCL_OK) {
	/* Check result for return value */
	Tcl_Obj *result = Tcl_GetObjResult(interp);
	if (result == NULL || Tcl_GetIntFromObj(interp, result, &ok) != TCL_OK) {
	    ok = 1;
	}
	dprintf("Result boolean: %d", ok);
    } else {
	/* Error - reject the certificate */
	dprintf("Tcl_BackgroundError");
#if (TCL_MAJOR_VERSION == 8) && (TCL_MINOR_VERSION < 6)
	Tcl_BackgroundError(interp);
#else
	Tcl_BackgroundException(interp, code);
#endif
    }

    Tcl_Release((void *) statePtr);
    Tcl_Release((void *) interp);
    return ok;
}

/*
 *-------------------------------------------------------------------
 *
 * InfoCallback --
 *
 *	Monitors SSL connection process
 *
 * Results:
 *	None
 *
 * Side effects:
 *	Calls callback (if defined)
 *
 *-------------------------------------------------------------------
 */

static void
InfoCallback(
    const SSL *ssl,		/* SSL context */
    int where,			/* Source of info */
    int ret)			/* message enum */
{
    State *statePtr = (State*)SSL_get_app_data((SSL *)ssl);
    Tcl_Interp *interp	= statePtr->interp;
    Tcl_Obj *cmdPtr;
    const char *major, *minor;

    dprintf("Called");

    if (statePtr->callback == (Tcl_Obj*)NULL) {
	return;
    }

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

    /* Create command to eval with fn, chan, major, minor, message, and type args */
    cmdPtr = Tcl_DuplicateObj(statePtr->callback);
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj("info", -1));
    Tcl_ListObjAppendElement(interp, cmdPtr,
	    Tcl_NewStringObj(Tcl_GetChannelName(statePtr->self), -1));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj(major, -1));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj(minor, -1));

    if (where & SSL_CB_ALERT) {
	Tcl_ListObjAppendElement(interp, cmdPtr,
	    Tcl_NewStringObj(SSL_alert_desc_string_long(ret), -1));
	Tcl_ListObjAppendElement(interp, cmdPtr,
	    Tcl_NewStringObj(SSL_alert_type_string_long(ret), -1));
    } else {
	Tcl_ListObjAppendElement(interp, cmdPtr,
	    Tcl_NewStringObj(SSL_state_string_long(ssl), -1));
	Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj("info", -1));
    }

    /* Eval callback command */
    Tcl_IncrRefCount(cmdPtr);
    EvalCallback(interp, statePtr, cmdPtr);
    Tcl_DecrRefCount(cmdPtr);
}

/*
 *-------------------------------------------------------------------
 *
 * MessageCallback --
 *
 *	Monitors SSL protocol messages
 *
 * Results:
 *	None
 *
 * Side effects:
 *	Calls callback (if defined)
 *
 *-------------------------------------------------------------------
 */

#ifndef OPENSSL_NO_SSL_TRACE
static void
MessageCallback(
    int write_p,		/* Message 0=received, 1=sent */
    int version,		/* TLS version */
    int content_type,		/* Protocol content type */
    const void *buf,		/* Protocol message */
    size_t len,			/* Protocol message length */
    SSL *ssl,			/* SSL context */
    void *arg)			/* Client state for TLS socket */
{
    State *statePtr = (State*)arg;
    Tcl_Interp *interp	= statePtr->interp;
    Tcl_Obj *cmdPtr;
    const char *ver, *type;
    BIO *bio;
    char buffer[15000];
    Tcl_Size blen = 0;
    buffer[0] = 0;

    dprintf("Called");

    if (statePtr->callback == (Tcl_Obj*)NULL) {
	return;
    }

    switch(version) {
#if OPENSSL_VERSION_NUMBER < 0x10100000L && !defined(NO_SSL2) && !defined(OPENSSL_NO_SSL2)
    case SSL2_VERSION:
	ver = "SSLv2";
	break;
#endif
#if !defined(NO_SSL3) && !defined(OPENSSL_NO_SSL3)
    case SSL3_VERSION:
	ver = "SSLv3";
	break;
#endif
    case TLS1_VERSION:
	ver = "TLSv1";
	break;
    case TLS1_1_VERSION:
	ver = "TLSv1.1";
	break;
    case TLS1_2_VERSION:
	ver = "TLSv1.2";
	break;
    case TLS1_3_VERSION:
	ver = "TLSv1.3";
	break;
    case 0:
	ver = "none";
	break;
    default:
	ver = "unknown";
	break;
    }

    switch (content_type) {
    case SSL3_RT_HEADER:
	type = "Header";
	break;
    case SSL3_RT_INNER_CONTENT_TYPE:
	type = "Inner Content Type";
	break;
    case SSL3_RT_CHANGE_CIPHER_SPEC:
	type = "Change Cipher";
	break;
    case SSL3_RT_ALERT:
	type = "Alert";
	break;
    case SSL3_RT_HANDSHAKE:
	type = "Handshake";
	break;
    case SSL3_RT_APPLICATION_DATA:
	type = "App Data";
	break;
#if OPENSSL_VERSION_NUMBER < 0x30000000L
    case DTLS1_RT_HEARTBEAT:
	type = "Heartbeat";
	break;
#endif
    default:
	type = "unknown";
    }

    /* Needs compile time option "enable-ssl-trace". */
    if ((bio = BIO_new(BIO_s_mem())) != NULL) {
	SSL_trace(write_p, version, content_type, buf, len, ssl, (void *)bio);
	blen = (Tcl_Size) BIO_read(bio, buffer, BIO_pending(bio) < 15000 ? BIO_pending(bio) : 14999);
	blen = (blen<0) ? 0 : blen;
	buffer[blen] = 0;
	(void)BIO_flush(bio);
	BIO_free(bio);
   }

    dprintf("Message direction=%d, ver=%s, type=%s, message=%s", write_p, ver, type, &buffer[0]);

    /* Create command to eval with fn, chan, direction, version, type, and message args */
    cmdPtr = Tcl_DuplicateObj(statePtr->callback);
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj("message", -1));
    Tcl_ListObjAppendElement(interp, cmdPtr,
	    Tcl_NewStringObj(Tcl_GetChannelName(statePtr->self), -1));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj(write_p ? "Sent" : "Received", -1));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj(ver, -1));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj(type, -1));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj(buffer, blen));

    /* Eval callback command */
    Tcl_IncrRefCount(cmdPtr);
    EvalCallback(interp, statePtr, cmdPtr);
    Tcl_DecrRefCount(cmdPtr);
}
#endif

/*
 *-------------------------------------------------------------------
 *
 * VerifyCallback --
 *
 *	Monitors SSL certificate validation process. Used to control the
 *	behavior when the SSL_VERIFY_PEER flag is set. This is called
 *	whenever a certificate is inspected or decided invalid. Called for
 *	each certificate in the cert chain.
 *
 * Checks:
 *	The certificate chain is checked starting with the deepest nesting level
 *	  (the root CA certificate) and worked upward to the peer's certificate.
 *	All signatures are valid, current time is within first and last validity time.
 *	Check that the certificate is issued by the issuer certificate issuer.
 *	Check the revocation status for each certificate.
 *	Check the validity of the given CRL and the cert revocation status.
 *	Check the policies of all the certificates
 *
 * Args
 *	preverify_ok indicates whether the certificate verification passed (1) or not (0)
 *
 * Results:
 *	A callback bound to the socket may return one of:
 *	    0			- the certificate is deemed invalid, send verification
 *				  failure alert to peer, and terminate handshake.
 *	    1			- the certificate is deemed valid, continue with handshake.
 *	    empty string	- no change to certificate validation
 *
 * Side effects:
 *	The err field of the currently operative State is set
 *	  to a string describing the SSL negotiation failure reason
 *
 *-------------------------------------------------------------------
 */

static int
VerifyCallback(
    int ok,			/* Verify result */
    X509_STORE_CTX *ctx)	/* CTX context */
{
    Tcl_Obj *cmdPtr;
    SSL   *ssl		= (SSL*)X509_STORE_CTX_get_ex_data(ctx, SSL_get_ex_data_X509_STORE_CTX_idx());
    X509  *cert		= X509_STORE_CTX_get_current_cert(ctx);
    State *statePtr	= (State*)SSL_get_app_data(ssl);
    Tcl_Interp *interp	= statePtr->interp;
    int depth		= X509_STORE_CTX_get_error_depth(ctx);
    int err		= X509_STORE_CTX_get_error(ctx);

    dprintf("Called");
    dprintf("VerifyCallback: %d", ok);

    if (statePtr->vcmd == (Tcl_Obj*)NULL) {
	/* Use ok value if verification is required */
	if (statePtr->vflags & SSL_VERIFY_FAIL_IF_NO_PEER_CERT) {
	    return ok;
	} else {
	    return 1;
	}
    } else if (cert == NULL || ssl == NULL) {
	return 0;
    }

    dprintf("VerifyCallback: create callback command");

    /* Create command to eval with fn, chan, depth, cert info list, status, and error args */
    cmdPtr = Tcl_DuplicateObj(statePtr->vcmd);
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj("verify", -1));
    Tcl_ListObjAppendElement(interp, cmdPtr,
	Tcl_NewStringObj(Tcl_GetChannelName(statePtr->self), -1));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewIntObj(depth));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tls_NewX509Obj(interp, cert, 0));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewIntObj(ok));
    Tcl_ListObjAppendElement(interp, cmdPtr,
	Tcl_NewStringObj((char*)X509_verify_cert_error_string(err), -1));

    /* Prevent I/O while callback is in progress */
    /* statePtr->flags |= TLS_TCL_CALLBACK; */

    dprintf("VerifyCallback: eval callback");

    /* Eval callback command */
    Tcl_IncrRefCount(cmdPtr);
    ok = EvalCallback(interp, statePtr, cmdPtr);
    Tcl_DecrRefCount(cmdPtr);

    dprintf("VerifyCallback: command result = %d", ok);

    /* statePtr->flags &= ~(TLS_TCL_CALLBACK); */
    return ok;	/* By default, leave verification unchanged. */
}

/*
 *-------------------------------------------------------------------
 *
 * Tls_Error --
 *
 *	Calls callback with error message.
 *
 * Side effects:
 *	The err field of the currently operative State is set to a
 *	string describing the SSL negotiation failure reason
 *
 *-------------------------------------------------------------------
 */

void
Tls_Error(
    State *statePtr,		/* Client state for TLS socket */
    const char *msg)		/* Error message */
{
    Tcl_Interp *interp	= statePtr->interp;
    Tcl_Obj *cmdPtr, *listPtr;
    unsigned long err;
    statePtr->err = msg;

    dprintf("Called with message %s", msg);

    if (statePtr->callback == (Tcl_Obj*)NULL) {
	return;
    }

    dprintf("Tls_Error: create callback command");

    /* Create command to eval with fn, chan, and message args */
    cmdPtr = Tcl_DuplicateObj(statePtr->callback);
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj("error", -1));
    Tcl_ListObjAppendElement(interp, cmdPtr,
	    Tcl_NewStringObj(Tcl_GetChannelName(statePtr->self), -1));
    if (msg != NULL) {
	Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj(msg, -1));

    } else if ((msg = Tcl_GetString(Tcl_GetObjResult(interp))) != NULL) {
	Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj(msg, -1));

    } else {
	listPtr = Tcl_NewListObj(0, NULL);
	while ((err = ERR_get_error()) != 0) {
	    Tcl_ListObjAppendElement(interp, listPtr, Tcl_NewStringObj(ERR_reason_error_string(err), -1));
	}
	Tcl_ListObjAppendElement(interp, cmdPtr, listPtr);
    }

    dprintf("Tls_Error: eval callback");

    /* Eval callback command */
    Tcl_IncrRefCount(cmdPtr);
    EvalCallback(interp, statePtr, cmdPtr);
    Tcl_DecrRefCount(cmdPtr);
}

/*
 *-------------------------------------------------------------------
 *
 * KeyLogCallback --
 *
 *	Write received key data to log file.
 *
 * Side effects:
 *	none
 *
 *-------------------------------------------------------------------
 */

void KeyLogCallback(
    TCL_UNUSED(const SSL *),		/* Client state for TLS socket */
    const char *line)		/* Key data to be logged */
{
    char *str = getenv(SSLKEYLOGFILE);
    FILE *fd;

    dprintf("Called");

    if (str) {
	fd = fopen(str, "a");
	fprintf(fd, "%s\n",line);
	fclose(fd);
    }
}

/*
 *-------------------------------------------------------------------
 *
 * Password Callback --
 *
 *	Called when a password is needed for a private key when loading
 *	or storing a PEM certificate with encryption. Evals callback
 *	script and returns the result as the password string in buf.
 *
 * Results:
 *	None
 *
 * Side effects:
 *	Calls callback (if defined)
 *
 * Returns:
 *	Password size in bytes or -1 for an error.
 *
 *-------------------------------------------------------------------
 */

static int
PasswordCallback(
    char *buf,			/* Pointer to buffer to store password in */
    int size,			/* Buffer length in bytes */
    int rwflag,			/* Whether password is needed for read or write */
    void *udata)		/* Client state for TLS socket */
{
    State *statePtr	= (State *) udata;
    Tcl_Interp *interp	= statePtr->interp;
    Tcl_Obj *cmdPtr;
    int code;
    Tcl_Size len;

    dprintf("Called");

    /* If no callback, use default callback */
    if (statePtr->password == NULL) {
	cmdPtr = Tcl_NewListObj(0, NULL);
	Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj("tls::password", -1));
    } else {
	cmdPtr = Tcl_DuplicateObj(statePtr->password);
    }

    /* Create command to eval with fn, rwflag, and size args */
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj("password", -1));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewIntObj(rwflag));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewIntObj(size));

    dprintf("PasswordCallback: eval callback");

    Tcl_Preserve((void *) interp);
    Tcl_Preserve((void *) statePtr);

    /* Eval callback command */
    Tcl_IncrRefCount(cmdPtr);
    code = Tcl_EvalObjEx(interp, cmdPtr, TCL_EVAL_GLOBAL);
    if (code != TCL_OK) {
#if (TCL_MAJOR_VERSION == 8) && (TCL_MINOR_VERSION < 6)
	Tcl_BackgroundError(interp);
#else
	Tcl_BackgroundException(interp, code);
#endif
    }
    Tcl_DecrRefCount(cmdPtr);

    Tcl_Release((void *) statePtr);

    /* If successful, pass back password string and truncate if too long */
    if (code == TCL_OK) {
	char *ret = (char *) Tcl_GetStringFromObj(Tcl_GetObjResult(interp), &len);
	if (len > (Tcl_Size) size-1) {
	    len = (Tcl_Size) size-1;
	}
	strncpy(buf, ret, (size_t) len);
	buf[len] = '\0';
	Tcl_Release((void *) interp);
	return (int) len;
    }
    Tcl_Release((void *) interp);
    return -1;
}

/*
 *-------------------------------------------------------------------
 *
 * Session Callback for Clients --
 *
 *	Called when a new session is added to the cache. In TLS 1.3
 *	this may be received multiple times after the handshake. For
 *	earlier versions, this will be received during the handshake.
 *	This is the preferred way to obtain a resumable session.
 *
 * Results:
 *	None
 *
 * Side effects:
 *	Calls callback (if defined)
 *
 * Return codes:
 *	0 = error where session will be immediately removed from the internal cache.
 *	1 = success where app retains session in session cache, and must call SSL_SESSION_free() when done.
 *
 *-------------------------------------------------------------------
 */

static int
SessionCallback(
    SSL *ssl,			/* SSL context */
    SSL_SESSION *session)	/* Session context */
{
    State *statePtr = (State*)SSL_get_app_data((SSL *)ssl);
    Tcl_Interp *interp	= statePtr->interp;
    Tcl_Obj *cmdPtr;
    const unsigned char *ticket;
    const unsigned char *session_id;
    size_t len2;
    unsigned int ulen;

    dprintf("Called");

    if (statePtr->callback == (Tcl_Obj*)NULL) {
	return SSL_TLSEXT_ERR_OK;
    } else if (ssl == NULL) {
	return SSL_TLSEXT_ERR_NOACK;
    }

    /* Create command to eval with fn, chan, session id, session ticket, and lifetime args */
    cmdPtr = Tcl_DuplicateObj(statePtr->callback);
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj("session", -1));
    Tcl_ListObjAppendElement(interp, cmdPtr,
	    Tcl_NewStringObj(Tcl_GetChannelName(statePtr->self), -1));

    /* Session id */
    session_id = SSL_SESSION_get_id(session, &ulen);
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewByteArrayObj(session_id, (Tcl_Size) ulen));

    /* Session ticket */
    SSL_SESSION_get0_ticket(session, &ticket, &len2);
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewByteArrayObj(ticket, (Tcl_Size) len2));

    /* Lifetime - number of seconds */
    Tcl_ListObjAppendElement(interp, cmdPtr,
	Tcl_NewLongObj((long) SSL_SESSION_get_ticket_lifetime_hint(session)));

    /* Eval callback command */
    Tcl_IncrRefCount(cmdPtr);
    EvalCallback(interp, statePtr, cmdPtr);
    Tcl_DecrRefCount(cmdPtr);

    /* Return 0 for now until session handling is complete */
    return 0;
}

/*
 *-------------------------------------------------------------------
 *
 * ALPN Callback for Servers and NPN Callback for Clients --
 *
 *	Perform protocol (http/1.1, h2, h3, etc.) selection for the
 *	incoming connection. Called after Hello and server callbacks.
 *	Where 'out' is selected protocol and 'in' is the peer advertised list.
 *
 * Results:
 *	None
 *
 * Side effects:
 *	Calls callback (if defined)
 *
 * Return codes:
 *	SSL_TLSEXT_ERR_OK: ALPN protocol selected. The connection continues.
 *	SSL_TLSEXT_ERR_ALERT_FATAL: There was no overlap between the client's
 *	    supplied list and the server configuration. The connection will be aborted.
 *	SSL_TLSEXT_ERR_NOACK: ALPN protocol not selected, e.g., because no ALPN
 *	    protocols are configured for this connection. The connection continues.
 *
 *-------------------------------------------------------------------
 */

static int
ALPNCallback(
    SSL *ssl,			/* SSL context */
    const unsigned char **out,	/* Return buffer to store selected protocol */
    unsigned char *outlen,	/* Return buffer size */
    const unsigned char *in,	/* Peer provided protocols */
    unsigned int inlen,		/* Peer buffer size */
    void *arg)			/* Client state for TLS socket */
{
    State *statePtr = (State*)arg;
    Tcl_Interp *interp	= statePtr->interp;
    Tcl_Obj *cmdPtr;
    int code, res;

    dprintf("Called");

    if (ssl == NULL || arg == NULL) {
	return SSL_TLSEXT_ERR_NOACK;
    }

    /* Select protocol */
    if (SSL_select_next_proto((unsigned char **) out, outlen, statePtr->protos, (unsigned)statePtr->protos_len,
	in, inlen) == OPENSSL_NPN_NEGOTIATED) {
	/* Match found */
	res = SSL_TLSEXT_ERR_OK;
    } else {
	/* OPENSSL_NPN_NO_OVERLAP = No overlap, so use first item from client protocol list */
	res = SSL_TLSEXT_ERR_NOACK;
    }

    if (statePtr->vcmd == (Tcl_Obj*)NULL) {
	return res;
    }

    /* Create command to eval with fn, chan, depth, cert info list, status, and error args */
    cmdPtr = Tcl_DuplicateObj(statePtr->vcmd);
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj("alpn", -1));
    Tcl_ListObjAppendElement(interp, cmdPtr,
	    Tcl_NewStringObj(Tcl_GetChannelName(statePtr->self), -1));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj((const char *) *out, -1));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewBooleanObj(res == SSL_TLSEXT_ERR_OK));

    /* Eval callback command */
    Tcl_IncrRefCount(cmdPtr);
    if ((code = EvalCallback(interp, statePtr, cmdPtr)) > 1) {
	res = SSL_TLSEXT_ERR_NOACK;
    } else if (code == 1) {
	res = SSL_TLSEXT_ERR_OK;
    } else {
	res = SSL_TLSEXT_ERR_ALERT_FATAL;
    }
    Tcl_DecrRefCount(cmdPtr);
    return res;
}

/*
 *-------------------------------------------------------------------
 *
 * Advertise Protocols Callback for Next Protocol Negotiation (NPN) in ServerHello --
 *
 *	called when a TLS server needs a list of supported protocols for Next
 *	Protocol Negotiation.
 *
 * Results:
 *	None
 *
 * Side effects:
 *
 * Return codes:
 *	SSL_TLSEXT_ERR_OK: NPN protocol selected. The connection continues.
 *	SSL_TLSEXT_ERR_NOACK: NPN protocol not selected. The connection continues.
 *
 *-------------------------------------------------------------------
 */

#ifdef USE_NPN
static int
NPNCallback(
    const SSL *ssl,		/* SSL context */
    const unsigned char **out,	/* Return buffer to store selected protocol */
    unsigned int *outlen,	/* Return buffer size */
    void *arg)			/* Client state for TLS socket */
{
    State *statePtr = (State*)arg;

    dprintf("Called");

    if (ssl == NULL || arg == NULL) {
	return SSL_TLSEXT_ERR_NOACK;
    }

    /* Set protocols list */
    if (statePtr->protos != NULL) {
	*out = statePtr->protos;
	*outlen = statePtr->protos_len;
    } else {
	*out = NULL;
	*outlen = 0;
	return SSL_TLSEXT_ERR_NOACK;
    }
    return SSL_TLSEXT_ERR_OK;
}
#endif

/*
 *-------------------------------------------------------------------
 *
 * SNI Callback for Servers --
 *
 *	Perform server-side SNI hostname selection after receiving SNI extension
 *	in Client Hello. Called after hello callback but before ALPN callback.
 *	This callback is mostly superseded by the ClientHello callback. Used to
 *	acknowledge the server name requested by the client.
 *
 * Results:
 *	None
 *
 * Side effects:
 *	Calls callback (if defined)
 *
 * Return codes:
 *	SSL_TLSEXT_ERR_OK: SNI hostname is accepted. The connection continues.
 *	SSL_TLSEXT_ERR_ALERT_FATAL: SNI hostname is not accepted. The connection
 *	    is aborted. Default for alert is SSL_AD_UNRECOGNIZED_NAME.
 *	SSL_TLSEXT_ERR_ALERT_WARNING: SNI hostname is not accepted, warning alert
 *	    sent (not supported in TLSv1.3). The connection continues.
 *	SSL_TLSEXT_ERR_NOACK: SNI hostname is not accepted and not acknowledged,
 *	    e.g. if SNI has not been configured. The connection continues.
 *
 *-------------------------------------------------------------------
 */

static int
SNICallback(
    const SSL *ssl,		/* SSL context */
    int *alert,			/* Returned alert message */
    void *arg)			/* Client state for TLS socket */
{
    State *statePtr = (State*)arg;
    Tcl_Interp *interp	= statePtr->interp;
    Tcl_Obj *cmdPtr;
    int code, res;
    const char *servername = NULL;

    dprintf("Called");

    if (ssl == NULL || arg == NULL) {
	return SSL_TLSEXT_ERR_NOACK;
    }

    /* Only works for TLS 1.2 and earlier */
    if (SSL_get_servername_type(ssl) == TLSEXT_NAMETYPE_host_name) {
	servername = SSL_get_servername(ssl, TLSEXT_NAMETYPE_host_name);
    }
    if (!servername || servername[0] == '\0') {
	return SSL_TLSEXT_ERR_NOACK;
    }

    if (statePtr->vcmd == (Tcl_Obj*)NULL) {
	return SSL_TLSEXT_ERR_OK;
    }

    /* Create command to eval with fn, chan, and server name args */
    cmdPtr = Tcl_DuplicateObj(statePtr->vcmd);
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj("sni", -1));
    Tcl_ListObjAppendElement(interp, cmdPtr,
	    Tcl_NewStringObj(Tcl_GetChannelName(statePtr->self), -1));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj(servername , -1));

    /* Eval callback command */
    Tcl_IncrRefCount(cmdPtr);
    if ((code = EvalCallback(interp, statePtr, cmdPtr)) > 1) {
	res = SSL_TLSEXT_ERR_ALERT_WARNING;
	*alert = SSL_AD_UNRECOGNIZED_NAME; /* Not supported by TLS 1.3 */
    } else if (code == 1) {
	res = SSL_TLSEXT_ERR_OK;
    } else {
	res = SSL_TLSEXT_ERR_ALERT_FATAL;
	*alert = SSL_AD_UNRECOGNIZED_NAME; /* Not supported by TLS 1.3 */
    }
    Tcl_DecrRefCount(cmdPtr);
    return res;
}

/*
 *-------------------------------------------------------------------
 *
 * ClientHello Handshake Callback for Servers --
 *
 *	Used by server to examine the server name indication (SNI) extension
 *	provided by the client in order to select an appropriate certificate to
 *	present, and make other configuration adjustments relevant to that server
 *	name and its configuration. This includes swapping out the associated
 *	SSL_CTX pointer, modifying the server's list of permitted TLS versions,
 *	changing the server's cipher list in response to the client's cipher list, etc.
 *	Called before SNI and ALPN callbacks.
 *
 * Results:
 *	None
 *
 * Side effects:
 *	Calls callback (if defined)
 *
 * Return codes:
 *	SSL_CLIENT_HELLO_RETRY: suspend the handshake, and the handshake function will return immediately
 *	SSL_CLIENT_HELLO_ERROR: failure, terminate connection. Set alert to error code.
 *	SSL_CLIENT_HELLO_SUCCESS: success
 *
 *-------------------------------------------------------------------
 */

static int
HelloCallback(
    SSL *ssl,			/* SSL context */
    int *alert,			/* Returned alert message */
    void *arg)			/* Client state for TLS socket */
{
    State *statePtr = (State*)arg;
    Tcl_Interp *interp	= statePtr->interp;
    Tcl_Obj *cmdPtr;
    int code, res;
    const char *servername;
    const unsigned char *p, *session_id;
    size_t len, remaining, len2;

    dprintf("Called");

    if (statePtr->vcmd == (Tcl_Obj*)NULL) {
	return SSL_CLIENT_HELLO_SUCCESS;
    } else if (ssl == (const SSL *)NULL || arg == NULL) {
	return SSL_CLIENT_HELLO_ERROR;
    }

    /* Get server name */
    if (SSL_client_hello_get0_ext(ssl, TLSEXT_TYPE_server_name, &p, &remaining)) {
	/* Check if there is sufficient data to extract */
	if (remaining <= 2) {
	    *alert = SSL_R_SSLV3_ALERT_ILLEGAL_PARAMETER;
	    return SSL_CLIENT_HELLO_ERROR;
	}

	/* Extract the length of the supplied list of names. */
	len = (size_t)(*(p++) << 8);
	len += *(p++);
	if (len + 2 != remaining) {
	    *alert = SSL_R_SSLV3_ALERT_ILLEGAL_PARAMETER;
	    return SSL_CLIENT_HELLO_ERROR;
	}
	remaining = len;

	/* The list in practice only has a single element, so we only consider the first one. */
	if (remaining == 0 || *p++ != TLSEXT_NAMETYPE_host_name) {
	    *alert = SSL_R_TLSV1_ALERT_INTERNAL_ERROR;
	    return SSL_CLIENT_HELLO_ERROR;
	}
	remaining--;

	/* Now we can finally pull out the byte array with the actual hostname. */
	if (remaining <= 2) {
	    *alert = SSL_R_TLSV1_ALERT_INTERNAL_ERROR;
	    return SSL_CLIENT_HELLO_ERROR;
	}
	len = (size_t)(*(p++) << 8);
	len += *(p++);
	if (len + 2 > remaining) {
	    *alert = SSL_R_TLSV1_ALERT_INTERNAL_ERROR;
	    return SSL_CLIENT_HELLO_ERROR;
	}
	remaining = len;
	servername = (const char *)p;
    } else {
	servername = "";
	len = 0;
    }

    /* Get session id from Client Hello */
    len2 = SSL_client_hello_get0_session_id(ssl, &session_id);

    /* Create command to eval with fn, chan, server name, and session id */
    cmdPtr = Tcl_DuplicateObj(statePtr->vcmd);
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj("hello", -1));
    Tcl_ListObjAppendElement(interp, cmdPtr,
	    Tcl_NewStringObj(Tcl_GetChannelName(statePtr->self), -1));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewStringObj(servername, (Tcl_Size) len));
    Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_NewByteArrayObj(session_id, (Tcl_Size) len2));

    /* Eval callback command */
    Tcl_IncrRefCount(cmdPtr);
    if ((code = EvalCallback(interp, statePtr, cmdPtr)) > 1) {
	res = SSL_CLIENT_HELLO_RETRY;
	*alert = SSL_R_TLSV1_ALERT_USER_CANCELLED;
    } else if (code == 1) {
	res = SSL_CLIENT_HELLO_SUCCESS;
    } else {
	res = SSL_CLIENT_HELLO_ERROR;
	*alert = SSL_R_TLSV1_ALERT_INTERNAL_ERROR;
    }
    Tcl_DecrRefCount(cmdPtr);
    return res;
}

/********************/
/* Commands         */
/********************/

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

static const char *protocols[] = {
    "ssl2", "ssl3", "tls1", "tls1.1", "tls1.2", "tls1.3", NULL
};
enum protocol {
    TLS_SSL2, TLS_SSL3, TLS_TLS1, TLS_TLS1_1, TLS_TLS1_2, TLS_TLS1_3, TLS_NONE
};

static int
CiphersObjCmd(
    TCL_UNUSED(ClientData),	/* Client data */
    Tcl_Interp *interp,		/* Tcl interpreter */
    int objc,			/* Arg count */
    Tcl_Obj *const objv[])	/* Arguments as Tcl objects */
{
    Tcl_Obj *objPtr = NULL;
    SSL_CTX *ctx = NULL;
    SSL *ssl = NULL;
    STACK_OF(SSL_CIPHER) *sk;
    char buf[BUFSIZ];
    int index, verbose = 0, use_supported = 0, version = 0;
    const SSL_METHOD *method = TLS_method();

    dprintf("Called");

    if ((objc < 1) || (objc > 4)) {
	Tcl_WrongNumArgs(interp, 1, objv, "?protocol? ?verbose? ?supported?");
	return TCL_ERROR;
    }

    if (objc > 1) {
	if (Tcl_GetIndexFromObj(interp, objv[1], protocols, "protocol", 0, &index) != TCL_OK) {
	    return TCL_ERROR;
	} else {
	    switch ((enum protocol)index) {
		case TLS_SSL2:
#if OPENSSL_VERSION_NUMBER >= 0x10100000L || defined(NO_SSL2) || defined(OPENSSL_NO_SSL2)
		    version = -1;
#else
		    version = SSL2_VERSION;
#endif
		    break;
		case TLS_SSL3:
#if defined(NO_SSL3) || defined(OPENSSL_NO_SSL3)
		    version = -1;
#else
		    version = SSL3_VERSION;
#endif
		    break;
		case TLS_TLS1:
#if defined(NO_TLS1) || defined(OPENSSL_NO_TLS1)
		    version = -1;
#else
		    version = TLS1_VERSION;
#endif
		    break;
		case TLS_TLS1_1:
#if defined(NO_TLS1_1) || defined(OPENSSL_NO_TLS1_1)
		    version = -1;
#else
		    version = TLS1_1_VERSION;
#endif
		    break;
		case TLS_TLS1_2:
#if defined(NO_TLS1_2) || defined(OPENSSL_NO_TLS1_2)
		    version = -1;
#else
		    version = TLS1_2_VERSION;
#endif
		    break;
		case TLS_TLS1_3:
#if defined(NO_TLS1_3) || defined(OPENSSL_NO_TLS1_3)
		    version = -1;
#else
		    version = TLS1_3_VERSION;
#endif
		    break;
		default:
		    version = -1;
		}
        }

	if (version < 0) {
	    Tcl_AppendResult(interp, protocols[index], ": protocol not supported", (char *)NULL);
	    return TCL_ERROR;
	}
    }

    if ((objc > 2) && Tcl_GetBooleanFromObj(interp, objv[2], &verbose) != TCL_OK) {
	return TCL_ERROR;
    }

    if ((objc > 3) && Tcl_GetBooleanFromObj(interp, objv[3], &use_supported) != TCL_OK) {
	return TCL_ERROR;
    }

    ERR_clear_error();

    ctx = SSL_CTX_new(method);
    if (ctx == NULL) {
	Tcl_AppendResult(interp, GET_ERR_REASON(), (char *)NULL);
	return TCL_ERROR;
    }

    SSL_CTX_set_min_proto_version(ctx, version);
    SSL_CTX_set_max_proto_version(ctx, version);

    ssl = SSL_new(ctx);
    if (ssl == NULL) {
	Tcl_AppendResult(interp, GET_ERR_REASON(), (char *)NULL);
	SSL_CTX_free(ctx);
	return TCL_ERROR;
    }

    /* Use list and order as would be sent in a ClientHello or all available ciphers */
    if (use_supported) {
	sk = SSL_get1_supported_ciphers(ssl);
    } else {
	sk = SSL_get_ciphers(ssl);
    }

    if (sk != NULL) {
	if (!verbose) {
	    const char *cp;
	    objPtr = Tcl_NewListObj(0, NULL);
	    for (int i = 0; i < sk_SSL_CIPHER_num(sk); i++) {
		const SSL_CIPHER *c = sk_SSL_CIPHER_value(sk, i);
		if (c == NULL) continue;

		/* cipher name or (NONE) */
		cp = SSL_CIPHER_get_name(c);
		if (cp == NULL) break;
		Tcl_ListObjAppendElement(interp, objPtr, Tcl_NewStringObj(cp, -1));
	    }

	} else {
	    objPtr = Tcl_NewStringObj("",0);
	    for (int i = 0; i < sk_SSL_CIPHER_num(sk); i++) {
		const SSL_CIPHER *c = sk_SSL_CIPHER_value(sk, i);
		if (c == NULL) continue;

		/* textual description of the cipher */
		if (SSL_CIPHER_description(c, buf, sizeof(buf)) != NULL) {
		    Tcl_AppendToObj(objPtr, buf, (Tcl_Size) strlen(buf));
		} else {
		    Tcl_AppendToObj(objPtr, "UNKNOWN\n", 8);
		}
	    }
	}
	if (use_supported) {
	    sk_SSL_CIPHER_free(sk);
	}
    } else {
	objPtr = Tcl_NewStringObj("",0);
    }
    SSL_free(ssl);
    SSL_CTX_free(ctx);

    Tcl_SetObjResult(interp, objPtr);
    return TCL_OK;
}

/*
 *-------------------------------------------------------------------
 *
 * ProtocolsObjCmd -- list available protocols
 *
 *	This procedure is invoked to process the "tls::protocols" command
 *	to list available protocols.
 *
 * Results:
 *	A standard Tcl result list.
 *
 * Side effects:
 *	none
 *
 *-------------------------------------------------------------------
 */

static int
ProtocolsObjCmd(
    TCL_UNUSED(ClientData),	/* Client data */
    Tcl_Interp *interp,		/* Tcl interpreter */
    int objc,			/* Arg count */
    Tcl_Obj *const objv[])	/* Arguments as Tcl objects */
{
    Tcl_Obj *objPtr;

    dprintf("Called");

    if (objc != 1) {
	Tcl_WrongNumArgs(interp, 1, objv, "");
	return TCL_ERROR;
    }

    ERR_clear_error();

    objPtr = Tcl_NewListObj(0, NULL);

#if OPENSSL_VERSION_NUMBER < 0x10100000L && !defined(NO_SSL2) && !defined(OPENSSL_NO_SSL2)
    Tcl_ListObjAppendElement(interp, objPtr, Tcl_NewStringObj(protocols[TLS_SSL2], -1));
#endif
#if !defined(NO_SSL3) && !defined(OPENSSL_NO_SSL3) && !defined(OPENSSL_NO_SSL3_METHOD)
    Tcl_ListObjAppendElement(interp, objPtr, Tcl_NewStringObj(protocols[TLS_SSL3], -1));
#endif
#if !defined(NO_TLS1) && !defined(OPENSSL_NO_TLS1) && !defined(OPENSSL_NO_TLS1_METHOD)
    Tcl_ListObjAppendElement(interp, objPtr, Tcl_NewStringObj(protocols[TLS_TLS1], -1));
#endif
#if !defined(NO_TLS1_1) && !defined(OPENSSL_NO_TLS1_1) && !defined(OPENSSL_NO_TLS1_1_METHOD)
    Tcl_ListObjAppendElement(interp, objPtr, Tcl_NewStringObj(protocols[TLS_TLS1_1], -1));
#endif
#if !defined(NO_TLS1_2) && !defined(OPENSSL_NO_TLS1_2) && !defined(OPENSSL_NO_TLS1_2_METHOD)
    Tcl_ListObjAppendElement(interp, objPtr, Tcl_NewStringObj(protocols[TLS_TLS1_2], -1));
#endif
#if !defined(NO_TLS1_3) && !defined(OPENSSL_NO_TLS1_3)
    Tcl_ListObjAppendElement(interp, objPtr, Tcl_NewStringObj(protocols[TLS_TLS1_3], -1));
#endif

    Tcl_SetObjResult(interp, objPtr);
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

static int HandshakeObjCmd(
    TCL_UNUSED(ClientData),	/* Client data */
    Tcl_Interp *interp,		/* Tcl interpreter */
    int objc,			/* Arg count */
    Tcl_Obj *const objv[])	/* Arguments as Tcl objects */
{
    Tcl_Channel chan;		/* The channel to set a mode on. */
    State *statePtr;		/* Client state for TLS socket */
    const char *errStr = NULL;
    int ret = 1;
    int err = 0;

    dprintf("Called");

    if (objc != 2) {
	Tcl_WrongNumArgs(interp, 1, objv, "channel");
	return TCL_ERROR;
    }

    ERR_clear_error();

    chan = Tcl_GetChannel(interp, Tcl_GetString(objv[1]), NULL);
    if (chan == (Tcl_Channel) NULL) {
	return TCL_ERROR;
    }

    /* Make sure to operate on the topmost channel */
    chan = Tcl_GetTopChannel(chan);
    if (Tcl_GetChannelType(chan) != Tls_ChannelType()) {
	Tcl_AppendResult(interp, "bad channel \"", Tcl_GetChannelName(chan),
		"\": not a TLS channel", (char *)NULL);
	Tcl_SetErrorCode(interp, "TLS", "HANDSHAKE", "CHANNEL", "INVALID", (char *)NULL);
	return TCL_ERROR;
    }
    statePtr = (State *)Tcl_GetChannelInstanceData(chan);

    dprintf("Calling Tls_WaitForConnect");
    ret = Tls_WaitForConnect(statePtr, &err, 1);
    dprintf("Tls_WaitForConnect returned: %i", ret);

    if (ret <= 0 && ((statePtr->flags & TLS_TCL_ASYNC) && (err == EAGAIN))) {
	dprintf("Async set and err = EAGAIN");
	ret = 0;
    } else if (ret < 0) {
	long result;
	errStr = statePtr->err;
	Tcl_ResetResult(interp);
	Tcl_SetErrno(err);

	if (!errStr || (*errStr == 0)) {
	    errStr = Tcl_PosixError(interp);
	}

	Tcl_AppendResult(interp, "handshake failed: ", errStr, (char *)NULL);
	if ((result = SSL_get_verify_result(statePtr->ssl)) != X509_V_OK) {
	    Tcl_AppendResult(interp, " due to \"", X509_verify_cert_error_string(result), "\"", (char *)NULL);
	}
	Tcl_SetErrorCode(interp, "TLS", "HANDSHAKE", "FAILED", (char *)NULL);
	dprintf("Returning TCL_ERROR with handshake failed: %s", errStr);
	return TCL_ERROR;
    } else {
	if (err != 0) {
	    dprintf("Got an error with a completed handshake: err = %i", err);
	}
	ret = 1;
    }

    dprintf("Returning TCL_OK with data \"%i\"", ret);
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

static int
ImportObjCmd(
    TCL_UNUSED(ClientData),	/* Client data */
    Tcl_Interp *interp,		/* Tcl interpreter */
    int objc,			/* Arg count */
    Tcl_Obj *const objv[])	/* Arguments as Tcl objects */
{
    Tcl_Channel chan;		/* The channel to set a mode on. */
    State *statePtr;		/* Client state for TLS socket */
    SSL_CTX *ctx		= NULL;
    Tcl_Obj *script		= NULL;
    Tcl_Obj *password		= NULL;
    Tcl_Obj *vcmd		= NULL;
    Tcl_DString upperChannelTranslation, upperChannelBlocking, upperChannelEncoding, upperChannelEOFChar;
    int idx;
    Tcl_Size len;
    int flags			= TLS_TCL_INIT;
    int server			= 0;	/* is connection incoming or outgoing? */
    char *keyfile		= NULL;
    char *certfile		= NULL;
    unsigned char *key		= NULL;
    Tcl_Size key_len		= 0;
    unsigned char *cert		= NULL;
    Tcl_Size cert_len		= 0;
    char *ciphers		= NULL;
    char *ciphersuites		= NULL;
    char *CAfile		= NULL;
    char *CApath		= NULL;
    char *CAstore		= NULL;
    char *DHparams		= NULL;
    char *model			= NULL;
    char *servername		= NULL;	/* hostname for Server Name Indication */
    char *session_id		= NULL;
    Tcl_Obj *alpn		= NULL;
    int ssl2 = 0, ssl3 = 0; /* Default to disabled */
    int tls1 = 0, tls1_1 = 0, tls1_2 = 0, tls1_3 = 0; /* Default to autp select */
    int proto = 0, level = -1;
    int verify = 0, require = -1, request = -1, post_handshake = 0;

    dprintf("Called");

    if (objc < 2) {
	Tcl_WrongNumArgs(interp, 1, objv, "channel ?options?");
	return TCL_ERROR;
    }

    ERR_clear_error();

    chan = Tcl_GetChannel(interp, Tcl_GetString(objv[1]), NULL);
    if (chan == (Tcl_Channel) NULL) {
	return TCL_ERROR;
    }

    /* Make sure to operate on the topmost channel */
    chan = Tcl_GetTopChannel(chan);

    for (idx = 2; idx < objc; idx++) {
	char *opt = Tcl_GetString(objv[idx]);

	if (opt[0] != '-')
	    break;

	OPTOBJ("-alpn", alpn);
	OPTSTR("-cadir", CApath);
	OPTSTR("-cafile", CAfile);
	OPTSTR("-castore", CAstore);
	OPTBYTE("-cert", cert, cert_len);
	OPTSTR("-certfile", certfile);
	OPTSTR("-cipher", ciphers);
	OPTSTR("-ciphers", ciphers);
	OPTSTR("-ciphersuites", ciphersuites);
	OPTOBJ("-command", script);
	OPTSTR("-dhparams", DHparams);
	OPTBYTE("-key", key, key_len);
	OPTSTR("-keyfile", keyfile);
	OPTSTR("-model", model);
	OPTOBJ("-password", password);
	OPTBOOL("-post_handshake", post_handshake);
	OPTBOOL("-request", request);
	OPTBOOL("-require", require);
	OPTINT("-security_level", level);
	OPTBOOL("-server", server);
	OPTSTR("-servername", servername);
	OPTSTR("-session_id", session_id);
	OPTBOOL("-ssl2", ssl2);
	OPTBOOL("-ssl3", ssl3);
	OPTBOOL("-tls1", tls1);
	OPTBOOL("-tls1.1", tls1_1);
	OPTBOOL("-tls1.2", tls1_2);
	OPTBOOL("-tls1.3", tls1_3);
	OPTOBJ("-validatecommand", vcmd);
	OPTOBJ("-vcmd", vcmd);

	OPTBAD("option", "-alpn, -cadir, -cafile, -castore, -cert, -certfile, -cipher, -ciphersuites, -command, -dhparams, -key, -keyfile, -model, -password, -post_handshake, -request, -require, -security_level, -server, -servername, -session_id, -ssl2, -ssl3, -tls1, -tls1.1, -tls1.2, -tls1.3, or -validatecommand");

	return TCL_ERROR;
    }

    /* For client, request and require default to true, server default is false */
    if (!server) {
	if (request == -1)	request = 1;
	if (require == -1)	require = 1;
    } else {
	if (request == -1)	request = 0;
	if (require == -1)	require = 0;
    }

    if (require)		request = 1;
    if (request)		verify |= SSL_VERIFY_CLIENT_ONCE | SSL_VERIFY_PEER;
    if (request && require)	verify |= SSL_VERIFY_FAIL_IF_NO_PEER_CERT;
    if (request && post_handshake) verify |= SSL_VERIFY_POST_HANDSHAKE;
    if (!verify)		verify = SSL_VERIFY_NONE;

    /* Enable specific SSL/TLS versions */
    proto |= (ssl2 ? TLS_PROTO_SSL2 : 0);
    proto |= (ssl3 ? TLS_PROTO_SSL3 : 0);
    proto |= (tls1 ? TLS_PROTO_TLS1 : 0);
    proto |= (tls1_1 ? TLS_PROTO_TLS1_1 : 0);
    proto |= (tls1_2 ? TLS_PROTO_TLS1_2 : 0);
    proto |= (tls1_3 ? TLS_PROTO_TLS1_3 : 0);

    /* reset to NULL if blank string provided */
    if (cert && !*cert)		        cert	        = NULL;
    if (key && !*key)		        key	        = NULL;
    if (certfile && !*certfile)         certfile	= NULL;
    if (keyfile && !*keyfile)		keyfile	        = NULL;
    if (ciphers && !*ciphers)	        ciphers	        = NULL;
    if (ciphersuites && !*ciphersuites) ciphersuites    = NULL;
    if (CAfile && !*CAfile)	        CAfile	        = NULL;
    if (CApath && !*CApath)	        CApath	        = NULL;
    if (CAstore && !*CAstore)	        CAstore	        = NULL;
    if (DHparams && !*DHparams)	        DHparams        = NULL;

    /* new SSL state */
    statePtr		= (State *) ckalloc((unsigned) sizeof(State));
    memset(statePtr, 0, sizeof(State));

    statePtr->flags	= flags;
    statePtr->interp	= interp;
    statePtr->want	= 0;
    statePtr->vflags	= verify;
    statePtr->err	= "";

    /* Allocate callback script */
    if (script) {
	(void) Tcl_GetStringFromObj(script, &len);
	if (len) {
	    statePtr->callback = script;
	    Tcl_IncrRefCount(statePtr->callback);
	}
    }

    /* Allocate password callback */
    if (password) {
	(void) Tcl_GetStringFromObj(password, &len);
	if (len) {
	    statePtr->password = password;
	    Tcl_IncrRefCount(statePtr->password);
	}
    }

    /* Allocate validate callback */
    if (vcmd) {
	(void) Tcl_GetStringFromObj(vcmd, &len);
	if (len) {
	    statePtr->vcmd = vcmd;
	    Tcl_IncrRefCount(statePtr->vcmd);
	}
    }

    /* Set default CA store on Windows */
#if OPENSSL_VERSION_NUMBER >= 0x30200000L && (defined(_WIN32))
    if (CAstore == NULL && CAfile == NULL && CApath == NULL) {
	CAstore = "org.openssl.winstore://";
    }
#endif

    if (model != NULL) {
	int mode;
	/* Get the "model" context */
	chan = Tcl_GetChannel(interp, model, &mode);
	if (chan == (Tcl_Channel) NULL) {
	    Tls_Free((tls_free_type *) statePtr);
	    return TCL_ERROR;
	}

	/*
	 * Make sure to operate on the topmost channel
	 */
	chan = Tcl_GetTopChannel(chan);
	if (Tcl_GetChannelType(chan) != Tls_ChannelType()) {
	    Tcl_AppendResult(interp, "bad channel \"", Tcl_GetChannelName(chan),
		    "\": not a TLS channel", (char *)NULL);
	    Tcl_SetErrorCode(interp, "TLS", "IMPORT", "CHANNEL", "INVALID", (char *)NULL);
	    Tls_Free((tls_free_type *) statePtr);
	    return TCL_ERROR;
	}
	ctx = ((State *)Tcl_GetChannelInstanceData(chan))->ctx;
    } else {
	if ((ctx = CTX_Init(statePtr, server, proto, keyfile, certfile, key, cert, key_len,
		cert_len, CApath, CAstore, CAfile, ciphers, ciphersuites, level, DHparams)) == NULL) {
	    Tls_Free((tls_free_type *) statePtr);
	    return TCL_ERROR;
	}
    }

    statePtr->ctx = ctx;

    /* Preserve channel config */
    Tcl_DStringInit(&upperChannelTranslation);
    Tcl_DStringInit(&upperChannelBlocking);
    Tcl_DStringInit(&upperChannelEOFChar);
    Tcl_DStringInit(&upperChannelEncoding);
    Tcl_GetChannelOption(interp, chan, "-eofchar", &upperChannelEOFChar);
    Tcl_GetChannelOption(interp, chan, "-encoding", &upperChannelEncoding);
    Tcl_GetChannelOption(interp, chan, "-translation", &upperChannelTranslation);
    Tcl_GetChannelOption(interp, chan, "-blocking", &upperChannelBlocking);

    /* Ensure the channel works in binary mode (for the encryption not to get goofed up). */
    Tcl_SetChannelOption(interp, chan, "-translation", "binary");
    Tcl_SetChannelOption(interp, chan, "-blocking", "true");

    /* Create stacked channel */
    dprintf("Consuming Tcl channel %s", Tcl_GetChannelName(chan));
    statePtr->self = Tcl_StackChannel(interp, Tls_ChannelType(), statePtr, (TCL_READABLE | TCL_WRITABLE), chan);
    dprintf("Created channel named %s", Tcl_GetChannelName(statePtr->self));
    if (statePtr->self == (Tcl_Channel) NULL) {
	/*
	 * No use of Tcl_EventuallyFree because no possible Tcl_Preserve.
	 */
	Tls_Free((tls_free_type *) statePtr);
	Tcl_DStringFree(&upperChannelTranslation);
	Tcl_DStringFree(&upperChannelEncoding);
	Tcl_DStringFree(&upperChannelEOFChar);
	Tcl_DStringFree(&upperChannelBlocking);
	return TCL_ERROR;
    }

    /* Restore channel config */
    Tcl_SetChannelOption(interp, statePtr->self, "-translation", Tcl_DStringValue(&upperChannelTranslation));
    Tcl_SetChannelOption(interp, statePtr->self, "-encoding", Tcl_DStringValue(&upperChannelEncoding));
    Tcl_SetChannelOption(interp, statePtr->self, "-eofchar", Tcl_DStringValue(&upperChannelEOFChar));
    Tcl_SetChannelOption(interp, statePtr->self, "-blocking", Tcl_DStringValue(&upperChannelBlocking));
    Tcl_DStringFree(&upperChannelTranslation);
    Tcl_DStringFree(&upperChannelEncoding);
    Tcl_DStringFree(&upperChannelEOFChar);
    Tcl_DStringFree(&upperChannelBlocking);

    /*
     * SSL Initialization
     */
    statePtr->ssl = SSL_new(statePtr->ctx);
    if (!statePtr->ssl) {
	/* SSL library error */
	Tcl_AppendResult(interp, "couldn't construct ssl session: ", GET_ERR_REASON(), (char *)NULL);
	Tcl_SetErrorCode(interp, "TLS", "IMPORT", "INIT", "FAILED", (char *)NULL);
	Tls_Free((tls_free_type *) statePtr);
	return TCL_ERROR;
    }

    /* Set host server name */
    if (servername) {
	/* Sets the server name indication (SNI) in ClientHello extension */
	/* Per RFC 6066, hostname is a ASCII encoded string, though RFC 4366 says UTF-8. */
	if (!SSL_set_tlsext_host_name(statePtr->ssl, servername) && require) {
	    Tcl_AppendResult(interp, "Set SNI extension failed: ", GET_ERR_REASON(), (char *)NULL);
	    Tcl_SetErrorCode(interp, "TLS", "IMPORT", "SNI", "FAILED", (char *)NULL);
	    Tls_Free((tls_free_type *) statePtr);
	    return TCL_ERROR;
	}

	/* Set hostname for peer certificate hostname verification in clients.
	   Don't use SSL_set1_host since it has limitations. */
	if (!SSL_add1_host(statePtr->ssl, servername)) {
	    Tcl_AppendResult(interp, "Set DNS hostname failed: ", GET_ERR_REASON(), (char *)NULL);
	    Tcl_SetErrorCode(interp, "TLS", "IMPORT", "HOSTNAME", "FAILED", (char *)NULL);
	    Tls_Free((tls_free_type *) statePtr);
	    return TCL_ERROR;
	}
    }

    /* Resume session id */
    if (session_id && strlen(session_id) <= SSL_MAX_SID_CTX_LENGTH) {
	/* SSL_set_session() */
	if (!SSL_SESSION_set1_id_context(SSL_get_session(statePtr->ssl),
		(const unsigned char *) session_id, (unsigned int) strlen(session_id))) {
	    Tcl_AppendResult(interp, "Resume session failed: ", GET_ERR_REASON(), (char *)NULL);
	    Tcl_SetErrorCode(interp, "TLS", "IMPORT", "SESSION", "FAILED", (char *)NULL);
	    Tls_Free((tls_free_type *) statePtr);
	    return TCL_ERROR;
	}
    }

    /* Enable Application-Layer Protocol Negotiation. Examples are: http/1.0,
	http/1.1, h2, h3, ftp, imap, pop3, xmpp-client, xmpp-server, mqtt, irc, etc. */
    if (alpn) {
	/* Convert a TCL list into a protocol-list in wire-format */
	unsigned char *protos = NULL, *p;
	size_t protos_len = 0;
	Tcl_Size cnt, i;
	int res = TCL_OK;
	Tcl_Obj **list;

	if (Tcl_ListObjGetElements(interp, alpn, &cnt, &list) != TCL_OK) {
	    Tls_Free((tls_free_type *) statePtr);
	    return TCL_ERROR;
	}

	/* Determine the memory required for the protocol-list */
	for (i = 0; i < cnt; i++) {
	    Tcl_GetStringFromObj(list[i], &len);
	    if (len > 255) {
		Tcl_AppendResult(interp, "ALPN protocol names too long", (char *)NULL);
		Tcl_SetErrorCode(interp, "TLS", "IMPORT", "ALPN", "FAILED", (char *)NULL);
		res = TCL_ERROR;
		goto done;
	    }
	    protos_len += 1 + (size_t)len;
	}

	/* Build the complete protocol-list */
	protos = (unsigned char *)ckalloc(protos_len);
	/* protocol-lists consist of 8-bit length-prefixed, byte strings */
	for (i = 0, p = protos; i < cnt; i++) {
	    char *str = Tcl_GetStringFromObj(list[i], &len);
	    *p++ = (unsigned char) len;
	    memcpy(p, str, (size_t) len);
	    p += len;
	}

	/* SSL_set_alpn_protos makes a copy of the protocol-list */
	/* Note: This function reverses the return value convention */
	if (SSL_set_alpn_protos(statePtr->ssl, protos, (unsigned)protos_len)) {
	    Tcl_AppendResult(interp, "Set ALPN protocols failed: ", GET_ERR_REASON(), (char *)NULL);
	    Tcl_SetErrorCode(interp, "TLS", "IMPORT", "ALPN", "FAILED", (char *)NULL);
	    res = TCL_ERROR;
	}

done:	for (i = 0; i < cnt; i++) {
	    Tcl_IncrRefCount(list[i]);
	    Tcl_DecrRefCount(list[i]);
	}

	if (res != TCL_OK) {
	    Tls_Free((tls_free_type *) statePtr);
	    if (protos != NULL) {
		ckfree(protos);
	    }
	    return TCL_ERROR;
	}

	/* Store protocols list */
	statePtr->protos = protos;
	statePtr->protos_len = protos_len;
    } else {
	statePtr->protos = NULL;
	statePtr->protos_len = 0;
    }

    /*
     * SSL Callbacks
     */
    SSL_set_app_data(statePtr->ssl, (void *)statePtr);	/* point back to us */
    SSL_set_verify(statePtr->ssl, verify, VerifyCallback);
    /*SSL_set_verify_depth(SSL_set_verify_depth, 0);*/
    SSL_set_info_callback(statePtr->ssl, InfoCallback);

    /* Callback for observing protocol messages */
#ifndef OPENSSL_NO_SSL_TRACE
    /* void SSL_CTX_set_msg_callback_arg(statePtr->ctx, (void *)statePtr);
    void SSL_CTX_set_msg_callback(statePtr->ctx, MessageCallback); */
    SSL_set_msg_callback_arg(statePtr->ssl, (void *)statePtr);
    SSL_set_msg_callback(statePtr->ssl, MessageCallback);
#endif

    /* Create Tcl_Channel BIO Handler */
    statePtr->p_bio	= BIO_new_tcl(statePtr, BIO_NOCLOSE);
    statePtr->bio	= BIO_new(BIO_f_ssl());

    if (server) {
	/* Server callbacks */
	SSL_CTX_set_tlsext_servername_arg(statePtr->ctx, (void *)statePtr);
	SSL_CTX_set_tlsext_servername_callback(statePtr->ctx, SNICallback);
	SSL_CTX_set_client_hello_cb(statePtr->ctx, HelloCallback, (void *)statePtr);
	if (statePtr->protos != NULL) {
	    SSL_CTX_set_alpn_select_cb(statePtr->ctx, ALPNCallback, (void *)statePtr);
#ifdef USE_NPN
	    if (tls1_2 == 0 && tls1_3 == 0) {
		SSL_CTX_set_next_protos_advertised_cb(statePtr->ctx, NPNCallback, (void *)statePtr);
	    }
#endif
	}

	/* Enable server to send cert request after handshake (TLS 1.3 only) */
	/* A write operation must take place for the Certificate Request to be
	   sent to the client, this can be done with SSL_do_handshake(). */
	if (request && post_handshake && tls1_3) {
	    SSL_verify_client_post_handshake(statePtr->ssl);
	}

	/* Set server mode */
	statePtr->flags |= TLS_TCL_SERVER;
	SSL_set_accept_state(statePtr->ssl);

    } else {
	/* Client callbacks */
#ifdef USE_NPN
	if (statePtr->protos != NULL && tls1_2 == 0 && tls1_3 == 0) {
	    SSL_CTX_set_next_proto_select_cb(statePtr->ctx, ALPNCallback, (void *)statePtr);
	}
#endif

	/* Session caching */
	SSL_CTX_set_session_cache_mode(statePtr->ctx, SSL_SESS_CACHE_CLIENT | SSL_SESS_CACHE_NO_INTERNAL_STORE);
	SSL_CTX_sess_set_new_cb(statePtr->ctx, SessionCallback);

	/* Enable post handshake Authentication extension. TLS 1.3 only, not http/2. */
	if (request && post_handshake) {
	    SSL_set_post_handshake_auth(statePtr->ssl, 1);
	}

	/* Set client mode */
	SSL_set_connect_state(statePtr->ssl);
    }

    /* Set BIO for read and write operations on SSL object */
    SSL_set_bio(statePtr->ssl, statePtr->p_bio, statePtr->p_bio);
    BIO_set_ssl(statePtr->bio, statePtr->ssl, BIO_NOCLOSE);
    BIO_set_ssl_mode(statePtr->bio, (long) !server);

    /*
     * End of SSL Init
     */
    dprintf("Returning %s", Tcl_GetChannelName(statePtr->self));
    Tcl_SetResult(interp, (char *)Tcl_GetChannelName(statePtr->self), TCL_VOLATILE);

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

static int
UnimportObjCmd(
    TCL_UNUSED(ClientData),	/* Client data */
    Tcl_Interp *interp,		/* Tcl interpreter */
    int objc,			/* Arg count */
    Tcl_Obj *const objv[])	/* Arguments as Tcl objects */
{
    Tcl_Channel chan, parent;	/* The stacked and underlying channels */
    Tcl_DString upperChannelTranslation, upperChannelBlocking, upperChannelEncoding, upperChannelEOFChar;
    int res = TCL_OK;

    dprintf("Called");

    if (objc != 2) {
	Tcl_WrongNumArgs(interp, 1, objv, "channel");
	return TCL_ERROR;
    }

    /* Validate channel name */
    chan = Tcl_GetChannel(interp, Tcl_GetString(objv[1]), NULL);
    if (chan == (Tcl_Channel) NULL) {
	return TCL_ERROR;
    }

    /* Make sure to operate on the topmost channel */
    chan = Tcl_GetTopChannel(chan);
    parent = Tcl_GetStackedChannel(chan);

    /* Verify is a stacked channel */
    if (parent == NULL) {
	Tcl_AppendResult(interp, "bad channel \"", Tcl_GetChannelName(chan),
		"\": not a stacked channel", (char *)NULL);
	Tcl_SetErrorCode(interp, "TLS", "UNIMPORT", "CHANNEL", "INVALID", (char *)NULL);
	return TCL_ERROR;
    }

    /* Flush any pending data */
    if (Tcl_OutputBuffered(chan) > 0 && Tcl_Flush(chan) != TCL_OK) {
	Tcl_AppendResult(interp, "can't flush channel", (char *)NULL);
	return TCL_ERROR;
    }

    /* Init storage */
    Tcl_DStringInit(&upperChannelTranslation);
    Tcl_DStringInit(&upperChannelBlocking);
    Tcl_DStringInit(&upperChannelEOFChar);
    Tcl_DStringInit(&upperChannelEncoding);

    /* Preserve current channel config */
    Tcl_GetChannelOption(interp, chan, "-blocking", &upperChannelBlocking);
    Tcl_GetChannelOption(interp, chan, "-encoding", &upperChannelEncoding);
    Tcl_GetChannelOption(interp, chan, "-eofchar", &upperChannelEOFChar);
    Tcl_GetChannelOption(interp, chan, "-translation", &upperChannelTranslation);

    /* Unstack the channel */
    if (Tcl_UnstackChannel(interp, chan) != TCL_OK) {
	res = TCL_ERROR;
    }

    /* Restore channel config */
    Tcl_SetChannelOption(interp, parent, "-encoding", Tcl_DStringValue(&upperChannelEncoding));
    Tcl_SetChannelOption(interp, parent, "-eofchar", Tcl_DStringValue(&upperChannelEOFChar));
    Tcl_SetChannelOption(interp, parent, "-translation", Tcl_DStringValue(&upperChannelTranslation));
    Tcl_SetChannelOption(interp, parent, "-blocking", Tcl_DStringValue(&upperChannelBlocking));

    /* Clean-up */
    Tcl_DStringFree(&upperChannelTranslation);
    Tcl_DStringFree(&upperChannelEncoding);
    Tcl_DStringFree(&upperChannelEOFChar);
    Tcl_DStringFree(&upperChannelBlocking);
    return res;
}

/*
 *-------------------------------------------------------------------
 *
 * TlsLoadClientCAFileFromMemory -- Load certificates from a client
 *	CA file from VFS into memory.
 *
 * Results:
 *	Number of certificates loaded or 0 for none.
 *
 * Side effects:
 *	Loads CA certificates
 *
 *-------------------------------------------------------------------
 */

static int
TlsLoadClientCAFileFromMemory(
    Tcl_Interp *interp,		/* Tcl interpreter */
    SSL_CTX *ctx,		/* CTX context */
    Tcl_Obj *file)		/* CA certificates filename */
{
    BIO  *bio  = NULL;
    X509 *cert = NULL;
    X509_STORE *store = NULL;
    Tcl_Obj    *buf = NULL;
    const void *data = NULL;
    X509_NAME  *name = NULL;
    STACK_OF(X509_NAME) *certNames = NULL;
    int ret = 0;
    Tcl_Size len = 0;

    /* Read file into memory */
    Tcl_Channel in = Tcl_FSOpenFileChannel(interp, file, "r", 0);
    if (in == NULL) {
	goto cleanup;
    }
    Tcl_SetChannelOption(interp, in, "-encoding", "binary");
    buf = Tcl_NewObj();
    Tcl_IncrRefCount(buf);

    if (Tcl_ReadChars(in, buf, -1, 0) < 0) {
	Tcl_Close(interp, in);
	goto cleanup;
    }
    Tcl_Close(interp, in);

    data = (const void *) Tcl_GetByteArrayFromObj(buf, &len);
    bio = BIO_new_mem_buf(data, (int)len);
    if (bio == NULL) {
	goto cleanup;
    }

    /* Where the certs go */
    store = SSL_CTX_get_cert_store(ctx);
    if (store == NULL) {
	store = X509_STORE_new();
	if (store == NULL) {
	    goto cleanup;
	}
    }

    /* Where the CA names go */
    certNames = sk_X509_NAME_new_null();
    if (!certNames) {
	goto cleanup;
    }

    /* Attempt to load all certs from the PEM file */
    while ((cert = PEM_read_bio_X509(bio, NULL, 0, NULL)) != NULL) {
	if (X509_STORE_add_cert(store, cert) == 0) {
	    X509_free(cert);
	    ret = 0;
	    goto cleanup;
	}
	/* Copy name to stack before certificate gets freed */
	name = X509_get_subject_name(cert);
	if (name) {
	    X509_NAME *name_copy = X509_NAME_dup(name);
	    if (!name_copy || !sk_X509_NAME_push(certNames, name_copy)) {
		X509_free(cert);
		ret = 0;
		goto cleanup;
	    }
	}
	X509_free(cert);
	ret ++;
    }

    /* At least one cert was added so retain the store and CA list */
    if (ret) {
	if (SSL_CTX_get_cert_store(ctx) == NULL) {
	    SSL_CTX_set_cert_store(ctx, store);
	}
	SSL_CTX_set_client_CA_list(ctx, certNames);
    }

  cleanup:

    if (! ret) {
	/* New store is not required */
	if (store != SSL_CTX_get_cert_store(ctx)) {
	    X509_STORE_free(store);
	}
	/* Cert names will not be used */
	if (certNames) {
	    sk_X509_NAME_pop_free(certNames, X509_NAME_free);
	}
    }

    BIO_free(bio);

    if (buf)
	Tcl_DecrRefCount(buf);

    return ret;
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

static SSL_CTX *
CTX_Init(
    State *statePtr,		/* Client state for TLS socket */
    int isServer,		/* Is server or client */
    int proto,			/* TLS protocol versions mask */
    char *keyfile,		/* Private key filename in pEM format */
    char *certfile,		/* Certificate filename in PEM format */
    unsigned char *key,		/* Private key in PEM format */
    unsigned char *cert,	/* Certificate in PEM format */
    Tcl_Size key_len,		/* Private key length in bytes */
    Tcl_Size cert_len,		/* Certificate length in bytes */
    char *CApath,		/* CA directory path */
    char *CAstore,		/* CA Store URI path */
    char *CAfile,		/* CA filename */
    char *ciphers,		/* List of ciphers */
    char *ciphersuites,		/* List of cipher suites */
    int level,			/* Security level */
    char *DHparams)		/* DH parameters */
{
    Tcl_Interp *interp = statePtr->interp;
    SSL_CTX *ctx = NULL;
    Tcl_DString ds;
    uint64_t off = 0;
    int abort = 0;
    int load_private_key;
    const SSL_METHOD *method;
    method = isServer ? TLS_server_method() : TLS_client_method();

    dprintf("Called");

    /* Get user defined allowed protocols */
#if OPENSSL_VERSION_NUMBER < 0x10100000L
#if !defined(NO_SSL2) && !defined(OPENSSL_NO_SSL2)
    if (!(proto & TLS_PROTO_SSL2))
#endif
	off |= SSL_OP_NO_SSLv2;
#endif

#if !defined(NO_SSL3) && !defined(OPENSSL_NO_SSL3)
    if (!(proto & TLS_PROTO_SSL3))
#endif
	off |= SSL_OP_NO_SSLv3;

#if !defined(NO_TLS1) && !defined(OPENSSL_NO_TLS1)
    if (!(proto & TLS_PROTO_TLS1))
#endif
	off |= SSL_OP_NO_TLSv1;

#if !defined(NO_TLS1_1) && !defined(OPENSSL_NO_TLS1_1)
    if (!(proto & TLS_PROTO_TLS1_1))
#endif
	off |= SSL_OP_NO_TLSv1_1;

#if !defined(NO_TLS1_2) && !defined(OPENSSL_NO_TLS1_2)
    if (!(proto & TLS_PROTO_TLS1_2))
#endif
	off |= SSL_OP_NO_TLSv1_2;

#if !defined(NO_TLS1_3) && !defined(OPENSSL_NO_TLS1_3)
    if (!(proto & TLS_PROTO_TLS1_3))
#endif
	off |= SSL_OP_NO_TLSv1_3;

    ERR_clear_error();

    /* Create context */
    ctx = SSL_CTX_new(method);
    if (!ctx) {
	return NULL;
    }

    /* Specify allowed protocol range */
    if (!proto) {
	SSL_CTX_set_min_proto_version(ctx, TLS1_2_VERSION);
	SSL_CTX_set_max_proto_version(ctx, TLS1_3_VERSION);
    } else {
	SSL_CTX_set_min_proto_version(ctx, 0); /* Support all */
	SSL_CTX_set_max_proto_version(ctx, 0);
	SSL_CTX_set_options(ctx, off);	/* Disable specific protocol versions */
    }

    /* Set crypyo key log file */
    if (getenv(SSLKEYLOGFILE)) {
	SSL_CTX_set_keylog_callback(ctx, KeyLogCallback);
    }

    /* Force client cipher selection order to set by server */
    if (!isServer) {
	SSL_CTX_set_options(ctx, SSL_OP_CIPHER_SERVER_PREFERENCE);
    }

#if OPENSSL_VERSION_NUMBER < 0x10100000L
    OpenSSL_add_all_algorithms(); /* Load ciphers and digests */
#endif

    SSL_CTX_set_app_data(ctx, (void*)interp);	/* remember the interpreter */
    SSL_CTX_set_options(ctx, SSL_OP_ALL);	/* Enable all SSL bug workarounds */
    SSL_CTX_set_options(ctx, SSL_OP_NO_COMPRESSION);	/* Disable compression even if supported */

    /* Allow writes to report success when less than all records have been written */
    SSL_CTX_set_mode(ctx, SSL_MODE_ENABLE_PARTIAL_WRITE);

    /* Disable attempts to try to process the next record instead of returning after a
       non-app record. Avoids hangs in blocking mode, when using SSL_read() and a
       non-application record was sent without any application data. */
    /*SSL_CTX_clear_mode(ctx, SSL_MODE_AUTO_RETRY);*/

    /* Set number of sessions to cache */
    SSL_CTX_sess_set_cache_size(ctx, 128);

    /* Set user defined ciphers and cipher suites */
    if ((ciphers != NULL) && !SSL_CTX_set_cipher_list(ctx, ciphers)) {
	Tcl_AppendResult(interp, "Set ciphers failed: No valid ciphers", (char *)NULL);
	SSL_CTX_free(ctx);
	return NULL;
    }
    if ((ciphersuites != NULL) && !SSL_CTX_set_ciphersuites(ctx, ciphersuites)) {
	Tcl_AppendResult(interp, "Set cipher suites failed: No valid cipher suites", (char *)NULL);
	SSL_CTX_free(ctx);
	return NULL;
    }

    /* Set automatic curve selection */
#if OPENSSL_VERSION_NUMBER < 0x10101000L
    SSL_CTX_set_ecdh_auto(ctx, 1);
#endif

    /* Set security level */
    if (level > -1 && level < 6) {
	/* SSL_set_security_level */
	SSL_CTX_set_security_level(ctx, level);
    }

    /* Set get password callback */
    SSL_CTX_set_default_passwd_cb(ctx, PasswordCallback);
    SSL_CTX_set_default_passwd_cb_userdata(ctx, (void *)statePtr);

    /* Set Diffie-Hellman parameters from file, or use the built-in one.
     * Used by servers requiring ephemeral DH keys. */
    Tcl_DStringInit(&ds);
#ifdef OPENSSL_NO_DH
    if (DHparams != NULL) {
	Tcl_AppendResult(interp, "DH parameter support not available", (char *)NULL);
	SSL_CTX_free(ctx);
	return NULL;
    }
#else
    {
	if (DHparams != NULL) {
	    BIO *bio;

	    bio = BIO_new_file(F2N(DHparams, &ds), "r");
	    if (!bio) {
		Tcl_DStringFree(&ds);
		Tcl_AppendResult(interp, "Could not find DH parameters file", (char *)NULL);
		SSL_CTX_free(ctx);
		return NULL;
	    }

#if OPENSSL_VERSION_NUMBER < 0x30000000L
	    DH* dh = PEM_read_bio_DHparams(bio, NULL, NULL, NULL);
	    BIO_free(bio);
	    Tcl_DStringFree(&ds);
	    if (!dh) {
		Tcl_AppendResult(interp, "Could not read DH parameters from file: ",
		    GET_ERR_REASON(), (char *)NULL);
		SSL_CTX_free(ctx);
		return NULL;
	    }
	    if (!SSL_CTX_set_tmp_dh(ctx, dh)) {
		Tcl_AppendResult(interp, "Could not set DH parameters from file: ",
		    GET_ERR_REASON(), (char *)NULL);
		DH_free(dh);
		SSL_CTX_free(ctx);
		return NULL;
	    }
	    DH_free(dh);
	    dprintf("Diffie-Hellman initialized with %d bit key", 8 * DH_size(dh));
#else
	    EVP_PKEY *dh = PEM_read_bio_Parameters(bio, NULL);
	    BIO_free(bio);
	    Tcl_DStringFree(&ds);
	    if (!dh) {
		Tcl_AppendResult(interp, "Could not read DH parameters from file: ",
		    GET_ERR_REASON(), (char *)NULL);
		SSL_CTX_free(ctx);
		return NULL;
	    }
	    if (!SSL_CTX_set0_tmp_dh_pkey(ctx, dh)) {
		Tcl_AppendResult(interp, "Could not set DH parameters from file: ",
		    GET_ERR_REASON(), (char *)NULL);
		SSL_CTX_free(ctx);
		return NULL;
	    }
	    dprintf("Diffie-Hellman initialized with %d bit key", 8 * EVP_PKEY_get_size(dh));
#endif

	} else {
	    /* Use well known DH parameters that have built-in support in OpenSSL */
	    if (!SSL_CTX_set_dh_auto(ctx, 1)) {
		Tcl_AppendResult(interp, "Could not enable set DH auto: ", GET_ERR_REASON(),
			(char *)NULL);
		SSL_CTX_free(ctx);
		return NULL;
	    }
	}
    }
#endif

    /* Set our certificate */
    load_private_key = 0;
    if (certfile != NULL) {
	load_private_key = 1;

	if (SSL_CTX_use_certificate_file(ctx, F2N(certfile, &ds), SSL_FILETYPE_PEM) <= 0) {
	    Tcl_DStringFree(&ds);
	    Tcl_AppendResult(interp, "unable to set certificate file ", certfile, ": ",
		    GET_ERR_REASON(), (char *)NULL);
	    SSL_CTX_free(ctx);
	    return NULL;
	}
	Tcl_DStringFree(&ds);

    } else if (cert != NULL) {
	load_private_key = 1;
	if (SSL_CTX_use_certificate_ASN1(ctx, (int) cert_len, cert) <= 0) {
	    Tcl_AppendResult(interp, "unable to set certificate: ",
		    GET_ERR_REASON(), (char *)NULL);
	    SSL_CTX_free(ctx);
	    return NULL;
	}
    } else {
	certfile = (char*)X509_get_default_cert_file();

	if (SSL_CTX_use_certificate_file(ctx, certfile, SSL_FILETYPE_PEM) <= 0) {
#if 0
	    Tcl_AppendResult(interp, "unable to use default certificate file ", certfile, ": ",
		    GET_ERR_REASON(), (char *)NULL);
	    SSL_CTX_free(ctx);
	    return NULL;
#endif
	}
    }

    /* Set our private key */
    if (load_private_key) {
	if (keyfile == NULL && key == NULL) {
	    keyfile = certfile;
	}

	if (keyfile != NULL) {
	    /* get the private key associated with this certificate */
	    if (keyfile == NULL) {
		keyfile = certfile;
	    }

	    if (SSL_CTX_use_PrivateKey_file(ctx, F2N(keyfile, &ds), SSL_FILETYPE_PEM) <= 0) {
		Tcl_DStringFree(&ds);
		/* flush the passphrase which might be left in the result */
		Tcl_SetResult(interp, NULL, TCL_STATIC);
		Tcl_AppendResult(interp, "unable to set public key file ", keyfile, " ",
			GET_ERR_REASON(), (char *)NULL);
		SSL_CTX_free(ctx);
		return NULL;
	    }
	    Tcl_DStringFree(&ds);

	} else if (key != NULL) {
	    if (SSL_CTX_use_PrivateKey_ASN1(EVP_PKEY_RSA, ctx, key, (int) key_len) <= 0) {
		/* flush the passphrase which might be left in the result */
		Tcl_SetResult(interp, NULL, TCL_STATIC);
		Tcl_AppendResult(interp, "unable to set public key: ", GET_ERR_REASON(), (char *)NULL);
		SSL_CTX_free(ctx);
		return NULL;
	    }
	}
	/* Now we know that a key and cert have been set against
	 * the SSL context */
	if (!SSL_CTX_check_private_key(ctx)) {
	    Tcl_AppendResult(interp, "private key does not match the certificate public key",
		    (char *)NULL);
	    SSL_CTX_free(ctx);
	    return NULL;
	}
    }

    /* Set to use the default location and file for Certificate Authority (CA) certificates.
     * The default CA certificates directory is called certs in the default OpenSSL
     * directory. It contains the CA certificates in PEM format, with one certificate per
     * file. The verify path and store can be overridden by the SSL_CERT_DIR env var. The
     * default CA certificates file is called cert.pem in the default OpenSSL directory.
     * The verify file can be overridden by the SSL_CERT_FILE env var. */
    if (!SSL_CTX_set_default_verify_paths(ctx)) {
	abort++;
    }

    /* Overrides for the CA verify path and file */
    {
#if OPENSSL_VERSION_NUMBER < 0x30000000L
	if (CApath != NULL || CAfile != NULL) {
	    Tcl_DString ds1;
	    Tcl_DStringInit(&ds1);

	    if (!SSL_CTX_load_verify_locations(ctx, F2N(CAfile, &ds), F2N(CApath, &ds1))) {
		abort++;
		return NULL;
	    }
	    Tcl_DStringFree(&ds);
	    Tcl_DStringFree(&ds1);

	    /* Set list of CAs to send to client when requesting a client certificate */
	    /* https://sourceforge.net/p/tls/bugs/57/ */
	    /* XXX:TODO: Let the user supply values here instead of something that exists on the filesystem */
	    STACK_OF(X509_NAME) *certNames = SSL_load_client_CA_file(F2N(CAfile, &ds));
	    if (certNames != NULL) {
		SSL_CTX_set_client_CA_list(ctx, certNames);
	    }
	    Tcl_DStringFree(&ds);
	}

#else
	/* Set directory containing CA certificates in PEM format. */
	if (CApath != NULL) {
	    if (!SSL_CTX_load_verify_dir(ctx, F2N(CApath, &ds))) {
		abort++;
	    }
	    Tcl_DStringFree(&ds);
	}

	/* Set URI for to a store, which may be a single container or a catalog of containers. */
	if (CAstore != NULL) {
	    if (!SSL_CTX_load_verify_store(ctx, F2N(CAstore, &ds))) {
		abort++;
	    }
	    Tcl_DStringFree(&ds);
	}

	/* Set file of CA certificates in PEM format.  */
	if (CAfile != NULL) {
	    Tcl_Obj *cafileobj = Tcl_NewStringObj(CAfile, -1);
	    Tcl_IncrRefCount(cafileobj);

	    Tcl_Obj *fsinfo = Tcl_FSFileSystemInfo(cafileobj);
	    if (fsinfo) {
		Tcl_Obj *fstype = NULL;
		Tcl_IncrRefCount(fsinfo);

		Tcl_ListObjIndex(interp, fsinfo, 0, &fstype);
		Tcl_IncrRefCount(fstype);

		if (Tcl_StringMatch("native", Tcl_GetString(fstype))) {
		    if (!SSL_CTX_load_verify_file(ctx, F2N(CAfile, &ds))) {
			abort++;
		    }
		    Tcl_DStringFree(&ds);

		    /* Set list of CAs to send to client when requesting a client certificate */
		    STACK_OF(X509_NAME) *certNames = SSL_load_client_CA_file(F2N(CAfile, &ds));
		    if (certNames != NULL) {
			SSL_CTX_set_client_CA_list(ctx, certNames);
		    }
		    Tcl_DStringFree(&ds);

		} else {
		    /* Load certificate into memory */
		    if (!TlsLoadClientCAFileFromMemory(interp, ctx, cafileobj)) {
			abort++;
		    }
		}
		Tcl_DecrRefCount(fstype);
		Tcl_DecrRefCount(fsinfo);

	    } else {
		abort++; /* Path is not recognized */
	    }
	    Tcl_DecrRefCount(cafileobj);
	}
#endif
    }

    if (abort > 0) {
	/* return error */
    }
    return ctx;
}

/*
 *-------------------------------------------------------------------
 *
 * StatusObjCmd -- return certificate for connected peer info.
 *
 * Results:
 *	A standard Tcl result.
 *
 * Side effects:
 *	None.
 *
 *-------------------------------------------------------------------
 */

static int
StatusObjCmd(
    TCL_UNUSED(ClientData),	/* Client data */
    Tcl_Interp *interp,		/* Tcl interpreter */
    int objc,			/* Arg count */
    Tcl_Obj *const objv[])	/* Arguments as Tcl objects */
{
    State *statePtr;
    X509 *peer;
    Tcl_Obj *objPtr;
    Tcl_Channel chan;
    char *channelName, *ciphers;
    int mode;
    const unsigned char *proto;
    unsigned int len;
    int nid;
    long res;

    dprintf("Called");

    if (objc < 2 || objc > 3 || (objc == 3 && !strcmp(Tcl_GetString(objv[1]), "-local"))) {
	Tcl_WrongNumArgs(interp, 1, objv, "?-local? channel");
	return TCL_ERROR;
    }

    /* Get channel Id */
    channelName = Tcl_GetString(objv[(objc == 2 ? 1 : 2)]);
    chan = Tcl_GetChannel(interp, channelName, &mode);
    if (chan == (Tcl_Channel) NULL) {
	return TCL_ERROR;
    }

    /* Make sure to operate on the topmost channel */
    chan = Tcl_GetTopChannel(chan);
    if (Tcl_GetChannelType(chan) != Tls_ChannelType()) {
	Tcl_AppendResult(interp, "bad channel \"", Tcl_GetChannelName(chan),
		"\": not a TLS channel", (char *)NULL);
	Tcl_SetErrorCode(interp, "TLS", "STATUS", "CHANNEL", "INVALID", (char *)NULL);
	return TCL_ERROR;
    }
    statePtr = (State *) Tcl_GetChannelInstanceData(chan);

    /* Get certificate for peer or self */
    if (objc == 2) {
#if OPENSSL_VERSION_NUMBER < 0x30000000L
	peer = SSL_get_peer_certificate(statePtr->ssl);
#else
	peer = SSL_get1_peer_certificate(statePtr->ssl);
#endif
    } else {
	peer = SSL_get_certificate(statePtr->ssl);
    }
    /* Get X509 certificate info */
    if (peer) {
	objPtr = Tls_NewX509Obj(interp, peer, 1);
	if (objc == 2) {
	    X509_free(peer);
	    peer = NULL;
	}
    } else {
	objPtr = Tcl_NewListObj(0, NULL);
    }

    /* Peer name */
    LAPPEND_STR(interp, objPtr, "peername", SSL_get0_peername(statePtr->ssl), -1);
    LAPPEND_INT(interp, objPtr, "sbits", SSL_get_cipher_bits(statePtr->ssl, NULL));

    ciphers = (char*)SSL_get_cipher(statePtr->ssl);
    LAPPEND_STR(interp, objPtr, "cipher", ciphers, -1);

    /* Verify the X509 certificate presented by the peer */
    LAPPEND_STR(interp, objPtr, "verifyResult",
	X509_verify_cert_error_string(SSL_get_verify_result(statePtr->ssl)), -1);

    /* Verify mode */
    mode = SSL_get_verify_mode(statePtr->ssl);
    if (mode & SSL_VERIFY_NONE) {
	LAPPEND_STR(interp, objPtr, "verifyMode", "none", -1);
    } else {
	Tcl_Obj *listObjPtr = Tcl_NewListObj(0, NULL);
	if (mode & SSL_VERIFY_PEER) {
	    Tcl_ListObjAppendElement(interp, listObjPtr, Tcl_NewStringObj("peer", -1));
	}
	if (mode & SSL_VERIFY_FAIL_IF_NO_PEER_CERT) {
	    Tcl_ListObjAppendElement(interp, listObjPtr, Tcl_NewStringObj("fail if no peer cert", -1));
	}
	if (mode & SSL_VERIFY_CLIENT_ONCE) {
	    Tcl_ListObjAppendElement(interp, listObjPtr, Tcl_NewStringObj("client once", -1));
	}
	if (mode & SSL_VERIFY_POST_HANDSHAKE) {
	    Tcl_ListObjAppendElement(interp, listObjPtr, Tcl_NewStringObj("post handshake", -1));
	}
	LAPPEND_OBJ(interp, objPtr, "verifyMode", listObjPtr)
    }

    /* Verify mode depth */
    LAPPEND_INT(interp, objPtr, "verifyDepth", SSL_get_verify_depth(statePtr->ssl));

    /* Report the selected protocol as a result of the negotiation */
    SSL_get0_alpn_selected(statePtr->ssl, &proto, &len);
    LAPPEND_STR(interp, objPtr, "alpn", (char *)proto, (Tcl_Size) len);
    LAPPEND_STR(interp, objPtr, "protocol", SSL_get_version(statePtr->ssl), -1);

    /* Valid for non-RSA signature and TLS 1.3 */
    if (objc == 2) {
	res = SSL_get_peer_signature_nid(statePtr->ssl, &nid);
    } else {
	res = SSL_get_signature_nid(statePtr->ssl, &nid);
    }
    if (!res) {nid = 0;}
    LAPPEND_STR(interp, objPtr, "signatureHashAlgorithm", OBJ_nid2ln(nid), -1);

    /* Added in OpenSSL 1.1.1a */
#if OPENSSL_VERSION_NUMBER > 0x10101000L
    if (objc == 2) {
	res = SSL_get_peer_signature_type_nid(statePtr->ssl, &nid);
    } else {
	res = SSL_get_signature_type_nid(statePtr->ssl, &nid);
    }
    if (!res) {nid = 0;}
    LAPPEND_STR(interp, objPtr, "signatureType", OBJ_nid2ln(nid), -1);
#endif

    Tcl_SetObjResult(interp, objPtr);
    return TCL_OK;
}

/*
 *-------------------------------------------------------------------
 *
 * ConnectionInfoObjCmd -- return connection info from OpenSSL.
 *
 * Results:
 *	A list of connection info
  *
 *-------------------------------------------------------------------
 */

static int ConnectionInfoObjCmd(
    TCL_UNUSED(ClientData),	/* Client data */
    Tcl_Interp *interp,		/* Tcl interpreter */
    int objc,			/* Arg count */
    Tcl_Obj *const objv[])	/* Arguments as Tcl objects */
{
    Tcl_Channel chan;		/* The channel to set a mode on */
    State *statePtr;		/* Client state for TLS socket */
    Tcl_Obj *objPtr, *listPtr;
    const SSL *ssl;
    const SSL_CIPHER *cipher;
    const SSL_SESSION *session;
    const EVP_MD *md;

    dprintf("Called");

    if (objc != 2) {
	Tcl_WrongNumArgs(interp, 1, objv, "channel");
	return TCL_ERROR;
    }

    chan = Tcl_GetChannel(interp, Tcl_GetString(objv[1]), NULL);
    if (chan == (Tcl_Channel) NULL) {
	return TCL_ERROR;
    }

    /* Make sure to operate on the topmost channel */
    chan = Tcl_GetTopChannel(chan);
    if (Tcl_GetChannelType(chan) != Tls_ChannelType()) {
	Tcl_AppendResult(interp, "bad channel \"", Tcl_GetChannelName(chan),
		"\": not a TLS channel", (char *)NULL);
	Tcl_SetErrorCode(interp, "TLS", "CONNECTION", "CHANNEL", "INVALID", (char *)NULL);
	return TCL_ERROR;
    }

    objPtr = Tcl_NewListObj(0, NULL);

    /* Connection info */
    statePtr = (State *)Tcl_GetChannelInstanceData(chan);
    ssl = statePtr->ssl;
    if (ssl != NULL) {
	const unsigned char *proto;
	unsigned int ulen;

	/* Initialization finished */
	LAPPEND_BOOL(interp, objPtr, "init_finished", SSL_is_init_finished(ssl));

	/* connection state */
	LAPPEND_STR(interp, objPtr, "state", SSL_state_string_long(ssl), -1);

	/* Get SNI requested server name */
	LAPPEND_STR(interp, objPtr, "servername", SSL_get_servername(ssl, TLSEXT_NAMETYPE_host_name), -1);

	/* Report the selected protocol as a result of the negotiation */
	SSL_get0_alpn_selected(ssl, &proto, &ulen);
	LAPPEND_STR(interp, objPtr, "alpn", (char *)proto, (Tcl_Size) ulen);

	/* Get protocol */
	LAPPEND_STR(interp, objPtr, "protocol", SSL_get_version(ssl), -1);

	/* Renegotiation allowed */
	LAPPEND_BOOL(interp, objPtr, "renegotiation_allowed", SSL_get_secure_renegotiation_support((SSL *) ssl));

	/* Get security level */
	LAPPEND_INT(interp, objPtr, "security_level", SSL_get_security_level(ssl));

	/* Session info */
	LAPPEND_BOOL(interp, objPtr, "session_reused", SSL_session_reused(ssl));

	/* Is server info */
	LAPPEND_BOOL(interp, objPtr, "is_server", SSL_is_server(ssl));

	/* Is DTLS */
	LAPPEND_BOOL(interp, objPtr, "is_dtls", SSL_is_dtls(ssl));

#if OPENSSL_VERSION_NUMBER >= 0x30200000L
	/* Is QUIC */
	LAPPEND_BOOL(interp, objPtr, "is_quic", SSL_is_quic(ssl));

	/* Is TLS */
	LAPPEND_BOOL(interp, objPtr, "is_tls", SSL_is_tls(ssl));
#endif

	/* DANE TLS authentication */
	LAPPEND_BOOL(interp, objPtr, "dane_auth", SSL_get0_dane((SSL *)ssl) != NULL);

	/* Waiting for async */
	LAPPEND_BOOL(interp, objPtr, "waiting_for_async", SSL_waiting_for_async((SSL *)ssl));

	/* Time-out */
	LAPPEND_LONG(interp, objPtr, "time-out", SSL_get_default_timeout(ssl));

	/* Is Certificate Transparency validation enabled */
	LAPPEND_BOOL(interp, objPtr, "ct_enabled", SSL_ct_is_enabled(ssl));
    }

    /* Cipher info */
    cipher = SSL_get_current_cipher(ssl);
    if (cipher != NULL) {
	char buf[BUFSIZ] = {0};
	int bits, alg_bits;

	/* Cipher name */
	LAPPEND_STR(interp, objPtr, "cipher", SSL_CIPHER_get_name(cipher), -1);

	/* RFC name of cipher */
	LAPPEND_STR(interp, objPtr, "standard_name", SSL_CIPHER_standard_name(cipher), -1);

	/* OpenSSL name of cipher */
	LAPPEND_STR(interp, objPtr, "openssl_name", OPENSSL_cipher_name(SSL_CIPHER_standard_name(cipher)), -1);

	/* number of secret bits used for cipher */
	bits = SSL_CIPHER_get_bits(cipher, &alg_bits);
	LAPPEND_INT(interp, objPtr, "secret_bits", bits);
	LAPPEND_INT(interp, objPtr, "algorithm_bits", alg_bits);
	/* alg_bits is actual key secret bits. If use bits and secret (algorithm) bits differ,
	   the rest of the bits are fixed, i.e. for limited export ciphers (bits < 56) */

	/* Indicates which SSL/TLS protocol version first defined the cipher */
	LAPPEND_STR(interp, objPtr, "min_version", SSL_CIPHER_get_version(cipher), -1);

	/* Cipher NID */
	LAPPEND_STR(interp, objPtr, "cipherNID", (char *)OBJ_nid2ln(SSL_CIPHER_get_cipher_nid(cipher)), -1);
	LAPPEND_STR(interp, objPtr, "digestNID", (char *)OBJ_nid2ln(SSL_CIPHER_get_digest_nid(cipher)), -1);
	LAPPEND_STR(interp, objPtr, "keyExchangeNID", (char *)OBJ_nid2ln(SSL_CIPHER_get_kx_nid(cipher)), -1);
	LAPPEND_STR(interp, objPtr, "authenticationNID", (char *)OBJ_nid2ln(SSL_CIPHER_get_auth_nid(cipher)), -1);

	/* message authentication code - Cipher is AEAD (e.g. GCM or ChaCha20/Poly1305) or not */
	/* Authenticated Encryption with associated data (AEAD) check */
	LAPPEND_BOOL(interp, objPtr, "cipher_is_aead", SSL_CIPHER_is_aead(cipher));

	/* Digest used during the SSL/TLS handshake when using the cipher. */
	md = SSL_CIPHER_get_handshake_digest(cipher);
	LAPPEND_STR(interp, objPtr, "handshake_digest", (char *)EVP_MD_name(md), -1);

	/* Get OpenSSL-specific ID, not IANA ID */
	LAPPEND_INT(interp, objPtr, "cipher_id", (int) SSL_CIPHER_get_id(cipher));

	/* Two-byte ID used in the TLS protocol of the given cipher */
	LAPPEND_INT(interp, objPtr, "protocol_id", (int) SSL_CIPHER_get_protocol_id(cipher));

	/* Textual description of the cipher */
	if (SSL_CIPHER_description(cipher, buf, sizeof(buf)) != NULL) {
	    LAPPEND_STR(interp, objPtr, "description", buf, -1);
	}
    }

    /* Session info */
    session = SSL_get_session(ssl);
    if (session != NULL) {
	const unsigned char *ticket;
	size_t len2;
	unsigned int ulen;
	const unsigned char *session_id, *proto;
	unsigned char buffer[SSL_MAX_MASTER_KEY_LENGTH];

	/* Report the selected protocol as a result of the ALPN negotiation */
	SSL_SESSION_get0_alpn_selected(session, &proto, &len2);
	LAPPEND_STR(interp, objPtr, "alpn", (char *) proto, (Tcl_Size) len2);

	/* Report the selected protocol as a result of the NPN negotiation */
#ifdef USE_NPN
	SSL_get0_next_proto_negotiated(ssl, &proto, &ulen);
	LAPPEND_STR(interp, objPtr, "npn", (char *) proto, (Tcl_Size) ulen);
#endif

	/* Resumable session */
	LAPPEND_BOOL(interp, objPtr, "resumable", SSL_SESSION_is_resumable(session));

	/* Session start time (seconds since epoch) */
#if OPENSSL_VERSION_NUMBER < 0x30300000L
	LAPPEND_LONG(interp, objPtr, "start_time", SSL_SESSION_get_time(session));
#else
	LAPPEND_WIDE(interp, objPtr, "start_time", SSL_SESSION_get_time_ex(session));
#endif

	/* Timeout value - SSL_CTX_get_timeout (in seconds) */
	LAPPEND_LONG(interp, objPtr, "timeout", SSL_SESSION_get_timeout(session));

	/* Session id - TLSv1.2 and below only */
	session_id = SSL_SESSION_get_id(session, &ulen);
	LAPPEND_BARRAY(interp, objPtr, "session_id", session_id, (Tcl_Size) ulen);

	/* Session context */
	session_id = SSL_SESSION_get0_id_context(session, &ulen);
	LAPPEND_BARRAY(interp, objPtr, "session_context", session_id, (Tcl_Size) ulen);

	/* Session ticket - client only */
	SSL_SESSION_get0_ticket(session, &ticket, &len2);
	LAPPEND_BARRAY(interp, objPtr, "session_ticket", ticket, (Tcl_Size) len2);

	/* Session ticket lifetime hint (in seconds) */
	LAPPEND_LONG(interp, objPtr, "lifetime", SSL_SESSION_get_ticket_lifetime_hint(session));

	/* Ticket app data */
#if OPENSSL_VERSION_NUMBER < 0x30000000L
	SSL_SESSION_get0_ticket_appdata((SSL_SESSION *) session, &ticket, &len2);
	LAPPEND_BARRAY(interp, objPtr, "ticket_app_data", ticket, (Tcl_Size) len2);
#endif

	/* Get master key */
	len2 = SSL_SESSION_get_master_key(session, buffer, SSL_MAX_MASTER_KEY_LENGTH);
	LAPPEND_BARRAY(interp, objPtr, "master_key", buffer, (Tcl_Size) len2);

	/* Compression id */
	unsigned int id = SSL_SESSION_get_compress_id(session);
	LAPPEND_STR(interp, objPtr, "compression_id", id == 1 ? "zlib" : "none", -1);
    }

    /* Compression info */
    if (ssl != NULL) {
#ifdef HAVE_SSL_COMPRESSION
	const COMP_METHOD *comp, *expn;
	comp = SSL_get_current_compression(ssl);
	expn = SSL_get_current_expansion(ssl);

	LAPPEND_STR(interp, objPtr, "compression", comp ? SSL_COMP_get_name(comp) : "none", -1);
	LAPPEND_STR(interp, objPtr, "expansion", expn ? SSL_COMP_get_name(expn) : "none", -1);
#else
	LAPPEND_STR(interp, objPtr, "compression", "none", -1);
	LAPPEND_STR(interp, objPtr, "expansion", "none", -1);
#endif
    }

    /* Server info */
    {
	long mode = SSL_CTX_get_session_cache_mode(statePtr->ctx);
	const char *msg;

	if (mode & SSL_SESS_CACHE_OFF) {
	    msg = "off";
	} else if (mode & SSL_SESS_CACHE_CLIENT) {
	    msg = "client";
	} else if (mode & SSL_SESS_CACHE_SERVER) {
	    msg = "server";
	} else if (mode & SSL_SESS_CACHE_BOTH) {
	    msg = "both";
	} else {
	    msg = "unknown";
	}
	LAPPEND_STR(interp, objPtr, "session_cache_mode", msg, -1);
    }

    /* CA List */
    /* IF not a server, same as SSL_get0_peer_CA_list. If server same as SSL_CTX_get_client_CA_list */
    listPtr = Tcl_NewListObj(0, NULL);
    STACK_OF(X509_NAME) *ca_list;
    if ((ca_list = SSL_get_client_CA_list(ssl)) != NULL) {
	char buffer[BUFSIZ];
	for (int i = 0; i < sk_X509_NAME_num(ca_list); i++) {
	    X509_NAME *name = sk_X509_NAME_value(ca_list, i);
	    if (name) {
		X509_NAME_oneline(name, buffer, BUFSIZ);
		Tcl_ListObjAppendElement(interp, listPtr, Tcl_NewStringObj(buffer, -1));
	    }
	}
    }
    LAPPEND_OBJ(interp, objPtr, "caList", listPtr);
    LAPPEND_INT(interp, objPtr, "caListCount", sk_X509_NAME_num(ca_list));

    Tcl_SetObjResult(interp, objPtr);
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

static int
VersionObjCmd(
    TCL_UNUSED(ClientData),	/* Client data */
    Tcl_Interp *interp,		/* Tcl interpreter */
    TCL_UNUSED(int),		/* objc - Arg count */
    TCL_UNUSED(Tcl_Obj *const *)) /* objv - Arguments as Tcl objects */
{
    Tcl_Obj *objPtr;

    dprintf("Called");

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

static int
MiscObjCmd(
    TCL_UNUSED(ClientData),	/* Client data */
    Tcl_Interp *interp,		/* Tcl interpreter */
    int objc,			/* Arg count */
    Tcl_Obj *const objv[])	/* Arguments as Tcl objects */
{
    static const char *commands [] = { "req", "strreq", NULL };
    enum command { C_REQ, C_STRREQ, C_DUMMY };
    int cmd, isStr;
    char buffer[16384];
    int res = TCL_OK;

    dprintf("Called");

    if (objc < 2) {
	Tcl_WrongNumArgs(interp, 1, objv, "subcommand ?args?");
	return TCL_ERROR;
    }
    if (Tcl_GetIndexFromObj(interp, objv[1], commands, "command", 0, &cmd) != TCL_OK) {
	return TCL_ERROR;
    }

    ERR_clear_error();

    isStr = (cmd == C_STRREQ);
    switch ((enum command) cmd) {
	case C_REQ:
	case C_STRREQ: {
	    EVP_PKEY *pkey=NULL;
	    X509 *cert=NULL;
	    X509_NAME *name=NULL;
	    Tcl_Obj **listv;
	    Tcl_Size listc, i;

	    BIO *out=NULL;

	    Tcl_Obj *k_C=NULL,*k_ST=NULL,*k_L=NULL,*k_O=NULL,*k_OU=NULL,*k_CN=NULL,*k_Email=NULL;
	    char *keyout,*pemout,*str;
	    int keysize,serial=0,days=365;

#if OPENSSL_VERSION_NUMBER < 0x30000000L
	    BIGNUM *bne = NULL;
	    RSA *rsa = NULL;
#else
	    EVP_PKEY_CTX *ctx = NULL;
#endif

	    if ((objc<5) || (objc>6)) {
		Tcl_WrongNumArgs(interp, 2, objv, "keysize keyfile certfile ?info?");
		return TCL_ERROR;
	    }

	    if (Tcl_GetIntFromObj(interp, objv[2], &keysize) != TCL_OK) {
		return TCL_ERROR;
	    }
	    keyout=Tcl_GetString(objv[3]);
	    pemout=Tcl_GetString(objv[4]);
	    if (isStr) {
		Tcl_SetVar(interp,keyout,"",0);
		Tcl_SetVar(interp,pemout,"",0);
	    }

	    if (objc>=6) {
		if (Tcl_ListObjGetElements(interp, objv[5], &listc, &listv) != TCL_OK) {
		    return TCL_ERROR;
		}

		if ((listc%2) != 0) {
		    Tcl_SetResult(interp,"Information list must have even number of arguments",NULL);
		    res = TCL_ERROR;
		}
		for (i=0; i<listc; i+=2) {
		    str=Tcl_GetString(listv[i]);
		    if (strcmp(str,"days")==0) {
			if (Tcl_GetIntFromObj(interp,listv[i+1],&days)!=TCL_OK) {
			    res = TCL_ERROR;
			    break;
			}
		    } else if (strcmp(str,"serial")==0) {
			if (Tcl_GetIntFromObj(interp,listv[i+1],&serial)!=TCL_OK) {
			    res = TCL_ERROR;
			    break;
			}
		    } else if (strcmp(str,"C")==0) {
			k_C = listv[i+1];
			Tcl_IncrRefCount(k_C);
		    } else if (strcmp(str,"ST")==0) {
			k_ST = listv[i+1];
			Tcl_IncrRefCount(k_ST);
		    } else if (strcmp(str,"L")==0) {
			k_L = listv[i+1];
			Tcl_IncrRefCount(k_L);
		    } else if (strcmp(str,"O")==0) {
			k_O = listv[i+1];
			Tcl_IncrRefCount(k_O);
		    } else if (strcmp(str,"OU")==0) {
			k_OU = listv[i+1];
			Tcl_IncrRefCount(k_OU);
		    } else if (strcmp(str,"CN")==0) {
			k_CN = listv[i+1];
			Tcl_IncrRefCount(k_CN);
		    } else if (strcmp(str,"Email")==0) {
			k_Email = listv[i+1];
			Tcl_IncrRefCount(k_Email);
		    } else {
			Tcl_SetResult(interp,"Unknown parameter",NULL);
			res = TCL_ERROR;
			break;
		    }
		}
		for (i=0; i<listc; i+=2) {
		    Tcl_IncrRefCount(listv[i]);
		    Tcl_DecrRefCount(listv[i]);
		}
		if (res != TCL_OK) {
		    goto done;
		}
	    }

#if OPENSSL_VERSION_NUMBER < 0x30000000L
	    bne = BN_new();
	    rsa = RSA_new();
	    pkey = EVP_PKEY_new();
	    if (bne == NULL || rsa == NULL || pkey == NULL || !BN_set_word(bne,RSA_F4) ||
		!RSA_generate_key_ex(rsa, keysize, bne, NULL) || !EVP_PKEY_assign_RSA(pkey, rsa)) {
		EVP_PKEY_free(pkey);
		/* RSA_free(rsa); freed by EVP_PKEY_free */
		BN_free(bne);
#else
	    pkey = EVP_RSA_gen((unsigned int) keysize);
	    ctx = EVP_PKEY_CTX_new(pkey,NULL);
	    if (pkey == NULL || ctx == NULL || !EVP_PKEY_keygen_init(ctx) ||
		!EVP_PKEY_CTX_set_rsa_keygen_bits(ctx, keysize) || !EVP_PKEY_keygen(ctx, &pkey)) {
		EVP_PKEY_free(pkey);
		EVP_PKEY_CTX_free(ctx);
#endif
		Tcl_SetResult(interp,"Error generating private key",NULL);
		res = TCL_ERROR;
		goto done;

	    } else {
		const unsigned char *string;
		Tcl_Size len;

		if (isStr) {
		    out=BIO_new(BIO_s_mem());
		    PEM_write_bio_PrivateKey(out,pkey,NULL,NULL,0,NULL,NULL);
		    i=BIO_read(out,buffer,sizeof(buffer)-1);
		    i=(i<0) ? 0 : i;
		    buffer[i]='\0';
		    Tcl_SetVar(interp,keyout,buffer,0);
		    BIO_flush(out);
		    BIO_free(out);
		} else {
		    out=BIO_new(BIO_s_file());
		    BIO_write_filename(out,keyout);
		    PEM_write_bio_PrivateKey(out,pkey,NULL,NULL,0,NULL,NULL);
		    /* PEM_write_bio_RSAPrivateKey(out, rsa, NULL, NULL, 0, NULL, NULL); */
		    BIO_free_all(out);
		}

		if ((cert=X509_new())==NULL) {
		    Tcl_SetResult(interp,"Error generating certificate request",NULL);
		    EVP_PKEY_free(pkey);
#if OPENSSL_VERSION_NUMBER < 0x30000000L
		    BN_free(bne);
#endif
		    res = TCL_ERROR;
		    goto done;
		}

		X509_set_version(cert,2);
		ASN1_INTEGER_set(X509_get_serialNumber(cert),serial);
		X509_gmtime_adj(X509_getm_notBefore(cert),0);
		X509_gmtime_adj(X509_getm_notAfter(cert),(long)60*60*24*days);
		X509_set_pubkey(cert,pkey);

		name=X509_get_subject_name(cert);

		if (k_C != NULL) {
		    string = (const unsigned char *) Tcl_GetStringFromObj(k_C, &len);
		} else {
		    string = NULL;
		    len = 0;
		}
		X509_NAME_add_entry_by_txt(name,"C", MBSTRING_ASC, string, (int) len, -1, 0);

		if (k_ST != NULL) {
		    string = (const unsigned char *) Tcl_GetStringFromObj(k_ST, &len);
		} else {
		    string = NULL;
		    len = 0;
		}
		X509_NAME_add_entry_by_txt(name,"ST", MBSTRING_ASC, string, (int) len, -1, 0);

		if (k_L != NULL) {
		    string = (const unsigned char *) Tcl_GetStringFromObj(k_L, &len);
		} else {
		    string = NULL;
		    len = 0;
		}
		X509_NAME_add_entry_by_txt(name,"L", MBSTRING_ASC, string, (int) len, -1, 0);

		if (k_O != NULL) {
		    string = (const unsigned char *) Tcl_GetStringFromObj(k_O, &len);
		} else {
		    string = NULL;
		    len = 0;
		}
		X509_NAME_add_entry_by_txt(name,"O", MBSTRING_ASC, string, (int) len, -1, 0);

		if (k_OU != NULL) {
		    string = (const unsigned char *) Tcl_GetStringFromObj(k_OU, &len);
		} else {
		    string = NULL;
		    len = 0;
		}
		X509_NAME_add_entry_by_txt(name,"OU", MBSTRING_ASC, string, (int) len, -1, 0);

		if (k_CN != NULL) {
		    string = (const unsigned char *) Tcl_GetStringFromObj(k_CN, &len);
		} else {
		    string = NULL;
		    len = 0;
		}
		X509_NAME_add_entry_by_txt(name,"CN", MBSTRING_ASC, string, (int) len, -1, 0);

		if (k_Email != NULL) {
		    string = (const unsigned char *) Tcl_GetStringFromObj(k_Email, &len);
		} else {
		    string = NULL;
		    len = 0;
		}
		X509_NAME_add_entry_by_txt(name,"Email", MBSTRING_ASC, string, (int) len, -1, 0);

		X509_set_subject_name(cert,name);

		if (!X509_sign(cert,pkey,EVP_sha256())) {
		    X509_free(cert);
		    EVP_PKEY_free(pkey);
#if OPENSSL_VERSION_NUMBER < 0x30000000L
		    BN_free(bne);
#endif
		    Tcl_SetResult(interp,"Error signing certificate",NULL);
		    res = TCL_ERROR;
		    goto done;
		}

		if (isStr) {
		    out=BIO_new(BIO_s_mem());
		    PEM_write_bio_X509(out,cert);
		    i=BIO_read(out,buffer,sizeof(buffer)-1);
		    i=(i<0) ? 0 : i;
		    buffer[i]='\0';
		    Tcl_SetVar(interp,pemout,buffer,0);
		    BIO_flush(out);
		    BIO_free(out);
		} else {
		    out=BIO_new(BIO_s_file());
		    BIO_write_filename(out,pemout);
		    PEM_write_bio_X509(out,cert);
		    BIO_free_all(out);
		}

		X509_free(cert);
		EVP_PKEY_free(pkey);
#if OPENSSL_VERSION_NUMBER < 0x30000000L
		BN_free(bne);
#endif
	    }
done:	    if (k_C != NULL) {
		Tcl_DecrRefCount(k_C);
	    }
	    if (k_ST != NULL) {
		Tcl_DecrRefCount(k_ST);
	    }
	    if (k_L != NULL) {
		Tcl_DecrRefCount(k_L);
	    }
	    if (k_O != NULL) {
		Tcl_DecrRefCount(k_O);
	    }
	    if (k_OU != NULL) {
		Tcl_DecrRefCount(k_OU);
	    }
	    if (k_CN != NULL) {
		Tcl_DecrRefCount(k_CN);
	    }
	    if (k_Email != NULL) {
		Tcl_DecrRefCount(k_Email);
	    }
	}
	break;
    default:
	break;
    }
    return res;
}

/********************/
/* Init             */
/********************/

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

void Tls_Clean(
    State *statePtr)		/* Client state for TLS socket */
{
    dprintf("Called");

    /*
     * we're assuming here that we're single-threaded
     */
    if (statePtr->timer != (Tcl_TimerToken) NULL) {
	Tcl_DeleteTimerHandler(statePtr->timer);
	statePtr->timer = NULL;
	Tcl_Release((ClientData) statePtr);
    }

    /* Remove callbacks */
    if (statePtr->callback) {
	Tcl_DecrRefCount(statePtr->callback);
	statePtr->callback = NULL;
    }
    if (statePtr->password) {
	Tcl_DecrRefCount(statePtr->password);
	statePtr->password = NULL;
    }
    if (statePtr->vcmd) {
	Tcl_DecrRefCount(statePtr->vcmd);
	statePtr->vcmd = NULL;
    }

    /* Remove list of ALPN protocols */
    if (statePtr->protos) {
	ckfree(statePtr->protos);
	statePtr->protos = NULL;
    }

    /* BIO_free() frees up a single BIO */
    if (statePtr->bio) {
	/* This will call SSL_shutdown. Bug 1414045 */
	dprintf("BIO_free(%p)", statePtr->bio);
	BIO_free(statePtr->bio);
	statePtr->bio = NULL;
    }

    /* Free SSL context and statePtr->p_bio  */
    if (statePtr->ssl) {
	dprintf("SSL_free(%p) and p_bio(%p)", statePtr->ssl, statePtr->p_bio);
	SSL_free(statePtr->ssl);
	statePtr->ssl = NULL;
    }

    /* Free CTX context */
    if (statePtr->ctx) {
	dprintf("SSL_CTX_free(%p)", statePtr->ctx);
	SSL_CTX_free(statePtr->ctx);
	statePtr->ctx = NULL;
    }

    dprintf("Returning");
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

void
Tls_Free(
    tls_free_type *blockPtr)	/* Client state for TLS socket */
{
    State *statePtr = (State *)blockPtr;

    dprintf("Called");

    Tls_Clean(statePtr);
    ckfree(blockPtr);
}

/*
 *----------------------------------------------------------------------
 *
 * Build Info Command --
 *
 *	Create command to return build info for package.
 *
 * Results:
 *	A standard Tcl result
 *
 * Side effects:
 *	Created build-info command.
 *
 *----------------------------------------------------------------------
 */

#ifndef STRINGIFY
#  define STRINGIFY(x) STRINGIFY1(x)
#  define STRINGIFY1(x) #x
#endif

int
BuildInfoCommand(
    Tcl_Interp* interp)		/* Tcl interpreter */
{
    Tcl_CmdInfo info;

    if (Tcl_GetCommandInfo(interp, "::tcl::build-info", &info)) {
	Tcl_CreateObjCommand(interp, "::tls::build-info", info.objProc, (void *)(
		PACKAGE_VERSION "+" STRINGIFY(TLS_VERSION_UUID)
#if defined(__clang__) && defined(__clang_major__)
			    ".clang-" STRINGIFY(__clang_major__)
#if __clang_minor__ < 10
			    "0"
#endif
			    STRINGIFY(__clang_minor__)
#endif
#if defined(__cplusplus) && !defined(__OBJC__)
			    ".cplusplus"
#endif
#ifndef NDEBUG
			    ".debug"
#endif
#if !defined(__clang__) && !defined(__INTEL_COMPILER) && defined(__GNUC__)
			    ".gcc-" STRINGIFY(__GNUC__)
#if __GNUC_MINOR__ < 10
			    "0"
#endif
			    STRINGIFY(__GNUC_MINOR__)
#endif
#ifdef __INTEL_COMPILER
			    ".icc-" STRINGIFY(__INTEL_COMPILER)
#endif
#ifdef TCL_MEM_DEBUG
			    ".memdebug"
#endif
#if defined(_MSC_VER)
			    ".msvc-" STRINGIFY(_MSC_VER)
#endif
#ifdef USE_NMAKE
			    ".nmake"
#endif
#ifndef TCL_CFG_OPTIMIZED
			    ".no-optimize"
#endif
#ifdef __OBJC__
			    ".objective-c"
#if defined(__cplusplus)
			    "plusplus"
#endif
#endif
#ifdef TCL_CFG_PROFILED
			    ".profile"
#endif
#ifdef PURIFY
			    ".purify"
#endif
#ifdef STATIC_BUILD
			    ".static"
#endif
		), NULL);
    }
    return TCL_OK;
}

/*
 *------------------------------------------------------*
 *
 * TlsLibShutdown --
 *
 *	Shutdown SSL library once per application
 *
 * Results:
 *	A standard TCL result
 *
 * Side effects:
 *	Shutdown SSL library
 *
 *------------------------------------------------------*
 */

void TlsLibShutdown(
    TCL_UNUSED(ClientData))
{
    dprintf("Called");

    BIO_cleanup();
}

/*
 *------------------------------------------------------*
 *
 * TlsLibInit --
 *
 *	Initializes SSL library once per application
 *
 * Results:
 *	A standard Tcl result
 *
 * Side effects:
 *	Initializes SSL library
 *
 *------------------------------------------------------*
 */

static int TlsLibInit() {
    static int initialized = 0;

    dprintf("Called");

    if (!initialized) {
	/* Initialize BOTH libcrypto and libssl. */
	if (!OPENSSL_init_ssl(OPENSSL_INIT_LOAD_SSL_STRINGS | OPENSSL_INIT_LOAD_CRYPTO_STRINGS
	    | OPENSSL_INIT_ADD_ALL_CIPHERS | OPENSSL_INIT_ADD_ALL_DIGESTS
	    | OPENSSL_INIT_LOAD_CONFIG | OPENSSL_INIT_ASYNC, NULL)) {
	    return TCL_ERROR;
	}

	/* Create BIO handlers */
	BIO_new_tcl(NULL, 0);

	/* Create exit handler */
	Tcl_CreateExitHandler(TlsLibShutdown, NULL);
	initialized = 1;
    }
    return TCL_OK;
}

/* Init script */
static const char tlsTclInitScript[] = {
#include "tls.tcl.h"
};

/*
 *-------------------------------------------------------------------
 *
 * Tls_Init --
 *
 *	This is a package initialization procedure, which is called
 *	by TCL when this package is to be added to an interpreter.
 *
 * Results:
 *	Initializes structures and creates commands.
 *
 * Side effects:
 *	 Create the commands
 *
 *-------------------------------------------------------------------
 */

#if TCL_MAJOR_VERSION > 8
#define MIN_VERSION "9.0"
#else
#define MIN_VERSION "8.5"
#endif

DLLEXPORT int Tls_Init(
    Tcl_Interp *interp)		/* Tcl interpreter */
{

    dprintf("Called");

#ifdef USE_TCL_STUBS
    if (Tcl_InitStubs(interp, MIN_VERSION, 0) == NULL) {
	return TCL_ERROR;
    }
#else
    if (Tcl_PkgRequireEx(interp, "Tcl", MIN_VERSION, 0, NULL) == NULL) {
	return TCL_ERROR;
    }
#endif

    if (TlsLibInit() != TCL_OK) {
	Tcl_AppendResult(interp, "could not initialize SSL library", (char *)NULL);
	return TCL_ERROR;
    }

    Tcl_CreateObjCommand(interp, "::tls::ciphers", CiphersObjCmd, (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
    Tcl_CreateObjCommand(interp, "::tls::connection", ConnectionInfoObjCmd, (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
    Tcl_CreateObjCommand(interp, "::tls::handshake", HandshakeObjCmd, (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
    Tcl_CreateObjCommand(interp, "::tls::import", ImportObjCmd, (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
    Tcl_CreateObjCommand(interp, "::tls::misc", MiscObjCmd, (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
    Tcl_CreateObjCommand(interp, "::tls::protocols", ProtocolsObjCmd, (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
    Tcl_CreateObjCommand(interp, "::tls::shutdown", UnimportObjCmd, (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
    Tcl_CreateObjCommand(interp, "::tls::starttls", ImportObjCmd, (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
    Tcl_CreateObjCommand(interp, "::tls::status", StatusObjCmd, (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
    Tcl_CreateObjCommand(interp, "::tls::unimport", UnimportObjCmd, (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
    Tcl_CreateObjCommand(interp, "::tls::unstack", UnimportObjCmd, (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
    Tcl_CreateObjCommand(interp, "::tls::version", VersionObjCmd, (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);

    BuildInfoCommand(interp);

    if (interp && Tcl_Eval(interp, tlsTclInitScript) != TCL_OK) {
	return TCL_ERROR;
    }

    return Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION);
}

/*
 *-------------------------------------------------------------------
 *
 * Tls_SafeInit --
 *
 *	This is a package initialization procedure for safe interps.
 *
 * Results:
 *	Same as of 'Tls_Init'
 *
 * Side effects:
 *	Same as of 'Tls_Init'
 *
 *-------------------------------------------------------------------
 */

DLLEXPORT int Tls_SafeInit(
    Tcl_Interp *interp)		/* Tcl interpreter */
{
    dprintf("Called");
    return Tls_Init(interp);
}
