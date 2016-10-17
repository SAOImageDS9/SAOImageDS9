source base.tcl

set w .bar
set graph [bltBarGraph $w]

$graph pen create foo -color red -showvalues y
$graph element configure data2 -pen foo

puts stderr "Testing Bar Pen..."

bltTest3 $graph pen foo -background yellow $dops
bltTest3 $graph pen foo -bd 4 $dops
bltTest3 $graph pen foo -bg yellow $dops
bltTest3 $graph pen foo -borderwidth 4 $dops
bltTest3 $graph pen foo -color yellow $dops
bltTest3 $graph pen foo -errorbarcolor green $dops
bltTest3 $graph pen foo -errorbarwidth 2 $dops
bltTest3 $graph pen foo -errorbarcap 10 $dops
bltTest3 $graph pen foo -fg yellow $dops
bltTest3 $graph pen foo -fill cyan $dops
bltTest3 $graph pen foo -foreground green $dops
bltTest3 $graph pen foo -outline red $dops
bltTest3 $graph pen foo -relief flat $dops
bltTest3 $graph pen foo -showerrorbars no $dops
bltTest3 $graph pen foo -showvalues none $dops
bltTest3 $graph pen foo -showvalues x $dops
bltTest3 $graph pen foo -showvalues both $dops
bltTest3 $graph pen foo -valueanchor nw $dops
bltTest3 $graph pen foo -valueanchor n $dops
bltTest3 $graph pen foo -valueanchor ne $dops
bltTest3 $graph pen foo -valueanchor e $dops
bltTest3 $graph pen foo -valueanchor se $dops
bltTest3 $graph pen foo -valueanchor s $dops
bltTest3 $graph pen foo -valueanchor sw $dops
bltTest3 $graph pen foo -valueanchor w $dops
bltTest3 $graph pen foo -valuecolor cyan $dops
bltTest3 $graph pen foo -valuefont {times 18 bold italic} $dops
bltTest3 $graph pen foo -valueformat "%e" $dops
bltTest3 $graph pen foo -valuerotate 45 $dops

bltCmd $graph pen cget foo -color
bltCmd $graph pen configure foo
bltCmd $graph pen configure foo -color
bltCmd $graph pen create bar
bltCmd $graph pen delete bar
bltCmd $graph pen names 
bltCmd $graph pen type foo

puts stderr "done"
bltPlotDestroy $w

