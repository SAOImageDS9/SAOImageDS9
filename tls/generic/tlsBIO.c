/*
 * Provides Custom BIO layer to interface OpenSSL with TCL. These functions
 * directly interface between the TCL IO channel and BIO buffers.
 *
 * Copyright (C) 1997-2000 Matt Newman <matt@novadigm.com>
 * Copyright (C) 2024-2025 Brian O'Hagan
 *
 */

/*
Normal
		tlsBIO.c			tlsIO.c
 +------+                        +-----+                                 +---+
 |      |Tcl_WriteRaw<--BioOutput| SSL |BIO_write<--TlsOutputProc <--puts|   |
 |socket|      <encrypted>       | BIO |            <unencrypted>        |App|
 |      |Tcl_ReadRaw --> BioInput|     |BIO_Read -->TlsInputProc --> read|   |
 +------+                        +-----+                                 +---+


Fast Path
						tlsIO.c
  +------+             +-----+                                    +-----+
  |      |<-- write <--| SSL |BIO_write <-- TlsOutputProc <-- puts|     |
  |socket| <encrypted> | BIO |            <unencrypted>           | App |
  |      |-->  read -->|     |BIO_Read  --> TlsInputProc -->  read|     |
  +------+             +-----+                                    +-----+
*/

#include "tlsInt.h"
#include <openssl/bio.h>

/* Define BIO methods structure */
static BIO_METHOD *BioMethods = NULL;



/*
 *-----------------------------------------------------------------------------
 *
 * BIOShouldRetry --
 *
 *	Determine if an operation should be retried for non-fatal errors after
 *	next select/(e)poll.
 *
 * Results:
 *	1 = retry, 0 = no retry
 *
 * Side effects:
 *	None
 *
 * Notes:
 *	We check the same codes as BIO_sock_should_retry and
 *	BIO_sock_non_fatal_error (EWOULDBLOCK, ENOTCONN, EINTR, EAGAIN, EPROTO,
 *	EINPROGRESS, and EALREADY) except for ENOTCONN. Newer FreeBSDs return
 *	ENOTCONN instead of EAGAIN/EWOULDBLOCK when trying to send on a
 *	non-blocking socket which is not yet fully connected. While TCL core
 *	uses EWOULDBLOCK if the connect is still in progress, it uses ENOTCONN
 *	if it failed. So we skip it.
 *
 *-----------------------------------------------------------------------------
 */

static int BIOShouldRetry(int code) {
    int res = 0;
    dprintf("BIOShouldRetry %d=%s", code, Tcl_ErrnoMsg(code));

    /* Check for non-blocking retry-able error codes, but skip ENOTCONN */
    if (code == EWOULDBLOCK || code == EINPROGRESS || code == EALREADY || 
	code == EAGAIN || code == EPROTO || code == EINTR) {
	res = 1;
    }

    dprintf("BIOShouldRetry %d=%s, retry=%d", code, Tcl_ErrnoMsg(code), res);

    return res;
}

/*
 *-----------------------------------------------------------------------------
 *
 * BioOutput --
 *
 *	This function is used to get encrypted data from the BIO in buf and
 *	write it to the channel. This function will be called in response to
 *	the tlsIO calling the BIO_write_ex() or BIO_write() functions.
 *
 * Results:
 *	Returns the number of bytes written to channel, 0 for EOF, or -1 for
 *	error.
 *
 * Side effects:
 *	Writes BIO data to channel.
 *
 *-----------------------------------------------------------------------------
 */

