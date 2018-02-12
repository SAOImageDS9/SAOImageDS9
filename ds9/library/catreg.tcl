#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# catreg -- convert catalog table into region string
proc CATReg {varname row interactive resultname} {
    upvar $resultname result

    upvar #0 $varname var
    global $varname
    global $var(tbldb)
    global $var(symdb)

    # init result
    set result {}

    # How to process each field of a filter
    # -------------------------------------
    # condition: subst/expr
    # shape: constant
    # color: constant
    # width: constant
    # dash: constant
    # font: constant
    # fontsize: constant
    # fontweight: constant
    # fontslant: constant
    # text: subst
    # size1: expr
    # size2: expr
    # units: constant
    # angle: expr

    # valid cols?
    if {$var(colx) == {} || $var(coly) == {}} {
	return
    }
    set colx [starbase_colnum $var(tbldb) $var(colx)]
    set coly [starbase_colnum $var(tbldb) $var(coly)]

    # do we have formats for colx and coly?
    if {[catch {starbase_hdrget $var(tbldb) UFMT} ff]} {
	set ff {}
	global errorInfo
	set errorInfo {}
     }
    set xformat  [lindex $ff 0]
    set yformat [lindex $ff 1]

    # else, do we have T(Units), i.e. votable
    set db $var(tbldb)
    upvar #0 $db T
    if {[info exists T(Unit)]} {
	set xformat [string trim [lindex $T(Unit) [expr $colx-1]] {"}]
	set yformat [string trim [lindex $T(Unit) [expr $coly-1]] {"}]
    }

    # process prologue
    append result "# Region file format: DS9 version 4.0\n"

    # for speed...
    # tbldb
    set nrows [starbase_nrows $var(tbldb)]
    set cols [starbase_columns $var(tbldb)]

    # system
    switch $var(psystem) {
	image -
	physical -
	detector -
	amplifier {set sys $var(psystem)}
	default {set sys "$var(psystem); $var(psky)"}
    }

    # symdb
    set snrows [starbase_nrows $var(symdb)]
    set sncond [starbase_colnum $var(symdb) condition]
    set snshape [starbase_colnum $var(symdb) shape]
    set sncolor [starbase_colnum $var(symdb) color]
    set snwidth [starbase_colnum $var(symdb) width]
    set sndash [starbase_colnum $var(symdb) dash]
    set snfont [starbase_colnum $var(symdb) font]
    set snfontsize [starbase_colnum $var(symdb) fontsize]
    set snfontweight [starbase_colnum $var(symdb) fontweight]
    set snfontslant [starbase_colnum $var(symdb) fontslant]
    set sntext [starbase_colnum $var(symdb) text]
    set snsize [starbase_colnum $var(symdb) size]
    set snsize2 [starbase_colnum $var(symdb) size2]
    set snunits [starbase_colnum $var(symdb) units]
    set snangle [starbase_colnum $var(symdb) angle]

    # for each row in the catalog table ...
    if {[string is integer -strict $row]} {
	set start $row
	set end $row
    } else {
	set start 1
	set end $nrows
    }

    # look for need to eval colnames (only used for conditionals and text
    set doEval 0
    for {set jj 1} {$jj <= $snrows} {incr jj} {
	set cond [starbase_get $var(symdb) $jj $sncond]
	set text [starbase_get $var(symdb) $jj $sntext]
	set sz [starbase_get $var(symdb) $jj $snsize]
	set sz2 [starbase_get $var(symdb) $jj $snsize2]
	set angle [starbase_get $var(symdb) $jj $snangle]
	if {$cond!={} || $text!={} || $sz!={} || $sz2!={} || $angle!={}} {
	    set doEval 1
	}
    }

    for {set ii $start} {$ii <= $end} {incr ii} {
	if {$doEval} {
	    # define each colunm variable
	    foreach col $cols {
		set val [starbase_get $var(tbldb) $ii \
			     [starbase_colnum $var(tbldb) $col]]
		# here's a tough one-- what to do if the col is blank
		# for now, just set it to '0'
		if {[string trim "$val"] == {}} {
		    set val 0
		}
		eval "set \{$col\} \{$val\}"
	    }
	}

	# look through each filter
	for {set jj 1} {$jj <= $snrows} {incr jj} {
	    # eval condition
	    set cond [starbase_get $var(symdb) $jj $sncond]

	    if {$cond != {}} {
		set found 0

		# subst any column vars
		if {[catch {subst $cond} cc]} {
		    Error "Unable to evaluate condition $cc"
		    return
		}
		# evaluate filter
		if {[catch {expr $cc} found]} {
		    Error "Unable to evaluate condition $cc"
		    return
		}
	    } else {
		set found 1
	    }

	    # if not true, goto the next filter
	    if {!$found} {
		continue
	    }

	    # shape
	    set shape [starbase_get $var(symdb) $jj $snshape]
	    if {$shape == {}} {
		set shape circle
	    }

	    # xx
	    set xx [starbase_get $var(tbldb) $ii $colx]
	    switch $xformat {
		{h:m:s} -
		{d:m:s} {set xx [uformat $xformat d $xx]}
	    }

	    # yy
	    set yy [starbase_get $var(tbldb) $ii $coly]
	    if {$yformat == {d:m:s}} {
		set yy [uformat $yformat d $yy]
	    }

	    # size/angle
	    set szcol {}
	    set sz2col {}
	    set angcol {}

	    set units [starbase_get $var(symdb) $jj $snunits]
	    switch -- $units {
		image {set unitval i}
		physical {set unitval p}
		degrees {set unitval d}
		arcmin {set unitval {'}}
		arcsec {set unitval {"}}
		default {set unitval p}
	    }

	    switch -- $shape {
		text -
		point -
		{circle point} -
		{box point} -
		{diamond point} -
		{cross point} -
		{x point} -
		{arrow point} -
		{boxcircle point} {set size {}}

		circle {
		    set sz [starbase_get $var(symdb) $jj $snsize]

		    set szcolnm [string range $sz 1 end]
		    if {[lsearch -exact $cols $szcolnm] != -1} {
			set szcol [starbase_colnum $var(tbldb) $szcolnm]
		    }

		    if {$sz != {}} {
			if {[catch {expr $sz} ss]} {
			    Error "Unable to evaluate size $sz"
			    return
			} else {
			    set sz $ss
			}
		    } else {
			set sz 5
		    }
		    set size "${sz}${unitval}"
		}

		vector {
		    set sz [starbase_get $var(symdb) $jj $snsize]

		    set szcolnm [string range $sz 1 end]
		    if {[lsearch -exact $cols $szcolnm] != -1} {
			set szcol [starbase_colnum $var(tbldb) $szcolnm]
		    }

		    if {$sz != {}} {
			if {[catch {expr $sz} ss]} {
			    Error "Unable to evaluate size $sz"
			    return
			} else {
			    set sz $ss
			}
		    } else {
			set sz 5
		    }

		    set angle [starbase_get $var(symdb) $jj $snangle]

		    set angcolnm [string range $angle 1 end]
		    if {[lsearch -exact $cols $angcolnm] != -1} {
			set angcol [starbase_colnum $var(tbldb) $angcolnm]
		    }

		    if {$angle != {}} {
			if {[catch {expr $angle} aa]} {
			    Error "Unable to evaluate angle $angle"
			    return
			} else {
			    set angle $aa
			}
		    } else {
			set angle 0
		    }

		    set size "${sz}${unitval} ${angle}"
		}

		ellipse -
		box {
		    # size
		    set sz [starbase_get $var(symdb) $jj $snsize]

		    set szcolnm [string range $sz 1 end]
		    if {[lsearch -exact $cols $szcolnm] != -1} {
			set szcol [starbase_colnum $var(tbldb) $szcolnm]
		    }

		    if {$sz != {}} {
			if {[catch {expr $sz} ss]} {
			    Error "Unable to evaluate size $sz"
			    return
			} else {
			    set sz $ss
			}
		    } else {
			set sz 5
		    }

		    # size2
		    set sz2 [starbase_get $var(symdb) $jj $snsize2]

		    set sz2colnm [string range $sz2 1 end]
		    if {[lsearch -exact $cols $sz2colnm] != -1} {
			set sz2col [starbase_colnum $var(tbldb) $sz2colnm]
		    }

		    if {$sz2 != {}} {
			if {[catch {expr $sz2} ss]} {
			    Error "Unable to evaluate size $sz2"
			    return
			} else {
			    set sz2 $ss
			}
		    } else {
			set sz2 5
		    }

		    # angle
		    set angle [starbase_get $var(symdb) $jj $snangle]
		    
		    set angcolnm [string range $angle 1 end]
		    if {[lsearch -exact $cols $angcolnm] != -1} {
			set angcol [starbase_colnum $var(tbldb) $angcolnm]
		    }

		    if {$angle != {}} {
			if {[catch {expr $angle} aa]} {
			    Error "Unable to evaluate angle $angle"
			    return
			} else {
			    set angle $aa
			}
		    } else {
			set angle 0
		    }

		    # put it all together
		    set size "${sz}${unitval} ${sz2}${unitval} ${angle}"
		}
	    }

	    # color
	    set color [starbase_get $var(symdb) $jj $sncolor]
	    if {$color == {}} {
		set color green
	    }

	    # width
	    set width [starbase_get $var(symdb) $jj $snwidth]
	    if {$width == {}} {
		set width 1
	    }

	    # dash
	    set dash [starbase_get $var(symdb) $jj $sndash]
	    if {$dash == {}} {
		set dash 0
	    }


            #font
	    set font [starbase_get $var(symdb) $jj $snfont]
	    if {$font == {}} {
		set font helvetica
	    }
	    set fontsize [starbase_get $var(symdb) $jj $snfontsize]
	    if {$fontsize == {}} {
		set fontsize 10
	    }
	    set fontweight [starbase_get $var(symdb) $jj $snfontweight]
	    if {$fontweight == {}} {
		set fontweight normal
	    }
	    set fontslant [starbase_get $var(symdb) $jj $snfontslant]
	    if {$fontslant == {}} {
		set fontslant roman
	    }

	    # text
	    set text [starbase_get $var(symdb) $jj $sntext]
	    if {$text != {}} {
		if {[catch {subst $text} tt]} {
		    Error "Unable to evaluate text $text"
		    return
		} else {
		    set text $tt
		}
	    }
	    if {$shape == {text} && $text == {}} {
		set text "$ii"
	    }

	    # final substitution and append result
	    # init result for substitutions
	    if {$interactive} {
		if {$var(edit)} {
		    set template "\${sys};\${shape}(\${xx} \${yy} \${size}) # color=\${color} width=\${width} dash=\${dash} font=\{${font} ${fontsize} ${fontweight} ${fontslant}\} text=\{\${text}\} tag={${varname}} tag={${varname}.\${ii}} select=1 edit=1 move=1 rotate=1 delete=1 highlite=0 callback=select CATHighliteCB {${varname}.\${ii}} callback=unselect CATUnhighliteCB {${varname}.\${ii}} callback=edit CATEditCB {${varname}.\${ii}.\${szcol}.\${sz2col}.\${units}.\${angcol}} callback=move CATMoveCB {${varname}.\${ii}} callback=rotate CATRotateCB {${varname}.\${ii}.\${angcol}} callback=delete CATDeleteCB {${varname}.\${ii}}\n"
		} else {
		    set template "\${sys};\${shape}(\${xx} \${yy} \${size}) # color=\${color} width=\${width} dash=\${dash} font=\{${font} ${fontsize} ${fontweight} ${fontslant}\} text=\{\${text}\} tag={${varname}} tag={${varname}.\${ii}} select=0 edit=0 move=0 rotate=0 delete=1 highlite=1 callback=delete CATDeleteCB {${varname}.\${ii}} callback=highlite CATHighliteCB {${varname}.\${ii}} callback=unhighlite CATUnhighliteCB {${varname}.\${ii}}\n"
		}
	    } else {
		set template "\${sys};\${shape}(\${xx} \${yy} \${size}) # color=\${color} width=\${width} dash=\${dash} text=\{\${text}\} tag=$varname\n"
	    }
	    append result [subst $template]

	    # ok, we are done
	    break
	}
    }
}
