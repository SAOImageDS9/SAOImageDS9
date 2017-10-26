
import sys
from ctypes import *

libxpa=cdll.LoadLibrary("../../libxpa.so.1.0")
libc=cdll.LoadLibrary(None);


#xpa_t = c_void_p 
#xpa = xpa_t(None)

c_byte_p = POINTER(c_byte)



##############

NXPA = 10

##############


def free_bufs(p_arr, len):
    for i in range(len):
        if p_arr[i]:
            print "freeing [", i, "] ", p_arr[i][0], p_arr[i][1]
            libc.free(p_arr[i])





## XPA XPAOpen(char *mode);

XPAOpen = libxpa.XPAOpen
libxpa.XPAOpen.restype = c_void_p
libxpa.XPAOpen.argtypes = [c_char_p]

## void XPAClose(XPA xpa);
XPAClose = libxpa.XPAClose
libxpa.XPAClose.argtypes = [c_void_p]


## int XPAGet(XPA xpa, char *template, char *paramlist, char *mode,
##         char **bufs, int *lens, char **names, char **messages, int n);

XPAGet = libxpa.XPAGet
libxpa.XPAGet.restype = c_int
libxpa.XPAGet.argtypes = [c_void_p, c_char_p, c_char_p, c_char_p, \
                     c_byte_p*NXPA, c_int*NXPA, c_byte_p*NXPA, c_byte_p*NXPA, \
                     c_int]


## when you want to send something like "hello\0x00 you" use this

## int XPASet(XPA xpa,
##             char *template, char *paramlist, char *mode,
##             char *buf, int len, char **names, char **messages,
##             int n);

#libxpa.XPASet.restype = c_int
#libxpa.XPASet.argtypes = [c_void_p, c_char_p, c_char_p, c_char_p, \
#                     c_byte_p, c_int, c_char_p*NXPA, c_char_p*NXPA, \
#                     c_int]

## when you know, you will send strings only, use this one to avoid conversions

XPASet = libxpa.XPASet
libxpa.XPASet.restype = c_int
libxpa.XPASet.argtypes = [c_void_p, c_char_p, c_char_p, c_char_p, \
                     c_char_p, c_int, c_byte_p*NXPA, c_byte_p*NXPA, \
                     c_int]

## int XPAInfo(XPA xpa,
##              char *template, char *paramlist, char *mode,
##              char **names, char **messages, int n);

XPAInfo = libxpa.XPAInfo
libxpa.XPAInfo.restype = c_int
libxpa.XPAInfo.argtypes = [c_void_p, c_char_p, c_char_p, c_char_p, \
                     c_byte_p*NXPA, c_byte_p*NXPA, \
                     c_int]

## int XPAAccess(XPA xpa,
##              char *template, char *paramlist, char *mode,
##              char **names, char **messages, int n);

XPAAccess = libxpa.XPAAccess
libxpa.XPAAccess.restype = c_int
libxpa.XPAAccess.argtypes = [c_void_p, c_char_p, c_char_p, c_char_p, \
                     c_byte_p*NXPA, c_byte_p*NXPA, \
                     c_int]

#del libxpa