static int BioOutput(BIO *bio, const char *buf, int bufLen) {
    Tcl_Size ret;
    int is_eof, tclErrno;
    State *statePtr = (State *) BIO_get_data(bio);
    Tcl_Channel chan = Tls_GetParent(statePtr, 0);

    dprintf("[chan=%p] BioOutput(bio=%p, buf=%p, len=%d)", (void *)chan,
	(void *) bio, buf, bufLen);

    BIO_clear_retry_flags(bio);
    Tcl_SetErrno(0);

    /* Write data to underlying channel */
    ret = Tcl_WriteRaw(chan, buf, (Tcl_Size) bufLen);
    is_eof = Tcl_Eof(chan);
    tclErrno = Tcl_GetErrno();

    dprintf("[chan=%p] BioOutput(%d) -> %" TCL_SIZE_MODIFIER "d [tclEof=%d; tclErrno=%d: %s]",
	(void *) chan, bufLen, ret, is_eof, tclErrno, Tcl_ErrnoMsg(tclErrno));

    if (ret > 0) {
	dprintf("Successfully wrote %" TCL_SIZE_MODIFIER "d bytes of data", ret);

    } else if (ret == 0) {
	if (is_eof) {
	    dprintf("Got EOF while writing, returning a Connection Reset error which maps to Soft EOF");
	    Tcl_SetErrno(ECONNRESET);
	    BIO_set_flags(bio, BIO_FLAGS_IN_EOF);

	} else {
	    dprintf("Got 0 from Tcl_WriteRaw, and EOF is not set; ret = 0");
	    BIO_set_retry_write(bio);

	    dprintf("Setting retry read flag");
	    BIO_set_retry_read(bio);
	}

    } else {
	dprintf("We got some kind of I/O error");

	if (BIOShouldRetry(tclErrno)) {
	    dprintf("Try again for: %i=%s", tclErrno, Tcl_ErrnoMsg(tclErrno));
	    BIO_set_retry_write(bio);

	} else {
	    dprintf("Unexpected error: %i=%s", tclErrno, Tcl_ErrnoMsg(tclErrno));
	}
    }

    dprintf("BioOutput returning %" TCL_SIZE_MODIFIER "d", ret);
    return (int) ret;
}

/*
 *-----------------------------------------------------------------------------
 *
 * BioInput --
 *
 *	This function is used to read encrypted data from the channel and pass
 *	it to the BIO in buf. This function will be called in response to the
 *	tlsIO calling the BIO_read_ex() or BIO_read() functions.
 *
 * Results:
 *	Returns the number of bytes read from channel, 0 for EOF, or -1 for
 *	error.
 *
 * Side effects:
 *	Reads channel data into BIO or sets retry flags.
 *
 *-----------------------------------------------------------------------------
 */

static int BioInput(BIO *bio, char *buf, int bufLen) {
    Tcl_Size ret = 0;
    int is_eof, tclErrno, is_blocked;
    State *statePtr = (State *) BIO_get_data(bio);
    Tcl_Channel chan = Tls_GetParent(statePtr, 0);

    dprintf("[chan=%p] BioInput(bio=%p, buf=%p, len=%d)", (void *) chan,
	(void *) bio, buf, bufLen);

    if (buf == NULL || bufLen <= 0) {
	return 0;
    }

    BIO_clear_retry_flags(bio);
    Tcl_SetErrno(0);

    /* Read data from underlying channel */
    ret = Tcl_ReadRaw(chan, buf, (Tcl_Size) bufLen);

    is_eof = Tcl_Eof(chan);
    tclErrno = Tcl_GetErrno();
    is_blocked = Tcl_InputBlocked(chan);

    dprintf("[chan=%p] BioInput(buf len=%d) -> %" TCL_SIZE_MODIFIER "d [tclEof=%d; blocked=%d; tclErrno=%d: %s]",
	(void *) chan, bufLen, ret, is_eof, is_blocked, tclErrno, Tcl_ErrnoMsg(tclErrno));

    if (ret > 0) {
	dprintf("Successfully read %" TCL_SIZE_MODIFIER "d bytes of data", ret);

    } else if (ret == 0) {
	if (is_eof) {
	    dprintf("Got EOF while reading, returning a Connection Reset error which maps to Soft EOF");
	    Tcl_SetErrno(ECONNRESET);
	    BIO_set_flags(bio, BIO_FLAGS_IN_EOF);

	} else if (is_blocked) {
	    dprintf("Got input blocked from Tcl_ReadRaw. Setting retry read flag");
	    BIO_set_retry_read(bio);
	}

    } else {
	dprintf("We got some kind of I/O error");

	if (BIOShouldRetry(tclErrno)) {
	    dprintf("Try again for: %i=%s", tclErrno, Tcl_ErrnoMsg(tclErrno));
	    BIO_set_retry_read(bio);

	} else {
	    dprintf("Unexpected error: %i=%s", tclErrno, Tcl_ErrnoMsg(tclErrno));
	}
    }

    dprintf("BioInput returning %" TCL_SIZE_MODIFIER "d", ret);
    return (int) ret;
}

/*
 *-----------------------------------------------------------------------------
 *
 * BioPuts --
 *
 *	This function is used to read a NULL terminated string from the BIO and
 *	write it to the channel. This function will be called in response to
 *	the application calling the BIO_puts() function.
 *
 * Results:
 *	Returns the number of bytes read from channel, 0 for EOF, or -1 for
 *	error.
 *
 * Side effects:
 *	Writes data to channel or sets retry flags.
 *
 *-----------------------------------------------------------------------------
 */

