#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotLoadConfig {varname} {
    upvar #0 $varname var
    global $varname

    PlotLoadConfigFile $varname [OpenFileDialog apconfigfbox]
}

# used by backup
proc PlotLoadConfigFile {varname filename} {
    upvar #0 $varname var
    global $varname

    if {$filename == {}} {
	return
    }

    source $filename

    set var(graph,title) $analysisplot(graph,title)
    set var(graph,title,family) $analysisplot(graph,title,family)
    set var(graph,title,size) $analysisplot(graph,title,size) 
    set var(graph,title,weight) $analysisplot(graph,title,weight) 
    set var(graph,title,slant) $analysisplot(graph,title,slant) 

    set var(legend) $analysisplot(legend) 
    set var(legend,position) $analysisplot(legend,position) 
    set var(legend,title,family) $analysisplot(legend,title,family) 
    set var(legend,title,size) $analysisplot(legend,title,size) 
    set var(legend,title,weight) $analysisplot(legend,title,weight) 
    set var(legend,title,slant) $analysisplot(legend,title,slant) 
    set var(legend,font,family) $analysisplot(legend,font,family) 
    set var(legend,font,size) $analysisplot(legend,font,size) 
    set var(legend,font,weight) $analysisplot(legend,font,weight) 
    set var(legend,font,slant) $analysisplot(legend,font,slant) 

    set var(axis,title,family) $analysisplot(axis,title,family) 
    set var(axis,title,size) $analysisplot(axis,title,size) 
    set var(axis,title,weight) $analysisplot(axis,title,weight) 
    set var(axis,title,slant) $analysisplot(axis,title,slant) 

    set var(axis,font,family) $analysisplot(axis,font,family) 
    set var(axis,font,size) $analysisplot(axis,font,size) 
    set var(axis,font,weight) $analysisplot(axis,font,weight) 
    set var(axis,font,slant) $analysisplot(axis,font,slant) 

    # per Graph
    set var(graph,legend,title) $analysisplot(legend,title) 

    set var(graph,axis,x,title) $analysisplot(axis,x,title) 
    set var(graph,axis,x,grid) $analysisplot(axis,x,grid) 
    set var(graph,axis,x,log) $analysisplot(axis,x,log) 
    set var(graph,axis,x,flip) $analysisplot(axis,x,flip) 
    set var(graph,axis,x,auto) $analysisplot(axis,x,auto) 
    set var(graph,axis,x,min) $analysisplot(axis,x,min) 
    set var(graph,axis,x,max) $analysisplot(axis,x,max) 
    set var(graph,axis,x,format) $analysisplot(axis,x,format)

    set var(graph,axis,y,title) $analysisplot(axis,y,title) 
    set var(graph,axis,y,grid) $analysisplot(axis,y,grid) 
    set var(graph,axis,y,log) $analysisplot(axis,y,log) 
    set var(graph,axis,y,flip) $analysisplot(axis,y,flip) 
    set var(graph,axis,y,auto) $analysisplot(axis,y,auto) 
    set var(graph,axis,y,min) $analysisplot(axis,y,min) 
    set var(graph,axis,y,max) $analysisplot(axis,y,max) 
    set var(graph,axis,y,format) $analysisplot(axis,y,format) 

    # per Dataset
    set var(graph,ds,show) $analysisplot(show) 
    set var(graph,ds,smooth) $analysisplot(smooth) 
    set var(graph,ds,color) $analysisplot(color) 
    set var(graph,ds,fill) $analysisplot(fill) 
    set var(graph,ds,fill,color) $analysisplot(fill,color) 
    set var(graph,ds,width) $analysisplot(width) 
    set var(graph,ds,dash) $analysisplot(dash) 

    set var(graph,ds,shape,symbol) $analysisplot(shape,symbol) 
    set var(graph,ds,shape,fill) $analysisplot(shape,fill) 
    set var(graph,ds,shape,color) $analysisplot(shape,color) 

    set var(graph,ds,error) $analysisplot(error) 
    set var(graph,ds,error,cap) $analysisplot(error,cap) 
    set var(graph,ds,error,color) $analysisplot(error,color) 
    set var(graph,ds,error,width) $analysisplot(error,width) 

    set var(graph,ds,bar,relief) $analysisplot(bar,relief) 

    unset analysisplot

    # backward compatibility
    FixVar ${varname}(graph,title,family) ${varname}(titleFont)
    FixVar ${varname}(graph,title,size) ${varname}(titleSize)
    FixVar ${varname}(graph,title,weight) ${varname}(titleWeight)
    FixVar ${varname}(graph,title,slant) ${varname}(titleSlant)

    FixVar ${varname}(axis,title,family) ${varname}(textlabFont)
    FixVar ${varname}(axis,title,size) ${varname}(textlabSize)
    FixVar ${varname}(axis,title,weight) ${varname}(textlabWeight)
    FixVar ${varname}(axis,title,slant) ${varname}(textlabSlant)

    FixVar ${varname}(axis,font,family) ${varname}(numlabFont)
    FixVar ${varname}(axis,font,size) ${varname}(numlabSize)
    FixVar ${varname}(axis,font,weight) ${varname}(numlabWeight)
    FixVar ${varname}(axis,font,slant) ${varname}(numlabSlant)

    FixVar ${varname}(graph,ds,show) ${varname}(linear)
    FixVar ${varname}(graph,ds,width) ${varname}(linear,width)
    FixVar ${varname}(graph,ds,color) ${varname}(linear,color)
    if {[info exists ${varname}(linear,dash)]} {
	set var(linear,dash) [FromYesNo $var(linear,dash)]
    }
    FixVar ${varname}(graph,ds,dash) ${varname}(linear,dash)

    FixVar ${varname}(graph,ds,shape,color) ${varname}(discrete,color)
    FixVar ${varname}(graph,ds,shape,fill) ${varname}(discrete,fill)

    if {[info exists ${varname}(discrete)]} {
	if {$var(discrete)} {
	    FixVar ${varname}(graph,ds,shape,symbol) \
		${varname}(discrete,symbol)
	} else {
	    FixVarRm ${varname}(discrete,symbol)
	}
    }

    FixVarRm ${varname}(bar)
    FixVarRm ${varname}(bar,color)

    FixVarRm ${varname}(discrete)

    FixVarRm ${varname}(quadratic)
    FixVarRm ${varname}(quadratic,width)
    FixVarRm ${varname}(quadratic,color)
    FixVarRm ${varname}(quadratic,dash)

    FixVarRm ${varname}(step)
    FixVarRm ${varname}(step,color)
    FixVarRm ${varname}(step,dash)
    FixVarRm ${varname}(step,width)

    if {[info exists var(grid)]} {
	set var(graph,axis,x,grid) $var(grid)
	set var(graph,axis,y,grid) $var(grid)
	unset var(grid)
    }
    if {[info exists var(format)]} {
	set var(graph,format) $var(format)
	set var(graph,axis,x,format) $var(format,x)
	set var(graph,axis,y,format) $var(format,y)
	unset var(format)
	unset var(format,x)
	unset var(format,y)
    }

    if {[info exists var(grid,log)]} {
	switch $var(grid,log) {
	    linearlinear {
		set var(graph,axis,x,log) 0
		set var(graph,axis,y,log) 0
	    }
	    linearlog {
		set var(graph,axis,x,log) 0
		set var(graph,axis,y,log) 1
	    }
	    loglinear {
		set var(graph,axis,x,log) 1
		set var(graph,axis,y,log) 0
	    }
	    loglog {
		set var(graph,axis,x,log) 1
		set var(graph,axis,y,log) 1
	    }
	}
	unset var(grid,log)
    }

    $var(graph,proc,updateelement) $varname
    PlotUpdateCanvas $varname
    PlotUpdateGraph $varname

    PlotUpdateMenus $varname
}

