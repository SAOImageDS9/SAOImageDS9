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

    set cc $var(graph,current)

    if {$filename == {}} {
	return
    }

    source $filename
    #	array set $varname [array get analysisplot]

    set var(graph,bg) $analysisplot(graph,bg)

    set var(graph,title) $analysisplot(graph,title)
    set var(graph,title,family) $analysisplot(graph,title,family)
    set var(graph,title,size) $analysisplot(graph,title,size) 
    set var(graph,title,weight) $analysisplot(graph,title,weight) 
    set var(graph,title,slant) $analysisplot(graph,title,slant) 

    set var(legend) $analysisplot(legend) 
    set var(legend,title) $analysisplot(legend,title) 
    set var(legend,position) $analysisplot(legend,position) 
    set var(legend,title,family) $analysisplot(legend,title,family) 
    set var(legend,title,size) $analysisplot(legend,title,size) 
    set var(legend,title,weight) $analysisplot(legend,title,weight) 
    set var(legend,title,slant) $analysisplot(legend,title,slant) 
    set var(legend,font,family) $analysisplot(legend,font,family) 
    set var(legend,font,size) $analysisplot(legend,font,size) 
    set var(legend,font,weight) $analysisplot(legend,font,weight) 
    set var(legend,font,slant) $analysisplot(legend,font,slant) 

    set var(axis,x,title) $analysisplot(axis,x,title) 
    set var(axis,x,grid) $analysisplot(axis,x,grid) 
    set var(axis,x,log) $analysisplot(axis,x,log) 
    set var(axis,x,flip) $analysisplot(axis,x,flip) 
    set var(axis,x,auto) $analysisplot(axis,x,auto) 
    set var(axis,x,min) $analysisplot(axis,x,min) 
    set var(axis,x,max) $analysisplot(axis,x,max) 
    set var(axis,x,format) $analysisplot(axis,x,format)

    set var(axis,y,title) $analysisplot(axis,y,title) 
    set var(axis,y,grid) $analysisplot(axis,y,grid) 
    set var(axis,y,log) $analysisplot(axis,y,log) 
    set var(axis,y,flip) $analysisplot(axis,y,flip) 
    set var(axis,y,auto) $analysisplot(axis,y,auto) 
    set var(axis,y,min) $analysisplot(axis,y,min) 
    set var(axis,y,max) $analysisplot(axis,y,max) 
    set var(axis,y,format) $analysisplot(axis,y,format) 

    set var(axis,title,family) $analysisplot(axis,title,family) 
    set var(axis,title,size) $analysisplot(axis,title,size) 
    set var(axis,title,weight) $analysisplot(axis,title,weight) 
    set var(axis,title,slant) $analysisplot(axis,title,slant) 

    set var(axis,font,family) $analysisplot(axis,font,family) 
    set var(axis,font,size) $analysisplot(axis,font,size) 
    set var(axis,font,weight) $analysisplot(axis,font,weight) 
    set var(axis,font,slant) $analysisplot(axis,font,slant) 

#    set var(graph$cc,name) {}
    set var(graph$cc,show) $analysisplot(show) 
    set var(graph$cc,smooth) $analysisplot(smooth) 
    set var(graph$cc,color) $analysisplot(color) 
    set var(graph$cc,fill) $analysisplot(fill) 
    set var(graph$cc,fill,color) $analysisplot(fill,color) 
    set var(graph$cc,width) $analysisplot(width) 
    set var(graph$cc,dash) $analysisplot(dash) 

    set var(graph$cc,shape,symbol) $analysisplot(shape,symbol) 
    set var(graph$cc,shape,fill) $analysisplot(shape,fill) 
    set var(graph$cc,shape,color) $analysisplot(shape,color) 

    set var(graph$cc,error) $analysisplot(error) 
    set var(graph$cc,error,cap) $analysisplot(error,cap) 
    set var(graph$cc,error,color) $analysisplot(error,color) 
    set var(graph$cc,error,width) $analysisplot(error,width) 

    set var(graph$cc,bar,relief) $analysisplot(bar,relief) 
    set var(graph$cc,bar,mode) $analysisplot(bar,mode) 

    unset analysisplot

    # backward compatibility
    FixVar ${varname}(axis,x,grid) ${varname}(graph,x,grid)
    FixVar ${varname}(axis,x,log) ${varname}(graph,x,log)
    FixVar ${varname}(axis,x,flip) ${varname}(graph,x,flip)
    FixVar ${varname}(axis,y,grid) ${varname}(graph,y,grid)
    FixVar ${varname}(axis,y,log) ${varname}(graph,y,log)
    FixVar ${varname}(axis,y,flip) ${varname}(graph,y,flip)

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

    FixVar ${varname}(graph$cc,show) ${varname}(linear)
    FixVar ${varname}(graph$cc,shape,color) ${varname}(discrete,color)
    FixVar ${varname}(graph$cc,shape,fill) ${varname}(discrete,fill)
    FixVar ${varname}(graph$cc,width) ${varname}(linear,width)
    FixVar ${varname}(graph$cc,color) ${varname}(linear,color)
    if {[info exists ${varname}(linear,dash)]} {
	set var(linear,dash) [FromYesNo $var(linear,dash)]
    }
    FixVar ${varname}(graph$cc,dash) ${varname}(linear,dash)

    if {[info exists ${varname}(discrete)]} {
	if {$var(discrete)} {
	    FixVar ${varname}(graph$cc,shape,symbol) \
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
	set var(axis,x,grid) $var(grid)
	set var(axis,y,grid) $var(grid)
	unset var(grid)
    }
    if {[info exists var(format)]} {
	set var(graph,format) $var(format)
	set var(axis,x,format) $var(format,x)
	set var(axis,y,format) $var(format,y)
	unset var(format)
	unset var(format,x)
	unset var(format,y)
    }

    if {[info exists var(grid,log)]} {
	switch $var(grid,log) {
	    linearlinear {
		set var(axis,x,log) 0
		set var(axis,y,log) 0
	    }
	    linearlog {
		set var(axis,x,log) 0
		set var(axis,y,log) 1
	    }
	    loglinear {
		set var(axis,x,log) 1
		set var(axis,y,log) 0
	    }
	    loglog {
		set var(axis,x,log) 1
		set var(axis,y,log) 1
	    }
	}
	unset var(grid,log)
    }

    $var(proc,updategraph) $varname
    $var(proc,updateelement) $varname
}

