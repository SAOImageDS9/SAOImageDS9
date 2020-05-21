
from ctypes import *

x=cdll.LoadLibrary("../libxpa.so.1.0")


c_byte_p = POINTER(c_byte)


## int XPAPoll(int msec, int maxreq);

XPAPoll = x.XPAPoll
x.XPAPoll.restype = c_int
x.XPAPoll.argtypes = [c_int, c_int]




## typedef struct xparec{
##  /* xpa version */
##  char *version;
##  /* status of this xpa */
##  int status;
##  /* "g", "s", "i" are server types; "c" for client */
##  char *type;
##  /*
##   * THE SERVER SIDE
##   */
##  struct xparec *next;
##  char *xclass;
##  char *name;
##  char *help;

##
##   /* and so on */
##
## } *XPA;

# ctypes wrapper
class xparec(Structure):
   _fields_ = [ ("version", c_char_p), \
              ("status", c_int), \
              ("type", c_char_p), \
              ("next", c_void_p), \
              ("xclass", c_char_p), \
              ("name", c_char_p), \
              ("help", c_char_p) \
              ]

XPA = POINTER(xparec)





## int XPAFree(XPA xpa);

XPAFree = x.XPAFree
x.XPAFree.restype = c_void_p
x.XPAFree.argtypes = [XPA]



## info callback:
## int info_cb(void *info_data, void *call_data, char *paramlist)



INFOCBFUNC = CFUNCTYPE(c_int, c_char_p, XPA,  c_char_p)

### implement like this:
#def py_infocb_func(a, b, c):
#    print "py_cmp_func", a, b
#    return 0
#
#infocb_func = INFOCBFUNC(py_infocb_func)



## XPA XPAInfoNew(char *class, char *name,
##                 int (*info_callback)(),
##                 void *info_data, char *info_mode);

XPAInfoNew = x.XPAInfoNew
x.XPAInfoNew.restype = XPA
x.XPAInfoNew.argtypes = [c_char_p, c_char_p, INFOCBFUNC, c_char_p, c_char_p]





## int send_callback(void *send_data, void *call_data,
##     char *paramlist, char **buf, int *len)

SENDCBFUNC = CFUNCTYPE(c_int, c_char_p, XPA,  c_char_p, POINTER(c_byte_p), POINTER(c_int))

### implement like this:
#def py_sendcb_func(a, data, call_data, param, buf, len):
#   print "inside send_callback"
#   return 0
#
#sendcb_func = SENDCBFUNC(py_sendcb_func)


##  int receive_callback(void *receive_data, void *call_data,
##    char *paramlist, char *buf, int len)

RCVCBFUNC = CFUNCTYPE(c_int, c_char_p, XPA,  c_char_p, c_byte_p, c_int)



##  XPA XPANew(char *class, char *name, char *help,
##             int (*send_callback)(),
##             void *send_data, char *send_mode,
##             int (*rec_callback)(),
##             void *rec_data,  char *rec_mode);

XPANew = x.XPANew
x.XPANew.restype = XPA
x.XPANew.argtypes = [c_char_p, c_char_p, c_char_p, \
                     SENDCBFUNC, \
                     c_char_p, c_char_p, \
                     RCVCBFUNC, \
                     c_char_p, c_char_p \
                     ]
