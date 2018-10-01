#!/usr/bin/tclsh

# $Id: taccle.tcl,v 1.6 2005/03/17 20:42:21 tang Exp $

set TACCLE_VERSION 1.3

# no yydebug
# no YYDEBUG
# no yyerrok
# no YYRECOVERING
# add %define parse.error verbose

#//#
# Taccle is another compiler compiler written in pure Tcl.  reads a
# <em>taccle specification file</em> to generate pure Tcl code that
# implements an LALR(1) parser.  See the {@link README} file for
# complete instructions.  Additional information may be found at
# {@link http://mini.net/tcl/taccle}.
#
# @author Jason Tang (tang@jtang.org)
#//#

# Process a definition on a single line, either a literal block or a
# <code>%</code> directive.
#
# @param line text of a definition
proc handle_defs {line} {
    # trim whitespace and remove any comments
    set line [strip_comments [string trim $line]]
    if {$line == ""} {
        return
    }
    if {$line == "%\{"} {
        handle_literal_block
    } else {
        # extract the keyword to the left of the first space and the
        # arguments (if any) to the right
        if {[regexp -line {^(\S+)\s+(.*)} $line foo keyword args] == 0} {
            set keyword $line
            set args ""
        }
        switch -- $keyword {
            "%token" {
		if {!$::parse_error} {
		    foreach {token_name} [split $args] {
			if {$token_name != ""} {
			    # add the terminal token to the table
			    add_token $token_name $::TERMINAL 0 0 nonassoc
			}
		    }
		} else {
		    foreach {token_name token_title} [split $args] {
			if {$token_name != {}} {
			    # add the terminal token to the table
			    set tt {}
			    if {$token_title != {}} {
				set tt $token_title
			    } else {
				set tt [string trimright $token_name {_}]
			    }
			    add_token $token_name $::TERMINAL 0 0 nonassoc $tt
			}
		    }
		}
            }
            "%left" -
            "%right" -
            "%nonassoc" {
                handle_precedence $::next_precedence [string range $keyword 1 end] $args
                incr ::next_precedence
            }
            "%start" {
                if {$args == ""} {
                    taccle_error "Must supply a token with %start" $::PARAM_ERROR
                }
                set ::start_symbol $args
            }
	    "%define" {
		if {$args == {parse.error verbose}} {
		    set ::parse_error 1
		}
	    }
            default {
                taccle_error "Unknown declaration \"$keyword\"" $::SYNTAX_ERROR
            }
        }
    }
}

# Start reading from the source file and copy everything between ^%\{$
# to ^%\}$ to the destination file.
proc handle_literal_block {} {
    set end_defs 0
    set lines_in_block 0
    while {$end_defs == 0} {
        if {[gets $::src line] < 0} {
            taccle_error "No terminator to verbatim section found " $::SYNTAX_ERROR
        } elseif {[string trim $line] == "%\}"} {
            set end_defs 1
        } else {
            puts $::dest $line
        }
        incr lines_in_block
    }
    incr ::line_count $lines_in_block
}

