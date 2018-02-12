#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc AnalysisDef {} {
    global ianalysis
    global panalysis

    global ds9

    set ianalysis(menu,count) 0
    set ianalysis(menu,hmenu,count) 0
    set ianalysis(menu,hmenu) {}
    set ianalysis(bind,count) 0
    set ianalysis(param,count) 0
    set ianalysis(param,seq) 0
    set ianalysis(file) ".$ds9(app).ans"
    set ianalysis(alt) ".$ds9(app).analysis"

    # prefs only
    set panalysis(log) 0
    set panalysis(autoload) 1
    set panalysis(user) {}
    set panalysis(user2) {}
    set panalysis(user3) {}
    set panalysis(user4) {}
}

proc OpenAnalysisMenu {} {
    set fn [OpenFileDialog analysisfbox]
    if {$fn != {}} {
	ProcessAnalysisFile $fn
    }
}

proc ClearAnalysisMenu {} {
    global pds9

    if {$pds9(confirm)} {
	if {[tk_messageBox -type okcancel -icon question -message [msgcat::mc {Clear External Analysis Commands?}]] != {ok}} {
	    return
	}
    }
    ClearAnalysis
}

# Analysis Menu Delete
proc ClearAnalysis {} {
    global ds9
    global ianalysis

    # is something loaded?
    if {$ianalysis(menu,count) == 0} {
	return
    }

    # delete cascade menus
    for {set ii 0} {$ii<$ianalysis(menu,hmenu,count)} {incr ii} {
	destroy [lindex $ianalysis(menu,hmenu) $ii]
    }
    set ianalysis(menu,hmenu) {}
    set ianalysis(menu,hmenu,count) 0

    # clear menu
    $ds9(mb).analysis delete $ds9(menu,size,analysis) end

    for {set ii 0} {$ii<$ianalysis(menu,count)} {incr ii} {
	unset ianalysis(menu,$ii,parent)
	unset ianalysis(menu,$ii,item)
	unset ianalysis(menu,$ii,template)
	unset ianalysis(menu,$ii,cmd)
	unset ianalysis(menu,$ii,inuse)
	unset ianalysis(menu,$ii,var)
    }
    set ianalysis(menu,count) 0

    # clear all bindings, first
    foreach ff $ds9(frames) {
	for {set ii 0} {$ii<$ianalysis(bind,count)} {incr ii} {
	    $ds9(canvas) bind $ff "$ianalysis(bind,$ii,item)" {}
	}
    }

    # clear bindings
    for {set ii 0} {$ii<$ianalysis(bind,count)} {incr ii} {
	unset ianalysis(bind,$ii,item)
	unset ianalysis(bind,$ii,template)
	unset ianalysis(bind,$ii,cmd)
	unset ianalysis(bind,$ii,inuse)
    }
    set ianalysis(bind,count) 0

    # clear params
    for {set ii 0} {$ii<$ianalysis(param,count)} {incr ii} {
	for {set jj 0} {$jj<$ianalysis(param,$ii,count)} {incr jj} {
	    unset ianalysis(param,$ii,$jj,var)
	    unset ianalysis(param,$ii,$jj,type)
	    unset ianalysis(param,$ii,$jj,title)
	    unset ianalysis(param,$ii,$jj,default)
	    unset ianalysis(param,$ii,$jj,last)
	    unset ianalysis(param,$ii,$jj,value)
	    unset ianalysis(param,$ii,$jj,info)
	}
	unset ianalysis(param,$ii,count)
	unset ianalysis(param,$ii)
    }
    set ianalysis(param,count) 0
}

proc InitAnalysisFile {} {
    global ianalysis
    global panalysis
    global ds9

    set done {}

    # autoload
    if {$panalysis(autoload)} {
	foreach dir [list {.} "[GetEnvHome]/bin" {/usr/local/bin} {/opt/local/bin}] {
	    foreach fn [glob -directory $dir -nocomplain "*.ds9"] {
		if {[file exists $fn]} {
		    ProcessAnalysisFile $fn
		    lappend done $fn
		}
	    }
	}
    }

    # default name ds9.ans
    # backward compatible ds9.analysis
    foreach ff {{.} {~}} {
	foreach gg {{} {.}} {
	    foreach ext {{ans} {analysis}} {
		set fn "$ff/$gg$ds9(app).$ext"
		if {[file exists $fn]} {
		    if {[lsearch $done $fn] == -1} {
			ProcessAnalysisFile $fn
			lappend done $fn
		    }
		}
	    }
	}
    }

    # user specified
    foreach ii {{user} {user2} {user3} {user4}} {
	if {[info exists panalysis($ii)]} {
	    set fn $panalysis($ii)
	    if {[file exists $fn]} {
		if {[lsearch $done $fn] == -1} {
		    ProcessAnalysisFile $fn
		    lappend done $fn
		}
	    }
	}
    }

#    UpdateAnalysisMenu
}

proc ProcessAnalysisFile {fn} {
    global env

    # check for simple file
    if {[file exists "$fn"] && 
	[file isfile "$fn"] && 
	![file executable "$fn"] &&
	![file isdirectory "$fn"]} {

	set ch [open $fn r]
	set data [read $ch]
	close $ch

	if {![ProcessAnalysis data]} {
	    Error "[msgcat::mc {Unable to process Analysis file}] $fn"
	    return
	}

	# add directory to path
	set env(PATH) "[file dirname $fn]:$env(PATH)"
    } else {
	Error "[msgcat::mc {Unable to open file}] $fn"
    }
}

