#  Copyright (C) 1999-2020
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotBackupAll {ch dir} {
    global iap

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

	    PlotBackupOne $ww $ch $fdir
	}
    }
}

proc PlotBackupOne {varname ch fdir} {
    upvar #0 $varname var
    global $varname

    puts $ch "global $varname"
    puts $ch "PlotDialog $varname \{$var(tt)\}"

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

    puts $ch "set ${varname}(canvas,theme) $var(canvas,theme)"
    puts $ch "PlotUpdateAllElement $varname"

    set var(graph,current) $gr
    PlotCurrentGraph $varname
    
    set var(graph,ds,current) $ds
    PlotCurrentDataSet $varname
}

# used by backup
proc PlotBackupLoadFile {varname fn} {
    upvar #0 $varname var
    global $varname

    source $fn

    if {[info exist apca(version)]} {
	array set $varname [array get apca]
	unset apca

	$var(graph,proc,updateelement) $varname
	PlotUpdateCanvas $varname
	PlotUpdateGraph $varname
	PlotUpdateMenus $varname
	PlotUpdateGUI $varname
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
    unset apca(graph,ds,xdata)
    unset apca(graph,ds,ydata)
    unset apca(graph,ds,xedata)
    unset apca(graph,ds,yedata)
    
    set ch [open $filename w]
    puts $ch "array set apca \{ [array get apca] \}"
    close $ch
}

proc PlotBackupDialog {varname} {
    upvar #0 $varname var
    global $varname

    set fn [SaveFileDialog plotbackupfbox]
    if {[string length $fn] != 0} {
	PlotBackup $varname $fn
    }
}

proc PlotBackup {varname fn} {
    upvar #0 $varname var
    global $varname

    set ch {}
    set dir {}
    if {![BackupPreamble $fn ch dir]} {
	return
    }

    set fdir [file join $dir $varname]
	    
    # create dir if needed
    if {![file isdirectory $fdir]} {
	if {[catch {file mkdir $fdir}]} {
	    Error [msgcat::mc {An error has occurred during backup}]
	    return
	}
    }

    PlotBackupOne $varname $ch $fdir
    
    # all done
    close $ch
}

proc PlotRestoreDialog {varname} {
    upvar #0 $varname var
    global $varname

    set fn [OpenFileDialog plotbackupfbox]
    if {[string length $fn] != 0} {
	PlotRestore $varname $fn
    }
}

proc PlotRestore {varname fn} {
    global iap
    
    # special case
    # do we have a plot window?
    if {$varname != {}} {
	upvar #0 $varname var
	global $varname

	if {[string length $fn] == 0} {
	    return
	}

	PlotDestroy $varname
    } else {
	# create a new name
	set tt $iap(tt)

	# make the window name unique
	set ii [lsearch $iap(plots) $tt]
	if {$ii>=0} {
	    incr iap(unique)
	    append tt $iap(unique)
	}

	set varname $tt
	upvar #0 $varname var
	global $varname
    }

    set dir [file dirname $fn]
    set ffn [lindex [file split $fn] end]
    set cd [pwd]
    cd $dir

    set src {}
    if {![catch {set ch [open "$ffn" r]}]} {
	set src [read $ch]
	close $ch
    } else {
	Error [msgcat::mc {An error has occurred during restore}]
	return
    }

    # and load
    if {[catch {eval $src}]} {
	Error [msgcat::mc {An error has occurred during restore}]
	return
    }

    # return to start dir
    cd $cd
}

# used by backup
# backward compatibilty
proc PlotLoadConfigFile {varname fn} {
    upvar #0 $varname var
    global $varname
}
