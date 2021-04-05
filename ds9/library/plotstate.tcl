#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Plot State
proc PlotDefState {} {
    global pap
    global ds9

    # per Canvas
    set pap(canvas,theme) 1
    set pap(canvas,foreground) black
    set pap(canvas,background) white
    set pap(canvas,grid,color) gray64

    set pap(canvas,layout) grid
    set pap(canvas,layout,strip,scale) 50

    set pap(canvas,title,family) helvetica
    set pap(canvas,title,size) 12
    set pap(canvas,title,weight) normal
    set pap(canvas,title,slant) roman

    set pap(canvas,legend,title,family) helvetica
    set pap(canvas,legend,title,size) 10
    set pap(canvas,legend,title,weight) normal
    set pap(canvas,legend,title,slant) roman
    set pap(canvas,legend,font,family) helvetica
    set pap(canvas,legend,font,size) 9
    set pap(canvas,legend,font,weight) normal
    set pap(canvas,legend,font,slant) roman

    set pap(canvas,axis,title,family) helvetica
    set pap(canvas,axis,title,size) 9
    set pap(canvas,axis,title,weight) normal
    set pap(canvas,axis,title,slant) roman
    set pap(canvas,axis,font,family) helvetica
    set pap(canvas,axis,font,size) 9
    set pap(canvas,axis,font,weight) normal
    set pap(canvas,axis,font,slant) roman

    # per Graph
    set pap(graph,name) {}
    set pap(graph,title) {}
    set pap(graph,format) 1

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

    # Line
    set pap(graph,ds,line,smooth) linear
    set pap(graph,ds,line,color) black
    set pap(graph,ds,line,width) 1
    set pap(graph,ds,line,dash) 0
    set pap(graph,ds,line,fill) 0
    set pap(graph,ds,line,fill,color) black

    set pap(graph,ds,line,shape,symbol) none
    set pap(graph,ds,line,shape,color) red
    set pap(graph,ds,line,shape,fill) 1

    # Bar
    set pap(graph,ds,bar,border,color) black
    set pap(graph,ds,bar,border,width) 1
    set pap(graph,ds,bar,fill) 1
    set pap(graph,ds,bar,color) black
    set pap(graph,ds,bar,width) 1

    # backward compatibility
    # Scatter
    set pap(graph,ds,scatter,symbol) circle
    set pap(graph,ds,scatter,color) black
    set pap(graph,ds,scatter,fill) 1

    # Error
    set pap(graph,ds,error) 1
    set pap(graph,ds,error,cap) 0
    set pap(graph,ds,error,color) red
    set pap(graph,ds,error,width) 1
}

proc PlotInitGraph {varname} {
    upvar #0 $varname var
    global $varname

    global pap
    array set $varname [array get pap "graph,*"]

    # per Canvas
    # dynamic
    set var(layout,axis,x,title) {}
    set var(layout,axis,x,min) 0
    set var(layout,axis,x,max) 0
    set var(layout,axis,x,grid) 0
    set var(layout,axis,x,log) 0
    set var(layout,axis,x,flip) 0

    # per Graph
    # dynamic
    set var(graph,ds,current) {}
    set var(graph) {}
    set var(graph,tx) 0
    set var(graph,ty) 0
    set var(graph,type) {}
    set var(graph,proc,updateelement) {}
    set var(graph,proc,hightlite) {}
    set var(graph,proc,button) {}
    set var(graph,seq) 0
    set var(graph,dss) {}
    set var(graph,layout,x,manage) 1

    # per DataSet
    # dynamic
    set var(graph,ds,dim) xy
    set var(graph,ds,xdata) {}
    set var(graph,ds,ydata) {}
    set var(graph,ds,xedata) {}
    set var(graph,ds,yedata) {}
}