proc ProcessAnalysis {varname} {
    upvar $varname var

    global ds9
    global ianalysis

    # simple check for ascii data
    if {![string is ascii $var]} {
	return 0
    }

    set state 1
    set baseparent $ds9(mb).analysis
    set currentparent $baseparent
    set parentstack $baseparent

    $baseparent add separator

    set lines [split $var \n]
    set l [llength $lines]

    for {set ii 0} {$ii<$l} {incr ii} {
	set line [string trim [lindex $lines $ii]]

	# eat empty lines and comments for all except help
	if {$state != 6} {
	    # empty line
	    if {[string length $line] == 0} continue

	    # comments	    
	    if {[string range $line 0 0] == "\#"} continue

	    # strip any end of line comments
	    set id [string first "\#" $line]
	    if {$id > 0} {
		set line [string range $line 0 [expr $id-1]]
	    }
	}

	switch -- $state {
	    1 {
		# param
		if {[lindex $line 0] == {param}} {
		    if {[lindex $line 1] != {}} {
			set ianalysis(param,$ianalysis(param,count)) \
			    [lindex $line 1]
			set ianalysis(param,$ianalysis(param,count),count) 0
			set state 5
		    }
		    continue
		}

		# help
		if {[lindex $line 0] == {help}} {
		    set id [string first " " $line]
		    if {$id > 0} {
			set item [string range $line [expr $id+1] end]
		    } else {
			set item Help
		    }

		    set i $ianalysis(menu,count)
		    set ianalysis(menu,$i,parent) $currentparent
		    set ianalysis(menu,$i,item) $item
		    set ianalysis(menu,$i,template) {*}
		    set ianalysis(menu,$i,cmd) {help}
		    set ianalysis(menu,$i,inuse) 0
		    set ianalysis(menu,$i,var) {}
		    $currentparent add command -label $item \
			-command [list AnalysisTask $i menu]

		    set state 6
		    continue
		}

		# hmenu
		if {[lindex $line 0] == {hmenu}} {
		    set id [string first " " $line]
		    if {$id > 0} {
			set item [string range $line [expr $id+1] end]
		    } else {
			set item Tasks
		    }

		    # make the menu label unique
		    set nmenu "$currentparent.hmenu$ianalysis(menu,hmenu,count)"
		    lappend ianalysis(menu,hmenu) $nmenu
		    incr ianalysis(menu,hmenu,count)

		    menu $nmenu
		    $currentparent add cascade -label "$item" -menu $nmenu

		    set currentparent $nmenu
		    lappend parentstack $currentparent
		    continue
		}

		# end hmenu
		if {[lindex $line 0] == {endhmenu} ||
		    [lindex $line 0] == {end}} {
		    set parentstack [lreplace $parentstack end end]
		    set currentparent [lindex $parentstack end]
		    continue
		}

		if {[lindex $line 0] == {---}} {
		    $currentparent add separator
		    continue
		}

		# assume new command

		set item "$line"
		set template {}
		set type {}
		set cmd {}
		set state 2
	    }

	    2 {
		set template "$line"
		set state 3
	    }

	    3 {
		set type "$line"
		set state 4
	    }

	    4 {
		set cmd "$line"
		if {$item != {} && $template != {} && 
		    $type != {} && $cmd != {}} {
		    switch -- [lindex $type 0] {
			bind {
			    set b [lindex $type 1]
			    if {$b != {}} {
				set i $ianalysis(bind,count)
				set ianalysis(bind,$i,item) "<$b>"
				set ianalysis(bind,$i,template) "$template"
				set ianalysis(bind,$i,cmd) "$cmd"
				set ianalysis(bind,$i,inuse) 0
				incr ianalysis(bind,count)
			    }
			}
			web {
			    set i $ianalysis(menu,count)
			    set ianalysis(menu,$i,parent) $currentparent
			    set ianalysis(menu,$i,item) $item
			    set ianalysis(menu,$i,template) "$template"
			    set ianalysis(menu,$i,cmd) {web}
			    set ianalysis(menu,$i,inuse) 0
			    set ianalysis(menu,$i,var) "$cmd"
			    $currentparent add command -label "$item" \
				-command [list AnalysisTask $i menu]
			    incr ianalysis(menu,count)
			}
			menu {
			    set i $ianalysis(menu,count)
			    set ianalysis(menu,$i,parent) $currentparent
			    set ianalysis(menu,$i,item) "$item"
			    set ianalysis(menu,$i,template) "$template"
			    set ianalysis(menu,$i,cmd) "$cmd"
			    set ianalysis(menu,$i,inuse) 0
			    set ianalysis(menu,$i,var) {}
			    $currentparent add check -label "$item" \
				-command [list AnalysisTask $i menu] \
				-variable ianalysis(menu,$i,inuse) \
				-selectcolor green
			    incr ianalysis(menu,count)
			}
			default {
			    # something really wrong here, abort
			    return 0
			}
		    }
		}
		set state 1
	    }

	    5 {
		# end param
		if {[lindex $line 0] == {endparam} || 
		    [lindex $line 0] == {end}} {
		    incr ianalysis(param,count)
		    set state 1
		    continue
		}

		if {[string range $line 0 0] == {@}} {
		    ParseIRAFParam [string range $line 1 end]
		    continue
		}

		set i $ianalysis(param,count)
		set j $ianalysis(param,$i,count)
		set ianalysis(param,$i,$j,var) [lindex $line 0]
		set ianalysis(param,$i,$j,type) [lindex $line 1]
		set ianalysis(param,$i,$j,title) [lindex $line 2]

		# default can contain the full menu 'aaa|bbb|ccc'
		set ianalysis(param,$i,$j,default) [lindex $line 3]
		# set last to first item
		set ianalysis(param,$i,$j,last) \
		    [lindex [split [lindex $line 3] |] 0]
		# and set value to last
		set ianalysis(param,$i,$j,value) \
		    $ianalysis(param,$i,$j,last)

		set ianalysis(param,$i,$j,info) [lindex $line 4]
		incr ianalysis(param,$i,count)
	    }

	    6 {
		# end help
		if {[lindex $line 0] == {endhelp} ||
		    [lindex $line 0] == {end}} {
		    incr ianalysis(menu,count)
		    set state 1
		    continue
		}

		set i $ianalysis(menu,count)
		append ianalysis(menu,$i,var) "$line\n"
	    }
	}
    }

    # events
    UnBindEventsCanvas
    BindEventsCanvas

    UpdateAnalysisMenu

    return 1
}

proc AnalysisTask {i which {frame {}} {x 0} {y 0} {sync 0}} {
    global ianalysis
    global current

    if {$frame == {}} {
	set frame $current(frame)
    }

    switch -- $ianalysis($which,$i,cmd) {
	help {
	    AnalysisText "at${which}${i}" $ianalysis($which,$i,item) \
		$ianalysis($which,$i,var) insert
	}
	web {
	    if {$frame != {}} {
		AnalysisWebDoit $i $which $frame $x $y $sync
	    }
	}
	default {
	    if {$frame != {}} {
		AnalysisTaskDoit $i $which $frame $x $y $sync
	    }
	}
    }
}

