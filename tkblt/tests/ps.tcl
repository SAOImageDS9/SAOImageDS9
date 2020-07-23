source base.tcl

set w .line
set bltgr [bltLineGraph $w]

$bltgr axis configure x -title "X\nAxis" -limitsformat "%g"
$bltgr axis configure y -title "Y\nAxis"

$bltgr element configure data1 -dash {8 3} -showvalues y -smooth step -symbol circle -outline yellow -outlinewidth 3 -pixels 10 -valuefont "times 14 italic" -valuerotate 45

#$bltgr configure -relief raised
#$bltgr configure -plotrelief raised

$bltgr xaxis configure -bg cyan
#$bltgr xaxis configure -bg cyan -relief raised

#$bltgr legend configure -relief raised
#$bltgr legend configure -selectrelief groove
$bltgr legend selection set data2
$bltgr legend focus data1

set scaling 1.475
set ww [expr [winfo width $bltgr]/$scaling]
set hh [expr [winfo height $bltgr]/$scaling]

$bltgr postscript configure -width $ww -height $hh 

$bltgr postscript configure -decorations yes
$bltgr postscript output ds9.ps
#$bltgr postscript configure -decorations no
#$bltgr postscript output ds9-2.ps

puts stderr "done"
#bltPlotDestroy $w

