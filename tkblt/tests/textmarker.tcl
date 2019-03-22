source base.tcl

set w .line
set graph [bltLineGraph $w]

set mm [$graph marker create text tt -element data2 \
	    -coords {1. 112} -text "Text\nMarker" -font {helvetica 24}]
$graph element configure data1 -hide yes

puts stderr "Testing Text Marker..."

bltTest3 $graph marker $mm -anchor nw $dops
bltTest3 $graph marker $mm -anchor n $dops
bltTest3 $graph marker $mm -anchor ne $dops
bltTest3 $graph marker $mm -anchor e $dops
bltTest3 $graph marker $mm -anchor se $dops
bltTest3 $graph marker $mm -anchor s $dops
bltTest3 $graph marker $mm -anchor sw $dops
bltTest3 $graph marker $mm -anchor w $dops
bltTest3 $graph marker $mm -background yellow $dops
bltTest3 $graph marker $mm -bg red $dops
bltTest3 $graph marker $mm -bindtags {aa} 0
bltTest3 $graph marker $mm -coords {1 50} $dops
bltTest3 $graph marker $mm -element data1 $dops
bltTest3 $graph marker $mm -fg cyan $dops
bltTest3 $graph marker $mm -fill yellow $dops
bltTest3 $graph marker $mm -font {times 24 bold italic} $dops
bltTest3 $graph marker $mm -foreground blue $dops
bltTest3 $graph marker $mm -justify left $dops
bltTest3 $graph marker $mm -justify center $dops
bltTest3 $graph marker $mm -justify right $dops
bltTest3 $graph marker $mm -hide yes $dops
bltTest3 $graph marker $mm -mapx x2 $dops
bltTest3 $graph marker $mm -mapy y2 $dops
bltTest3 $graph marker $mm -outline green $dops
bltTest3 $graph marker $mm -rotate 45 $dops
bltTest3 $graph marker $mm -text {Hello World} $dops
bltTest3 $graph marker $mm -under yes $dops
bltTest3 $graph marker $mm -xoffset 20 $dops
bltTest3 $graph marker $mm -yoffset 20 $dops

puts stderr "done"
bltPlotDestroy $w