proc AnalysisWebDoit {i which frame x y sync} {
    global ianalysis
    global panalysis

    set cmd "$ianalysis($which,$i,var)"

    # do select macro expansion

    # escaped macros
    SetEscapedMacros cmd

    # $xpa_method
    ParseXPAMethodMacro cmd

    # $xpa
    ParseXPAMacro cmd

    # $vo_method
    ParseVOMethodMacro cmd

    # $xdim,$ydim,$bitpix
    ParseXYBitpixMacro cmd $frame

    # $filename[$regions]
    ParseFilenameRegionMacro cmd $frame

    # $filename
    ParseFilenameMacro cmd $frame

    # $filedialog
    ParseFileDialogMacro cmd

    # $regions
    ParseRegionMacro cmd $frame

    # $env
    ParseEnvMacro cmd

    # $pan
    ParsePanMacro cmd $frame

    # $value
    ParseValueMacro cmd $frame $x $y

    # $x,$y
    ParseXYMacro cmd $frame $x $y

    # $z
    ParseZMacro cmd $frame

    # escaped macros
    UnsetEscapedMacros cmd

    if {$panalysis(log)} {
	SimpleTextDialog acmd [msgcat::mc {Analysis Commands}] \
	    80 20 append bottom "$cmd\n"
    }

    HVAnalysisCmd "at${which}${i}" "$ianalysis($which,$i,item)" "$cmd" $sync
}

proc AnalysisTaskDoit {i which frame x y sync} {
    global ianalysis
    global pds9

    if {[info exists ianalysis($which,$i,pid)]} {
	set ianalysis($which,$i,inuse) 1

	if {$pds9(confirm)} {
	    if {[tk_messageBox -type okcancel -icon question -message [msgcat::mc {This analysis task is already running. Do you wish to kill it?}]] != {ok}} {
		return
	    }
	}

	if {[info exists ianalysis($which,$i,pid)]} {
	    if {$ianalysis($which,$i,pid)>0} {
		eval "exec kill -9 $ianalysis($which,$i,pid)"
	    } else {
		HVAnalysisCancel $which $i
	    }
	}

	return
    }

    # don't turn on til task has started
    set ianalysis($which,$i,inuse) 0

    set ianalysis($which,$i,start) {}
    set ianalysis($which,$i,start,fn) {}
    set ianalysis($which,$i,start,url) {}
    set ianalysis($which,$i,finish) {}
    set ianalysis($which,$i,result) {}
    set ianalysis($which,$i,plot,title) {}
    set ianalysis($which,$i,plot,xaxis) {}
    set ianalysis($which,$i,plot,yaxis) {}
    set ianalysis($which,$i,plot,dim) 2
    set ianalysis($which,$i,image) {}

    set cmd $ianalysis($which,$i,cmd)

    # escaped macros
    SetEscapedMacros cmd

    # $data
    ParseDataMacro cmd $which $i

    # $xpa_method
    ParseXPAMethodMacro cmd

    # $xpa
    ParseXPAMacro cmd

    # $vo_method
    ParseVOMethodMacro cmd

    # $xdim,$ydim,$bitpix
    ParseXYBitpixMacro cmd $frame

    # $filename[$regions]
    ParseFilenameRegionMacro cmd $frame

    # $filename
    ParseFilenameMacro cmd $frame

    # $filedialog
    ParseFileDialogMacro cmd

    # $regions
    ParseRegionMacro cmd $frame

    # $env
    ParseEnvMacro cmd

    # $cen
    ParsePanMacro cmd $frame

    # $value
    ParseValueMacro cmd $frame $x $y

    # $x,$y
    ParseXYMacro cmd $frame $x $y

    # $z
    ParseZMacro cmd $frame

    # $message
    if {![ParseMessageMacro cmd]} {
	AnalysisTaskEnd $which $i
	return
    }

    # $entry
    if {![ParseEntryMacro cmd]} {
	AnalysisTaskEnd $which $i
	return
    }

    # $param
    if {![ParseParamMacro cmd]} {
	AnalysisTaskEnd $which $i
	return
    }

    # $text
    ParseTextMacro cmd $which $i

    # $plot
    ParsePlotMacro cmd $which $i

    # $null
    ParseNullMacro cmd $which $i

    # $url
    ParseURLMacro cmd $which $i

    # $geturl
    # do this next to last
    ParseGetURLMacro cmd $which $i

    # $image
    # do this last
    ParseImageMacro cmd $which $i

    # escaped macros
    UnsetEscapedMacros cmd

    # ok, we are off and running
    set ianalysis($which,$i,inuse) 1

    switch -- $ianalysis($which,$i,start) {
	geturl {
	    AnalysisGetURL $which $i $sync
	}
	default {
	    AnalysisPipe $which $i $cmd $sync
	}
    }
}

proc AnalysisPipe {which i cmd sync} {
    global ianalysis
    global panalysis
    global current

    switch -- $ianalysis($which,$i,start) {
	data {$current(frame) save fits image file "\{$ianalysis($which,$i,start,fn)\}"}
	url {GetFileURL $ianalysis($which,$i,start,url) ianalysis($which,$i,start,fn)}
    }

    # last step, change all '][' into ',' so that multiple filters work right
    regsub -all {\]\[} $cmd "," cmd

    # log the command, if necessary
    if {$panalysis(log)} {
	SimpleTextDialog acmd [msgcat::mc {Analysis Commands}] \
	    80 20 append bottom "$cmd\n"
    }

    switch -- $ianalysis($which,$i,finish) {
	null {
	    # nothing is returned, so there is aways an error,
	    # however, the command will be executed.
	    catch {open "| $cmd"}
	    global errorInfo
	    set errorInfo {}
	    AnalysisTaskEnd $which $i
	    return
	}
	default {
	    if {[catch {set ch [open "| $cmd"]}]} {
		Error [msgcat::mc {An error has occurred invoking the Analysis task}]
		AnalysisTaskEnd $which $i
		return
	    }
	    set ianalysis($which,$i,pid) [pid $ch]

	    switch -- $ianalysis($which,$i,finish) {
		image {
		    switch -- $ianalysis($which,$i,image) {
			new {CreateFrame}
			rgb {CreateRGBFrame}
			3d {Create3DFrame}
			current {}
		    }
		    global loadParam
		    set loadParam(load,type) channel
		    set loadParam(load,layer) {}
		    set loadParam(channel,name) $ch
		    set loadParam(file,type) fits
		    set loadParam(file,mode) {}
		    set loadParam(file,name) \
			"[string tolower [lindex $ianalysis($which,$i,item) 0]].fits"

		    ProcessLoad
		    FinishLoad

		    AnalysisTaskEnd $which $i
		}
		default {
		    if {$sync} {
			AnalysisReaderAppend $ch $which $i
			AnalysisReaderFinish $ch $which $i
		    } else {
			fileevent $ch readable \
			    [list AnalysisReader $ch $which $i]
			fconfigure $ch -blocking 0 -buffering none
		    }
		}
	    }
	}
    }
}

