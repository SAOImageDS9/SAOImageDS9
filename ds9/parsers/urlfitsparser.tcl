package provide DS9 1.0

######
# Begin autogenerated taccle (version 1.3) routines.
# Although taccle itself is protected by the GNU Public License (GPL)
# all user-supplied functions are protected by their respective
# author's license.  See http://mini.net/tcl/taccle for other details.
######

namespace eval urlfits {
    variable yylval {}
    variable table
    variable rules
    variable token {}
    variable yycnt 0
    variable yyerr 0
    variable save_state 0

    namespace export yylex
}

proc urlfits::YYABORT {} {
    return -code return 1
}

proc urlfits::YYACCEPT {} {
    return -code return 0
}

proc urlfits::YYERROR {} {
    variable yyerr
    set yyerr 1
}

proc urlfits::yyclearin {} {
    variable token
    variable yycnt
    set token {}
    incr yycnt -1
}

proc urlfits::yyerror {s} {
    puts stderr $s
}

proc urlfits::setupvalues {stack pointer numsyms} {
    upvar 1 1 y
    set y {}
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        set y [lindex $stack $pointer]
        incr pointer
    }
}

proc urlfits::unsetupvalues {numsyms} {
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        unset y
    }
}

array set urlfits::table {
  3:0,target 1
  0:257 reduce
  6:257,target 8
  4:260,target 7
  1:257 reduce
  0:258 reduce
  8:0 reduce
  5:0,target 2
  1:258 reduce
  0:259 shift
  0:260 reduce
  10:0 reduce
  6:260,target 9
  1:260 reduce
  0:261 goto
  11:0 reduce
  4:257 shift
  1:257,target 7
  0:262 goto
  0:258,target 6
  4:258 shift
  0:263 goto
  10:0,target 4
  6:257 shift
  4:260 shift
  1:260,target 7
  0:261,target 2
  7:257 shift
  2:0,target 0
  6:260 shift
  4:258,target 6
  0:263,target 4
  9:257 shift
  7:257,target 10
  0:257,target 6
  9:257,target 11
  2:0 accept
  8:0,target 3
  3:0 reduce
  1:258,target 7
  0:259,target 1
  0:260,target 6
  11:0,target 5
  5:0 reduce
  4:257,target 5
  0:262,target 3
}

array set urlfits::rules {
  0,l 264
  1,l 261
  2,l 262
  3,l 262
  4,l 262
  5,l 262
  6,l 263
  7,l 263
}

array set urlfits::rules {
  5,dc 4
  7,dc 1
  0,dc 1
  2,dc 2
  4,dc 3
  6,dc 0
  1,dc 1
  3,dc 3
}

array set urlfits::rules {
  5,line 25
  7,line 29
  2,line 22
  4,line 24
  6,line 28
  1,line 19
  3,line 23
}

array set urlfits::lr1_table {
  0 {{0 0 0} {1 0 0} {2 0 0} {3 0 0} {4 0 0} {5 0 0} {6 {257 258 260} 0} {7 {257 258 260} 0}}
  1 {{7 {257 258 260} 1}}
  2 {{0 0 1}}
  3 {{1 0 1}}
  4 {{2 0 1} {3 0 1} {4 0 1} {5 0 1}}
  0,trans {{259 1} {261 2} {262 3} {263 4}}
  1,trans {}
  5 {{2 0 2}}
  2,trans {}
  6 {{3 0 2} {5 0 2}}
  3,trans {}
  7 {{4 0 2}}
  8 {{3 0 3}}
  4,trans {{257 5} {258 6} {260 7}}
  10 {{4 0 3}}
  9 {{5 0 3}}
  5,trans {}
  11 {{5 0 4}}
  6,trans {{257 8} {260 9}}
  7,trans {{257 10}}
  8,trans {}
  10,trans {}
  9,trans {{257 11}}
  11,trans {}
}