static int BioPuts(BIO *bio, const char *str) {
    dprintf("BioPuts(%p) \"%s\"", bio, str);

    return BioOutput(bio, str, (int) strlen(str));
}

/*
 *-----------------------------------------------------------------------------
 *
 * BioCtrl --
 *
 *	This function is used to process control messages in the BIO. This
 *	function will be called in response to the application calling the
 *	BIO_ctrl() function. Several functions wrap BIO_ctrl() such as
 *	BIO_eof, BIO_flush, BIO_pending, BIO_wpending, etc.
 *
 * Results:
 *	Function dependent
 *
 * Side effects:
 *	Function dependent
 *
 *-----------------------------------------------------------------------------
 */

static long BioCtrl(BIO *bio, int cmd, long num, void *ptr) {
    long ret = 1;
    State *statePtr = (State *) BIO_get_data(bio);
    Tcl_Channel chan = Tls_GetParent(statePtr, 0);

    dprintf("BioCtrl(%p, 0x%x, 0x%lx, %p)", (void *) bio, cmd, num, ptr);

    switch (cmd) {
	case BIO_CTRL_RESET:
		/* opt - Resets BIO to initial state. Implements BIO_reset. */
		dprintf("Got BIO_CTRL_RESET");
		/* Return 1 for success (0 for file BIOs) and -1 for failure. */
		ret = 0;
		break;
	case BIO_CTRL_EOF:
		/* opt - Returns whether EOF has been reached. Implements BIO_eof. */
		dprintf("Got BIO_CTRL_EOF");
		/* Returns 1 if EOF has been reached, 0 if not, or <0 for failure. */
		ret = ((chan) ? (Tcl_Eof(chan) || BIO_test_flags(bio, BIO_FLAGS_IN_EOF)) : 1);
		break;
	case BIO_CTRL_INFO:
		/* opt - extra info on BIO. Implements BIO_get_mem_data. */
		dprintf("Got BIO_CTRL_INFO");
		ret = 0;
		break;
	case BIO_CTRL_SET:
		/* man - set the 'IO' parameter. */
		dprintf("Got BIO_CTRL_SET");
		ret = 0;
		break;
	case BIO_CTRL_GET:
		/* man - get the 'IO' parameter. */
		dprintf("Got BIO_CTRL_GET ");
		ret = 0;
		break;
	case BIO_CTRL_PUSH:
		/* opt - internal, used to signify change. Implements BIO_push. */
		dprintf("Got BIO_CTRL_PUSH");
		ret = 0;
		break;
	case BIO_CTRL_POP:
		/* opt - internal, used to signify change. Implements BIO_pop. */
		dprintf("Got BIO_CTRL_POP");
		ret = 0;
		break;
	case BIO_CTRL_GET_CLOSE:
		/* man - Get the close on BIO_free() flag set by BIO_CTRL_SET_CLOSE. Implements BIO_get_close. */
		dprintf("Got BIO_CTRL_CLOSE");
		/* Returns BIO_CLOSE, BIO_NOCLOSE, or <0 for failure. */
		ret = BIO_get_shutdown(bio);
		break;
	case BIO_CTRL_SET_CLOSE:
		/* man - Set the close on BIO_free() flag. Implements BIO_set_close. */
		dprintf("Got BIO_SET_CLOSE");
		BIO_set_shutdown(bio, (int)num);
		/* Returns 1 on success or <=0 for failure. */
		ret = 1;
		break;
	case BIO_CTRL_PENDING:
		/* opt - Return number of bytes in chan waiting to be read. Implements BIO_pending. */
		dprintf("Got BIO_CTRL_PENDING");
		/* Return the amount of pending data or 0 for error. */
		ret = ((chan) ? Tcl_InputBuffered(chan) : 0);
		dprintf("rbio pending=%ld", ret);
		break;
	case BIO_CTRL_FLUSH:
		/* opt - Flush any buffered output. Implements BIO_flush. */
		dprintf("Got BIO_CTRL_FLUSH");
		/* Use Tcl_WriteRaw instead of Tcl_Flush to operate on right chan in stack. */
		/* Returns 1 for success, <=0 for error/retry. */
		ret = ((chan) && (Tcl_WriteRaw(chan, "", 0) >= 0) ? 1 : -1);
		break;
	case BIO_CTRL_DUP:
		/* man - extra stuff for 'duped' BIO. Implements BIO_dup_state. */
		dprintf("Got BIO_CTRL_DUP");
		ret = 1;
		break;
	case BIO_CTRL_WPENDING:
		/* opt - Return number of bytes in chan still to be written. Implements BIO_wpending. */
		dprintf("Got BIO_CTRL_WPENDING");
		/* Return the amount of pending data or 0 for error */
		ret = ((chan) ? Tcl_OutputBuffered(chan) : 0);
		dprintf("wbio pending=%ld", ret);
		break;
	case BIO_CTRL_SET_CALLBACK:
		/* opt - Sets an informational callback. Implements BIO_set_info_callback. */
		ret = 0;
		break;
	case BIO_CTRL_GET_CALLBACK:
		/* opt - Get and return the info callback. Implements BIO_get_info_callback. */
		ret = 0;
		break;

	case BIO_C_FILE_SEEK:
		/* Not used for sockets. Tcl_Seek only works on top chan. Implements BIO_seek(). */
		dprintf("Got BIO_C_FILE_SEEK");
		ret = 0; /* Return 0 success and -1 for failure */
		break;
	case BIO_C_FILE_TELL:
		/* Not used for sockets. Tcl_Tell only works on top chan. Implements BIO_tell(). */
		dprintf("Got BIO_C_FILE_TELL");
		ret = 0; /* Return 0 success and -1 for failure */
		break;
	case BIO_C_SET_FD:
		/* Implements BIO_set_fd */
		dprintf("Unsupported call: BIO_C_SET_FD");
		ret = -1;
		break;
	case BIO_C_GET_FD:
		/* Implements BIO_get_fd() */
		dprintf("Unsupported call: BIO_C_GET_FD");
		ret = -1;
		break;

#if OPENSSL_VERSION_NUMBER >= 0x30000000L
	case BIO_CTRL_GET_KTLS_SEND:
		/* Implements BIO_get_ktls_send */
		dprintf("Got BIO_CTRL_GET_KTLS_SEND");
		/* Returns 1 if the BIO is using the Kernel TLS data-path for sending, 0 if not. */
		ret = 0;
		break;
	case BIO_CTRL_GET_KTLS_RECV:
		/* Implements BIO_get_ktls_recv */
		dprintf("Got BIO_CTRL_GET_KTLS_RECV");
		/* Returns 1 if the BIO is using the Kernel TLS data-path for receiving, 0 if not. */
		ret = 0;
		break;
#endif
	default:
		dprintf("Got unknown control command (%i)", cmd);
		ret = 0;
		break;
    }
    dprintf("BioCtrl return value %li", ret);
    return ret;
}

