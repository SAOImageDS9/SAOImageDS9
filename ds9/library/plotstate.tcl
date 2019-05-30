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
    set pap(graph,ds,name) {}
    set pap(graph,ds,show) 1
    set pap(graph,ds,smooth) linear
    set pap(graph,ds,color) black
    set pap(graph,ds,fill) 0
    set pap(graph,ds,fill,color) black
    set pap(graph,ds,width) 1
    set pap(graph,ds,dash) 0

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
    set var(graph,ds,name) $pap(graph,ds,name)
    set var(graph,ds,show) $pap(graph,ds,show)
    set var(graph,ds,smooth) $pap(graph,ds,smooth)
    set var(graph,ds,color) $pap(graph,ds,color)
    set var(graph,ds,fill) $pap(graph,ds,fill)
    set var(graph,ds,fill,color) $pap(graph,ds,fill,color)
    set var(graph,ds,width) $pap(graph,ds,width)
    set var(graph,ds,dash) $pap(graph,ds,dash)

    set var(graph,ds,shape,symbol) $pap(shape,symbol)
    set var(graph,ds,shape,fill) $pap(shape,fill)
    set var(graph,ds,shape,color) $pap(shape,color)

    set var(graph,ds,error) $pap(error)
    set var(graph,ds,error,cap) $pap(error,cap)
    set var(graph,ds,error,color) $pap(error,color)
    set var(graph,ds,error,width) $pap(error,width)

    set var(graph,ds,bar,relief) $pap(bar,relief)
}

proc PlotSaveState {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)
    set nn $var(graph$cc,data,current)

    # per DataSet
    set var(graph$cc,$nn,name) $var(graph,ds,name)
    set var(graph$cc,$nn,show) $var(graph,ds,show)
    set var(graph$cc,$nn,smooth) $var(graph,ds,smooth)
    set var(graph$cc,$nn,color) $var(graph,ds,color)
    set var(graph$cc,$nn,fill) $var(graph,ds,fill)
    set var(graph$cc,$nn,fill,color) $var(graph,ds,fill,color)
    set var(graph$cc,$nn,width) $var(graph,ds,width)
    set var(graph$cc,$nn,dash) $var(graph,ds,dash)

    set var(graph$cc,$nn,shape,symbol) $var(graph,ds,shape,symbol)
    set var(graph$cc,$nn,shape,fill) $var(graph,ds,shape,fill)
    set var(graph$cc,$nn,shape,color) $var(graph,ds,shape,color)

    set var(graph$cc,$nn,error) $var(graph,ds,error)
    set var(graph$cc,$nn,error,cap) $var(graph,ds,error,cap)
    set var(graph$cc,$nn,error,color) $var(graph,ds,error,color)
    set var(graph$cc,$nn,error,width) $var(graph,ds,error,width)

    set var(graph$cc,$nn,bar,relief) $var(graph,ds,bar,relief)
}

proc PlotRestoreState {varname nn} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)
    set nn $var(graph$cc,data,current)

    # per DataSet
    set var(graph,ds,name) $var(graph$cc,$nn,name)
    set var(graph,ds,show) $var(graph$cc,$nn,show) 
    set var(graph,ds,smooth) $var(graph$cc,$nn,smooth) 
    set var(graph,ds,color) $var(graph$cc,$nn,color) 
    set var(graph,ds,fill) $var(graph$cc,$nn,fill) 
    set var(graph,ds,fill,color) $var(graph$cc,$nn,fill,color) 
    set var(graph,ds,width) $var(graph$cc,$nn,width) 
    set var(graph,ds,dash) $var(graph$cc,$nn,dash) 

    set var(graph,ds,shape,symbol) $var(graph$cc,$nn,shape,symbol) 
    set var(graph,ds,shape,fill) $var(graph$cc,$nn,shape,fill) 
    set var(graph,ds,shape,color) $var(graph$cc,$nn,shape,color)

    set var(graph,ds,error) $var(graph$cc,$nn,error) 
    set var(graph,ds,error,cap) $var(graph$cc,$nn,error,cap) 
    set var(graph,ds,error,color) $var(graph$cc,$nn,error,color) 
    set var(graph,ds,error,width) $var(graph$cc,$nn,error,width) 

    set var(graph,ds,bar,relief) $var(graph$cc,$nn,bar,relief) 
}