# Assigns operator precedence to each token in $tokens.  Adds the
# token as a TERMINAL to the token table.
#
# @param level integer value for token precedence
# @param direction direction of precedence, either <var>left</var>,
# <var>right</var>, or <var>nonassoc</var>
# @param tokens list of terminals to which assign precedence
proc handle_precedence {level direction tokens} {
    foreach token $tokens {
        if {[regexp -- {\A\'(.)\'\Z} $token foo c]} {
            add_token $c $::TERMINAL 1 $level $direction
        } else {
            add_token $token $::TERMINAL 0 $level $direction
        }
    }
}

# The nine steps to actually building a parser, given a string buffer
# containing all of the rules.
#
# @param rules_buf a very large string consisting of all of the
# grammar's rules
proc build_parser {rules_buf} {
    # setp 0: parse the entire rules buffer into separate productions
    handle_rules_buf $rules_buf

    # step 1: rewrite the grammar, then augment it
    rewrite_grammar

    # step 2: determine which non-terminals are nullable
    generate_nullable_table
    
    # step 3: generate FIRST table for each element in the token table
    generate_first_table

    # step 4: now generate FOLLOW table for each element
    generate_follow_table

    # step 5: build canonical LR(1) table
    generate_lr1

    # step 6: combine cores into LALR(1) table
    generate_lalr1

    # step 7: wherever there exists a shift/reduce conflict, choose to
    # reduce wherever the precedence table dictates such
    resolve_precedences

    # step 8: check for infinite recursions
    check_recursions
    
    # step 9: finally take LALR(1) table and generate a state
    # transition matrix
    generate_lalr1_parse_table
}

# Parses the rules buffer, extracting each rule and adding
# pseudo-rules wherever embedded actions exist.
#
# @param rules_buf remaining rules to handle
proc handle_rules_buf {rules_buf} {
    # counts number of rules in the grammar
    # rule number 0 is reserved for the special augmentation S' -> S
    set ::rule_count 1
    set prev_lhs ""

    # keep track of pseudo-rules (used for embedded actions)
    set pseudo_count 1

    # add the special end marker
    set ::token_table("\$",t) $::TERMINAL
    set ::token_table("\$") 0
    set ::token_id_table(0) "\$"
    set ::token_id_table(0,t) $::TERMINAL
    set ::prec_table(0) 0
    set ::prec_table(0,dir) nonassoc

    # add the special error token
    add_token error $::TERMINAL 1 0 nonassoc

    while {[string length $rules_buf] > 0} {
        # consume blank lines
        if {[regexp -line -- {\A([[:blank:]]*\n)} $rules_buf foo blanks]} {
            set rules_buf [string range $rules_buf [string length $blanks] end]
            incr ::line_count
            continue
        }
        # extract left hand side
        if {[regexp -line -- {\A\s*(\w+)\s*:} $rules_buf foo lhs]} {
            add_token $lhs $::NONTERMINAL 0 0 nonassoc
            set prev_lhs $lhs
        } elseif {[regexp -line -- {\A\s*\|} $rules_buf foo]} {
            if {$prev_lhs == ""} {
                taccle_error "No previously declared left hand side" $::SYNTAX_ERROR
            }
            set lhs $prev_lhs
        } elseif {[regexp -line -- {\A\s*\Z} $rules_buf]} {
            # only whitespace left
            break
        } else {
            taccle_error "No left hand side found" $::SYNTAX_ERROR
        }
        set rules_buf [string range $rules_buf [string length $foo] end]
        
        # read the rule derivation, which is everything up to a bar or
        # semicolon
        set rhs ""
        set action ""
        set done_deriv 0
        set num_lines 0
        while {$rules_buf != "" && $done_deriv != 1} {
            switch -- [string index $rules_buf 0] {
                |    { set done_deriv 1 }
                ;    {
                    set done_deriv 1
                    set prev_lhs ""
                    set rules_buf [string range $rules_buf 1 end]
                }
                "\n" {
                    incr num_lines
                    append rhs " "
                    set rules_buf [string range $rules_buf 1 end]
                }
                '  {
                    append rhs [string range $rules_buf 0 2]
                    set rules_buf [string range $rules_buf 3 end]
                }
                \{   {
                    # keep scanning until end of action found
                    set a ""
                    set rp 1
                    set found_end 0
                    while {!$found_end && $rp < [string length $rules_buf]} {
                        set c [string index $rules_buf $rp]
                        if {$c == "\}"} {
                            if {[info complete $a]} {
                                set found_end 1
                            } else {
                                append a "\}"
                            }
                        } elseif {$c == "\n"} {
                            append a $c
                            incr num_lines
                        } else {
                            append a $c
                        }
                        incr rp
                    }
                    if {!$found_end} {
                        taccle_error "Unmatched `\{'" $::SYNTAX_ERROR
                    }
                    set action $a
                    set rules_buf [string range $rules_buf $rp end]
                }
                default {
                    set c [string index $rules_buf 0]
                    if {$action != "" && ![string is space $c]} {
                        # embedded action found; add a special rule for it
                        set pseudo_name "@PSEUDO$pseudo_count"
                        add_token $pseudo_name $::NONTERMINAL 0 0 nonassoc
                        set ::rule_table($::rule_count,l) $pseudo_name
                        set ::rule_table($::rule_count,d) ""
                        set ::rule_table($::rule_count,dc) 0
                        set ::rule_table($::rule_count,a) $action
                        set ::rule_table($::rule_count,e) 0
                        set ::rule_table($::rule_count,line) $::line_count
                        append rhs "$pseudo_name "
                        set action ""
                        incr pseudo_count
                        incr ::rule_count
                    } else {
                        append rhs $c
                        set rules_buf [string range $rules_buf 1 end]
                    }
                }
            }
        }
        if {$rules_buf == "" && $done_deriv == 0} {
            taccle_error "Rule does not terminate" $::SYNTAX_ERROR
        }
        set derivation [string trim $rhs]
        set deriv_list ""
        set deriv_count 0
        set prec_next 0
        foreach token [split $derivation] {
            if {$prec_next} {
                # check that argument to %prec is a terminal symbol
                if {![info exists ::token_table($token)] || \
                        $::token_table($token,t) != $::TERMINAL} {
                    taccle_error "Argument to %prec is not a terminal symbol" $::GRAMMAR_ERROR
                }
                set ::rule_table($::rule_count,prec) $::token_table($token)
                set prec_next 0
                continue
            }
            if {$token == "%prec"} {
                set prec_next 1
                continue
            }
            if {[regexp -- {\A\'(.)\'\Z} $token foo c]} {
                add_token $c $::TERMINAL 1 0 nonassoc
                set token $c
            }
            if {$token != ""} {
                if {[string range $token 0 6] == "@PSEUDO"} {
                    set ::rule_table([expr {$::rule_count - 1}],e) $deriv_count
                }
                
                lappend deriv_list $token
                incr deriv_count
            }
        }
        if {$prec_next} {
            taccle_error "%prec modifier has no associated terminal symbol" $::PARAM_ERROR
        }
        incr ::line_count $num_lines
        set ::rule_table($::rule_count,l) $lhs
        set ::rule_table($::rule_count,d) $deriv_list
        set ::rule_table($::rule_count,dc) [llength $deriv_list]
        set ::rule_table($::rule_count,a) $action
        set ::rule_table($::rule_count,line) $::line_count
        incr ::rule_count
    }
}

# Post-process the grammar by augmenting it and and replacing all
# tokens with their id values.
proc rewrite_grammar {} {
    set ::rule_table(0,l) "start'"    
    if {[info exists ::start_symbol]} {
        if {![info exists ::token_table($::start_symbol)]} {
            taccle_error "Token given by %start does not exist" $::PARAM_ERROR
        }
        if {$::token_table($::start_symbol,t) == $::TERMINAL} {
            taccle_error "Token given by %start is a terminal." $::PARAM_ERROR
        }
        set ::rule_table(0,d) $::start_symbol
    } else {
        set ::rule_table(0,d) $::rule_table(1,l)
    }
    set ::rule_table(0,dc) 1
    set ::rule_table(0,prec) 0
    set ::start_token_id [add_token "start'" $::NONTERMINAL 0 0 nonassoc]
    set ::token_list [lsort -command tokid_compare $::token_list]

    # now go through grammar and replace all token names with their id
    # number
    for {set i 0} {$i < $::rule_count} {incr i} {
        set ::rule_table($i,l) $::token_table($::rule_table($i,l))
        set new_deriv_list ""
        foreach deriv $::rule_table($i,d) {
            if {![info exists ::token_table($deriv)]} {
                taccle_error "Symbol $deriv used, but is not defined as a token and has no rules." $::GRAMMAR_ERROR
            }
            lappend new_deriv_list $::token_table($deriv)
        }
        set ::rule_table($i,d) $new_deriv_list
        # set the rule's precedence only if it was not already specified
        if {![info exist ::rule_table($i,prec)]} {
            set ::rule_table($i,prec) [get_prec $new_deriv_list]
        }
    }
    
    # check for unused tokens
    set used_list [concat "error" [recurse_dfs $::start_token_id ""]]
    foreach tok_id $::token_list {
        if {[lsearch -exact $used_list $tok_id] == -1} {
            taccle_warn "Token $::token_id_table($tok_id) unused."
        } else {
            lappend ::used_token_list $tok_id
        }
    }
    # add to the used token list {$} but /not/ start'
    set ::used_token_list [concat [lrange $::used_token_list 0 end-1] \
                               $::token_table("\$")]
}

# Determine which non-terminals are nullable.  Any terminal which can
# be simplified to just an epsilon transition is nullable.
proc generate_nullable_table {} {
    set nullable_found 1
    while {$nullable_found} {
        set nullable_found 0
        foreach tok_id $::token_list {
            if {[info exist ::nullable_table($tok_id)]} {
                continue
            }
            if {$::token_id_table($tok_id,t) == $::TERMINAL} {
                set ::nullable_table($tok_id) 0
                continue
            }            
            for {set i 0} {$i < $::rule_count} {incr i} {
                set lhs $::rule_table($i,l)
                if {$lhs != $tok_id} {
                    continue
                }
                set rhs [lindex $::rule_table($i,d) 0]
                if {$rhs == ""} {
                    set ::nullable_table($lhs) 1
                    set nullable_found 1
                } else {
                    set nullable 0
                    foreach r $rhs {
                        if {[info exists ::nullable_table($r)]} {
                            set nullable $::nullable_table($r)
                            break
                        }
                    }
                    if {$nullable} {
                        set ::nullable_table($lhs) 1
                        set nullable_found 1
                    }
                }
            }
        }
    }
    foreach tok_id $::token_list {
        if {![info exist ::nullable_table($tok_id)]} {
            set ::nullable_table($tok_id) 0
        }
    }
}

# Generate the table of FIRST symbols for the grammar.
proc generate_first_table {} {
    foreach tok_id $::token_list {
        generate_first_recurse $tok_id ""
    }
}

# Recursively calculates the FIRST set for a given token, handling
# nullable terminals as well.
#
# @param tok_id id of token to generate FIRST set
# @param history list of tokens already examined
# @return list of tokens (including -1 for epsilon) in tok_id's FIRST set
proc generate_first_recurse {tok_id history} {
    if {[lsearch -exact $history $tok_id] >= 0} {
        return ""
    }
    if {[info exists ::first_table($tok_id)]} {
        return $::first_table($tok_id)
    }
    if {$::token_id_table($tok_id,t) == $::TERMINAL} {
        set ::first_table($tok_id) $tok_id
        return $tok_id
    }
    # FIRST = union of all first non-terminals on rhs.  if a
    # non-terminal is nullable, then add FIRST of the following
    # terminal to the FIRST set.  keep repeating while nullable.
    set first_union ""
    for {set i 0} {$i < $::rule_count} {incr i} {
        set lhs $::rule_table($i,l)
        if {$lhs != $tok_id} {
            continue
        }
        if {$::rule_table($i,dc) == 0} {
            # empty rule, so add the special epsilon marker -1 to the FIRST set
            lappend first_union -1
        } else {
            foreach r $::rule_table($i,d) {
                lconcat first_union [generate_first_recurse $r [concat $history $tok_id]]
                if {$::nullable_table($r) == 0} {
                    break
                }
            }
        }
    }
    set ::first_table($tok_id) [lsort -increasing -unique $first_union]
    return $first_union
}

# Generate the table of FOLLOW symbols for the grammar.
proc generate_follow_table {} {
    set ::follow_table($::token_table(start')) $::token_table("\$")
    foreach tok_id $::token_list {
        generate_follow_recurse $tok_id ""
    }
}

# Recursively calculates the FOLLOW set for a given token, handling
# nullable terminals as well.
#
# @param tok_id id of token to generate FOLLOW set
# @param history list of tokens already examined
# @return list of tokens in tok_id's FOLLOW set
proc generate_follow_recurse {tok_id history} {
    if {[lsearch -exact $history $tok_id] >= 0} {
        return ""
    }
    if {[info exists ::follow_table($tok_id)]} {
        return $::follow_table($tok_id)
    }
    set follow_union ""
    for {set i 0} {$i < $::rule_count} {incr i} {
        # if the token is on the rhs of the rule then FOLLOW includes
        # the FIRST of the token following it; if at end of rule (or
        # can be derived to end of rule) then FOLLOW includes the
        # FOLLOW of the lhs
        set rhs $::rule_table($i,d)
        for {set j [expr {$::rule_table($i,dc) - 1}]} {$j >= 0} {incr j -1} {
            set r [lindex $rhs $j]
            if {$r != $tok_id} {
                continue
            }
            set k [expr {$j + 1}]
            set gamma [lindex $rhs $k]
            if {$gamma != ""} {
                lconcat follow_union [all_but_eps $::first_table($gamma)]
            }
            set at_end_of_list 1
            while {$k < $::rule_table($i,dc)} {
                if {![has_eps $::first_table([lindex $rhs $k])]} {
                    set at_end_of_list 0
                    break
                }
                incr k
            }
            if {$at_end_of_list} {
                set lhs $::rule_table($i,l)
                lconcat follow_union [generate_follow_recurse $lhs [concat $history $tok_id]]
            }
        }
    }
    set ::follow_table($tok_id) [lsort -increasing -unique $follow_union]
    return $follow_union
}

# Construct a canonical LR(1) by taking the start rule (rule 0) and
# successively adding closures/states until no more new states.
proc generate_lr1 {} {
    # first add start rule to the closure list
    set first_item [list [list 0 $::token_table("\$") 0]]
    set first_closure [add_closure $first_item 0 1]
    set ::lr1_table(0) [concat $first_item $first_closure]
    
    # used to keep count of total number of states produced by LR(1)
    set ::next_lr1_state 1
    
    # keep generating items until none remain
    for {set state_pointer 0} {$state_pointer < $::next_lr1_state} {incr state_pointer} {        
        # iterate through each token, adding transitions to new state(s)
        set trans_list ""
        set oldclosure_list $::lr1_table($state_pointer)
        foreach tok_id $::token_list {
            set todo_list ""
            set working_list ""
            foreach item $oldclosure_list {
                foreach {rule lookahead position} $item {}
                if {$position >= $::rule_table($rule,dc)} {
                    # at end of rule; don't expand (and remove it
                    # from the list)
                    continue
                }
                set nexttoken [lindex $::rule_table($rule,d) $position]
                if {$nexttoken == $tok_id} {
                    # item's next token matches the one currently
                    # saught; add it to the working list
                    lappend working_list $item
                } else {
                    # item was not used yet -- add it back to the
                    # todo list
                    lappend todo_list $item
                }
            }
            set oldclosure_list $todo_list
            if {$working_list != ""} {
                set new_closure ""
                foreach item $working_list {
                    # move pointer ahead to the next position
                    foreach {rule lookahead position} $item {}
                    incr position
                    set newitem [list $rule $lookahead $position]
                    lappend new_closure $newitem
                }
                set new_closure [concat $new_closure \
                                     [add_closure $new_closure 0 [llength $working_list]]]
                # add a transition out of this state -- to a
                # previously examined state if possible, or else
                # create a new state with my new closure
                set next_state -1
                for {set i 0} {$i < $::next_lr1_state} {incr i} {
                    if {[lsort $::lr1_table($i)] == [lsort $new_closure]} {
                        set next_state $i
                        break
                    }
                }
                if {$next_state == -1} {
                    # create a new state
                    set ::lr1_table($::next_lr1_state) $new_closure
                    lappend trans_list [list $tok_id $::next_lr1_state]
                    incr ::next_lr1_state
                } else {
                    # reuse existing state
                    lappend trans_list [list $tok_id $next_state]
                }

            }
        }
        set ::lr1_table($state_pointer,trans) [lsort -command tokid_compare -index 0 $trans_list]
    }
}

# Successively add closures from LR(1) table to LALR(1) table merging
# kernels with similar cores.
proc generate_lalr1 {} {
    for {set i 0} {$i < $::next_lr1_state} {incr i} {
        # as matching closures are found change their mapping here
        set state_mapping_table($i) $i
    }
    # go through all elements of LR(1) table and generate their cores.
    # this will make future comparisons easier.
    for {set i 0} {$i < $::next_lr1_state} {incr i} {
        set core ""
        foreach item $::lr1_table($i) {
            lappend core [list [lindex $item 0] [lindex $item 2]]
        }
        set core_table($i) [lsort $core]
    }
    lappend new_lalr_states(0) 0
    for {set i 1} {$i < $::next_lr1_state} {incr i} {
        set found_matching 0
        for {set j 0} {$j < $i} {incr j} {
            if {$core_table($i) == $core_table($j)} {
                # found a matching core -- change its mapping
                set state_mapping_table($i) $state_mapping_table($j)
                # because this state is being eliminated, shuffle all
                # future states down one
                for {set k [expr {$i + 1}]} {$k < $::next_lr1_state} {incr k} {
                    incr state_mapping_table($k) -1
                }
                # merge state $i into state $j
                lappend new_lalr_states($j) $i
                set found_matching 1
                break
            }
        }
        if {!$found_matching} {
            lappend new_lalr_states($i) $i
        }
    }
    # now copy items from LR(1) table to LALR(1) table
    set ::next_lalr1_state 0
    for {set i 0} {$i < $::next_lr1_state} {incr i} {
        if {![info exists new_lalr_states($i)]} {
            # state no longer exists (it got merged into another one)
            continue
        }
        # first merge together all lookaheads
        set ::lalr1_table($::next_lalr1_state) $::lr1_table([lindex $new_lalr_states($i) 0])
        foreach state [lrange $new_lalr_states($i) 1 end] {
          set ::lalr1_table($::next_lalr1_state) \
              [merge_closures $::lalr1_table($::next_lalr1_state) $::lr1_table($state)]
        }
        # now rewrite the transition table
        foreach trans $::lr1_table($i,trans) {
            foreach {symbol new_state} $trans {}
            lappend ::lalr1_table($::next_lalr1_state,trans) \
                [list $symbol $state_mapping_table($new_state)]
        }
        incr ::next_lalr1_state
    }
}

# Takes the LALR(1) table and resolves precedence issues by removing
# transitions whenever the precedence values indicate a reduce instead
# of a shift.
proc resolve_precedences {} {
    for {set i 0} {$i < $::next_lalr1_state} {incr i} {
        # scan through all kernel items that are at the end of their
        # rule.  for those, use the precedence table to decide to keep
        # a transition (a shift) or not (a reduce)
        foreach item $::lalr1_table($i) {
            foreach {rule lookahead position} $item {}
            if {$position < $::rule_table($rule,dc) || \
                    ![info exist ::lalr1_table($i,trans)]} {
                continue
            }
            set rule_prec_tok $::rule_table($rule,prec)
            set rule_prec_level $::prec_table($rule_prec_tok)
            set rule_prec_dir $::prec_table($rule_prec_tok,dir)
            set new_trans ""
            foreach trans $::lalr1_table($i,trans) {
                set trans_tok [lindex $trans 0]
                if {[lsearch $lookahead $trans_tok] == -1} {
                    lappend new_trans $trans
                    continue
                }
                set trans_tok_level $::prec_table($trans_tok)
                set trans_tok_dir $::prec_table($trans_tok,dir)
                if {$rule_prec_dir == "nonassoc" || \
                        $trans_tok_dir == "nonassoc" || \
                        $rule_prec_level < $trans_tok_level || \
                        ($rule_prec_level == $trans_tok_level && $rule_prec_dir == "right")} {
                    # precedence says to shift, so keep this transition
                    lappend new_trans $trans
                } else {
                    taccle_warn "Conflict in state $i between rule $rule and token \"$trans_tok\", resolved as reduce."
                }
            }
            set ::lalr1_table($i,trans) $new_trans
        }
    }
}

# Check if the grammar contains any infinite recursions.
proc check_recursions {} {
    set cleared ""
    for {set i 0} {$i < $::next_lalr1_state} {incr i} {
        if {[lsearch -exact $cleared $i] >= 0} {
            continue
        }
        set cleared [get_cleared $i {} $cleared]
    }
}

# Recursively performs a DFS search through the LALR(1) table to check
# for cycles.  In each node check if the position is at the end of any
# rule; this marks the node is "reducible" and it is added to the
# 'cleared' list.  Otherwise recurse on each terminal transitioning
# out of this state.  If a state and all of its transitions are not
# reducible then abort with an error.
#
# @param state which state within the LALR(1) table to examine
# @param history a list of states so far examined on this pass
# @param cleared a list of states which have already been verified as reducible
#
# @return a new cleared list, or an empty list of this state is not reducible
proc get_cleared {state history cleared} {
    if {[lsearch -exact $cleared $state] >= 0} {
        return $cleared
    }
    if {[lsearch -exact $history $state] >= 0} {
        return {}
    }
    # check if any items in this closure are reducible; if so then
    # this state passes
    set token -1
    foreach item $::lalr1_table($state) {
        foreach {rule lookahead position} $item {}
        if {$position == $::rule_table($rule,dc)} {
            return [concat $cleared $state]
        }
        if {$position == 0} {
            set token $::rule_table($rule,l)
        }
    }
    # recursively check all terminals transitioning out of this state;
    # if none of the new states eventually reduce then report this as
    # a cycle
    foreach trans $::lalr1_table($state,trans) {
        foreach {tok_id nextstate} $trans {}
        if {$::token_id_table($tok_id,t) == $::TERMINAL} {
            set retval [get_cleared $nextstate [concat $history $state] $cleared]
            if {[llength $retval] > 0} {
                return [concat $retval $state]
            }
        }
    }
    if {$token == -1} {
        puts stderr "OOPS: should not have gotten here!"
        exit -1
    }
    set ::line_count $::rule_table($rule,line)
    taccle_error "Token $::token_id_table($token) appears to recurse infinitely" $::GRAMMAR_ERROR
}

# Takes the LALR(1) table and generates the LALR(1) transition table.
# For terminals do a shift to the new state.  For non-terminals reduce
# when the next token is a lookahead.  Detect shift/reduce conflicts;
# resolve by giving precedence to shifting.  Detect reduce/reduce
# conflicts and resolve by reducing to the first rule found.
proc generate_lalr1_parse_table {} {
    for {set i 0} {$i < $::next_lalr1_state} {incr i} {        
        foreach item $::lalr1_table($i) {
            foreach {rule lookahead position} $item {}
            if {$position >= $::rule_table($rule,dc)} {
                if {$rule == 0} {
                    set command "accept"
                } else {
                    set command "reduce"
                }
                set token_list $lookahead
                # target for a reduce/accept is which rule to use
                # while accepting
                set target $rule
            } else {
                set token [lindex $::rule_table($rule,d) $position]
                if {$::token_id_table($token,t) == $::TERMINAL} {
                    set command "shift"
                } else {
                    set command "goto"
                }
                set token_list [list $token]
                # target for a shift/goto is the new state to move to
                set target ""
                foreach trans $::lalr1_table($i,trans) {
                    foreach {tok_id nextstate} $trans {}
                    if {$tok_id == $token} {
                        set target $nextstate
                        break
                    }
                }
                # this token must have been consumed by shift/reduce
                # conflict resolution through the precedence table
                # (above)
                if {$target == ""} {
                    continue
                }
            }

            foreach token $token_list {
                # check for shift/reduce conflicts
                if {[info exists ::lalr1_parse($i:$token)] && \
                        $::lalr1_parse($i:$token) != $command} {
                    # shifting takes precedence, so overwrite table
                    # entry if needed
                    if {$::lalr1_parse($i:$token) == "shift"} {
                        taccle_warn "Shift/Reduce error in state $i, token \"$::token_id_table($token)\", resolved by keeping shift."
                        break
                    }
                    taccle_warn "Shift/Reduce error in state $i between rule $::lalr1_parse($i:$token,target) and token \"$::token_id_table($token)\", resolved as shift."
                    unset ::lalr1_parse($i:$token,target)
                }
                set ::lalr1_parse($i:$token) $command
                # check for reduce/reduce conflicts
                # (theoretically it is impossible to have a shift/shift error)
                if {[info exists ::lalr1_parse($i:$token,target)] && \
                        $::lalr1_parse($i:$token,target) != $target} {
                    taccle_warn "Reduce/Reduce error in state $i, token \"$::token_id_table($token)\", resolved by reduce to rule $::lalr1_parse($i:$token,target)."
                    break
                }
                set ::lalr1_parse($i:$token,target) $target
            }
            
        }
    }
}

######################################################################
# utility routines that actually handle writing parser to output files

# Writes to the destination file utility functions called by yyparse
# as well as by user-supplied actions.
proc write_parser_utils {} {
    puts $::dest "
######
# Begin autogenerated taccle (version $::TACCLE_VERSION) routines.
# Although taccle itself is protected by the GNU Public License (GPL)
# all user-supplied functions are protected by their respective
# author's license.  See http://mini.net/tcl/taccle for other details.
######

namespace eval ${::p} \{
    variable yylval {}
    variable table
    variable rules
    variable token {}
    variable yycnt 0
    variable yyerr 0
    variable save_state 0

    namespace export yylex
\}

proc ${::p}::YYABORT \{\} \{
    return -code return 1
\}

proc ${::p}::YYACCEPT \{\} \{
    return -code return 0
\}

proc ${::p}::YYERROR \{\} \{
    variable yyerr
    set yyerr 1
\}

proc ${::p}::yyclearin \{\} \{
    variable token
    variable yycnt
    set token {}
    incr yycnt -1
\}

proc ${::p}::yyerror \{s\} \{
    puts stderr \$s
\}

proc ${::p}::setupvalues \{stack pointer numsyms\} \{
    upvar 1 1 y
    set y \{\}
    for \{set i 1\} \{\$i <= \$numsyms\} \{incr i\} \{
        upvar 1 \$i y
        set y \[lindex \$stack \$pointer\]
        incr pointer
    \}
\}

proc ${::p}::unsetupvalues \{numsyms\} \{
    for \{set i 1\} \{\$i <= \$numsyms\} \{incr i\} \{
        upvar 1 \$i y
        unset y
    \}
\}"
}

# Writes to the destination file the actual parser including LALR(1)
# table.
proc write_parser {} {
    write_array $::dest ${::p}::table [array get ::lalr1_parse]
    write_array $::dest ${::p}::rules [array get ::rule_table *l]
    write_array $::dest ${::p}::rules [array get ::rule_table *dc]
    write_array $::dest ${::p}::rules [array get ::rule_table *e]
    if {$::parse_error} {
	write_array $::dest ${::p}::lr1_table [array get ::lr1_table]
	write_array $::dest ${::p}::token_id_table [array get ::token_id_table]
    }
    
    puts $::dest "\nproc ${::p}::yyparse {} {
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
    set token \"\"
    set accepted 0
    set yyerr 0
    set save_state 0

    while {\$accepted == 0} {
        set state \[lindex \$state_stack end\]
        if {\$token == \"\"} {
            set yylval \"\"
            set token \[yylex\]
            set buflval \$yylval
	    if {\$token>0} {
	        incr yycnt
            }
        }
        if {!\[info exists table(\$state:\$token)\] || \$yyerr} {
	    if {!\$yyerr} {
	        set save_state \$state
	    }
            \# pop off states until error token accepted
            while {\[llength \$state_stack\] > 0 && \\
                       !\[info exists table(\$state:error)]} {
                set state_stack \[lrange \$state_stack 0 end-1\]
                set value_stack \[lrange \$value_stack 0 \\
                                       \[expr {\[llength \$state_stack\] - 1}\]\]
                set state \[lindex \$state_stack end\]
            }
            if {\[llength \$state_stack\] == 0} {"
    if {$::parse_error} {
puts $::dest " 
	        set rr { }
                if {\[info exists lr1_table(\$save_state,trans)\] && \[llength \$lr1_table(\$save_state,trans)\] >= 1} {
                    foreach trans \$lr1_table(\$save_state,trans) {
                        foreach {tok_id nextstate} \$trans {
			    set ss \$token_id_table(\$tok_id,title)
			    if {\$ss != {}} {
			        append rr \"\$ss, \"
                            }
                        }
                    }
                }
		set rr \[string trimleft \$rr { }\]
		set rr \[string trimright \$rr {, }\]
                yyerror \"parse error, expecting: \$rr\"
"
    } else {
puts $::dest " 
                yyerror \"parse error\"
"
    }
puts $::dest "
                return 1
            }
            lappend state_stack \[set state \$table(\$state:error,target)\]
            lappend value_stack {}
            \# consume tokens until it finds an acceptable one
            while {!\[info exists table(\$state:\$token)]} {
                if {\$token == 0} {
                    yyerror \"end of file while recovering from error\"
                    return 1
                }
                set yylval {}
                set token \[yylex\]
                set buflval \$yylval
            }
            continue
        }
        switch -- \$table(\$state:\$token) {
            shift {
                lappend state_stack \$table(\$state:\$token,target)
                lappend value_stack \$buflval
                set token \"\"
            }
            reduce {
                set rule \$table(\$state:\$token,target)
                set ll \$rules(\$rule,l)
                if \{\[info exists rules(\$rule,e)\]\} \{
                    set dc \$rules(\$rule,e)
                \} else \{
                    set dc \$rules(\$rule,dc)
                \}
                set stackpointer \[expr {\[llength \$state_stack\]-\$dc}\]
                setupvalues \$value_stack \$stackpointer \$dc
                set _ \$1
                set yylval \[lindex \$value_stack end\]
                switch -- \$rule {"
    for {set i 0} {$i < $::rule_count} {incr i} {
        if {[info exists ::rule_table($i,a)] && [string trim $::rule_table($i,a)] != ""} {
            puts $::dest "                    $i { $::rule_table($i,a) }"
        }
    }

    puts $::dest "                }
                unsetupvalues \$dc
                # pop off tokens from the stack if normal rule
                if \{!\[info exists rules(\$rule,e)\]\} \{
                    incr stackpointer -1
                    set state_stack \[lrange \$state_stack 0 \$stackpointer\]
                    set value_stack \[lrange \$value_stack 0 \$stackpointer\]
                \}
                # now do the goto transition
                lappend state_stack \$table(\[lindex \$state_stack end\]:\$ll,target)
                lappend value_stack \$_
            }
            accept {
                set accepted 1
            }
            goto -
            default {
                puts stderr \"Internal parser error: illegal command \$table(\$state:\$token)\"
                return 2
            }
        }
    }
    return 0
}

######
# end autogenerated taccle functions
######
"
}

# Pretty-prints an array to a file descriptor.  Code contributed by
# jcw.
#
# @param fd file descriptor to which write the array
# @param name name of array to declare within the file
# @param values list of 2-ple values
proc write_array {fd name values} {
    puts $fd "\narray set $name {"
    foreach {x y} $values {
        puts $fd "  [list $x $y]"
    }
    puts $fd "}"
}

# Writes a header file that should be [source]d by the lexer.
proc write_header_file {} {
    # scan through token_table and write out all non-implicit terminals
    foreach tok_id $::token_list {
        if {$::token_id_table($tok_id,t) == $::TERMINAL && \
                [string is integer $tok_id] && $tok_id >= 256} {
            set token $::token_id_table($tok_id)
            puts $::header "set ${token} $tok_id"
        }
    }
}

######################################################################
# utility functions

# Adds a token to the token table, checking that it does not already
# exist.  Returns the ID for the token (either old one if token
# already exists or the newly assigned id value).
#
# @param token_name name of token to add
# @param type type of token, either $::TERMINAL or $::NON_TERMINAL
# @param implicit for $::TERMINAL tokens, 1 if the token is implicitly
# declared
# @param prec_level precedence level for token
# @param prec_dir direction of precedence, either <var>left</var>,
# <var>right</var>, or <var>nonassoc</var>
# @return id value for this token
proc add_token {token_name type implicit prec_level prec_dir {token_title {}}} {
    if {$token_name == "\$"} {
        taccle_error "The token '$' is reserved and may not be used in productions." $::SYNTAX_ERROR
    }
    if {$token_name == "\{" || $token_name == 0} {
        taccle_error "Literal value $token_name not allowed; define a %token instead" $::SYNTAX_ERROR
    }
    if [info exists ::token_table($token_name)] {
        set id $::token_table($token_name)
        if {$::token_table($token_name,t) == $type} {
            # token already exists; modify its precedence level if necessary
            if {$::prec_table($id) < $prec_level} {
                taccle_warn "Redefining precedence of $token_name"
                set ::prec_table($id) $prec_level
                set ::prec_table($id,dir) $prec_dir
            }
            set ::token_id_table($id,line) $::line_count
            return $id
        }
        set old_type [expr {$::token_table($token_name,t) == 1 ? "non-" : ""}]terminal
        taccle_error "Token $token_name already declared as a $old_type" $::GRAMMAR_ERROR
    }
    if $implicit {
        set ::token_table($token_name) $token_name
        set id $token_name
    } else {
        set ::token_table($token_name) $::next_token_id
        set id $::next_token_id
        incr ::next_token_id
    }
    set ::token_table($token_name,t) $type
    set ::token_id_table($id) $token_name
    set ::token_id_table($id,title) $token_title
    set ::token_id_table($id,t) $type
    set ::token_id_table($id,line) $::line_count
    lappend ::token_list $id
    set ::prec_table($id) $prec_level
    set ::prec_table($id,dir) $prec_dir
    return $id
}

# Adds closures to each item on $closure_list, starting from the index
# $closure_pointer.  Keeps adding closures until no more are added.
#
# @param closure_list list of closures to process
# @param closure_pointer index into $closure_list to which start
# @param original_length original size of $closure_list
# @return list of closures added
proc add_closure {closure_list closure_pointer original_length} {
    set orig_closure_pointer [expr {$closure_pointer + $original_length}]
    # keep adding items to the closure list until no more
    while {$closure_pointer < [llength $closure_list]} {
        set item [lindex $closure_list $closure_pointer]
        incr closure_pointer
        foreach {rule lookahead position} $item {}
        set mylength $::rule_table($rule,dc)
        if {$position < $mylength} {
            set nexttoken [lindex $::rule_table($rule,d) $position]
            if {$::token_id_table($nexttoken,t) == $::TERMINAL} {
                continue
            }
            # the lookahead is the FIRST of the rule /after/
            # nexttoken, or the current lookahead if at the end of
            # rule.  if the next token is NULLABLE then the lookahead
            # includes that which FOLLOWS it
            set beta_pos [expr {$position + 1}]
            if {$beta_pos >= $mylength} {
                set nextfirst $lookahead
            } else {
                set n [lindex $::rule_table($rule,d) $beta_pos]
                set nextfirst [all_but_eps $::first_table($n)]
                if {$::nullable_table($n)} {
                    set nextfirst [lsort -unique [concat $nextfirst $::follow_table($n)]]
                }
            }
            for {set rule_num 0} {$rule_num < $::rule_count} {incr rule_num} {
                if {$::rule_table($rule_num,l) != $nexttoken} {
                    continue
                }
                set newitem [list $rule_num $nextfirst 0]
                set closure_list [merge_closures $closure_list [list $newitem]]
            }
        }
    }
    return [lrange $closure_list $orig_closure_pointer end]
}

# Recurses through all productions, recording which tokens are
# actually used by the grammar.  Tokens used to indicate a rule's
# precedence are also added.  Returns a list of tokens used; note that
# this list can (and probably will) include duplicates.
#
# @param tok_id id of token to start
# @param history list of tok_id's already examined
# @return list of tokens used
proc recurse_dfs {tok_id history} {
    if {[lsearch -exact $history $tok_id] >= 0} {
        return $history
    }
    if {$::token_id_table($tok_id,t) == $::TERMINAL} {
        return [concat $history $tok_id]
    }
    lappend history $tok_id
    for {set i 0} {$i < $::rule_count} {incr i} {
        set lhs $::rule_table($i,l)
        if {$lhs == $tok_id} {
            foreach deriv $::rule_table($i,d) {
                set history [recurse_dfs $deriv $history]
            }
            lconcat history $::rule_table($i,prec)
        }
    }
    return $history
}

# Given a line, returns a new line with any comments removed.
#
# @param line string with a possible comment
# @return line with any commens removed
proc strip_comments {line} {
    regexp -- {\A([^\#]*)} $line foo line
    return $line
}

# Combines unique elements of the two closures, also merging lookahead
# symbols, and returns the new closure.
#
# @param closure1 first closure to merge
# @param closure2 second closure to merge
# @return $closure1 and $closure2 merged together, with duplicated removed
proc merge_closures {closure1 closure2} {
    foreach item2 $closure2 {
        foreach {rule2 lookahead2 pos2} $item2 {}
        set found_match 0
        for {set i 0} {$i < [llength $closure1]} {incr i} {
            foreach {rule1 lookahead1 pos1} [lindex $closure1 $i] {}
            if {$rule2 == $rule1 && $pos2 == $pos1} {
                set lookahead1 [lsort -uniq [concat $lookahead1 $lookahead2]]
                lset closure1 $i [list $rule1 $lookahead1 $pos1]
                set found_match 1
                break
            }
        }
        if {!$found_match} {
            lappend closure1 $item2
        }
    }
    return $closure1
}

# Compares two token id values.  If the two are integers then uses
# their values for comparison; otherwise performs a string comparison.
# Integer values are always "greater than" strings.
#
# @param a first token id
# @param b second token id
# @return -1 if <var>a</var> is less than <var>b</var>, 1 if
# <var>a</var> is greater, otherwise 0
proc tokid_compare {a b} {
    if {[string is integer $a] && [string is integer $b]} {
        if {$a < $b} {
            return -1
        } else {
            return 1
        }
    }
    if [string is integer $a] {
        return 1
    }
    if [string is integer $b] {
        return -1
    }
    return [string compare $a $b]
}

# Given a list, returns all everything in it except for any elements
# of value "-1", which corresponds with the epsilon symbol.
#
# @param first_list list of tokens (presumably a FIRST set)
# @return new list with all -1 values removed
proc all_but_eps {first_list} {
    set new_list ""
    foreach tok $first_list {
        if {$tok != -1} {
            lappend new_list $tok
        }
    }
    return $new_list
}

# Returns truth if the element value "-1", corresponding with the
# epsilon symbol, resides within the first list $first_list.
#
# @param first_list list of tokens (presumably a FIRST set)
# @return 1 if $first_list has the element -1, 0 otherwise
proc has_eps {first_list} {
    foreach tok $first_list {
        if {$tok == -1} {
            return 1
        }
    }
    return 0
}

# Given a list of tokens, returns the token with highest precedence
# level.
#
# @param tok_list list of token ids
# @return token with highest precedence; in case of tie returns first
# one found
proc get_prec {tok_list} {
    set prec_token 0
    foreach tok $tok_list {
        if {$::prec_table($tok) > $::prec_table($prec_token)} {
            set prec_token $tok
        }
    }
    return $prec_token
}

# Appends the first list a flattened version of the second, but only
# if the second is non-empty.
#
# @param list first list
# @param lists list of lists to append
# @return new list
proc lconcat {list lists} {
    upvar $list l
    if {$lists != ""} {
        set l [concat $l $lists]
    } else {
        return $l
    }
}

# Retrives a parameter from the options list.  If no parameter exists
# then abort with an error very reminisicent of C's
# <code>getopt</code> function; otherwise increment
# <code>param_num</code> by one.
#
# @param param_list list of parameters from the command line
# @param param_num index into <code>param_list</code> to retrieve
# @param param_name name of the parameter, used when reporting an error
# @return the <code>$param_num</code>'th element into <code>$param_list</code>
proc get_param {param_list param_num param_name} {
    upvar $param_num pn
    incr pn
    if {$pn >= [llength $param_list]} {
        puts stderr "taccle: option requires an argument -- $param_name"
        exit $::PARAM_ERROR
    }
    return [lindex $param_list $pn]
}

# Display to standard error a message, then abort the program.
proc taccle_error {message returnvalue} {
    if {$::verbose != ""} {
        puts $::verbose "$message (line $::line_count)"
    } 
    puts stderr "$message (line $::line_count)"
    exit $returnvalue
}

# Display a message to standard error if warnings enabled.  Write to
# the verbose output file if verbose is enabled.
proc taccle_warn {message} {
    if {$::show_warnings} {
        puts stderr $message
    }
    if {$::verbose != ""} {
        puts $::verbose "$message"
    }
}

# Print to a particular channel a brief summary of taccle command line
# options.
proc print_taccle_help {chan} {
    puts $chan "taccle: a Tcl compiler compiler
Usage: taccle \[options\] file
  file     a taccle grammar specification file

Options:
  -h          print this help message and quit
  -d          write extra output file containing Tcl code to be
              \[source\]d by yylex
  -o FILE     specify name to write parser
  -v          write extra output file containing descriptions of all
              parser states and extended information about conflicts
  -w          display all warnings to standard error
  -p PREFIX   change default yy prefix to PREFIX
  --version   print taccle version and quit

For more information see http://mini.net/tcl/taccle"
}

# Displays to standard out the taccle version, then exits program.
proc print_taccle_version {} {
    puts "taccle version $::TACCLE_VERSION"
    exit 0
}

######################################################################
# internal debugging routines

proc print_symbol_table {} {
    puts $::verbose "token table:"
    puts $::verbose [format "%-5s %-10s %s" "id" "token" "type"]
    foreach tok_id $::token_list {
        set token $::token_id_table($tok_id)
        if {$::token_id_table($tok_id,t) == $::TERMINAL} {
            set type "terminal"
        } else {
            set type "non-terminal"
        }
        puts $::verbose [format "%-5s %-10s %s" $tok_id $token $type]
    }
}

proc print_rule_table {} {
    puts $::verbose "rule table:"
    for {set i 0} {$i < $::rule_count} {incr i} {
        set lhs $::token_id_table($::rule_table($i,l))
        set deriv_list ""
        foreach deriv $::rule_table($i,d) {
            lappend deriv_list $::token_id_table($deriv)
        }
        if {$deriv_list == ""} {
            set deriv_list "\#\# empty \#\#"
        }
        puts $::verbose [format "%3d:  %-10s -> %s" $i $lhs $deriv_list]
    }
}

proc print_first_table {} {
    puts $::verbose "first table:"
    foreach tok_id $::token_list {
        if {$tok_id == -1} {
            continue
        }
        set token $::token_id_table($tok_id)
        set first_list ""
        foreach first $::first_table($tok_id) {
            if {$first >= 0} {
                lappend first_list $::token_id_table($first)
            }
        }
        puts $::verbose [format "%-10s => %s" $token $first_list]
    }
}

proc print_closure {closure_list indent dest} {
    foreach item $closure_list {
        foreach {rule lookahead position} $item {}
        set lhs $::token_id_table($::rule_table($rule,l))
        set deriv_list ""
        set i 0
        foreach deriv $::rule_table($rule,d) {
            if {$i == $position} {
                lappend deriv_list "."
            }
            lappend deriv_list $::token_id_table($deriv)
            incr i
        }
        if {$position == $::rule_table($rule,dc)} {
            lappend deriv_list "."
        }
        set lookahead_list ""
        foreach la $lookahead {
            lappend lookahead_list $::token_id_table($la)
        }
        puts $dest \
            [format "%*s %-10s -> %s, %s" $indent "" $lhs $deriv_list $lookahead_list]
    }
}

proc print_lr_table {table_name num_entries} {
    upvar $table_name table
    for {set i 0} {$i < $num_entries} {incr i} {
        puts $::verbose "state $i:"
        print_closure $table($i) 2 $::verbose
        if {[info exists table($i,trans)] && [llength $table($i,trans)] >= 1} {
            puts -nonewline $::verbose [format "%*s transitions:" 2 ""]
            foreach trans $table($i,trans) {
                foreach {tok_id nextstate} $trans {}
                puts -nonewline $::verbose "  $::token_id_table($tok_id) => s$nextstate"
            }
            puts $::verbose ""
        }
        puts $::verbose ""
    }
}

proc print_lr1_table {} {
    puts $::verbose "lr(1) table:"
    print_lr_table ::lr1_table $::next_lr1_state
}

proc print_lalr1_table {} {
    puts $::verbose "lalr(1) table:"
    print_lr_table ::lalr1_table $::next_lalr1_state
}

proc print_lalr1_parse {} {
    puts $::verbose "generated lalr(1) parse table:"
    puts -nonewline $::verbose "state "
    foreach tok_id $::used_token_list {
        set token [string range $::token_id_table($tok_id) 0 4]
        puts -nonewline $::verbose [format " %-5s" $token]
    }
    puts $::verbose ""
    for {set i 0} {$i < $::next_lalr1_state} {incr i} {
        puts -nonewline $::verbose [format "%4s  " $i]
        foreach tok_id $::used_token_list {
            if [info exists ::lalr1_parse($i:$tok_id)] {
                switch -- $::lalr1_parse($i:$tok_id) {
                    shift  { set s "sh" }
                    goto   { set s "go" }
                    reduce { set s "re" }
                    accept { set s "accept" }
                }
                if {$s != "accept"} {
                    append s $::lalr1_parse($i:$tok_id,target)
                }
                puts -nonewline $::verbose [format " %-5s" $s]
            } else {
                puts -nonewline $::verbose "      "
            }
        }
        puts $::verbose ""
    }
}

######################################################################
# other taccle functions

# Parse the taccle command line.
proc taccle_args {argv} {
    set argvp 0
    set write_defs_file 0
    set write_verbose_file 0
    set ::parse_error 0
    set out_filename ""
    set ::p "yy"
    set ::show_warnings 0
    while {$argvp < [llength $argv]} {
        set arg [lindex $argv $argvp]
        switch -- $arg {
            "-d" { set write_defs_file 1 }
            "-h" -
            "--help" { print_taccle_help stdout; exit 0 }
            "-o" { set out_filename [get_param $argv argvp "o"] }
            "-v" - "--verbose" { set write_verbose_file 1 }
            "-w" { set ::show_warnings 1 }
            "-p" {
                set prefix [get_param $argv argvp "p"]
                set ::p [string tolower $prefix]
            }
            "--version" { print_taccle_version }
            default {
                if {[string index $arg 0] != "-"} {
                    break
                } else {
                    puts stderr "taccle: unknown option $arg"
                    print_taccle_help stderr
                    exit $::PARAM_ERROR
                }
            }
        }
        incr argvp
    }
    if {$argvp >= [llength $argv]} {
        puts stderr "taccle: no grammar file given"
        print_taccle_help stderr
        exit $::IO_ERROR
    }
    set ::in_filename [lindex $argv $argvp]
    set ::in_dir [file dirname $::in_filename]
    if {$out_filename == ""} {
        set out_filename [file rootname $::in_filename]
        append out_filename ".tcl"
    }
    if [catch {open $::in_filename r} ::src] {
        puts stderr "Could not open grammar file '$::in_filename'."
        exit $::IO_ERROR
    }
    if [catch {open $out_filename w} ::dest] {
        puts stderr "Could not open output file '$out_filename'."
        exit $::IO_ERROR
    }
    if $write_defs_file {
        set header_filename "[file rootname $out_filename].tab.tcl"
        if [catch {open $header_filename w} ::header] {
            puts stderr "Could not open header file '$header_filename'."
            exit $::IO_ERROR
        }
    } else {
        set ::header ""
    }
    if $write_verbose_file {
        set verbose_filename "[file rootname $out_filename].output"
        if [catch {open $verbose_filename w} ::verbose] {
            puts stderr "Could not open verbose file '$verbose_filename'."
            exit $::IO_ERROR
        }
    } else {
        set ::verbose ""
    }
}

# Actually do the parser generation.
proc taccle_main {} {
    set ::line_count 0
    
    # counts number of rules in the grammar
    # rule number 0 is reserved for the special augmentation S' -> S
    set ::rule_count 1

    # used to keep track of token IDs:
    # 0 is reserved for the special token '$'
    # 256 for the error token
    set ::next_token_id 257

    # used to keep track of operator precedence level
    # level 0 is reserved for terminals without any precedence
    set ::next_precedence 1

    # keep track of where within the file I am:
    # definitions, rules, or subroutines
    set file_state definitions

    while {[gets $::src line] >= 0} {
        incr ::line_count
    
        if {$line == "%%"} {
            if {$file_state == "definitions"} {
                set file_state "rules"
            } elseif {$file_state == "rules"} {
                set file_state "subroutines"
            } else {
                taccle_error "Syntax error." $::SYNTAX_ERROR
            }
        } else {
            if {$file_state == "definitions"} {
		if {[lindex $line 0] == "#include"} {
		    set fn [lindex $line 1]
		    if {$fn != {}} {
			if [catch {open [file join $::in_dir $fn] r} ch] {
			    puts stderr "Could not open definition file '$fn'."
			    exit $::IO_ERROR
			}
			while {[gets $ch line] >= 0} {
			    incr ::line_count
			    handle_defs $line
			}			    
			catch {close $fn}
		    }
		} else {
		    handle_defs $line
		}
            } elseif {$file_state == "rules"} {
                # keep reading the rest of the file until EOF or
                # another '%%' appears
                set rules_buf [strip_comments $line]
                while {[gets $::src line] >= 0 && $file_state == "rules"} {
                    if {$line == "%%"} {
                        set file_state "subroutines"
		    } elseif {[lindex $line 0] == "#include"} {
			set fn [lindex $line 1]
			if {$fn != {}} {
			    if [catch {open [file join $::in_dir $fn] r} ch] {
				puts stderr "Could not open include file '$fn'."
				exit $::IO_ERROR
			    }
			    while {[gets $ch line] >= 0} {
				incr ::line_count
				append rules_buf "\n" [strip_comments $line]
			    }			    
			    catch {close $fn}
			}
                    } else {
                        append rules_buf "\n" [strip_comments $line]
                    }
                }
                build_parser $rules_buf
                set file_state "subroutines"
                write_parser_utils
                write_parser
            } else {
                # file_state is subroutines -- copy verbatim to output file
                puts $::dest $line
            }
        }
    }
    if {$::header != ""} {
        write_header_file
    }
    if {$::verbose != ""} {
        print_symbol_table
        puts $::verbose ""
        print_rule_table
        puts $::verbose ""
        #print_first_table
        #puts $::verbose ""
        #print_lr1_table
        print_lalr1_table
        print_lalr1_parse
    }
}

######################################################################
# start of actual script

set IO_ERROR 1
set SYNTAX_ERROR 2
set PARAM_ERROR 3
set GRAMMAR_ERROR 4

set TERMINAL 0
set NONTERMINAL 1

taccle_args $argv
taccle_main