proc AnalysisReader {ch which i} {
    global ianalysis

    if {[eof $ch]} {
	AnalysisReaderFinish $ch $which $i
	return
    }
    AnalysisReaderAppend $ch $which $i
}

proc AnalysisReaderAppend {ch which i} {
    global ianalysis

    set r [read $ch]
    # for real-time update
    switch -- $ianalysis($which,$i,finish) {
	text {
	    AnalysisText "at${which}${i}" $ianalysis($which,$i,item) $r append

	    global debug
	    if {$debug(tcl,idletasks)} {
		puts stderr "AnalysisReader"
	    }
	    update idletasks
	}
    }
    append ianalysis($which,$i,result) $r
}

proc AnalysisReaderFinish {ch which i} {
    global ianalysis

    catch {close $ch}

    switch -- $ianalysis($which,$i,finish) {
	null -
	image -
	text {}
	plot {
	    PlotLine "at${which}${i}" \
		$ianalysis($which,$i,item) \
		$ianalysis($which,$i,plot,title) \
		$ianalysis($which,$i,plot,xaxis) \
		$ianalysis($which,$i,plot,yaxis) \
		$ianalysis($which,$i,plot,dim) \
		$ianalysis($which,$i,result)
	}
	plotstdin {
	    AnalysisPlotStdin line "at${which}${i}" $ianalysis($which,$i,item) \
		$ianalysis($which,$i,result)
	}
	default {puts stdout $ianalysis($which,$i,result)}
    }

    AnalysisTaskEnd $which $i
}

proc AnalysisPlotStdin {type w wtt result} {
    # if no result, just return
    if {$result == {}} {
	return
    }

    # check for $ERROR
    set id [string first {$ERROR} $result]
    if {$id >= 0} {
	AnalysisText "${w}e" $wtt \
	    [string range $result [expr $id+1] end] append
	return
    }

    # check for ERROR:
    set id [string first {ERROR:} $result]
    if {$id >= 0} {
	AnalysisText "${w}e" $wtt [string range $result $id end] append
	return
    }

    # check for $BEGINTEXT/$ENDTEXT
    # assume each is followed by a \n, so skip it
    if {[string range $result 0 9] == {$BEGINTEXT}} {
	set eid [string first {$ENDTEXT} $result]
	if {$eid > 0} {
	    AnalysisText "${w}t" $wtt \
		[string range $result 11 [expr $eid-1]] append
	    set result [string range $result [expr $eid+9] end]
	} else {
	    # looks like all text
	    AnalysisText "${w}t" $wtt [string range $result 11 end] append
	    return
	}
    }    

    # now find the title, x axis label, y axis label, and dimension
    set id [string first "\n" $result]
    set tt [string range $result 0 $id]
    set rr [string range $result [expr $id+1] end]

    set l [llength $tt]
    set t [join [lrange $tt 0 [expr $l-4]]]
    set x [lindex $tt [expr $l-3]]
    set y [lindex $tt [expr $l-2]]
    set d [lindex $tt [expr $l-1]]

    if {$d != {} && $rr != {}} {
	switch $type {
	    line {PlotLine $w $wtt $t $x $y $d $rr}
	    bar {PlotBar $w $wtt $t $x $y $d $rr}
	    scatter {PlotScatter $w $wtt $t $x $y $d $rr}
	}
    } else {
	Error "[msgcat::mc {Error}] [string range $tt 0 40]"
    }
}

proc AnalysisGetURL {which i sync} {
    global ianalysis
    global panalysis

    if {![ParseURL $ianalysis($which,$i,start,url) r]} {
	Error [msgcat::mc {An error has occurred invoking the Analysis task}]
	AnalysisTaskEnd $which $i
	return
    }

    # format all spaces and brackets
    set url {}
    regsub -all { } $ianalysis($which,$i,start,url) "%20" url
    regsub -all {\[} $url "%5B" url
    regsub -all {\]} $url "%5D" url

    if {$panalysis(log)} {
	SimpleTextDialog acmd [msgcat::mc {Analysis Commands}] \
	    80 20 append bottom "$url\n"
    }

    set ianalysis($which,$i,pid) -1
    HVAnalysisURL $which $i $url $sync
}

proc AnalysisProcessGetURL {which i result} {
    global ianalysis

    set ianalysis($which,$i,result) $result
    switch -- $ianalysis($which,$i,finish) {
	text {AnalysisText "at${which}${i}" $ianalysis($which,$i,item) \
		  $ianalysis($which,$i,result) append}
	plot {PlotLine "at${which}${i}" \
		  $ianalysis($which,$i,item) \
		  $ianalysis($which,$i,plot,title) \
		  $ianalysis($which,$i,plot,xaxis) \
		  $ianalysis($which,$i,plot,yaxis) \
		  $ianalysis($which,$i,plot,dim) \
		  $ianalysis($which,$i,result)}
	plotstdin {AnalysisPlotStdin line "at${which}${i}" \
		       $ianalysis($which,$i,item) \
		       $ianalysis($which,$i,result)}
	image {
	    set fn "[string tolower [lindex $ianalysis($which,$i,item) 0]].fits"
	    LoadVar result $fn {} {}
	}
	default {Error $ianalysis($which,$i,result)}
    }
}

proc AnalysisTaskEnd {which i} {
    global ianalysis

    set ianalysis($which,$i,inuse) 0
    if {$ianalysis($which,$i,start,fn) != {}} {
	if {[file exists $ianalysis($which,$i,start,fn)]} {
	    catch {file delete -force $ianalysis($which,$i,start,fn)}
	}
    }

    if {[info exists ianalysis($which,$i,pid)]} {
	unset ianalysis($which,$i,pid)
    }
    unset ianalysis($which,$i,start)
    unset ianalysis($which,$i,start,fn)
    unset ianalysis($which,$i,start,url)
    unset ianalysis($which,$i,finish)
    unset ianalysis($which,$i,result)
    unset ianalysis($which,$i,plot,title)
    unset ianalysis($which,$i,plot,xaxis)
    unset ianalysis($which,$i,plot,yaxis)
    unset ianalysis($which,$i,plot,dim)
    unset ianalysis($which,$i,image)
}

proc SetEscapedMacros {cmdname} {
    upvar $cmdname cmd
    global xpa

    set seq "WaJaWaJaW"
    if {[regexp {\$\$} $cmd]} {
	# fill with tempory sequence
	regsub -all {\$\$} $cmd $seq cmd
    }
}

proc UnsetEscapedMacros {cmdname} {
    upvar $cmdname cmd
    global xpa

    set seq "WaJaWaJaW"
    if {[regexp $seq $cmd]} {
	# reset to $
	regsub -all $seq $cmd {\$} cmd
    }
}