/*
 *-----------------------------------------------------------------------------
 *
 * BioNew --
 *
 *	This function is used to create a new instance of the BIO. This
 *	function will be called in response to the application calling the
 *	BIO_new() function.
 *
 * Results:
 *	Returns boolean success result (1=success, 0=failure).
 *
 * Side effects:
 *	Initializes BIO structure.
 *
 *-----------------------------------------------------------------------------
 */

static int BioNew(BIO *bio) {
    dprintf("BioNew(%p) called", bio);

    if (bio == NULL) {
	return 0;
    }

    BIO_set_data(bio, NULL);
    BIO_set_init(bio, 0);
    BIO_clear_flags(bio, -1);
    return 1;
}

/*
 *-----------------------------------------------------------------------------
 *
 * BioFree --
 *
 *	This function is used to destroy an instance of a BIO. This function
 *	will be called in response to the application calling the BIO_free()
 *	function.
 *
 * Results:
 *	Returns boolean success result (1=success, 0=failure).
 *
 * Side effects:
 *	De-initializes BIO structure.
 *
 *-----------------------------------------------------------------------------
 */

static int BioFree(BIO *bio) {
    dprintf("BioFree(%p) called", bio);

    if (bio == NULL) {
	return 0;
    }

    /* Clear flags if set to BIO_CLOSE (close I/O stream when the BIO is freed) */
    if (BIO_get_shutdown(bio)) {
	BIO_set_data(bio, NULL);
	BIO_clear_flags(bio, -1);
	BIO_set_init(bio, 0);
    }
    return 1;
}

