#==============================================================================
# Contains some Tk option database settings.
#
# Copyright (c) 2010-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Add some entries to the Tk option database
#
if {[tk windowingsystem] eq "x11"} {
    #
    # Create the fonts TkDefaultFont and TkFixedFont if not yet present
    #
    catch {font create TkDefaultFont -family Helvetica -size 9}
    catch {font create TkFixedFont -family Courier -size 9}

    option add *Font			TkDefaultFont
    option add *selectBackground	#5294e2
    option add *selectForeground	white
}