proc ParseDataMacro {cmdname which i} {
    upvar $cmdname cmd
    global ianalysis

    set exp {\$data.?\|}
    if {[regexp $exp $cmd]} {
	set ianalysis($which,$i,start) data
	set ianalysis($which,$i,start,fn) [tmpnam {.fits}]

	regsub $exp $cmd "cat \{$ianalysis($which,$i,start,fn)\} |" cmd
    }
}

proc ParseVOMethodMacro {cmdname} {
    upvar $cmdname cmd
    global pvo

    if {[regexp {\$vo_method} $cmd]} {
	regsub -all {\$vo_method} $cmd $pvo(method) cmd
    }
}

proc ParseXPAMethodMacro {cmdname} {
    upvar $cmdname cmd
    global ds9

    if {[regexp {\$xpa_method} $cmd]} {
	regsub -all {\$xpa_method} $cmd [XPAMethod] cmd
    }
}

proc ParseXPAMacro {cmdname} {
    upvar $cmdname cmd
    global ds9

    if {[regexp {\$xpa} $cmd]} {
	regsub -all {\$xpa} $cmd $ds9(title) cmd
    }
}

proc ParseXYBitpixMacro {cmdname frame} {
    upvar $cmdname cmd

    if {$frame != {}} {
	if {[regexp {\$width} $cmd]} {
	    regsub -all {\$width} $cmd [$frame get fits width] cmd
	}

	if {[regexp {\$height} $cmd]} {
	    regsub -all {\$height} $cmd [$frame get fits height] cmd
	}

	if {[regexp {\$depth} $cmd]} {
	    regsub -all {\$depth} $cmd [$frame get fits depth 2] cmd
	}

	if {[regexp {\$bitpix} $cmd]} {
	    regsub -all {\$bitpix} $cmd [$frame get fits bitpix] cmd
	}

	if {[regexp {\$xdim} $cmd]} {
	    regsub -all {\$xdim} $cmd [$frame get fits width] cmd
	}

	if {[regexp {\$ydim} $cmd]} {
	    regsub -all {\$ydim} $cmd [$frame get fits height] cmd
	}
    }
}

proc ParseFilenameRegionMacro {cmdname frame} {
    upvar $cmdname cmd

    set exp {(\$filename)\[(\$regions\(([^)]*)\))\]}
    while {[regexp $exp $cmd foo fn reg pp]} {
	set type ds9
	set prop {}
	set sys physical
	set sky fk5
	set format degrees

	# default for mosaics
	if {$frame != {}} {
	    if {[$frame has fits mosaic]} {
		set sys wcs
	    }
	}

	foreach p [split $pp ,] {
	    switch -- $p {
		ds9 -
		ciao -
		saotng -
		saoimage -
		pros -
		xy {set type $p}

		include {append prop {include = yes }}
		exclude {append prop {include = no }}
		source {append prop {source = yes }}
		background {append prop {source = no }}

		image -
		physical -
		detector -
		amplifier
		wcs -
		wcsa -
		wcsb -
		wcsc -
		wcsd -
		wcse -
		wcsf -
		wcsg -
		wcsh -
		wcsi -
		wcsj -
		wcsk -
		wcsl -
		wcsm -
		wcsn -
		wcso -
		wcsp -
		wcsq -
		wcsr -
		wcss -
		wcst -
		wcsu -
		wcsv -
		wcsw -
		wcsx -
		wcsy -
		wcsz {set sys $p}

		fk4 -
		b1950 -
		fk5 -
		j2000 -
		icrs -
		galactic -
		ecliptic {
		    if {"$sys"=="physical"} {
			set sys wcs
		    }
		    set sky $p
		}

		hms {set format sexagesimal}
		sexagesimal -
		degrees {set format $p}
	    }
	}

	SubstFilenameRegion cmd $frame $exp $type $prop $sys $sky $format
    }

    set exp {(\$filename)\[(\$regions)\]}
    while {[regexp $exp $cmd foo fn reg]} {
	set type ds9
	set prop {}
	set sys physical
	set sky fk5
	set format degrees

	# default for mosaics
	if {$frame != {}} {
	    if {[$frame has fits mosaic]} {
		set sys wcs
	    }
	}

	SubstFilenameRegion cmd $frame $exp $type $prop $sys $sky $format
    }
}

proc SubstFilenameRegion {cmdname frame exp type prop sys sky format} {
    upvar $cmdname cmd
    global ianalysis

    set fn [$frame get fits file name full]
    set region [string trimright [$frame marker list $type $sys $sky $format yes $prop] ";"]
    
    if {$region != {}} {
	set sub {}
	foreach f $fn {
	    append sub "$f\[$region\] "
	}
    } else {
	set sub $fn
    }

    # substitute
    # ok, we need to check the length
    if {[string length $region] > 256} {
	# since we are writing to a file, 
	# we don't have to worry about quoting
	# special characters
	set fn [tmpnam {.reg}]
	incr ianalysis(param,seq)

	if {![catch {set ch [open "$fn" w]}]} {
	    puts $ch "$sub"
	    close $ch
	}

	regsub $exp $cmd "\@$fn" cmd

    } else {
	CleanFileName sub
        regsub $exp $cmd $sub cmd
    }
}

proc ParseFilenameMacro {cmdname frame} {
    upvar $cmdname cmd

    set exp {\$filename\(([^)]*)\)}
    if {[regexp $exp $cmd foo pp]} {
	switch $pp {
	    root -
	    root,base {
		set sub [join [$frame get fits file name root base]]
		CleanFileName sub
		regsub -all $exp $cmd $sub cmd
	    }
	    full -
	    full,base {
		set sub [join [$frame get fits file name full base]]
		CleanFileName sub
		regsub -all $exp $cmd $sub cmd
	    }
	}
    }

    set exp {\$filename}
    if {[regexp $exp $cmd]} {
	set sub [join [$frame get fits file name full]]
	CleanFileName sub
	regsub -all $exp $cmd $sub cmd
    }
}

proc ParseFileDialogMacro {cmdname} {
    upvar $cmdname cmd

    set exp {\$filedialog\(open\)}
    if {[regexp $exp $cmd]} {
	set sub [OpenFileDialog analysisparamfbox]
	regsub -all $exp $cmd $sub cmd
    }

    set exp {\$filedialog\(save\)}
    if {[regexp $exp $cmd]} {
	set sub [SaveFileDialog analysisparamfbox]
	regsub -all $exp $cmd $sub cmd
    }
}

