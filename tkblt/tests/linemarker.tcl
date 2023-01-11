source base.tcl

set w .line
set bltgr [bltLineGraph $w]

set mm [$bltgr marker create line tt -element data2 \
	    -coords {1 50 1.5 100 1 150} -linewidth 5]
set nn [$bltgr marker create line ss -element data2 \
	    -coords {1 150 .5 100 1 50} -linewidth 2 \
	    -outline green -dashes 4]
$bltgr element configure data1 -hide yes

puts stderr "Testing Line Marker..."

bltTest3 $bltgr marker $mm -bindtags {aa} 0
bltTest3 $bltgr marker $mm -cap round $dops
bltTest3 $bltgr marker $mm -coords {1 50 1.5 100 2 150} $dops
bltTest3 $bltgr marker $mm -dashes {8 3} $dops
bltTest3 $bltgr marker $nn -dashoffset 10 $dops
bltTest3 $bltgr marker $mm -element data1 $dops
bltTest3 $bltgr marker $nn -fill yellow $dops
bltTest3 $bltgr marker $mm -join round $dops
bltTest3 $bltgr marker $mm -linewidth 1 $dops
bltTest3 $bltgr marker $mm -hide yes $dops
bltTest3 $bltgr marker $mm -mapx x2 $dops
bltTest3 $bltgr marker $mm -mapy y2 $dops
bltTest3 $bltgr marker $mm -outline green $dops
bltTest3 $bltgr marker $mm -under yes $dops
bltTest3 $bltgr marker $mm -xoffset 20 $dops
bltTest3 $bltgr marker $mm -yoffset 20 $dops

puts stderr "done"
bltPlotDestroy $w

