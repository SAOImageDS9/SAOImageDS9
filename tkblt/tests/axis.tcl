source base.tcl

set w .line
set graph [bltLineGraph $w]

$graph axis configure x -bd 2 -background cyan -title "X\nAxis" -limitsformat "%g"
$graph axis configure y -bd 2 -background cyan -title "Y\nAxis"
bltCmd $graph axis activate y

puts stderr "Testing Axis..."

bltTest3 $graph axis y -activeforeground red $dops
bltTest3 $graph axis y -activerelief sunken $dops
#bltTest3 $graph axis x -autorange 10 $dops
bltTest3 $graph axis x -background yellow $dops
bltTest3 $graph axis x -bg blue $dops
bltTest3 $graph axis x -bindtags {aa} 0
bltTest3 $graph axis y -bd 4 $dops
bltTest3 $graph axis y -borderwidth 4 $dops
#bltTest3 $graph axis x -checklimits $dops
bltTest3 $graph axis x -color red $dops
#bltTest3 $graph axis x -command $dops
bltTest3 $graph axis x -descending yes $dops
bltTest3 $graph axis x -exterior no $dops
bltTest3 $graph axis x -fg magenta $dops
bltTest3 $graph axis x -foreground yellow $dops
bltTest3 $graph axis x -grid no $dops
bltTest3 $graph axis x -gridcolor blue $dops
bltTest3 $graph axis x -griddashes {8 3} $dops
bltTest3 $graph axis x -gridlinewidth 2 $dops
bltTest3 $graph axis x -gridminor no $dops
bltTest3 $graph axis x -gridminorcolor blue $dops
bltTest3 $graph axis x -gridminordashes {8 3} $dops
bltTest3 $graph axis x -gridminorlinewidth 2 $dops
bltTest3 $graph axis x -hide yes $dops
bltTest3 $graph axis x -justify left $dops
bltTest3 $graph axis x -justify center $dops
bltTest3 $graph axis x -justify right $dops
bltTest3 $graph axis x -labeloffset yes $dops
bltTest3 $graph axis x -limitscolor red $dops
bltTest3 $graph axis x -limitsfont {times 18 bold italic} $dops
bltTest3 $graph axis x -limitsformat "%e" $dops
bltTest3 $graph axis x -linewidth 2 $dops
bltTest3 $graph axis x -logscale yes $dops
#bltTest3 $graph axis x -loosemin $dops
#bltTest3 $graph axis x -loosemax $dops
#bltTest3 $graph axis x -majorticks $dops
#bltTest3 $graph axis x -max $dops
#bltTest3 $graph axis x -min $dops
#bltTest3 $graph axis x -minorticks $dops
bltTest3 $graph axis x -relief flat $dops
bltTest3 $graph axis x -relief groove $dops
bltTest3 $graph axis x -relief raised $dops
bltTest3 $graph axis x -relief ridge $dops
bltTest3 $graph axis x -relief solid $dops
bltTest3 $graph axis x -relief sunken $dops
bltTest3 $graph axis x -rotate 45 $dops
#bltTest3 $graph axis x -scrollcommand $dops
#bltTest3 $graph axis x -scrollincrement $dops
#bltTest3 $graph axis x -scrollmax $dops
#bltTest3 $graph axis x -scrollmin $dops
##bltTest3 $graph axis x -shiftby 10 $dops
bltTest3 $graph axis x -showticks no $dops
bltTest3 $graph axis x -stepsize 10 $dops
bltTest3 $graph axis x -subdivisions 4 $dops
##bltTest3 $graph axis x -tickanchor n $dops
bltTest3 $graph axis x -tickfont {times 12 bold italic} $dops
bltTest3 $graph axis x -ticklength 20 $dops
bltTest3 $graph axis x -tickdefault 10 $dops
bltTest3 $graph axis x -title {This is a Title} $dops
bltTest3 $graph axis x -titlealternate yes $dops
bltTest3 $graph axis x -titlecolor yellow $dops
bltTest3 $graph axis x -titlefont {times 24 bold italic} $dops

#bltCmd $graph axis activate foo
#bltCmd $graph axis bind x
bltCmd $graph axis cget x -color
bltCmd $graph axis configure x
bltCmd $graph axis configure x -color
#bltCmd $graph axis create foo
#bltCmd $graph axis deactivate foo
#bltCmd $graph axis delete foo
#bltCmd $graph axis invtransform x
#bltCmd $graph axis limits x
#bltCmd $graph axis margin x
#bltCmd $graph axis names x
#bltCmd $graph axis transform x
#bltCmd $graph axis type x
#bltCmd $graph axis view x

#bltCmd $graph xaxis activate
#bltCmd $graph xaxis bind
bltCmd $graph xaxis cget -color
bltCmd $graph xaxis configure
bltCmd $graph xaxis configure -color
#bltCmd $graph xaxis deactivate
#bltCmd $graph xaxis invtransform
#bltCmd $graph xaxis limits
#bltCmd $graph xaxis transform
#bltCmd $graph xaxis use
#bltCmd $graph xaxis view

puts stderr "done"
bltPlotDestroy $w