proc CleanFileName {varname} {
    upvar $varname sub

    # we have to quote {"}, else problems down the road
    regsub -all {\"} $sub {\\"} sub

    # we have to quote {&}, else problems down the road
    regsub -all {\&} $sub {\\&} sub
}

proc ParseRegionMacro {cmdname frame} {
    upvar $cmdname cmd

    set exp {\$regions\(([^)]*)\)}
while {[regexp $exp $cmd foo pp]} {

    set type ds9
    set prop {}
    set sys physical
    set sky fk5
    set format degrees

    # default for mosaics
    if {$frame != {}} {
	if {[$frame has fits mosaic]} {
	    set sys wcs
	}
    }

    foreach p [split $pp ,] {
	switch -- $p {
	    ds9 -
	    ciao -
	    saotng -
	    saoimage -
	    pros -
	    xy {set type $p}

	    include {append prop {include = yes }}
	    exclude {append prop {include = no }}
	    source {append prop {source = yes }}
	    background {append prop {source = no }}

	    image -
	    physical -
	    detector -
	    amplifier -
	    wcs -
	    wcsa -
	    wcsb -
	    wcsc -
	    wcsd -
	    wcse -
	    wcsf -
	    wcsg -
	    wcsh -
	    wcsi -
	    wcsj -
	    wcsk -
	    wcsl -
	    wcsm -
	    wcsn -
	    wcso -
	    wcsp -
	    wcsq -
	    wcsr -
	    wcss -
	    wcst -
	    wcsu -
	    wcsv -
	    wcsw -
	    wcsx -
	    wcsy -
	    wcsz {set sys $p}

	    fk4 -
	    b1950 -
	    fk5 -
	    j2000 -
	    icrs -
	    galactic -
	    ecliptic {
		if {"$sys"=="physical"} {
		    set sys wcs
		}
		set sky $p
	    }

	    hms {set format sexagesimal}
	    sexagesimal -
	    degrees {set format $p}
	}
    }

    SubstRegion cmd $frame $exp $type $prop $sys $sky $format
}

# SAOtng format
set exp {\$((|include|exclude|source|background)_)?regions(_(|degrees|hms|pixels))?}
while {[regexp  $exp $cmd foo a prop b sys]} {

    # check valid props
    switch -- $prop {
	include {set prop {include = yes}}
	exclude {set prop {include = no}}
	source {set prop {source = yes}}
	background {set prop {source = no}}
	default {set prop {}}
    }

    # check valid coordinate systems
    set sky fk5
    switch -- $sys {
	degrees {set sys wcs; set format degrees}
	hms {set sys wcs; set format sexagesimal}
	pixels -
	default {set sys physical; set format degrees}
    }

    SubstRegion cmd $frame $exp ds9 $prop $sys $sky $format
}
}

proc SubstRegion {cmdname frame exp type prop sys sky format} {
    upvar $cmdname cmd
    global ianalysis

    # get any regions
    set region [string trimright [$frame marker list $type $sys $sky $format yes $prop] ";"]

    # substitute
    # ok, we need to check the length
    if {[string length $region] > 8192} {
	# since we are writing to a file, we don't have to worry about quoting
	# special characters
        set fn [tmpnam {.reg}]
        incr ianalysis(param,seq)

        if {![catch {set ch [open "$fn" w]}]} {
            puts $ch "$region"
            close $ch
        }

        regsub $exp $cmd "\@$fn" cmd

    } else {
        # we have to quote {"}, else problems down the road
        regsub -all {\"} $region {\\"} region

        # we have to quote {&}, else problems down the road
        regsub -all {\&} $region {\\&} region

        regsub $exp $cmd $region cmd
    }
}

proc ParseEnvMacro {cmdname} {
    upvar $cmdname cmd
    global env

    set exp {\$env\(([^)]*)\)}
if {[regexp $exp $cmd foo ee]} {
    if {[info exists env($ee)]} {
	regsub -all $exp $cmd "$env($ee)" cmd
    } else {
	regsub -all $exp $cmd {} cmd
    }
}
}

proc ParsePanMacro {cmdname frame} {
    upvar $cmdname cmd

    set exp {\$pan\(([^)]*)\)}
if {[regexp $exp $cmd foo pp]} {
    set sys physical
    set sky fk5
    set format degrees

    foreach p [split $pp ,] {
	switch -- $p {
	    image -
	    physical -
	    detector -
	    amplifier -
	    wcs -
	    wcsa -
	    wcsb -
	    wcsc -
	    wcsd -
	    wcse -
	    wcsf -
	    wcsg -
	    wcsh -
	    wcsi -
	    wcsj -
	    wcsk -
	    wcsl -
	    wcsm -
	    wcsn -
	    wcso -
	    wcsp -
	    wcsq -
	    wcsr -
	    wcss -
	    wcst -
	    wcsu -
	    wcsv -
	    wcsw -
	    wcsx -
	    wcsy -
	    wcsz {set sys $p}

	    fk4 -
	    b1950 -
	    fk5 -
	    j2000 -
	    icrs -
	    galactic -
	    ecliptic {set sky $p; set sys wcs}

	    hms {set format sexagesimal}
	    sexagesimal -
	    degrees {set format $p}
	}
    }
    
    set coord [$frame get cursor $sys $sky $format]
    regsub -all $exp $cmd "[lindex $coord 0],[lindex $coord 1]" cmd

    return
}

# no args

set exp {\$pan}
if {[regexp $exp $cmd foo1]} {
    set coord [$frame get cursor physical]
    regsub -all $exp $cmd "[lindex $coord 0],[lindex $coord 1]" cmd
}
}

proc ParseValueMacro {cmdname frame x y} {
    upvar $cmdname cmd

    # menu items will not have a frame arg
    if {$frame == {}} {
	return
    }

    set exp1 {\$value}
    if {[regexp $exp1 $cmd foo]} {
        set vv [$frame get value canvas $x $y]
        regsub -all $exp1 $cmd "$vv" cmd
    }
}

proc ParseXYMacro {cmdname frame x y} {
    upvar $cmdname cmd

    # menu items will not have a frame arg
    if {$frame == {}} {
	return
    }

    set exp1 {\$x\(([^)]*)\)}