/*
 *-----------------------------------------------------------------------------
 *
 * BIO_new_tcl --
 *
 *	This function is used to initialize the BIO method handlers.
 *
 * Results:
 *	Returns pointer to BIO or NULL for failure
 *
 * Side effects:
 *	Initializes BIO Methods.
 *
 *-----------------------------------------------------------------------------
 */

BIO *BIO_new_tcl(State *statePtr, int flags) {
    BIO *bio;
#ifdef TCLTLS_SSL_USE_FASTPATH
    Tcl_Channel parentChannel;
    const Tcl_ChannelType *parentChannelType;

    int parentChannelFdIn, parentChannelFdOut, parentChannelFd;
    int validParentChannelFd;
#endif

    dprintf("BIO_new_tcl() called");

    /* Create custom BIO method */
    if (BioMethods == NULL) {
	/* BIO_TYPE_BIO = (19|BIO_TYPE_SOURCE_SINK) -- half a BIO pair */
	/* custom = BIO_get_new_index() | BIO_TYPE_SOURCE_SINK */
	BioMethods = BIO_meth_new(BIO_TYPE_BIO, "tcl");
	if (BioMethods == NULL) {
	    dprintf("Memory allocation error");

	    return NULL;
	}
	/* Not used BIO_meth_set_write_ex */
	BIO_meth_set_write(BioMethods, BioOutput);
	/* Not used BIO_meth_set_read_ex */
	BIO_meth_set_read(BioMethods, BioInput);
	BIO_meth_set_puts(BioMethods, BioPuts);
	BIO_meth_set_ctrl(BioMethods, BioCtrl);
	BIO_meth_set_create(BioMethods, BioNew);
	BIO_meth_set_destroy(BioMethods, BioFree);
    }

    if (statePtr == NULL) {
	dprintf("Asked to setup a NULL state, just creating the initial configuration");

	return NULL;
    }

#ifdef TCLTLS_SSL_USE_FASTPATH
    /*
     * If the channel can be mapped back to a file descriptor, just use the file
     * descriptor with the SSL library since it will likely be optimized for this.
     */
    parentChannel = Tls_GetParent(statePtr, 0);
    parentChannelType = Tcl_GetChannelType(parentChannel);

    validParentChannelFd = 0;
    if (strcmp(parentChannelType->typeName, "tcp") == 0) {
	void *parentChannelFdIn_p, *parentChannelFdOut_p;
	int tclGetChannelHandleRet;

	tclGetChannelHandleRet = Tcl_GetChannelHandle(parentChannel,
	    TCL_READABLE, &parentChannelFdIn_p);
	if (tclGetChannelHandleRet == TCL_OK) {
	    tclGetChannelHandleRet = Tcl_GetChannelHandle(parentChannel,
	        TCL_WRITABLE, &parentChannelFdOut_p);
	    if (tclGetChannelHandleRet == TCL_OK) {
		parentChannelFdIn = PTR2INT(parentChannelFdIn_p);
		parentChannelFdOut = PTR2INT(parentChannelFdOut_p);
		if (parentChannelFdIn == parentChannelFdOut) {
		    parentChannelFd = parentChannelFdIn;
		    validParentChannelFd = 1;
		}
	    }
	}
    }

    if (validParentChannelFd) {
	dprintf("We found a shortcut, this channel is backed by a socket: %i",
	    parentChannelFdIn);
	bio = BIO_new_socket(parentChannelFd, flags);
	statePtr->flags |= TLS_TCL_FASTPATH;
	BIO_set_data(bio, statePtr);
	BIO_set_shutdown(bio, flags);
	BIO_set_init(bio, 1);
	return bio;
    }
#endif

    dprintf("Falling back to Tcl I/O for this channel");

    bio = BIO_new(BioMethods);
    BIO_set_data(bio, statePtr);
    BIO_set_shutdown(bio, flags);
    BIO_set_init(bio, 1); /* Enable read & write */
    return bio;
}

/*
 *-----------------------------------------------------------------------------
 *
 * BIO_cleanup --
 *
 *	This function is used to destroy a BIO_METHOD structure and free up any
 *	memory associated with it.
 *
 * Results:
 *	Standard TCL result
 *
 * Side effects:
 *	Destroys BIO Methods.
 *
 *-----------------------------------------------------------------------------
 */

int BIO_cleanup () {
    dprintf("BIO_cleanup() called");

    if (BioMethods != NULL) {
	BIO_meth_free(BioMethods);
	BioMethods = NULL;
    }
    return TCL_OK;
}
