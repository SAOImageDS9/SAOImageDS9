source base.tcl

set w .line
set graph [bltLineGraph $w]

set mm [$graph marker create line tt -element data1 \
	    -coords {1 50 1.5 100 1 150} -linewidth 5 -bind {aa}]
set nn [$graph marker create line ss -element data1 \
	    -coords {1 150 .5 100 1 50} -linewidth 1 \
	    -outline green -dashes 4]

puts stderr "Testing Marker..."

#bltCmd $graph marker bind aa <Button-1> [list puts "%x %y"]
bltCmd $graph marker cget $mm -cap
bltCmd $graph marker configure $mm
bltCmd $graph marker configure $mm -cap
set foo [$graph marker create line]
bltCmd $graph marker delete $foo
set foo [$graph marker create line foo]
bltCmd $graph marker delete $foo
bltCmd $graph marker exists $mm
bltCmd $graph marker find enclosed 0 0 2 200
bltCmd $graph marker lower $mm
bltCmd $graph marker lower $mm $nn
bltCmd $graph marker names
bltCmd $graph marker raise $mm
bltCmd $graph marker raise $mm $nn
bltCmd $graph marker type $mm

puts stderr "done"
bltPlotDestroy $w

