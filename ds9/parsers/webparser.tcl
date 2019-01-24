package provide DS9 1.0

######
# Begin autogenerated taccle (version 1.3) routines.
# Although taccle itself is protected by the GNU Public License (GPL)
# all user-supplied functions are protected by their respective
# author's license.  See http://mini.net/tcl/taccle for other details.
######

namespace eval web {
    variable yylval {}
    variable table
    variable rules
    variable token {}
    variable yycnt 0
    variable yyerr 0
    variable save_state 0

    namespace export yylex
}

proc web::YYABORT {} {
    return -code return 1
}

proc web::YYACCEPT {} {
    return -code return 0
}

proc web::YYERROR {} {
    variable yyerr
    set yyerr 1
}

proc web::yyclearin {} {
    variable token
    variable yycnt
    set token {}
    incr yycnt -1
}

proc web::yyerror {s} {
    puts stderr $s
}

proc web::setupvalues {stack pointer numsyms} {
    upvar 1 1 y
    set y {}
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        set y [lindex $stack $pointer]
        incr pointer
    }
}

proc web::unsetupvalues {numsyms} {
    for {set i 1} {$i <= $numsyms} {incr i} {
        upvar 1 $i y
        unset y
    }
}

array set web::table {
  1:271,target 6
  17:258 reduce
  0:258 shift
  0:260 reduce
  20:258 reduce
  19:258 reduce
  15:0,target 3
  9:0 reduce
  6:260,target 9
  0:261 reduce
  2:258 shift
  11:0 reduce
  0:262 reduce
  4:258 reduce
  0:264 shift
  1:260,target 9
  15:0 reduce
  6:260 shift
  8:258 shift
  6:261 shift
  0:267 goto
  6:262 shift
  0:270 goto
  0:269 goto
  20:0 reduce
  19:0 reduce
  16:0,target 18
  10:257,target 16
  18:258,target 15
  1:258,target 5
  4:268 goto
  13:258,target 10
  0:264,target 2
  6:272 goto
  10:266,target 20
  17:0,target 14
  12:0 reduce
  9:258,target 12
  0:0,target 4
  4:258,target 2
  16:0 reduce
  10:257 shift
  4:268,target 8
  16:258,target 18
  10:265,target 19
  10:259 shift
  12:258 reduce
  5:262,target 11
  21:0 reduce
  3:0 accept
  5:272,target 12
  18:0,target 15
  14:258 reduce
  11:258,target 13
  10:263 shift
  1:0,target 5
  11:0,target 13
  0:262,target 7
  16:258 reduce
  10:265 shift
  10:266 shift
  18:258 reduce
  1:258 reduce
  7:258,target 14
  1:260 reduce
  5:261,target 10
  21:258 reduce
  1:261 reduce
  1:262 reduce
  20:258,target 16
  19:258,target 17
  13:0 reduce
  9:0,target 12
  0:261,target 7
  2:258,target 7
  20:0,target 16
  19:0,target 17
  10:273 goto
  5:260 shift
  12:0,target 8
  7:258 shift
  5:261 shift
  14:258,target 6
  10:263,target 18
  5:262 shift
  17:0 reduce
  10:273,target 21
  9:258 reduce
  0:0 reduce
  5:260,target 9
  0:260,target 7
  1:271 goto
  0:269,target 4
  0:270,target 5
  4:0 reduce
  21:0,target 11
  3:0,target 0
  13:0,target 10
  5:272 goto
  17:258,target 14
  0:258,target 1
  6:262,target 11
  6:272,target 13
  14:0 reduce
  12:258,target 8
  1:262,target 9
  4:0,target 1
  14:0,target 6
  18:0 reduce
  11:258 reduce
  1:0 reduce
  8:258,target 15
  6:261,target 10
  0:267,target 3
  13:258 reduce
  10:259,target 17
  21:258,target 11
  1:261,target 9
}

array set web::rules {
  9,l 271
  11,l 272
  15,l 273
  2,l 268
  6,l 269
  12,l 272
  16,l 273
  3,l 267
  7,l 270
  13,l 272
  0,l 274
  17,l 273
  4,l 269
  8,l 269
  10,l 269
  14,l 273
  18,l 273
  1,l 267
  5,l 269
}

array set web::rules {
  5,dc 1
  0,dc 1
  17,dc 1
  12,dc 1
  8,dc 2
  3,dc 3
  15,dc 1
  10,dc 3
  6,dc 3
  18,dc 1
  1,dc 1
  13,dc 1
  9,dc 0
  4,dc 0
  16,dc 1
  11,dc 2
  7,dc 0
  2,dc 0
  14,dc 1
}

