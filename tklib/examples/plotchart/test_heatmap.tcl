# test_heatmap.tcl --
#     Test/demonstrate the heatmap plot facilities
#
pack [canvas .c -width 600 -height 600]

set p [::Plotchart::createHeatmap .c {First Second Third Fourth Fifth} {1 2 3 4 5 6 7 8}]

$p scale values 0 100

$p plot row First {0 10 20 30 40 70 100 100}

$p scale colours red green

$p plot column "1" {200 100 50 30 0}
$p plot cell Fifth "8" 50