set exp2 {\$y\(([^)]*)\)}
if {[regexp $exp1 $cmd foo pp] && [regexp $exp2 $cmd foo2 pp2]} {
    set sys physical
    set sky fk5
    set format degrees

    foreach p [split $pp ,] {
	switch -- $p {
	    image -
	    physical -
	    detector -
	    amplifier -
	    wcs -
	    wcsa -
	    wcsb -
	    wcsc -
	    wcsd -
	    wcse -
	    wcsf -
	    wcsg -
	    wcsh -
	    wcsi -
	    wcsj -
	    wcsk -
	    wcsl -
	    wcsm -
	    wcsn -
	    wcso -
	    wcsp -
	    wcsq -
	    wcsr -
	    wcss -
	    wcst -
	    wcsu -
	    wcsv -
	    wcsw -
	    wcsx -
	    wcsy -
	    wcsz {set sys $p}

	    fk4 -
	    b1950 -
	    fk5 -
	    j2000 -
	    icrs -
	    galactic -
	    ecliptic {set sky $p; set sys wcs}

	    hms {set format sexagesimal}
	    sexagesimal -
	    degrees {set format $p}
	}
    }
    
    switch -- $sys {
	image -
	physical -
	detector -
	amplifier {set coord [$frame get coordinates $x $y $sys]}
	default {set coord [$frame get coordinates $x $y $sys $sky $format]}
    }

    regsub -all $exp1 $cmd [lindex $coord 0] cmd
    regsub -all $exp2 $cmd [lindex $coord 1] cmd

    return
}

# no args

set exp1 {\$x}
set exp2 {\$y}
if {[regexp $exp1 $cmd foo1] && [regexp $exp2 $cmd foo2]} {
    set coord [$frame get coordinates $x $y physical]

    regsub -all $exp1 $cmd [lindex $coord 0] cmd
    regsub -all $exp2 $cmd [lindex $coord 1] cmd
}
}

proc ParseZMacro {cmdname frame} {
    upvar $cmdname cmd

    # menu items will not have a frame arg
    if {$frame == {}} {
	return
    }

    set sl [$frame get fits slice]

    # args
    set exp1 {\$z\(([^)]*)\)}
    if {[regexp $exp1 $cmd foo pp]} {
        set sys $pp
        set coord [$frame get coordinates $sl image $sys 2]
        regsub -all $exp1 $cmd "$coord" cmd
        return
    }

    # no args
    # look for '$z"'
    set exp1 {\$z\"}
    if {[regexp $exp1 $cmd foo1]} {
        regsub -all $exp1 $cmd "$sl\"" cmd
    }
    # look for "$z "
    set exp1 {\$z\s}
    if {[regexp $exp1 $cmd foo1]} {
        regsub -all $exp1 $cmd "$sl " cmd
    }
}

proc ParseMessageMacro {cmdname} {
    upvar $cmdname cmd

    # two args
    set exp {\|?.?\$message\((ok|okcancel|yesno),([^)]*)\).?\|?}
while {[regexp $exp $cmd foo type message]} {
    regsub $exp $cmd {} cmd
    if {![AnalysisMessage $type $message]} {
	return 0
    }
}

# one args
set exp {\|?.?\$message\(([^)]*)\).?\|?}
while {[regexp $exp $cmd foo message]} {
    regsub $exp $cmd {} cmd
    AnalysisMessage ok $message
}

return 1
}

proc ParseEntryMacro {cmdname} {
    upvar $cmdname cmd
    
    # one args
    set exp {\|?.?\$entry\(([^)]*)\).?\|?}
while {[regexp $exp $cmd foo message]} {
    set result {}
    if {![AnalysisEntry $message result]} {
	return 0
    }
    regsub $exp $cmd $result cmd
}

return 1
}

proc ParseParamMacro {cmdname} {
    upvar $cmdname cmd
    global ianalysis

    set exp {\$param\(([^)]*)\).?;?}
while {[regexp  $exp $cmd foo param]} {
    regsub $exp $cmd {} cmd
    if {![AnalysisParam cmd $param]} {
	return 0
    }
}
return 1
}

proc ParseTextMacro {cmdname which i} {
    upvar $cmdname cmd
    global ianalysis

    set exp1 {\|.?\$text}
    set exp2 {\|\&.?\$text}
    if {[regexp $exp1 $cmd]} {
	regsub $exp1 $cmd {} cmd

	set ianalysis($which,$i,finish) text
    } elseif {[regexp $exp2 $cmd]} {
	regsub $exp2 $cmd { 2>@ stdout} cmd

	set ianalysis($which,$i,finish) text
    }
}

proc ParseNullMacro {cmdname which i} {
    upvar $cmdname cmd
    global ianalysis

    set exp {\|.?\$null}
    if {[regexp $exp $cmd]} {
	regsub $exp $cmd {} cmd

	set ianalysis($which,$i,finish) null
    }
}

proc ParsePlotMacro {cmdname which i} {
    upvar $cmdname cmd
    global ianalysis

    set exp {\|.?\$plot\(([^,]+),([^,]+),([^,]+),([^)]+)\)}
if {[regexp $exp $cmd foo \
	 ianalysis($which,$i,plot,title) \
	 ianalysis($which,$i,plot,xaxis) \
	 ianalysis($which,$i,plot,yaxis) \
	 ianalysis($which,$i,plot,dim)]} {
    regsub $exp $cmd {} cmd

    set ianalysis($which,$i,finish) plot
}

set exp {\|.?\$plot\(stdin\)}
if {[regexp $exp $cmd]} {
    regsub $exp $cmd {} cmd

    set ianalysis($which,$i,finish) plotstdin
}

set exp {\|.?\$plot}
if {[regexp $exp $cmd]} {
    regsub $exp $cmd {} cmd

    set ianalysis($which,$i,finish) plot
}
}

proc ParseURLMacro {cmdname which i} {
    upvar $cmdname cmd
    global ianalysis

    set exp {\$url\((.*)\) \|}
    if {[regexp $exp $cmd foo ianalysis($which,$i,start,url)]} {
	set ianalysis($which,$i,start) url
	set ianalysis($which,$i,start,fn) [tmpnam {.fits}]

	regsub $exp $cmd "cat \{$ianalysis($which,$i,start,fn)\} |" cmd
    }
}

proc ParseGetURLMacro {cmdname which i} {
    upvar $cmdname cmd
    global ianalysis

    set exp {\$geturl\((.*)\)}
    if {[regexp $exp $cmd foo ianalysis($which,$i,start,url)]} {
	set ianalysis($which,$i,start) geturl
	set ianalysis($which,$i,start,fn) [tmpnam {.fits}]

	regsub $exp $cmd {} cmd
    }
}

proc ParseImageMacro {cmdname which i} {
    upvar $cmdname cmd
    global ianalysis

    set exp {\|.?\$image\(([^)]*)\)}
