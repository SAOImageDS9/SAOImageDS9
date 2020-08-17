#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotLoadConfig {varname} {
    upvar #0 $varname var
    global $varname

    PlotLoadConfigFile $varname [OpenFileDialog apconfigfbox $var(top)]
}

# used by backup
proc PlotLoadConfigFile {varname fn} {
    upvar #0 $varname var
    global $varname

    if {$fn == {}} {
	return
    }

    source $fn

    if {[info exist apca(version)]} {
	switch $apca(version) {
	    8.2 {
		array set $varname [array get apca]
		unset apca
	    }
	}

	$var(graph,proc,updateelement) $varname
	PlotUpdateCanvas $varname
	PlotUpdateGraph $varname
	PlotUpdateMenus $varname
    }
}

proc PlotSaveConfigDataset {varname} {
    upvar #0 $varname var
    global $varname

    PlotSaveConfigFileDataset $varname [SaveFileDialog apconfigfbox $var(top)]
}

proc PlotSaveConfigFileDataset {varname filename} {
    upvar #0 $varname var
    global $varname

    if {$filename == {}} {
	return
    }

    global ds9
    if {[info exists apca]} {
	unset apca
    }
    set apca(version) $ds9(version)
    array set apca [array get $varname "graph,ds,*"]

    # cleanup
    unset apca(graph,ds,current)
    unset apca(graph,ds,dim)
    unset apca(graph,ds,manage)
    unset apca(graph,ds,xdata)
    unset apca(graph,ds,ydata)
    unset apca(graph,ds,xedata)
    unset apca(graph,ds,yedata)
    
    set ch [open $filename w]
    puts $ch "array set apca \{ [array get apca] \}"
    unset apca
    close $ch
}
