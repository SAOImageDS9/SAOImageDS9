/*
 * tkimgIO.c --
 *
 * Copyright (c) 2002 Andreas Kupries <andreas_kupries@users.sourceforge.net>
 *
 */

#include "tkimg.h"

#ifdef _WIN32
#include <windows.h>
#include <string.h>
#else
#include <stdlib.h>
#include <unistd.h>
#endif

/*
 *--------------------------------------------------------------
 *
 * tkimg_EnableReadBuffer -- Initialize read buffer.
 *
 *  The optional read buffer may be used for compressed image file
 *  formats (ex. RLE), where the file has to be read byte by byte.
 *  This option is only available when reading from an image file,
 *  i.e. "image create -file ..."
 *
 *  CAUTION:
 *    - Use this option only, when you do NOT use file seeks.
 *    - Use tkimg_EnableReadBuffer(handle, 1)
 *      to allocate and initialize the read buffer before usage.
 *    - Use tkimg_EnableReadBuffer(handle, 0)
 *      to free and switch off the read buffer after usage.
 *
 * Results:
 *  None
 *
 * Side effects:
 *   None.
 *
 *--------------------------------------------------------------
 */

void tkimg_EnableReadBuffer(
    tkimg_Stream *handle,
    int onOff
) {
    handle->readBuffer.useReadBuf = onOff;
    if (onOff) {
        handle->readBuffer.readBuf = attemptckalloc(READBUFLEN);
        memset(handle->readBuffer.readBuf, 0, READBUFLEN);
        handle->readBuffer.bufStart = -1;
        handle->readBuffer.bufEnd   = -1;
    } else {
        if (handle->readBuffer.readBuf) {
            ckfree(handle->readBuffer.readBuf);
            handle->readBuffer.readBuf = NULL;
        }
    }
}

/*
 *--------------------------------------------------------------------------
 * tkimg_Read -- Read from stream.
 *
 *  This procedure fills a buffer from the stream input.
 *  The stream can be a file channel or a binary string.
 *
 * Results:
 *  The number of bytes successfully read from the stream.
 *
 * Side effects:
 *  Status of read buffer may change, if it is enabled.
 *
 *--------------------------------------------------------------------------
 */

Tcl_Size tkimg_Read(
    tkimg_Stream *handle,
    char *dst,
    Tcl_Size count
) {
    Tcl_Size bytesRead, bytesToRead;
    char *dstPtr;

    switch (handle->state) {
        case IMG_STRING: {
            if (count > handle->length) {
                count = handle->length;
            }
            if (count) {
                memcpy(dst, handle->data, count);
                handle->length -= count;
                handle->data += count;
            }
            return count;
        }
        case IMG_CHAN: {
            if (! handle->readBuffer.useReadBuf) {
                return Tcl_Read(handle->channel, dst, count);
            }
            dstPtr = dst;
            bytesToRead = count;
            bytesRead = 0;
            while (bytesToRead > 0) {
#ifdef DEBUG_LOCAL
                printf ("bytesToRead=%d bytesRead=%d (bufStart=%d bufEnd=%d)\n",
                         bytesToRead, bytesRead, handle->readBuffer.bufStart, handle->readBuffer.bufEnd);
#endif
                if (handle->readBuffer.bufStart < 0) {
                    handle->readBuffer.bufEnd = Tcl_Read(handle->channel, handle->readBuffer.readBuf, READBUFLEN) - 1;
#ifdef DEBUG_LOCAL
                    printf ("Reading new %d bytes into buffer "
                            "(bufStart=%d bufEnd=%d)\n",
                            READBUFLEN, handle->readBuffer.bufStart, handle->readBuffer.bufEnd);
#endif
                    handle->readBuffer.bufStart = 0;
                    if (handle->readBuffer.bufEnd < 0) {
                        return handle->readBuffer.bufEnd;
                    }
                }
                if (handle->readBuffer.bufStart + (int)bytesToRead <= handle->readBuffer.bufEnd + 1) {
#ifdef DEBUG_LOCAL
                    printf("All in buffer: memcpy %d bytes\n", bytesToRead);
#endif
                    /* All bytes already in the buffer. Just copy them to dst. */
                    memcpy(dstPtr, handle->readBuffer.readBuf + handle->readBuffer.bufStart, bytesToRead);
                    handle->readBuffer.bufStart += bytesToRead;
                    if (handle->readBuffer.bufStart >= READBUFLEN) {
                        handle->readBuffer.bufStart = -1;
                    }
                    return bytesRead + bytesToRead;
                } else {
                    int copyRest;
                    copyRest = handle->readBuffer.bufEnd - handle->readBuffer.bufStart + 1;
#ifdef DEBUG_LOCAL
                    printf("Copy rest of buffer: memcpy %d bytes\n", copyRest); fflush(stdout);
#endif
                    memcpy (dstPtr, handle->readBuffer.readBuf + handle->readBuffer.bufStart, copyRest);
                    dstPtr      += copyRest;
                    bytesRead   += copyRest;
                    bytesToRead -= copyRest;
                    handle->readBuffer.bufStart = -1;
                }
            }
            return count;
        }
        default: {
            Tcl_Panic("tkimg_Read: Invalid stream state %d", handle->state);
            return -1;
        }
    }
}

