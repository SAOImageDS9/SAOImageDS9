#==============================================================================
# Contains some Tk option database settings.
#
# Copyright (c) 2004-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Add some entries to the Tk option database
#
if {[tk windowingsystem] eq "x11"} {
    #
    # Create the font TkDefaultFont if not yet present
    #
    catch {font create TkDefaultFont -family Helvetica -size 9}

    option add *Font			TkDefaultFont
    option add *selectBackground	#5294e2
    option add *selectForeground	white
}
option add *Tablelist.background	white
option add *Tablelist.stripeBackground	#f0f0f0
option add *Tablelist.setGrid		yes
option add *Tablelist.movableColumns	yes
option add *Tablelist.labelCommand	tablelist::sortByColumn
option add *Tablelist.labelCommand2	tablelist::addToSortColumns
option add *ScrollArea.borderWidth			1
option add *ScrollArea.relief				sunken
option add *ScrollArea.Tablelist.borderWidth		0
option add *ScrollArea.Tablelist.highlightThickness	0
option add *ScrollArea.Text.borderWidth			0
option add *ScrollArea.Text.highlightThickness		0
