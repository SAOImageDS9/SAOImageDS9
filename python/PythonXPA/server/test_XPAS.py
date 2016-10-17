#!/usr/bin/python

################################
####### testing:               #
################################

from XPAServer import *

import time

print "Poll"
n = x.XPAPoll(10000, 0)
print "got %d" % n

EXIT_FLAG = False


##############################
#    setting up Info Point   #
##############################

def py_infocb_func(a, b, c):
    global EXIT_FLAG
    print ">>> INFO:"
    print "params:", c
    print "info:", a
    print "XPA.name", b[0].name
    print "<<<" 
    if (c[0:4] == "exit"):
        print "setting EXIT_FLAG" 
        EXIT_FLAG = True
    return 0

infocb_func = INFOCBFUNC(py_infocb_func)

xpa = XPAInfoNew("XPA", "i_test", infocb_func, "my info", "")

##############################




#######################################
#    setting up  AccessPoint Get/Set  #
#######################################

def py_sendcb_func(data, call_data, param, buf, len):
   print "inside send_callback"
   print "param:", param
   print "buf:", string_at(buf)
   buf[0] = cast("this is test only\n", c_byte_p)
   len[0] = 19
   return 0

sendcb_func = SENDCBFUNC(py_sendcb_func)


def py_rcvcb_func(data, call_data, param, buf, len):
   print "inside rcv_callback"
   print "param:", param
   print "got %d bytes" % len
   print "buf:", string_at(buf)
   return 0

rcvcb_func = RCVCBFUNC(py_rcvcb_func)


xpa2 = XPANew("XPA", "myxpa", "this is great help", 
              sendcb_func,
              "SEND_DATA", "freebuf=false",
              rcvcb_func,
              "", "")





##############################
print "Entering loop"

while EXIT_FLAG == False:
    n = XPAPoll(1000, 1)
    print "got:", n

print "loop finished"
##############################


print "calling XPAFree"
XPAFree(xpa)
XPAFree(xpa2)