proc PlotSaveState {varname} {
    upvar #0 $varname var
    global $varname

    # per Graph
    set cc $var(graph,current)

    # dynamic
    set var($cc,graph) $var(graph)
    set var($cc,tx) $var(graph,tx)
    set var($cc,ty) $var(graph,ty)
    set var($cc,type) $var(graph,type)
    set var($cc,proc,updateelement) $var(graph,proc,updateelement)
    set var($cc,proc,highlite) $var(graph,proc,highlite)
    set var($cc,proc,button) $var(graph,proc,button)
    set var($cc,seq) $var(graph,seq)
    set var($cc,dss) $var(graph,dss)
    set var($cc,layout,x,manage) $var(graph,layout,x,manage)

    set var($cc,name) $var(graph,name)
    set var($cc,title) $var(graph,title)
    set var($cc,format) $var(graph,format)

    set var($cc,legend) $var(graph,legend)
    set var($cc,legend,title) $var(graph,legend,title)
    set var($cc,legend,position) $var(graph,legend,position)

    set var($cc,axis,x,title) $var(graph,axis,x,title)
    set var($cc,axis,x,grid) $var(graph,axis,x,grid)
    set var($cc,axis,x,log) $var(graph,axis,x,log)
    set var($cc,axis,x,flip) $var(graph,axis,x,flip)
    set var($cc,axis,x,auto) $var(graph,axis,x,auto)
    set var($cc,axis,x,min) $var(graph,axis,x,min)
    set var($cc,axis,x,max) $var(graph,axis,x,max)
    set var($cc,axis,x,format) $var(graph,axis,x,format)

    set var($cc,axis,y,title) $var(graph,axis,y,title)
    set var($cc,axis,y,grid) $var(graph,axis,y,grid)
    set var($cc,axis,y,log) $var(graph,axis,y,log)
    set var($cc,axis,y,flip) $var(graph,axis,y,flip)
    set var($cc,axis,y,auto) $var(graph,axis,y,auto)
    set var($cc,axis,y,min) $var(graph,axis,y,min)
    set var($cc,axis,y,max) $var(graph,axis,y,max)
    set var($cc,axis,y,format) $var(graph,axis,y,format)

    # per DataSet
    set nn $var(graph,ds,current)

    # dynamic
    set var($cc,$nn,dim) $var(graph,ds,dim)
    set var($cc,$nn,xdata) $var(graph,ds,xdata)
    set var($cc,$nn,ydata) $var(graph,ds,ydata)
    set var($cc,$nn,xedata) $var(graph,ds,xedata)
    set var($cc,$nn,yedata) $var(graph,ds,yedata)

    # Dataset
    set var($cc,$nn,name) $var(graph,ds,name)
    set var($cc,$nn,show) $var(graph,ds,show)

    # Line
    set var($cc,$nn,line,smooth) $var(graph,ds,line,smooth)
    set var($cc,$nn,line,color) $var(graph,ds,line,color)
    set var($cc,$nn,line,width) $var(graph,ds,line,width)
    set var($cc,$nn,line,dash) $var(graph,ds,line,dash)
    set var($cc,$nn,line,fill) $var(graph,ds,line,fill)
    set var($cc,$nn,line,fill,color) $var(graph,ds,line,fill,color)

    set var($cc,$nn,line,shape,symbol) $var(graph,ds,line,shape,symbol)
    set var($cc,$nn,line,shape,color) $var(graph,ds,line,shape,color)
    set var($cc,$nn,line,shape,fill) $var(graph,ds,line,shape,fill)

    # Bar
    set var($cc,$nn,bar,border,color) $var(graph,ds,bar,border,color)
    set var($cc,$nn,bar,border,width) $var(graph,ds,bar,border,width)
    set var($cc,$nn,bar,fill) $var(graph,ds,bar,fill)
    set var($cc,$nn,bar,color) $var(graph,ds,bar,color)
    set var($cc,$nn,bar,width) $var(graph,ds,bar,width)

    # backward compatibility
    # Scatter
    set var($cc,$nn,scatter,symbol) $var(graph,ds,scatter,symbol)
    set var($cc,$nn,scatter,color) $var(graph,ds,scatter,color)
    set var($cc,$nn,scatter,fill) $var(graph,ds,scatter,fill)

    # Error
    set var($cc,$nn,error) $var(graph,ds,error)
    set var($cc,$nn,error,cap) $var(graph,ds,error,cap)
    set var($cc,$nn,error,color) $var(graph,ds,error,color)
    set var($cc,$nn,error,width) $var(graph,ds,error,width)
}

