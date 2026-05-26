#==============================================================================
# Contains some Tk option database settings.
#
# Copyright (c) 2004-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Add some entries to the Tk option database
#
if {[tk windowingsystem] eq "x11"} {
    option add *Font TkDefaultFont
}