proc PlotSaveConfig {varname} {
    upvar #0 $varname var
    global $varname

    PlotSaveConfigFile $varname [SaveFileDialog apconfigfbox]
}

proc PlotSaveConfigFile {varname filename} {
    upvar #0 $varname var
    global $varname

    if {$filename == {}} {
	return
    }

    set ch [open $filename w]

    set analysisplot(graph,title,family) $var(graph,title,family) 
    set analysisplot(graph,title,size) $var(graph,title,size) 
    set analysisplot(graph,title,weight) $var(graph,title,weight) 
    set analysisplot(graph,title,slant) $var(graph,title,slant) 

    set analysisplot(legend) $var(legend)
    set analysisplot(legend,position) $var(legend,position)
    set analysisplot(legend,title,family) $var(legend,title,family)
    set analysisplot(legend,title,size) $var(legend,title,size)
    set analysisplot(legend,title,weight) $var(legend,title,weight)
    set analysisplot(legend,title,slant) $var(legend,title,slant)
    set analysisplot(legend,font,family) $var(legend,font,family)
    set analysisplot(legend,font,size) $var(legend,font,size)
    set analysisplot(legend,font,weight) $var(legend,font,weight)
    set analysisplot(legend,font,slant) $var(legend,font,slant)

    set analysisplot(axis,title,family) $var(axis,title,family) 
    set analysisplot(axis,title,size) $var(axis,title,size) 
    set analysisplot(axis,title,weight) $var(axis,title,weight) 
    set analysisplot(axis,title,slant) $var(axis,title,slant) 

    set analysisplot(axis,font,family) $var(axis,font,family) 
    set analysisplot(axis,font,size) $var(axis,font,size) 
    set analysisplot(axis,font,weight) $var(axis,font,weight)
    set analysisplot(axis,font,slant) $var(axis,font,slant)

    # per Graph
    set analysisplot(graph,title) $var(graph,title) 

    set analysisplot(legend,title) $var(graph,legend,title)

    set analysisplot(axis,x,title) $var(graph,axis,x,title) 
    set analysisplot(axis,x,grid) $var(graph,axis,x,grid)
    set analysisplot(axis,x,log) $var(graph,axis,x,log) 
    set analysisplot(axis,x,flip) $var(graph,axis,x,flip) 
    set analysisplot(axis,x,auto) $var(graph,axis,x,auto)
    set analysisplot(axis,x,min) $var(graph,axis,x,min)
    set analysisplot(axis,x,max) $var(graph,axis,x,max)
    set analysisplot(axis,x,format) $var(graph,axis,x,format)

    set analysisplot(axis,y,title) $var(graph,axis,y,title)
    set analysisplot(axis,y,grid) $var(graph,axis,y,grid)
    set analysisplot(axis,y,log) $var(graph,axis,y,log) 
    set analysisplot(axis,y,flip) $var(graph,axis,y,flip) 
    set analysisplot(axis,y,auto) $var(graph,axis,y,auto)
    set analysisplot(axis,y,min) $var(graph,axis,y,min)
    set analysisplot(axis,y,max) $var(graph,axis,y,max)
    set analysisplot(axis,y,format) $var(graph,axis,y,format)

    # per Dataset
    set analysisplot(show) $var(graph,ds,show)
    set analysisplot(smooth) $var(graph,ds,smooth)
    set analysisplot(color) $var(graph,ds,color)
    set analysisplot(fill) $var(graph,ds,fill)
    set analysisplot(fill,color) $var(graph,ds,fill,color)
    set analysisplot(width) $var(graph,ds,width)
    set analysisplot(dash) $var(graph,ds,dash)

    set analysisplot(shape,symbol) $var(graph,ds,shape,symbol)
    set analysisplot(shape,fill) $var(graph,ds,shape,fill)
    set analysisplot(shape,color) $var(graph,ds,shape,color)

    set analysisplot(error) $var(graph,ds,error)
    set analysisplot(error,cap) $var(graph,ds,error,cap)
    set analysisplot(error,color) $var(graph,ds,error,color)
    set analysisplot(error,width) $var(graph,ds,error,width)

    set analysisplot(bar,relief) $var(graph,ds,bar,relief)

    puts $ch "array set analysisplot \{ [array get analysisplot] \}"
    close $ch
}