proc PlotRestoreState {varname} {
    upvar #0 $varname var
    global $varname

    # per Graph
    set cc $var(graph,current)

    # dynamic
    set var(graph) $var($cc,graph)
    set var(graph,tx) $var($cc,tx)
    set var(graph,ty) $var($cc,ty)
    set var(graph,type) $var($cc,type)
    set var(graph,proc,updateelement) $var($cc,proc,updateelement)
    set var(graph,proc,highlite) $var($cc,proc,highlite)
    set var(graph,proc,button) $var($cc,proc,button)
    set var(graph,seq) $var($cc,seq)
    set var(graph,dss) $var($cc,dss) 
    set var(graph,layout,x,manage) $var($cc,layout,x,manage)

    set var(graph,name) $var($cc,name)
    set var(graph,title) $var($cc,title)
    set var(graph,format) $var($cc,format)

    set var(graph,legend) $var($cc,legend)
    set var(graph,legend,title) $var($cc,legend,title)
    set var(graph,legend,position) $var($cc,legend,position)

    set var(graph,axis,x,title) $var($cc,axis,x,title)
    set var(graph,axis,x,grid) $var($cc,axis,x,grid)
    set var(graph,axis,x,log) $var($cc,axis,x,log)
    set var(graph,axis,x,flip) $var($cc,axis,x,flip)
    set var(graph,axis,x,auto) $var($cc,axis,x,auto)
    set var(graph,axis,x,min) $var($cc,axis,x,min)
    set var(graph,axis,x,max) $var($cc,axis,x,max)
    set var(graph,axis,x,format) $var($cc,axis,x,format)

    set var(graph,axis,y,title) $var($cc,axis,y,title)
    set var(graph,axis,y,grid) $var($cc,axis,y,grid)
    set var(graph,axis,y,log) $var($cc,axis,y,log)
    set var(graph,axis,y,flip) $var($cc,axis,y,flip)
    set var(graph,axis,y,auto) $var($cc,axis,y,auto)
    set var(graph,axis,y,min) $var($cc,axis,y,min)
    set var(graph,axis,y,max) $var($cc,axis,y,max)
    set var(graph,axis,y,format) $var($cc,axis,y,format)

    # per DataSet
    set nn $var(graph,ds,current)

    # dynamic
    set var(graph,ds,dim) $var($cc,$nn,dim)
    set var(graph,ds,xdata) $var($cc,$nn,xdata)
    set var(graph,ds,ydata) $var($cc,$nn,ydata)
    set var(graph,ds,xedata) $var($cc,$nn,xedata)
    set var(graph,ds,yedata) $var($cc,$nn,yedata)

    # Dataset
    set var(graph,ds,name) $var($cc,$nn,name)
    set var(graph,ds,show) $var($cc,$nn,show) 

    # Line
    set var(graph,ds,line,smooth) $var($cc,$nn,line,smooth) 
    set var(graph,ds,line,color) $var($cc,$nn,line,color) 
    set var(graph,ds,line,width) $var($cc,$nn,line,width) 
    set var(graph,ds,line,dash) $var($cc,$nn,line,dash) 
    set var(graph,ds,line,fill) $var($cc,$nn,line,fill) 
    set var(graph,ds,line,fill,color) $var($cc,$nn,line,fill,color) 

    set var(graph,ds,line,shape,symbol) $var($cc,$nn,line,shape,symbol) 
    set var(graph,ds,line,shape,color) $var($cc,$nn,line,shape,color)
    set var(graph,ds,line,shape,fill) $var($cc,$nn,line,shape,fill) 

    # Bar
    set var(graph,ds,bar,border,color) $var($cc,$nn,bar,border,color) 
    set var(graph,ds,bar,border,width) $var($cc,$nn,bar,border,width) 
    set var(graph,ds,bar,fill) $var($cc,$nn,bar,fill) 
    set var(graph,ds,bar,color) $var($cc,$nn,bar,color) 
    set var(graph,ds,bar,width) $var($cc,$nn,bar,width) 
    
    # backward compatibility
    # Scatter
    set var(graph,ds,scatter,symbol) $var($cc,$nn,scatter,symbol) 
    set var(graph,ds,scatter,color) $var($cc,$nn,scatter,color)
    set var(graph,ds,scatter,fill) $var($cc,$nn,scatter,fill) 
    
    # Error
    set var(graph,ds,error) $var($cc,$nn,error) 
    set var(graph,ds,error,cap) $var($cc,$nn,error,cap) 
    set var(graph,ds,error,color) $var($cc,$nn,error,color) 
    set var(graph,ds,error,width) $var($cc,$nn,error,width) 
}
