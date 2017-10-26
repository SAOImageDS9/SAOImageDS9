#!/usr/bin/python

################################
####### testing:               #
####### please start "stest"   #
################################

from XPAClient import *

import time

xpa = None
print xpa
xpa = XPAOpen("ack=false")
############################
print xpa

buff_t = c_byte_p*NXPA

buffs = buff_t()
names = buff_t()
messages = buff_t()



int_t = c_int*NXPA
lens = int_t()

ok = True
while ok:
   #ok = False
   print "--- XPAGet Test 1"
   n = XPAGet(xpa, "XPA:xpa*", "help", "ack=false", buffs, lens, names, \
                   messages, NXPA)
   #########################################################################
   print n
   print buffs[0][0:lens[0]], "\n", buffs[1][0:lens[1]]
   print string_at(names[0]), string_at(names[1])

   for j in range(n):
      ascii_text = string_at(buffs[j], lens[j])
      #ascii_text = ''.join(chr(buffs[j][i]) for i in range(0, lens[j]))
      print "---", j, "---\n>>>\n" + ascii_text + "\n<<<"

   free_bufs(buffs, NXPA)
   free_bufs(names, NXPA)
   free_bufs(messages, NXPA)


   print "--- XPASet Test 1"
   txt = "Hey, you!"
   n = XPASet(xpa, "XPA:xpa", "", "", txt, len(txt), names, messages, NXPA)
   #########################################################################
   print string_at(names[0])
   free_bufs(names, NXPA)
   free_bufs(messages, NXPA)
   
   #sys.exit(0)
   
   print "--- XPAGet Test 2"
   n = XPAGet(xpa, "XPA:xpa[12]", "error", "", buffs, lens, names, \
                   messages, NXPA)
   #########################################################################
   print n
   print ":::: "
   if names[0]:
      print "\t names[0]: ", string_at(names[0])
   if names[1]:
      print "\t names[1]: ", string_at(names[1])

   free_bufs(buffs, NXPA)
   free_bufs(names, NXPA)
   free_bufs(messages, NXPA)

   print "--- XPAInfo Test 1"
   n = XPAInfo(xpa, "XPA:i_xpa", "hey there", "", names, messages, NXPA)
   #########################################################################
   print n
   if names:
      free_bufs(names, NXPA)
   if messages:
      free_bufs(messages, NXPA)

   n = XPAAccess(xpa, "XPA:*", "", "", names, messages, NXPA)
   #########################################################################
   print n
   for j in range(n):
      print "access ---", j, "---  >>>" + string_at(names[j]) + "<<<"
   
   if names:
      free_bufs(names, NXPA)
   if messages:
      free_bufs(messages, NXPA)



   #time.sleep(0.010)



XPAClose(xpa)
###############
xpa = None