array set web::rules {
  13,line 39
  2,e 1
  7,line 32
  10,line 34
  4,line 29
  18,line 46
  1,line 25
  15,line 43
  9,line 33
  12,line 38
  7,e 0
  6,line 32
  3,line 26
  17,line 45
  14,line 42
  8,line 33
  11,line 37
  5,line 30
  2,line 25
  9,e 1
  16,line 44
}

array set web::lr1_table {
  13,trans {}
  17 {{14 {0 258} 1}}
  0 {{0 0 0} {1 0 0} {3 0 0} {4 {0 258} 0} {5 {0 258} 0} {6 {0 258} 0} {8 {0 258} 0} {10 {0 258} 0} {7 {260 261 262} 0}}
  14,trans {}
  18 {{15 {0 258} 1}}
  1 {{5 {0 258} 1} {10 {0 258} 1} {9 {260 261 262} 0}}
  15,trans {}
  20 {{16 {0 258} 1}}
  19 {{17 {0 258} 1}}
  2 {{6 {0 258} 1}}
  16,trans {}
  21 {{11 {0 258} 2}}
  3 {{0 0 1}}
  17,trans {}
  4 {{1 0 1} {3 0 1} {2 258 0}}
  0,trans {{258 1} {264 2} {267 3} {269 4} {270 5}}
  18,trans {}
  5 {{8 {0 258} 1} {11 {0 258} 0} {12 {0 258} 0} {13 {0 258} 0}}
  1,trans {{271 6}}
  20,trans {}
  19,trans {}
  6 {{10 {0 258} 2} {11 {0 258} 0} {12 {0 258} 0} {13 {0 258} 0}}
  2,trans {{258 7}}
  21,trans {}
  7 {{6 {0 258} 2}}
  3,trans {}
  4,trans {{268 8}}
  8 {{3 0 2}}
  5,trans {{260 9} {261 10} {262 11} {272 12}}
  10 {{11 {0 258} 1} {14 {0 258} 0} {15 {0 258} 0} {16 {0 258} 0} {17 {0 258} 0} {18 {0 258} 0}}
  9 {{12 {0 258} 1}}
  6,trans {{260 9} {261 10} {262 11} {272 13}}
  11 {{13 {0 258} 1}}
  7,trans {{258 14}}
  12 {{8 {0 258} 2}}
  8,trans {{258 15}}
  13 {{10 {0 258} 3}}
  10,trans {{257 16} {259 17} {263 18} {265 19} {266 20} {273 21}}
  9,trans {}
  14 {{6 {0 258} 3}}
  11,trans {}
  15 {{3 0 3}}
  12,trans {}
  16 {{18 {0 258} 1}}
}

array set web::token_id_table {
  264,line 18
  270,t 1
  269,t 1
  265,title RELOAD
  274,t 1
  261,line 15
  257,t 0
  270,title {}
  269,title {}
  273,line 41
  257,line 7
  262,t 0
  274,title {}
  270,line 32
  269,line 28
  259,title BACK
  260,title CLEAR
  266,t 0
  271,t 1
  264,title NEW
  266,line 20
  error error
  268,title {}
  error,line 23
  258,t 0
  263,line 17
  error,title {}
  273,title {}
  263,t 0
  259,line 13
  260,line 14
  258,title string
  272,line 36
  267,t 1
  263,title FORWARD
  272,t 1
  268,line 25
  267,title {}
  257 INT_
  258 STRING_
  259,t 0
  259 BACK_
  260 CLEAR_
  260,t 0
  272,title {}
  261 CLICK_
  265,line 19
  262 CLOSE_
  263 FORWARD_
  257,title integer
  264 NEW_
  264,t 0
  265 RELOAD_
  262,line 16
  266 STOP_
  267 command
  268,t 1
  268 @PSEUDO1
  262,title CLOSE
  0 {$}
  0,t 0
  274,line 47
  270 @PSEUDO2
  269 web
  271 @PSEUDO3
  error,t 0
  272 webCmd
  258,line 9
  273,t 1
  273 click
  266,title STOP
  274 start'
  271,line 33
  271,title {}
  261,t 0
  267,line 24
  265,t 0
  261,title CLICK
}

proc web::yyparse {} {
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
                    2 { global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT} }
                    4 { WebCmdNew {} }
                    5 { WebCmdNew $1 }
                    6 { WebCmdNew $3 $2 }
                    7 { if {![WebCmdCheck]} {web::YYABORT} }
                    9 { if {![WebCmdRef $1]} {web::YYABORT} }
                    12 { ProcessCmdCVAR0 HVClearCmd }
                    13 { ProcessCmdCVAR0 HVDestroy }
                    14 { ProcessCmdCVAR0 HVBackCmd }
                    15 { ProcessCmdCVAR0 HVForwardCmd }
                    16 { ProcessCmdCVAR0 HVStopCmd }
                    17 { ProcessCmdCVAR0 HVReloadCmd }
                    18 { WebCmdClick $1 }
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

proc web::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}