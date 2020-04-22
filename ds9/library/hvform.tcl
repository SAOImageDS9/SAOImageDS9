#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc HVFormCB {varname n cmd args} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVFormCB $varname $n $cmd $args"
    }

    switch -- [string tolower $cmd] {
	form {HVFormForm $varname $n args}
	flush {HVFormFlush $varname $n args}
	input {HVFormInput $varname $n args}
	select {HVFormSelect $varname $n args}
	textarea {HVFormTextArea $varname $n args}
    }
}

proc HVFormForm {varname n a} {
    upvar #0 $varname var
    global $varname
    upvar $a args

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVFormForm $n $args"
    }

    # try to clean up lose vars from previous forms
    HVFormFlush $varname $n {}

    set aa [lindex $args 2]
    set var(form,$n,action) [lindex $args 0]
    set var(form,$n,method) [HVattrs method $aa get]

    if {$debug(tcl,hv)} {
	puts stderr "HVFormForm method $var(form,$n,method)"
	puts stderr "HVFormForm action $var(form,$n,action)"
    }
}

proc HVFormFlush {varname n a} {
    upvar #0 $varname var
    global $varname
    upvar $a args

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVFormFlush $n"
    }

    # unset all var(form,$n,*)
    foreach x [array names $varname "form,$n,*"] {
	unset ${varname}($x)
    }

    bind $var(top) <Return> {}
}

proc HVFormInput {varname n a} {
    upvar #0 $varname var
    global $varname
    upvar $a args

    global debug

    set path [lindex $args 0]
    set attrs [lindex $args 1]
    if {$debug(tcl,hv)} {
	puts stderr "HVFormInput $n $path $attrs"
    }

    set id [lindex [split $path .] end]
    set type [HVattrs type $attrs {}]
    set disabled [HVattrs disabled $attrs normal]
    set readonly [HVattrs readonly $attrs normal]

    switch -- [string tolower $type] {
	checkbox {
	    set name [HVattrs name $attrs var]
	    set value [HVattrs value $attrs on]
	    set checked [HVattrs checked $attrs nochecked]

	    set var(form,$n,name,$id) $name
	    if {$checked != "nochecked"} {
		set var(form,$n,var,$id) $value
	    } else {
		set var(form,$n,var,$id) {}
	    }
	    set var(form,$n,init,$id) $$var(form,$n,var,$id)

	    ttk::checkbutton $path -variable ${varname}(form,$n,var,$id) \
		-onvalue $value -offvalue {} -state $disabled
	}
	radio {
	    set name [HVattrs name $attrs var]
	    # we need this so that all share the same variable
	    set id $name
	    set value [HVattrs value $attrs on]
	    set checked [HVattrs checked $attrs nochecked]

	    set var(form,$n,name,$id) $name
	    if {$checked != "nochecked"} {
		set var(form,$n,var,$id) $value
		set var(form,$n,init,$id) $var(form,$n,var,$id)
	    }

	    # override init value
	    foreach f $var(init) {
		if {$n == [lindex $f 0] && 
		    $name == [lindex $f 1] &&
		    $value == [lindex $f 2]} {

		    set var(form,$n,var,$id) $value
		    set var(form,$n,init,$id) $var(form,$n,var,$id)
		}
	    }

	    ttk::radiobutton $path -variable ${varname}(form,$n,var,$id) \
		-value $value -state $disabled
	}
	button {
	    set name [HVattrs name $attrs submit]
	    set value [HVattrs value $attrs "Submit"]

	    ttk::button $path -text $value \
		-command "HVSubmitForm $varname $n \{$name\} \{$value\}"
	}
	submit {
	    set name [HVattrs name $attrs submit]
	    set value [HVattrs value $attrs "Submit"]

	    ttk::button $path -text $value \
		-command "HVSubmitForm $varname $n \{$name\} \{$value\}"

	    bind $var(top) <Return> \
		"HVSubmitForm $varname $n \{$name\} \{$value\}"
	}
	reset {
	    set name [HVattrs name $attrs reset]
	    set value [HVattrs value $attrs "Reset"]

	    ttk::button $path -text $value -command "HVResetForm $varname $n"
	}
	image {
	    set name [HVattrs name $attrs submit]
	    set value [HVattrs value $attrs "Submit"]
	    set src [HVattrs src $attrs {}]

	    set img [HVImageCB $varname [$var(widget) resolve $src]]
	    if {$img != "$var(images,gray)"} {
		ttk::button $path -image $img \
		    -command "HVSubmitForm $varname $n \{$name\} \{$value\}"
	    } else {
		ttk::button $path -text $value -state $disabled \
		    -command "HVSubmitForm $varname $n \{$name\} \{$value\}"
	    }
	    return
	}
	hidden {
	    set name [HVattrs name $attrs var]
	    set value [HVattrs value $attrs {}]

	    set var(form,$n,name,$id) $name
	    set var(form,$n,var,$id) $value
	}
	password {
	    set name [HVattrs name $attrs var]
	    set value [HVattrs value $attrs {}]
	    set size [HVattrs size $attrs 20]

	    set var(form,$n,name,$id) $name
	    set var(form,$n,var,$id) $value
	    set var(form,$n,init,$id) $var(form,$n,var,$id)

	    ttk::entry $path -textvariable ${varname}(form,$n,var,$id) \
		-width $size -show "*" -state $readonly
	}
	file {
	    set name [HVattrs name $attrs var]
	    set value [HVattrs value $attrs {}]
	    set size [HVattrs size $attrs 20]

	    set var(form,$n,name,$id) $name
	    set var(form,$n,var,$id) [HVInitVar $varname $n $name $value]
	    set var(form,$n,init,$id) $var(form,$n,var,$id)

	    ttk::entry $path -textvariable ${varname}(form,$n,var,$id) \
		-width $size -state $readonly
	}
	text -
	default {
	    set name [HVattrs name $attrs var]
	    set value [HVattrs value $attrs {}]
	    set size [HVattrs size $attrs 20]

	    set var(form,$n,name,$id) $name
	    set var(form,$n,var,$id) [HVInitVar $varname $n $name $value]
	    set var(form,$n,init,$id) $var(form,$n,var,$id)

	    ttk::entry $path -textvariable ${varname}(form,$n,var,$id) \
		-width $size -state $readonly
	}
    }
}

