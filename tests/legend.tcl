source base.tcl

set w .line
set graph [bltLineGraph $w]

$graph legend selection set data2
$graph legend focus data1
$graph legend configure -selectrelief groove

puts stderr "Testing Legend..."

#bltTest2 $graph legend -activebackground $dops
#bltTest2 $graph legend -activeborderwidth $dops
#bltTest2 $graph legend -activeforeground $dops
#bltTest2 $graph legend -activerelief $dops
bltTest2 $graph legend -anchor nw $dops
bltTest2 $graph legend -anchor n $dops
bltTest2 $graph legend -anchor ne $dops
bltTest2 $graph legend -anchor e $dops
bltTest2 $graph legend -anchor se $dops
bltTest2 $graph legend -anchor s $dops
bltTest2 $graph legend -anchor sw $dops
bltTest2 $graph legend -anchor w $dops
bltTest2 $graph legend -bg pink $dops
bltTest2 $graph legend -background cyan $dops
bltTest2 $graph legend -borderwidth 20 $dops
bltTest2 $graph legend -bd 20 $dops
bltTest2 $graph legend -columns 2 $dops
#bltTest2 $graph legend -exportselection $dops
bltTest2 $graph legend -focusdashes "8 3" $dops
bltTest2 $graph legend -focusforeground red $dops
bltTest2 $graph legend -font {times 18 bold italic} $dops
bltTest2 $graph legend -fg yellow $dops
bltTest2 $graph legend -foreground purple $dops
bltTest2 $graph legend -hide yes $dops
bltTest2 $graph legend -ipadx 20 $dops
bltTest2 $graph legend -ipady 20 $dops
#bltTest2 $graph legend -nofocusselectbackground $dops
#bltTest2 $graph legend -nofocusselectforeground $dops
bltTest2 $graph legend -padx 20 $dops
bltTest2 $graph legend -pady 20 $dops
bltTest2 $graph legend -position rightmargin $dops
bltTest2 $graph legend -position leftmargin $dops
bltTest2 $graph legend -position topmargin $dops
bltTest2 $graph legend -position bottommargin $dops
bltTest2 $graph legend -position plotarea $dops
bltTest2 $graph legend -position xy $dops
bltTest2 $graph legend -x 250 $dops
bltTest2 $graph legend -y 100 $dops
bltTest2 $graph legend -raised yes $dops
bltTest2 $graph legend -relief flat $dops
bltTest2 $graph legend -relief groove $dops
bltTest2 $graph legend -relief raised $dops
bltTest2 $graph legend -relief ridge $dops
bltTest2 $graph legend -relief solid $dops
bltTest2 $graph legend -relief sunken $dops
bltTest2 $graph legend -rows 1 $dops
#bltTest2 $graph legend -selectbackground $dops
bltTest2 $graph legend -selectborderwidth 3 $dops
#bltTest2 $graph legend -selectcommand $dops
#bltTest2 $graph legend -selectforeground $dops
#bltTest2 $graph legend -selectmode $dops
bltTest2 $graph legend -selectrelief flat $dops
bltTest2 $graph legend -title "Hello World" $dops
bltTest2 $graph legend -titlecolor red $dops
bltTest2 $graph legend -titlefont {times 24 bold italic} $dops

#bltCmd $graph legend activate
#bltCmd $graph legend bind
bltCmd $graph legend cget -fg
bltCmd $graph legend configure
bltCmd $graph legend configure -fg
#bltCmd $graph legend curselection
#bltCmd $graph legend deactivate
bltCmd $graph legend focus data1
bltCmd $graph legend focus
#bltCmd $graph legend get anchor
#bltCmd $graph legend get current
#bltCmd $graph legend get first
#bltCmd $graph legend get last
#bltCmd $graph legend get end
#bltCmd $graph legend get next.row
#bltCmd $graph legend get next.column
#bltCmd $graph legend get previous.row
#bltCmd $graph legend get previous.column
#bltCmd $graph legend get @100,100
#bltCmd $graph legend get data1
bltCmd $graph legend selection anchor data1
bltCmd $graph legend selection mark data1
bltCmd $graph legend selection includes data2
bltCmd $graph legend selection present
bltCmd $graph legend selection set data1 data2
bltCmd $graph legend selection clear data1 data2
bltCmd $graph legend selection set data1 data2
bltCmd $graph legend selection toggle data1 data2
bltCmd $graph legend selection set data1 data2
bltCmd $graph legend selection clearall

puts stderr "done"
bltPlotDestroy $w