/*
 *-----------------------------------------------------------------------
 * tkimg_Write -- Write to stream.
 *
 *  This procedure writes image data to an output stream.
 *
 * Results:
 *  The return value is the number of bytes written.
 *
 * Side effects:
 *  None.
 *
 *-----------------------------------------------------------------------
 */

Tcl_Size tkimg_Write(
    tkimg_Stream *handle,
    const char *src,
    Tcl_Size count
) {
    switch (handle->state) {
        case IMG_STRING: {
            Tcl_Size objSz;
            unsigned char *destPtr;

            Tcl_GetByteArrayFromObj(handle->byteObj, &objSz);

            if (objSz + count > TCL_SIZE_MAX) {
                 return -1;
            }
            destPtr = Tcl_SetByteArrayLength(handle->byteObj, objSz + count);
            if (!destPtr) {
                return -1;
            }
            memcpy(destPtr+objSz, src, count);
            return count;
        }
        case IMG_CHAN: {
            return Tcl_Write(handle->channel, src, count);
        }
        default: {
            Tcl_Panic("tkimg_Write: Invalid stream state %d", handle->state);
            return -1;
       }
    }
}

/*
 *-----------------------------------------------------------------------
 *
 * tkimg_Putc --
 *
 *  This procedure writes one byte to the output stream.
 *
 * Results:
 *  The number of bytes written is returned.
 *
 * Side effects:
 *  None.
 *
 *-----------------------------------------------------------------------
 */

int tkimg_Putc(
    tkimg_Stream *handle,
    int c
) {
    char ch = (char) c;
    return tkimg_Write(handle, &ch, 1);
}

/*
 *-------------------------------------------------------------------------
 * tkimg_WriteInitFile --
 *
 *  This procedure initializes a file channel handle for writing.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  The handle is initialized.
 *
 *-------------------------------------------------------------------------
 */

void tkimg_WriteInitFile(
    tkimg_Stream *handle,
    Tcl_Channel chan
) {
    handle->channel = chan;
    handle->state   = IMG_CHAN;
}

/*
 *-------------------------------------------------------------------------
 * tkimg_WriteInitString --
 *
 *  This procedure initializes a binary string handle for writing.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  The handle is initialized.
 *
 *-------------------------------------------------------------------------
 */

void tkimg_WriteInitString(
    tkimg_Stream *handle
) {
    handle->byteObj  = Tcl_NewByteArrayObj(NULL, 0);
    handle->state    = IMG_STRING;
    handle->position = 0;
    handle->length   = 0;
}

