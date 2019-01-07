source base.tcl

set w .line
set graph [bltLineGraph $w]

$graph pen create foo -color red -showvalues y -symbol circle -dashes {4 4}
$graph element configure data2 -pen foo

puts stderr "Testing Line Pen..."

bltTest3 $graph pen foo -color yellow $dops
bltTest3 $graph pen foo -dashes {8 3} $dops
bltTest3 $graph pen foo -errorbarcolor green $dops
bltTest3 $graph pen foo -errorbarwidth 2 $dops
bltTest3 $graph pen foo -errorbarcap 10 $dops
bltTest3 $graph pen foo -fill cyan $dops
bltTest3 $graph pen foo -linewidth 3 $dops
bltTest3 $graph pen foo -offdash black $dops
bltTest3 $graph pen foo -outline green $dops
bltTest3 $graph pen foo -outlinewidth 5 $dops
bltTest3 $graph pen foo -pixels 20 $dops
bltTest3 $graph pen foo -showvalues none $dops
bltTest3 $graph pen foo -symbol arrow $dops
bltTest3 $graph pen foo -symbol cross $dops
bltTest3 $graph pen foo -symbol diamond $dops
bltTest3 $graph pen foo -symbol none $dops
bltTest3 $graph pen foo -symbol plus $dops
bltTest3 $graph pen foo -symbol scross $dops
bltTest3 $graph pen foo -symbol splus $dops
bltTest3 $graph pen foo -symbol square $dops
bltTest3 $graph pen foo -symbol triangle $dops
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

