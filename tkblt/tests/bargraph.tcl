source base.tcl

set w .bar
set graph [bltBarGraph $w]

puts stderr "Testing Bar Graph..."

# Graph
bltTest $graph -aspect 2 $dops
bltTest $graph -background red $dops
bltTest $graph -barmode stacked $dops
bltTest $graph -barmode aligned $dops
bltTest $graph -barmode overlap $dops
bltTest $graph -barwidth .15 $dops
#bltTest $graph -baseline $dops
bltTest $graph -bd 50 $dops
bltTest $graph -bg green $dops
bltTest $graph -bm 50 $dops
bltTest $graph -borderwidth 50 $dops
bltTest $graph -bottommargin 50 $dops
#bltTest $graph -bufferelements $dops
#bltTest $graph -buffergraph $dops
bltTest $graph -cursor cross $dops
bltTest $graph -fg blue $dops
bltTest $graph -font {times 36 bold italic} $dops
bltTest $graph -foreground cyan $dops
#bltTest $graph -halo $dops
bltTest $graph -height 300 $dops
#bltTest $graph -highlightbackground $dops
#bltTest $graph -highlightcolor $dops
#bltTest $graph -highlightthickness $dops
bltTest $graph -invertxy yes $dops
bltTest $graph -justify left $dops
bltTest $graph -justify center $dops
bltTest $graph -justify right $dops
bltTest $graph -leftmargin 50 $dops
bltTest $graph -lm 50 $dops
bltTest $graph -plotbackground cyan $dops
bltTest $graph -plotborderwidth 50 $dops
bltTest $graph -plotpadx 50 $dops
bltTest $graph -plotpady 50 $dops
bltTest $graph -plotrelief groove $dops
bltTest $graph -relief groove $dops
bltTest $graph -rightmargin 50 $dops
bltTest $graph -rm 50 $dops
#bltTest $graph -searchhalo $dops
#bltTest $graph -searchmode $dops
#bltTest $graph -searchalong $dops
#bltTest $graph -stackaxes $dops
#bltTest $graph -takefocus $dops
bltTest $graph -title "This is a Title" $dops
bltTest $graph -tm 50 $dops
bltTest $graph -topmargin 50 $dops
bltTest $graph -width 300 $dops
bltTest $graph -plotwidth 300 $dops
bltTest $graph -plotheight 300 $dops

##bltCmd $graph axis
bltCmd $graph cget -background
bltCmd $graph configure 
bltCmd $graph configure 
bltCmd $graph configure -background cyan
##bltCmd $graph crosshairs
##bltCmd $graph element
#bltCmd $graph extents
#bltCmd $graph inside
#bltCmd $graph invtransform
##bltCmd $graph legend
##bltCmd $graph marker
##bltCmd $graph pen
##bltCmd $graph postscript
#bltCmd $graph transform
##bltCmd $graph x2axis
##bltCmd $graph xaxis
##bltCmd $graph y2axis
##bltCmd $graph yaxis

puts stderr "done"
bltPlotDestroy $w

