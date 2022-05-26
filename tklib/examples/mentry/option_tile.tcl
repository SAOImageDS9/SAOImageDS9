#==============================================================================
# Contains some Tk option database settings.
#
# Copyright (c) 2004-2019  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Get the current windowing system ("x11", "win32", or
# "aqua") and add some entries to the Tk option database
#
if {[tk windowingsystem] eq "x11"} {
    option add *Font TkDefaultFont
}