proc HVFormSelect {varname n a} {
    upvar #0 $varname var
    global $varname
    upvar $a args

    global ds9
    global debug

    set path [lindex $args 0]
    set attrs [lindex $args 1]
    set choices [lindex $args 2]
    set initial [lindex $args 3]
    if {$debug(tcl,hv)} {
	puts stderr "HVFormSelect :$n:$path:$attrs:$choices:$initial:"
    }

    set id [lindex [split $path .] end]
    set name [HVattrs name $attrs var]

    set size [HVattrs size $attrs 0]
    set multiple [HVattrs multiple $attrs single]
    if {[string length $multiple] == 0} {
	set multiple multiple
    }

    switch -- $multiple {
	single {
	    set var(form,$n,name,$id) $name

	    ttk::menubutton $path -textvariable ${varname}(form,$n,single,$id) \
		-menu $path.m
	    ThemeMenu $path.m
	    $path.m configure -tearoff 0

	    set l 0
	    set first 1
	    foreach f $choices {
		set i [lindex $f 0]
		set v [lindex $f 1]
		set m [lindex $f 2]
		if {[string length $v] == 0} {
		    set v $m
		}

		if {$i || $first} {
		    set var(form,$n,var,$id) $v
		    set var(form,$n,init,$id) $v
		    set var(form,$n,single,$id) $m
		    set var(form,$n,singleinit,$id) $m
		    set first 0
		}
		
		if {[string length $m]>$l} {
		    set l [string length $m]
		}
		$path.m add command -label $m -command \
		    "upvar #0 $varname var; set var(form,$n,var,$id) \"$v\"; set var(form,$n,single,$id) \"$m\""
	    }

	    # override init value
	    foreach f $var(init) {
		if {$n == [lindex $f 0] && $name == [lindex $f 1]} {
		    set v [lindex $f 2]
		    set m [lindex $f 3]

		    set var(form,$n,var,$id) $v
		    set var(form,$n,init,$id) $v
		    set var(form,$n,single,$id) $m
		    set var(form,$n,singleinit,$id) $m
		}
	    }

	    $path configure -width $l
	}
	multiple {
	    set var(form,$n,name,$id) $name
	    set var(form,$n,multivar,$id) {}
	    set var(form,$n,multiinit,$id) {}
	    set var(form,$n,multimenu,$id) {}

	    set l 0
	    set long {}
	    set ii 0
	    foreach f $choices {
		if {[lindex $f 0]} {
		    lappend var(form,$n,multiinit,$id) $ii
		}
		set foo [lindex $f 1]
		if {[string length $foo] == 0} {
		    set foo [lindex $f 2]
		}
		lappend var(form,$n,multivar,$id) $foo
		lappend var(form,$n,multimenu,$id) [lindex $f 2]

		set m [lindex $f 2]
		if {[string length $m]>$l} {
		    set long $m
		    set l [string length $m]
		}
		incr ii
	    }
	    set var(form,$n,multiple,$id) $path

	    # we have a problem
	    # the frame we create will not resize itself based on the
	    # interior size of the listbox and the scrollbar
	    # so, we need to set the frame size by hand

	    set font "$var(font) $var(font,size) $var(font,weight) $var(font,slant)"
	    ttk::frame $path
	    ttk::scrollbar $path.scroll -command "$path.list yview"
	    listbox $path.list -selectmode multiple \
		-width 0 -height $size \
		-listvar ${varname}(form,$n,multimenu,$id) \
		-font $font \
		-yscroll "$path.scroll set" \
		-exportselection false

	    set w [expr [font measure $font $long]+30]
	    set h [expr $size*[font metrics $font -linespace]]
	    $path configure -width $w -height $h

	    pack $path.list $path.scroll -side left -fill y -expand 1

	    foreach ii $var(form,$n,multiinit,$id) {
		$path.list selection set $ii
	    }
	}
    }
}

