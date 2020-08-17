#  Copyright (C) 1999-2020
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotBackup {ch dir} {
    global iap

    set rdir "./[lindex [file split $dir] end]"

    # don't save marker analysis plots
    foreach ww $iap(plots) {
	if {[string range $ww 0 2] != {mkr}} {
	    set fdir [file join $dir $ww]
	    
	    # create dir if needed
	    if {![file isdirectory $fdir]} {
		if {[catch {file mkdir $fdir}]} {
		    Error [msgcat::mc {An error has occurred during backup}]
		    return
		}
	    }

	    set varname $ww
	    upvar #0 $varname var
	    global $varname

	    puts $ch "global $varname"
	    puts $ch "PlotDialog $varname {}"

	    set gr $var(graph,current)
	    set ds $var(graph,ds,current)

	    # for each graph
	    foreach cc $var(graphs) {
		set var(graph,current) $cc
		PlotCurrentGraph $varname
		puts $ch "PlotAddGraph $varname $var($cc,type)"

		PlotBackupGraph $varname "$fdir/graph${cc}.plt"
		puts $ch "PlotBackupLoadFile $varname $fdir/graph${cc}.plt"

		# for each dataset
		foreach nn $var($cc,dss) {
		    set var(graph,ds,current) $nn
		    PlotCurrentDataSet $varname

		    PlotSaveDataFile $varname "$fdir/graph${cc}ds${nn}.dat"
		    puts $ch "PlotLoadDataFile $varname $fdir/graph${cc}ds${nn}.dat $var($cc,$nn,dim)"

		    PlotBackupDataset $varname "$fdir/graph${cc}ds${nn}.plt"
		    puts $ch "PlotBackupLoadFile $varname $fdir/graph${cc}ds${nn}.plt"
		}
	    }

	    PlotBackupCanvas $varname "$fdir/canvas.plt"
	    puts $ch "PlotBackupLoadFile $varname $fdir/canvas.plt"

	    puts $ch "wm geometry $var(top) [winfo width $var(top)]x[winfo height $var(top)]"
	    puts $ch "PlotChangeLayout $varname"

	    puts $ch "set ${varname}(mode) $var(mode)"
	    puts $ch "PlotChangeMode $varname"

	    puts $ch "set ${varname}(graph,current) $gr"
	    puts $ch "PlotCurrentGraph $varname"

	    puts $ch "set ${varname}(graph,ds,current) $ds"
	    puts $ch "PlotCurrentDataSet $varname"

	    set var(graph,current) $gr
	    PlotCurrentGraph $varname
	    
	    set var(graph,ds,current) $ds
	    PlotCurrentDataSet $varname
	}
    }
}

# used by backup
proc PlotBackupLoadFile {varname fn} {
    upvar #0 $varname var
    global $varname

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

proc PlotBackupCanvas {varname filename} {
    upvar #0 $varname var
    global $varname

    global ds9
    set apca(version) $ds9(version)
    array set apca [array get $varname "canvas,*"]

    set ch [open $filename w]
    puts $ch "array set apca \{ [array get apca] \}"
    close $ch
}

proc PlotBackupGraph {varname filename} {
    upvar #0 $varname var
    global $varname

    global ds9
    set apca(version) $ds9(version)
    array set apca [array get $varname "graph,name"]
    array set apca [array get $varname "graph,format"]
    array set apca [array get $varname "graph,title"]
    array set apca [array get $varname "graph,legend*"]
    array set apca [array get $varname "graph,axis*"]

    set ch [open $filename w]
    puts $ch "array set apca \{ [array get apca] \}"
    close $ch
}

proc PlotBackupDataset {varname filename} {
    upvar #0 $varname var
    global $varname

    global ds9
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
    close $ch
}

