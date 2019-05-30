#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Plot State
proc PlotDefState {} {
    global pap

    # per Canvas
    set pap(graph,bg) white
    set pap(graph,title,family) helvetica
    set pap(graph,title,size) 12
    set pap(graph,title,weight) normal
    set pap(graph,title,slant) roman

    set pap(legend,title,family) helvetica
    set pap(legend,title,size) 10
    set pap(legend,title,weight) normal
    set pap(legend,title,slant) roman
    set pap(legend,font,family) helvetica
    set pap(legend,font,size) 9
    set pap(legend,font,weight) normal
    set pap(legend,font,slant) roman

    set pap(axis,title,family) helvetica
    set pap(axis,title,size) 9
    set pap(axis,title,weight) normal
    set pap(axis,title,slant) roman

    set pap(axis,font,family) helvetica
    set pap(axis,font,size) 9
    set pap(axis,font,weight) normal
    set pap(axis,font,slant) roman

    # per Graph
    set pap(graph,title) {}

    set pap(legend) 0
    set pap(legend,title) Legend
    set pap(legend,position) right

    set pap(axis,x,title) {}
    set pap(axis,x,grid) 1
    set pap(axis,x,log) 0
    set pap(axis,x,flip) 0
    set pap(axis,x,auto) 1
    set pap(axis,x,min) {}
    set pap(axis,x,max) {}
    set pap(axis,x,format) {}

    set pap(axis,y,title) {}
    set pap(axis,y,grid) 1
    set pap(axis,y,log) 0
    set pap(axis,y,flip) 0
    set pap(axis,y,auto) 1
    set pap(axis,y,min) {}
    set pap(axis,y,max) {}
    set pap(axis,y,format) {}

    set pap(bar,mode) normal

    # per DataSet
    set pap(name) {}
    set pap(show) 1
    set pap(smooth) linear
    set pap(color) black
    set pap(fill) 0
    set pap(fill,color) black
    set pap(width) 1
    set pap(dash) 0

    set pap(shape,symbol) none
    set pap(shape,fill) 1
    set pap(shape,color) red

    set pap(error) 1
    set pap(error,cap) 0
    set pap(error,color) red
    set pap(error,width) 1

    set pap(bar,relief) raised
}

proc PlotInitState {varname} {
    upvar #0 $varname var
    global $varname

    global pap

    set cc $var(graph,current)

    # per Graph
    set var(graph$cc,bar,mode) $pap(bar,mode)

    # per DataSet
    set var(graph$cc,name) $pap(name)
    set var(graph$cc,show) $pap(show)
    set var(graph$cc,shape,symbol) $pap(shape,symbol)
    set var(graph$cc,shape,fill) $pap(shape,fill)
    set var(graph$cc,shape,color) $pap(shape,color)
    set var(graph$cc,smooth) $pap(smooth)
    set var(graph$cc,color) $pap(color)
    set var(graph$cc,fill) $pap(fill)
    set var(graph$cc,fill,color) $pap(fill,color)
    set var(graph$cc,width) $pap(width)
    set var(graph$cc,dash) $pap(dash)

    set var(graph$cc,error) $pap(error)
    set var(graph$cc,error,cap) $pap(error,cap)
    set var(graph$cc,error,color) $pap(error,color)
    set var(graph$cc,error,width) $pap(error,width)

    set var(graph$cc,bar,relief) $pap(bar,relief)
}

proc PlotSaveState {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)
    set nn $var(graph$cc,data,current)

    # per DataSet
    set var(graph$cc,$nn,name) $var(graph$cc,name)
    set var(graph$cc,$nn,show) $var(graph$cc,show)
    set var(graph$cc,$nn,smooth) $var(graph$cc,smooth)
    set var(graph$cc,$nn,color) $var(graph$cc,color)
    set var(graph$cc,$nn,fill) $var(graph$cc,fill)
    set var(graph$cc,$nn,fill,color) $var(graph$cc,fill,color)
    set var(graph$cc,$nn,width) $var(graph$cc,width)
    set var(graph$cc,$nn,dash) $var(graph$cc,dash)

    set var(graph$cc,$nn,shape,symbol) $var(graph$cc,shape,symbol)
    set var(graph$cc,$nn,shape,fill) $var(graph$cc,shape,fill)
    set var(graph$cc,$nn,shape,color) $var(graph$cc,shape,color)

    set var(graph$cc,$nn,error) $var(graph$cc,error)
    set var(graph$cc,$nn,error,cap) $var(graph$cc,error,cap)
    set var(graph$cc,$nn,error,color) $var(graph$cc,error,color)
    set var(graph$cc,$nn,error,width) $var(graph$cc,error,width)

    set var(graph$cc,$nn,bar,relief) $var(graph$cc,bar,relief)
}

proc PlotRestoreState {varname nn} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)
    set nn $var(graph$cc,data,current)

    # per DataSet
    set var(graph$cc,name) $var(graph$cc,$nn,name)
    set var(graph$cc,show) $var(graph$cc,$nn,show) 
    set var(graph$cc,smooth) $var(graph$cc,$nn,smooth) 
    set var(graph$cc,color) $var(graph$cc,$nn,color) 
    set var(graph$cc,fill) $var(graph$cc,$nn,fill) 
    set var(graph$cc,fill,color) $var(graph$cc,$nn,fill,color) 
    set var(graph$cc,width) $var(graph$cc,$nn,width) 
    set var(graph$cc,dash) $var(graph$cc,$nn,dash) 

    set var(graph$cc,shape,symbol) $var(graph$cc,$nn,shape,symbol) 
    set var(graph$cc,shape,fill) $var(graph$cc,$nn,shape,fill) 
    set var(graph$cc,shape,color) $var(graph$cc,$nn,shape,color)

    set var(graph$cc,error) $var(graph$cc,$nn,error) 
    set var(graph$cc,error,cap) $var(graph$cc,$nn,error,cap) 
    set var(graph$cc,error,color) $var(graph$cc,$nn,error,color) 
    set var(graph$cc,error,width) $var(graph$cc,$nn,error,width) 

    set var(graph$cc,bar,relief) $var(graph$cc,$nn,bar,relief) 
}
