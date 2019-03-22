source base.tcl

set w .line
set graph [bltLineGraph $w]

set mm [$graph marker create polygon tt -element data2 \
	    -coords {1 50 1.5 100 1 150} -linewidth 5]
$graph element configure data1 -hide yes

puts stderr "Testing Polygon Marker..."

bltTest3 $graph marker $mm -bindtags {aa} 0
bltTest3 $graph marker $mm -cap round $dops
bltTest3 $graph marker $mm -coords {1 50 1.5 100 2 150} $dops
bltTest3 $graph marker $mm -dashes {8 3} $dops
bltTest3 $graph marker $mm -element data1 $dops
bltTest3 $graph marker $mm -fill yellow $dops
bltTest3 $graph marker $mm -join round $dops
bltTest3 $graph marker $mm -linewidth 1 $dops
bltTest3 $graph marker $mm -hide yes $dops
bltTest3 $graph marker $mm -mapx x2 $dops
bltTest3 $graph marker $mm -mapy y2 $dops
bltTest3 $graph marker $mm -outline yellow $dops
bltTest3 $graph marker $mm -under yes $dops
bltTest3 $graph marker $mm -xoffset 20 $dops
bltTest3 $graph marker $mm -yoffset 20 $dops

puts stderr "done"
bltPlotDestroy $w