array set urlfits::token_id_table {
  264,line 30
  262,title {}
  0,t 0
  0 {$}
  263,title {}
  264,title {}
  error,t 0
  error error
  258,line 11
  261,line 18
  error,line 16
  257 STRING_
  257,t 0
  263,line 27
  258 MASK_
  258,t 0
  error,title {}
  260,t 0
  260 SLICE_
  259 NEW_
  259,t 0
  261,t 1
  261 command
  262,t 1
  262 urlfits
  257,line 7
  263,t 1
  263 new
  264,t 1
  264 start'
  260,line 13
  257,title string
  259,line 12
  258,title MASK
  262,line 21
  260,title SLICE
  259,title NEW
  261,title {}
}

proc urlfits::yyparse {} {
    variable yylval
    variable table
    variable rules
    variable token
    variable yycnt
    variable lr1_table
    variable token_id_table
    variable yyerr
    variable save_state

    set yycnt 0
    set state_stack {0}
    set value_stack {{}}
    set token ""
    set accepted 0
    set yyerr 0
    set save_state 0

    while {$accepted == 0} {
        set state [lindex $state_stack end]
        if {$token == ""} {
            set yylval ""
            set token [yylex]
            set buflval $yylval
	    if {$token>0} {
	        incr yycnt
            }
        }
        if {![info exists table($state:$token)] || $yyerr} {
	    if {!$yyerr} {
	        set save_state $state
	    }
            # pop off states until error token accepted
            while {[llength $state_stack] > 0 && \
                       ![info exists table($state:error)]} {
                set state_stack [lrange $state_stack 0 end-1]
                set value_stack [lrange $value_stack 0 \
                                       [expr {[llength $state_stack] - 1}]]
                set state [lindex $state_stack end]
            }
            if {[llength $state_stack] == 0} {
 
	        set rr { }
                if {[info exists lr1_table($save_state,trans)] && [llength $lr1_table($save_state,trans)] >= 1} {
                    foreach trans $lr1_table($save_state,trans) {
                        foreach {tok_id nextstate} $trans {
			    set ss $token_id_table($tok_id,title)
			    if {$ss != {}} {
			        append rr "$ss, "
                            }
                        }
                    }
                }
		set rr [string trimleft $rr { }]
		set rr [string trimright $rr {, }]
                yyerror "parse error, expecting: $rr"


                return 1
            }
            lappend state_stack [set state $table($state:error,target)]
            lappend value_stack {}
            # consume tokens until it finds an acceptable one
            while {![info exists table($state:$token)]} {
                if {$token == 0} {
                    yyerror "end of file while recovering from error"
                    return 1
                }
                set yylval {}
                set token [yylex]
                set buflval $yylval
            }
            continue
        }
        switch -- $table($state:$token) {
            shift {
                lappend state_stack $table($state:$token,target)
                lappend value_stack $buflval
                set token ""
            }
            reduce {
                set rule $table($state:$token,target)
                set ll $rules($rule,l)
                if {[info exists rules($rule,e)]} {
                    set dc $rules($rule,e)
                } else {
                    set dc $rules($rule,dc)
                }
                set stackpointer [expr {[llength $state_stack]-$dc}]
                setupvalues $value_stack $stackpointer $dc
                set _ $1
                set yylval [lindex $value_stack end]
                switch -- $rule {
                    2 { LoadURLFits $2 {} {} }
                    3 { LoadURLFits $3 mask {} }
                    4 { LoadURLFits $3 {} slice }
                    5 { LoadURLFits $4 mask slice }
                    7 { CreateFrame }
                }
                unsetupvalues $dc
                # pop off tokens from the stack if normal rule
                if {![info exists rules($rule,e)]} {
                    incr stackpointer -1
                    set state_stack [lrange $state_stack 0 $stackpointer]
                    set value_stack [lrange $value_stack 0 $stackpointer]
                }
                # now do the goto transition
                lappend state_stack $table([lindex $state_stack end]:$ll,target)
                lappend value_stack $_
            }
            accept {
                set accepted 1
            }
            goto -
            default {
                puts stderr "Internal parser error: illegal command $table($state:$token)"
                return 2
            }
        }
    }
    return 0
}

######
# end autogenerated taccle functions
######

proc urlfits::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}