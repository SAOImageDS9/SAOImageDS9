#==============================================================================
# Creates some images.
#
# Copyright (c) 2011-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Create two images, to be displayed in tablelist cells with boolean values
#
if {$tk_version >= 8.7 || [catch {package require tksvg}] == 0} {
    set fmt $tablelist::svgfmt
    image create photo checkedImg   -file [file join $dir checked.svg] \
	-format $fmt
    image create photo uncheckedImg -file [file join $dir unchecked.svg] \
	-format $fmt
} else {
    set pct $tablelist::scalingpct
    image create photo checkedImg   -file [file join $dir checked$pct.gif] \
	-format gif
    image create photo uncheckedImg -file [file join $dir unchecked$pct.gif] \
	-format gif
}

#
# Create 16 images representing different colors
#
# Declare the variables as global because this
# file might be sourced from within a procedure
#
global colorNames colorValues colors
set colorNames {
    "red" "green" "blue" "magenta"
    "yellow" "cyan" "light gray" "white"
    "dark red" "dark green" "dark blue" "dark magenta"
    "dark yellow" "dark cyan" "dark gray" "black"
}
set colorValues {
    #FF0000 #00FF00 #0000FF #FF00FF
    #FFFF00 #00FFFF #C0C0C0 #FFFFFF
    #800000 #008000 #000080 #800080
    #808000 #008080 #808080 #000000
}
foreach name $colorNames value $colorValues {
    set colors($name) $value
}
set dim  [expr {round(12 * $scaleutil::scalingPct / 100.0)}]
set dim1 [expr {$dim - 1}]
foreach value $colorValues {
    image create photo img$value -height $dim -width $dim
    img$value put gray50 -to 0 0 $dim 1				;# top edge
    img$value put gray50 -to 0 1 1 $dim1			;# left edge
    img$value put gray75 -to 0 $dim1 $dim $dim			;# bottom edge
    img$value put gray75 -to $dim1 1 $dim $dim1			;# right edge
    img$value put $value -to 1 1 $dim1 $dim1			;# interior
}