proc HVFormTextArea {varname n a} {
    upvar #0 $varname var
    global $varname
    upvar $a args

    set path [lindex $args 0]
    set attrs [lindex $args 1]
    set initial [string range [lindex $args 2] 1 end]
    
    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVFormTextArea $n $path $attrs $initial"
    }

    set id [lindex [split $path .] end]
    set name [HVattrs name $attrs var]

    set rows [HVattrs rows $attrs 4]
    set cols [HVattrs cols $attrs 20]
    set readonly [HVattrs disabled $attrs normal]

    # update initial
    set initial [HVInitVar $varname $n $name $initial]

    text $path -height $rows -width $cols -wrap none -state $readonly
    $path insert end $initial

    set var(form,$n,name,$id) $name
    set var(form,$n,var,$id) $initial
    set var(form,$n,init,$id) $var(form,$n,var,$id)
    set var(form,$n,textarea,$id) $path
}

proc HVattrs {k l def} {
    # break list up into key/value pairs
    set key {}
    set value {}
    set w 1
    foreach f $l {
	if {$w} {
	    lappend key [string tolower $f]
	    set w 0
	} else {
	    lappend value $f
	    set w 1
	}
    }
    set a [lsearch -exact $key [string tolower $k]]
    if {$a>=0} {
	return [lindex $value $a]
    } else {
	return $def
    }
}

proc HVSubmitForm {varname n name value} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVSubmitForm $n"
    }

    bind $var(top) <Return> {}

    # update textareas
    foreach x [array names $varname "form,$n,textarea,*"] {
	set f [split $x ,]
	set id [lindex $f 3]
	set path $var($x)
	set var(form,$n,var,$id) [$path get 1.0 end]
    }

    set query {}
    # append button name=value
    append query "[http::formatQuery $name $value]&"

    # append normal vars
    foreach x [array names $varname "form,$n,var,*"] {
	set f [split $x ,]
	set id [lindex $f 3]
	set v [string trim $var($x)]
	if {[string length $v] != 0} {
	    append query "[http::formatQuery $var(form,$n,name,$id) $v]&"
	}
    }

    # append multiple select
    foreach x [array names $varname "form,$n,multiple,*"] {
	set f [split $x ,]
	set id [lindex $f 3]
	set path $var($x)
	set iii [$path.list curselection]
	foreach ii $iii {
	    set v [string trim [lindex $var(form,$n,multivar,$id) $ii]]
	    if {[string length $v] != 0} {
		append query "[http::formatQuery $var(form,$n,name,$id) $v]&"
	    }
	}
    }

    # remove last '&'
    set query [string trimright $query &]

    HVClearIndex $varname $var(index)

    # and do it
    # already resolved
    switch -- [string tolower $var(form,$n,method)] {
	get {HVLoadURL $varname "$var(form,$n,action)?$query" {} $var(sync)}
	post {HVLoadURL $varname "$var(form,$n,action)" "$query" $var(sync)}
    }
}

proc HVResetForm {varname n} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,hv)} {
	puts stderr "HVResetForm $n"
    }

    foreach x [array names $varname "form,$n,init,*"] {
	set f [split $x ,]
	set var(form,$n,var,[lindex $f 3]) $var($x)
    }

    #update single select
    foreach x [array names $varname "form,$n,singleinit,*"] {
	set f [split $x ,]
	set var(form,$n,single,[lindex $f 3]) $var($x)
    }

    # update multiple select
    foreach x [array names $varname "form,$n,multiinit,*"] {
	set f [split $x ,]
	set path $var(form,$n,multiple,[lindex $f 3])
	$path.list selection clear 0
	foreach ii $var($x) {
	    $path.list selection set $ii
	}
    }

    # update textareas
    foreach x [array names $varname "form,$n,textarea,*"] {
	set f [split $x ,]
	set path $var($x)
	$path delete 1.0 end
	$path insert end $var(form,$n,init,[lindex $f 3])
    }
}

proc HVInitVar {varname n name def} {
    upvar #0 $varname var
    global $varname

    foreach f $var(init) {
	if {$n == [lindex $f 0] && $name == [lindex $f 1]} {
	    return [lindex $f 2]
	}
    }
    return $def
}

proc HVFixHTMLForm {varname} {
    upvar #0 $varname var
    global $varname

    global debug

    if {[regexp -nocase {<form [^>]*} $var(data) r]} {
	if {![regexp -nocase {action=} $r]} {
	    if {$debug(tcl,hv)} {
		puts stderr "HVFixFormHTML action fixed"
	    }
	    
	    set rr "$r action=[$var(widget) cget -base]"
	    regsub -nocase {<form [^>]*} $var(data) $rr var(data)
	}
    }
}