if {[regexp $exp $cmd foo ianalysis($which,$i,image)]} {
    regsub $exp $cmd {} cmd
    
    set ianalysis($which,$i,finish) image
}

set exp {\|.?\$image}
if {[regexp $exp $cmd]} {
    regsub $exp $cmd {} cmd

    set ianalysis($which,$i,finish) image
}
}

proc AnalysisText {tt title txt method} {
    if {$txt != {} && $txt != "\n"} {
	SimpleTextDialog ${tt}txt $title 80 20 $method bottom $txt
    }
}

proc AnalysisMessage {type message} {
    if {$type == {}} {
	set type ok
    }

    switch -- [tk_messageBox -message $message -type $type] {
	ok {return 1}
	yes {return 1}
	cancel {return 0}
	default {return 0}
    }
}

proc AnalysisEntry {message resultvar} {
    upvar $resultvar result

    return [EntryDialog [msgcat::mc {Entry}] $message 60 result]
}

proc AnalysisPrefOpen {varname} {
    upvar $varname var

    FileLast analysisfbox $var
    set var [OpenFileDialog analysisfbox]
}

# Cmds

proc ProcessAnalysisCmd {varname iname buf fn} {
    upvar $varname var
    upvar $iname i

    global ime
    global ianalysis

    switch -- [string tolower [lindex $var $i]] {
	message {
	    incr i
	    switch [string tolower [lindex $var $i]] {
		ok -
		okcancel -
		retrycancel -
		yesno -
		yesnocancel {
		    AnalysisMessage [lindex $var $i] [lindex $var [expr $i+1]]
		    incr i
		}
		default {
		    AnalysisMessage ok [lindex $var $i]
		}
	    }
	}
	text {
	    if {$buf != {}} {
		AnalysisText apXPA Analysis $buf append
	    } elseif {$fn != {}} {
		if {[file exists $fn]} {
		    set ch [open $fn r]
		    set txt [read $ch]
		    close $ch
		    AnalysisText apXPA Analysis $txt append
		}
	    } else {
		incr i
		AnalysisText apXPA Analysis [lindex $var $i] append
	    }
	}
	plot {
	    # for backward compatibility
	    # used by chandra-ed
	    # use xpa plot instead

	    incr i
	    if {$buf != {}} {
		ProcessAnalysisPlotCmd $varname $iname $buf
	    } elseif {$fn != {}} {
		if {[file exists $fn]} {
		    set ch [open $fn r]
		    set rr [read $ch]
		    close $ch
		    ProcessAnalysisPlotCmd $varname $iname $rr
		}
	    } else {
		ProcessAnalysisPlotCmd $varname $iname {}
	    }
	}
	load {
	    if {$buf != {}} {
		ProcessAnalysis buf
	    } elseif {$fn != {}} {
		ProcessAnalysisFile $fn
	    } else {
		incr i
		ProcessAnalysisFile [lindex $var $i]
	    }
	}
	clear {
	    ClearAnalysis
	    incr i
	    switch -- [lindex $var $i] {
		load {
		    if {$buf != {}} {
			ProcessAnalysis buf
		    } elseif {$fn != {}} {
			ProcessAnalysisFile $fn
		    } else {
			incr i
			ProcessAnalysisFile [lindex $var $i]
		    }
		}
		default {incr i -1}
	    }
	}
	mode {
	    incr i
	    switch -- [lindex $var $i] {
		stats -
		statistics {set ime(task) stats}
		hist -
		histogram {set ime(task) hist}
		radial -
		radialprofile {set ime(task) radial}
		2d -
		plot2d {set ime(task) plot2d}
		3d -
		plot3d {set ime(task) plot3d}
	    }

	    ProcessRealizeDS9
	    IMEChangeTask
	}
	task {
	    incr i
	    if {[string is integer [lindex $var $i]]} {
		AnalysisTask [lindex $var $i] menu
	    } else {
		# invoke by name
		for {set ii 0} {$ii<$ianalysis(menu,count)} {incr ii} {
		    if {[string equal -nocase $ianalysis(menu,$ii,item) [lindex $var $i]]} {
			AnalysisTask $ii menu
		    }
		}
	    }
	}
	default {
	    if {[string is integer [lindex $var $i]]} {
		AnalysisTask [lindex $var $i] menu
	    } else {
		ProcessAnalysisFile [lindex $var $i]
	    }
	}
    }
}

proc ProcessAnalysisPlotCmd {varname iname buf} {
    upvar 2 $varname var
    upvar 2 $iname i

    global iap
    switch -- [string tolower [lindex $var $i]] {
	stdin {AnalysisPlotStdin line $iap(tt) {} $buf}
	default {
	    PlotLine $iap(tt) Plot \
		[lindex $var [expr $i+0]] \
		[lindex $var [expr $i+1]] \
		[lindex $var [expr $i+2]] \
		[lindex $var [expr $i+3]] \
		$buf
	    incr i 3
	}
    }
}

proc ProcessSendAnalysisCmd {proc id param sock fn} {
    global ianalysis
    global ime

    set result {}
    switch -- [string tolower [lindex $param 0]] {
	entry {
	    AnalysisEntry [lrange $param 1 end] result
	    append result "\n"
	    $proc $id $result
	}
	mode {$proc $id "$ime(task)\n"}
	task {
	    # invoke by name
	    for {set ii 0} {$ii<$ianalysis(menu,count)} {incr ii} {
		append result "$ii $ianalysis(menu,$ii,item)\n"
	    }
	    $proc $id $result
	}
	lock {$proc $id "$ime(lock)\n"}
	default {
	    for {set i 0} {$i<$ianalysis(menu,count)} {incr i} {
		append result "\#$i menu"
		append result "\n$ianalysis(menu,$i,item)"
		append result "\n$ianalysis(menu,$i,template)"
		if {$ianalysis(menu,$i,cmd) != {web}} {
		    append result "\nmenu"
		    append result "\n$ianalysis(menu,$i,cmd)"
		} else {
		    append result "\n$ianalysis(menu,$i,cmd)"
		    append result "\n$ianalysis(menu,$i,var)"
		}
		append result "\n\n"
	    }
	    for {set i 0} {$i<$ianalysis(bind,count)} {incr i} {
		set key [string range $ianalysis(bind,$i,item) 1 1]
		append result "\#$i bind"
		append result "\nbind key $ianalysis(bind,$i,item)"
		append result "\n$ianalysis(bind,$i,template)"
		append result "\nbind $key"
		append result "\n$ianalysis(bind,$i,cmd)"
		append result "\n\n"
	    }
	    ProcessSend $proc $id $sock $fn {.ans} $result
	}
    }
}