/*
 *-------------------------------------------------------------------------
 * tkimg_ReadInitFile --
 *
 *  This procedure initializes a file channel handle for reading.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  The handle is initialized.
 *
 *-------------------------------------------------------------------------
 */

void tkimg_ReadInitFile(
    tkimg_Stream *handle,
    Tcl_Channel chan
) {
    handle->channel = chan;
    handle->position = 0;
    handle->length = 0;
    handle->state   = IMG_CHAN;
}

/*
 *-------------------------------------------------------------------------
 * tkimg_ReadInitString --
 *
 *  This procedure initializes a binary string handle for reading.
 *
 * Results:
 *  Success (1) or failure (0).
 *
 * Side effects:
 *  The handle is initialized.
 *
 *-------------------------------------------------------------------------
 */

int tkimg_ReadInitString(
        tkimg_Stream *handle,
        Tcl_Obj *dataObj
) {
    Tcl_Size length;

    handle->data = Tcl_GetByteArrayFromObj(dataObj, &length);
    if (! handle->data) {
        return 0;
    }
    handle->position = 0;
    handle->length   = length;
    handle->state    = IMG_STRING;
    return 1;
}

/*
 *----------------------------------------------------------------------
 *
 * tkimg_OpenFileChannel --
 *
 *   Open a file channel in binary mode. Mode can be "r" or "w".
 *
 * Results:
 *   The same as Tcl_OpenFileChannel, only the file will
 *   always be opened in binary mode without encoding.
 *
 * Side effects:
 *   If function fails, an error message will be left in the interpreter.
 *
 *----------------------------------------------------------------------
 */

Tcl_Channel tkimg_OpenFileChannel(
    Tcl_Interp *interp,
    const char *fileName,
    const char *mode
) {
    Tcl_Channel chan = Tcl_OpenFileChannel(interp, fileName, mode, 0644);
    if (!chan) {
        return NULL;
    }
    if (Tcl_SetChannelOption(interp, chan, "-buffersize", "131072") != TCL_OK) {
        Tcl_Close(interp, chan);
        return NULL;
    }
    if (Tcl_SetChannelOption(interp, chan, "-translation", "binary") != TCL_OK) {
        Tcl_Close(interp, chan);
        return NULL;
    }
    return chan;
}

void tkimg_GetTemporaryFileName( Tcl_DString * fileName )
{
    char *dir;

#ifdef _WIN32
    char tempPath[MAX_PATH];
    char tempFile[MAX_PATH];
    HANDLE h;

    tempPath[0] = '.';
    GetTempPathA(sizeof (tempPath), tempPath);
    dir = tempPath;
    tempFile[0] = '\0';
    GetTempFileNameA(dir, "Img", 0, tempFile);
    h = CreateFileA(tempFile, GENERIC_READ|GENERIC_WRITE, 0, NULL,
            CREATE_ALWAYS, FILE_ATTRIBUTE_TEMPORARY, NULL);
    if (h != INVALID_HANDLE_VALUE) {
        CloseHandle(h);
    }
    Tcl_DStringAppend(fileName, tempFile, (Tcl_Size)strlen (tempFile));
#else
    char uuid[10];

    dir = getenv("TMPDIR");
    if (dir) {
        Tcl_DStringAppend(fileName, dir, strlen (dir));
    } else {
#ifdef P_tmpdir
        Tcl_DStringAppend(fileName, P_tmpdir, strlen (P_tmpdir));
#else
        Tcl_DStringAppend(fileName, "/tmp", strlen ("/tmp"));
#endif
    }
    tkimg_snprintf(uuid, 10, "%06d", rand() % 999999);
    Tcl_DStringAppend(fileName, "/Img", strlen ("/Img"));
    Tcl_DStringAppend(fileName, uuid, strlen (uuid));
#endif
}

void tkimg_DeleteFile( const char * fileName )
{
#ifdef _WIN32
    DeleteFileA(fileName);
#else
    remove(fileName);
#endif
}