proc PlotSaveConfig {varname} {
    upvar #0 $varname var
    global $varname

    PlotSaveConfigFile $varname [SaveFileDialog apconfigfbox]
}

proc PlotSaveConfigFile {varname filename} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)

    if {$filename == {}} {
	return
    }

    set ch [open $filename w]

    set analysisplot(graph,bg) $var(graph,bg)

    set analysisplot(graph,title) $var(graph,title) 
    set analysisplot(graph,title,family) $var(graph,title,family) 
    set analysisplot(graph,title,size) $var(graph,title,size) 
    set analysisplot(graph,title,weight) $var(graph,title,weight) 
    set analysisplot(graph,title,slant) $var(graph,title,slant) 

    set analysisplot(legend) $var(legend)
    set analysisplot(legend,title) $var(legend,title)
    set analysisplot(legend,position) $var(legend,position)
    set analysisplot(legend,title,family) $var(legend,title,family)
    set analysisplot(legend,title,size) $var(legend,title,size)
    set analysisplot(legend,title,weight) $var(legend,title,weight)
    set analysisplot(legend,title,slant) $var(legend,title,slant)
    set analysisplot(legend,font,family) $var(legend,font,family)
    set analysisplot(legend,font,size) $var(legend,font,size)
    set analysisplot(legend,font,weight) $var(legend,font,weight)
    set analysisplot(legend,font,slant) $var(legend,font,slant)

    set analysisplot(axis,x,title) $var(axis,x,title) 
    set analysisplot(axis,x,grid) $var(axis,x,grid)
    set analysisplot(axis,x,log) $var(axis,x,log) 
    set analysisplot(axis,x,flip) $var(axis,x,flip) 
    set analysisplot(axis,x,auto) $var(axis,x,auto)
    set analysisplot(axis,x,min) $var(axis,x,min)
    set analysisplot(axis,x,max) $var(axis,x,max)
    set analysisplot(axis,x,format) $var(axis,x,format)

    set analysisplot(axis,y,title) $var(axis,y,title)
    set analysisplot(axis,y,grid) $var(axis,y,grid)
    set analysisplot(axis,y,log) $var(axis,y,log) 
    set analysisplot(axis,y,flip) $var(axis,y,flip) 
    set analysisplot(axis,y,auto) $var(axis,y,auto)
    set analysisplot(axis,y,min) $var(axis,y,min)
    set analysisplot(axis,y,max) $var(axis,y,max)
    set analysisplot(axis,y,format) $var(axis,y,format)

    set analysisplot(axis,title,family) $var(axis,title,family) 
    set analysisplot(axis,title,size) $var(axis,title,size) 
    set analysisplot(axis,title,weight) $var(axis,title,weight) 
    set analysisplot(axis,title,slant) $var(axis,title,slant) 

    set analysisplot(axis,font,family) $var(axis,font,family) 
    set analysisplot(axis,font,size) $var(axis,font,size) 
    set analysisplot(axis,font,weight) $var(axis,font,weight)
    set analysisplot(axis,font,slant) $var(axis,font,slant)

#    set analysisplot(name) {}
    set analysisplot(show) $var(graph$cc,show)
    set analysisplot(smooth) $var(graph$cc,smooth)
    set analysisplot(color) $var(graph$cc,color)
    set analysisplot(fill) $var(graph$cc,fill)
    set analysisplot(fill,color) $var(graph$cc,fill,color)
    set analysisplot(width) $var(graph$cc,width)
    set analysisplot(dash) $var(graph$cc,dash)

    set analysisplot(shape,symbol) $var(graph$cc,shape,symbol)
    set analysisplot(shape,fill) $var(graph$cc,shape,fill)
    set analysisplot(shape,color) $var(graph$cc,shape,color)

    set analysisplot(error) $var(graph$cc,error)
    set analysisplot(error,cap) $var(graph$cc,error,cap)
    set analysisplot(error,color) $var(graph$cc,error,color)
    set analysisplot(error,width) $var(graph$cc,error,width)

    set analysisplot(bar,relief) $var(graph$cc,bar,relief)
    set analysisplot(bar,mode) $var(graph$cc,bar,mode)

    puts $ch "array set analysisplot \{ [array get analysisplot] \}"
    close $ch
}

