source base.tcl

set w .line
set graph [bltLineGraph $w]

$graph axis configure x -title "X\nAxis" -limitsformat "%g"
$graph axis configure y -title "Y\nAxis"

$graph element configure data1 -dash {8 3} -showvalues y -smooth step -symbol circle -outline yellow -outlinewidth 3 -pixels 10 -valuefont "times 14 italic" -valuerotate 45

$graph legend configure -relief raised
$graph xaxis configure -bg cyan -relief raised
$graph configure -relief raised
$graph configure -plotrelief raised

$graph legend selection set data2
$graph legend focus data1
$graph legend configure -selectrelief groove

$graph postscript configure -decorations yes
$graph postscript output foo.ps
$graph postscript configure -decorations no
$graph postscript output bar.ps

#set graph [bltBarGraph $w]

#puts stderr "done"
#bltPlotDestroy $w

