#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Plot State
proc PlotDefState {} {
    global pap

    # per Canvas
    set pap(graph,bg) white
    set pap(bar,mode) normal

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

    set pap(graph,legend) 0
    set pap(graph,legend,title) Legend
    set pap(graph,legend,position) right

    set pap(graph,axis,x,title) {}
    set pap(graph,axis,x,grid) 1
    set pap(graph,axis,x,log) 0
    set pap(graph,axis,x,flip) 0
    set pap(graph,axis,x,auto) 1
    set pap(graph,axis,x,min) {}
    set pap(graph,axis,x,max) {}
    set pap(graph,axis,x,format) {}

    set pap(graph,axis,y,title) {}
    set pap(graph,axis,y,grid) 1
    set pap(graph,axis,y,log) 0
    set pap(graph,axis,y,flip) 0
    set pap(graph,axis,y,auto) 1
    set pap(graph,axis,y,min) {}
    set pap(graph,axis,y,max) {}
    set pap(graph,axis,y,format) {}

    # per DataSet
    set pap(graph,ds,name) {}
    set pap(graph,ds,show) 1
    set pap(graph,ds,smooth) linear
    set pap(graph,ds,color) black
    set pap(graph,ds,fill) 0
    set pap(graph,ds,fill,color) black
    set pap(graph,ds,width) 1
    set pap(graph,ds,dash) 0

    set pap(graph,ds,shape,symbol) none
    set pap(graph,ds,shape,fill) 1
    set pap(graph,ds,shape,color) red

    set pap(graph,ds,error) 1
    set pap(graph,ds,error,cap) 0
    set pap(graph,ds,error,color) red
    set pap(graph,ds,error,width) 1

    set pap(graph,ds,bar,relief) raised
}

proc PlotInitState {varname} {
    upvar #0 $varname var
    global $varname

    global pap

    set cc $var(graph,current)

    # per Canvas
    set var(bar,mode) $pap(bar,mode)

    # per Graph
    set var(graph,title) $pap(graph,title)

    set var(graph,legend) $pap(graph,legend)
    set var(graph,legend,title) $pap(graph,legend,title)
    set var(graph,legend,position) $pap(graph,legend,position)

    set var(graph,axis,x,title) $pap(graph,axis,x,title)
    set var(graph,axis,x,grid) $pap(graph,axis,x,grid)
    set var(graph,axis,x,log) $pap(graph,axis,x,log)
    set var(graph,axis,x,flip) $pap(graph,axis,x,flip)
    set var(graph,axis,x,auto) $pap(graph,axis,x,auto)
    set var(graph,axis,x,min) $pap(graph,axis,x,min)
    set var(graph,axis,x,max) $pap(graph,axis,x,max)
    set var(graph,axis,x,format) $pap(graph,axis,x,format)

    set var(graph,axis,y,title) $pap(graph,axis,y,title)
    set var(graph,axis,y,grid) $pap(graph,axis,y,grid)
    set var(graph,axis,y,log) $pap(graph,axis,y,log)
    set var(graph,axis,y,flip) $pap(graph,axis,y,flip)
    set var(graph,axis,y,auto) $pap(graph,axis,y,auto)
    set var(graph,axis,y,min) $pap(graph,axis,y,min)
    set var(graph,axis,y,max) $pap(graph,axis,y,max)
    set var(graph,axis,y,format) $pap(graph,axis,y,format)

    # per DataSet
    set var(graph,ds,name) $pap(graph,ds,name)
    set var(graph,ds,show) $pap(graph,ds,show)
    set var(graph,ds,smooth) $pap(graph,ds,smooth)
    set var(graph,ds,color) $pap(graph,ds,color)
    set var(graph,ds,fill) $pap(graph,ds,fill)
    set var(graph,ds,fill,color) $pap(graph,ds,fill,color)
    set var(graph,ds,width) $pap(graph,ds,width)
    set var(graph,ds,dash) $pap(graph,ds,dash)

    set var(graph,ds,shape,symbol) $pap(graph,ds,shape,symbol)
    set var(graph,ds,shape,fill) $pap(graph,ds,shape,fill)
    set var(graph,ds,shape,color) $pap(graph,ds,shape,color)

    set var(graph,ds,error) $pap(graph,ds,error)
    set var(graph,ds,error,cap) $pap(graph,ds,error,cap)
    set var(graph,ds,error,color) $pap(graph,ds,error,color)
    set var(graph,ds,error,width) $pap(graph,ds,error,width)

    set var(graph,ds,bar,relief) $pap(graph,ds,bar,relief)
}

proc PlotSaveState {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)
    set nn $var(graph$cc,data,current)

    # per Graph
    set var(graph$cc,title) $var(graph,title)

    set var(graph$cc,legend) $var(graph,legend)
    set var(graph$cc,legend,title) $var(graph,legend,title)
    set var(graph$cc,legend,position) $var(graph,legend,position)

    set var(graph$cc,axis,x,title) $var(graph,axis,x,title)
    set var(graph$cc,axis,x,grid) $var(graph,axis,x,grid)
    set var(graph$cc,axis,x,log) $var(graph,axis,x,log)
    set var(graph$cc,axis,x,flip) $var(graph,axis,x,flip)
    set var(graph$cc,axis,x,auto) $var(graph,axis,x,auto)
    set var(graph$cc,axis,x,min) $var(graph,axis,x,min)
    set var(graph$cc,axis,x,max) $var(graph,axis,x,max)
    set var(graph$cc,axis,x,format) $var(graph,axis,x,format)

    set var(graph$cc,axis,y,title) $var(graph,axis,y,title)
    set var(graph$cc,axis,y,grid) $var(graph,axis,y,grid)
    set var(graph$cc,axis,y,log) $var(graph,axis,y,log)
    set var(graph$cc,axis,y,flip) $var(graph,axis,y,flip)
    set var(graph$cc,axis,y,auto) $var(graph,axis,y,auto)
    set var(graph$cc,axis,y,min) $var(graph,axis,y,min)
    set var(graph$cc,axis,y,max) $var(graph,axis,y,max)
    set var(graph$cc,axis,y,format) $var(graph,axis,y,format)

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

    # per Graph
    set var(graph,title) $var(graph$cc,title)

    set var(graph,legend) $var(graph$cc,legend)
    set var(graph,legend,title) $var(graph$cc,legend,title)
    set var(graph,legend,position) $var(graph$cc,legend,position)

    set var(graph,axis,x,title) $var(graph$cc,axis,x,title)
    set var(graph,axis,x,grid) $var(graph$cc,axis,x,grid)
    set var(graph,axis,x,log) $var(graph$cc,axis,x,log)
    set var(graph,axis,x,flip) $var(graph$cc,axis,x,flip)
    set var(graph,axis,x,auto) $var(graph$cc,axis,x,auto)
    set var(graph,axis,x,min) $var(graph$cc,axis,x,min)
    set var(graph,axis,x,max) $var(graph$cc,axis,x,max)
    set var(graph,axis,x,format) $var(graph$cc,axis,x,format)

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
