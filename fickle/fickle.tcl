#!/usr/bin/tclsh

# $Id: fickle.tcl,v 1.6 2004/11/14 02:36:28 tang Exp $

set FICKLE_VERSION 2.1

# no output()
# no yymore()
# no REJECT

#//#
# Fickle is a lexical analyzer generator written in pure Tcl.  It
# reads a <em>fickle specification file</em> to generate pure Tcl code
# that implements a scanner.  See the {@link README} file for complete
# instructions.  Additional information may be found at {@link
# http://mini.net/tcl/fickle}.
#
# @author Jason Tang (tang@jtang.org)
# @version 2.04
#//#

# Process a definition / directive on a single line.
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
            "%s" {
                foreach state_name [split $args] {
                    if {$state_name != ""} {
                        set ::state_table($state_name) $::INCLUSIVE
                    }
                }
            }
            "%x" {
                foreach state_name [split $args] {
                    if {$state_name != ""} {
                        set ::state_table($state_name) $::EXCLUSIVE
                    }
                }
            }
            "%option" {
                handle_options $args
            }
            "%buffersize" {
                if {$args == ""} {
                    fickle_error "%buffersize must have an integer parameter" $::PARAM_ERROR
                } elseif {[string is digit $args] && $args > 0} {
                    set ::BUFFER_SIZE $args
                } else {
                    fickle_error "%buffersize parameter must be positive integer" $::PARAM_ERROR
                }
            }
            default {
                # check if the directive is an option or a substitution
                if {[string index $keyword 0] == "%"} {
                    fickle_error "Unknown directive \"$keyword\"" $::SYNTAX_ERROR
                } else {
                    add_definition $line
                }
            }
        }
    }
}

# Copy everything between ^%\{$ to ^%\}$ to the destination file.
proc handle_literal_block {} {
    set end_defs 0
    while {$end_defs == 0} {
        if {[gets $::src line] < 0} {
            fickle_error "No terminator to verbatim section found " $::SYNTAX_ERROR
        } elseif {[string trim $line] == "%\}"} {
            set end_defs 1
        } else {
            puts $::dest $line
        }
        incr ::line_count
    }
}

# Examine each option (given by a %option directive) and set/unset
# flags as necessary.
proc handle_options {optargs} {
    foreach option [split $optargs] {
        if {$option == ""} {
            continue
        }
        if {$option == "default"} {
            # special construct to handle %option default (because I
            # can't match this in the switch statement below
            set ::suppress 0
            continue
        }
        switch -- $option {
            "caseful" -    "case-sensitive" -
            "nocaseless" - "nocase-insensitive" { set ::nocase 0 }
            "caseless" -  "case-insensitive" -
            "nocaseful" - "nocase-sensitive" { set ::nocase 1 }
            "debug"      { set ::debugmode 1 }
            "nodebug"   { set ::debugmode 0 }
            "nodefault" { set ::suppress 1 }
            "interactive"   { set ::interactive 1 }
            "nointeractive" { set ::interactive 0 }
            "verbose"   { set ::verbose 1 }
            "noverbose" { set ::verbose 0 }            
            "stack"   { set ::startstates 1 }
            "nostack" { set ::startstates 0 }
            "yylineno"   { set ::linenums 1 }
            "noyylineno" { set ::linenums 0 }
            "yywrap"   { set ::callyywrap 1 }
            "noyywrap" { set ::callyywrap 0 }
            "headers"   { set ::headers 1 }
            "noheaders" { set ::headers 0 }
            default {
                # note this is /not/ the same as %option default (see above)
                fickle_error "Unknown %option $option" $::PARAM_ERROR
            }
            
        }
    }
}

# Adds a definition to the substition table.
proc add_definition {line} {
    if {![regexp -line -- {\A\s*([a-zA-Z_]\S*)\s+(.+)} $line foo name pattern]} {
        fickle_error "Malformed definition" $::SYNTAX_ERROR
    }
    # make any substitutions within the pattern now
    foreach {sub_rule sub_pat} [array get ::sub_table] {
        # the quotes around the regexp below is necessary, to
        # allow for substitution of the sub_rule
        regsub -all -- "\{$sub_rule\}" $pattern "\($sub_pat\)" pattern
    }
    # double the backslashes (during the next round of substitution
    # the extras will go away)
    regsub -all -- {\\} $pattern {\\\\} pattern
    set ::sub_table($name) $pattern
}

# Actually build the scanner given a set of pattern / action pairs.
proc build_scanner {rules_buf} {
    # step 0: parse the rules buffer into individual rules and actions
    handle_rules_buf $rules_buf

    if $::interactive {
        set ::BUFFER_SIZE 1
    }
    
    # step 1: write scanner support functions
    write_scanner_utils
    
    # step 2: write the scanner to the destination file
    write_scanner
}

# Scan though the rules buffer, pulling out each pattern / action pair.
proc handle_rules_buf {rules_buf} {
    set regexp_list ""
    set num_rules 0
    while {[string length $rules_buf] > 0} {
        set line_start $::line_count
        # remove the next line from the buffer
        regexp -line -- {\A(.*)\n?} $rules_buf foo line
        set rules_buf [string range $rules_buf [string length $foo] end]
        # consume blank lines
        if {[string trim $line] == ""} {
            incr ::line_count
            continue
        }
        # extract the left hand side
        if {![regexp -line -- {\A\s*(\S+)(.*)} $line foo pattern line]} {
            fickle_error "No pattern found" $::SYNTAX_ERROR
        }
        # the pattern may contain spaces; use [info complete] to keep
        # appending to it
        set pattern_done 0
        while {!$pattern_done && $line != ""} {
            if [info complete $pattern] {
                set pattern_done 1
            } else {
                regexp -- {\A(\S*\s?)(.*)} $line foo p line
                append pattern $p
            }
        }
        if {!$pattern_done} {
            fickle_error "Pattern appears to be unterminated" $::SYNTAX_ERROR
        }
        set pattern [rewrite_pattern [string trim $pattern]]
        set orig_pattern $pattern
        
        # check the pattern to see if it has a start state
        set state_name ""
        if [regexp -- {\A<([^>]+)>} $pattern foo state_name] {
            if {!$::startstates} {
                fickle_error "Start state specified, but states were not enabled with `%option stack'" $::GRAMMAR_ERROR
            }
            # a state was found; remove it from the pattern
            regsub -- {\A<[^>]+>} $pattern "" pattern
            # check that the state was declared
            if {$state_name != "*" && ![info exists ::state_table($state_name)]} {
                fickle_error "Undeclared start state $state_name" $::GRAMMAR_ERROR
            }
        }
        # check if any textual substitutions are needed
        foreach sub_rule [array names ::sub_table] {
            # the quotes around the regexp below is necessary, to
            # allow for substitution of the sub_rule
            regsub -all -- "\{$sub_rule\}" $pattern "\($::sub_table($sub_rule)\)" pattern
        }

        # now determine the action; an action of just a vertical bar
        # means to use the subsequent action
        set action [string trimleft $line]
        if {[string trim $action] == ""} {
            fickle_error "Rule has no associated action" $::SYNTAX_ERROR
        } elseif {[string trim $action] == "|"} {
            # blank action means to use next one
            set action ""
        } else {
            # keep scanning through buffer until action is complete
            set num_lines 0
            set action_done 0
            while {!$action_done && $rules_buf != ""} {
                if [info complete $action] {
                    set action_done 1
                } else {
                    regexp -line -- {\A(.*)\n?} $rules_buf foo line
                    set rules_buf [string range $rules_buf [string length $foo] end]
                    append action "\n$line"
                    incr num_lines
                }
            }
            if {!$action_done && ![info complete $action]} {
                fickle_error "Unterminated action" $::SYNTAX_ERROR
            }
            # clean up the action, especially if it had curly braces
            # around the ends
            set action [string trim $action]
            if {[string index $action 0] == "{" && \
                [string index $action end] == "}"} {
                set action [string trim [string range $action 1 end-1]]
            }
            incr ::line_count $num_lines
        }
        lappend ::rule_table [list $orig_pattern $state_name $pattern $action $line_start]
        incr ::line_count
        if $::verbose {
            if {$state_name == ""} {
                set state "default state"
            } else {
                set state "state $state_name"
            }
            if {$action == ""} {
                set action "<fallthrough>"
            }
            puts stderr "Rule $num_rules: \[$pattern\] ($state) -> $action"
            incr num_rules
        }
    }
}

# Tcl style regexps are not 100% compatible with flex, so rewrite them
# here.
proc rewrite_pattern {pattern} {
    set in_quotes 0
    set in_brackets 0
    set in_escape 0
    foreach c [split $pattern {}] {
        if $in_escape {
            append newpattern $c
            set in_escape 0
            continue
        }
        if $in_quotes {
            if {$c == "\""} {
                set in_quotes 0
            } else {
                # metacharacters lose their meaning within quotes
                if [regexp -- {[.*\[\]^$\{\}+?|/\(\)]} $c foo] {
                    append newpattern "\\"
                }
                append newpattern $c
            }
            continue
        }
        switch -- $c {
            "\\" { append newpattern "\\"; set in_escape 1 }
            "\[" { append newpattern "\["; incr in_brackets }
            "\]" { append newpattern "\]"; incr in_brackets -1 }
            "\"" {
                if $in_brackets {
                    append newpattern "\\\""
                } else {
                    set in_quotes 1
                }
            }
            default {
                append newpattern $c
            }
        }
    }
    return $newpattern
}

######################################################################
# procedure to write scanner

# Writes all of the support procedures needed by the scanner during
# run time.
proc write_scanner_utils {} {
    puts $::dest "
######
# Begin autogenerated fickle (version $::FICKLE_VERSION) routines.
# Although fickle itself is protected by the GNU Public License (GPL)
# all user-supplied functions are protected by their respective
# author's license.  See http://mini.net/tcl/fickle for other details.
######
"
    puts $::dest "namespace eval ${::p} \{
    variable yylval

    variable yytext {}
    variable yyleng 0
    variable yyin stdin
    variable yyout stdout
    variable yy_current_buffer {}"
    if $::debugmode {
        puts $::dest "
    variable yy_flex_debug 1"
    }
    if $::linenums {
        puts $::dest "
    variable yylineno 1"
    }

    puts $::dest "
    variable index_ 0
    variable done_ 0"

    if $::startstates {
        puts $::dest "
    variable state_stack_ {}
    variable state_table_
    array set state_table_ \{[array get ::state_table]\}"
    }

    puts $::dest "\}"
    puts $::dest ""

    if $::callyywrap {
        if $::headers {
            puts $::dest "# If yywrap() returns false (zero), then it is assumed that the
# function has gone ahead and set up yyin to point to another input
# file, and scanning continues.  If it returns true (non-zero), then
# the scanner terminates, returning 0 to its caller.  Note that in
# either case, the start condition remains unchanged; it does not
# revert to INITIAL.
#   -- from the flex(1) man page"
        }
        puts $::dest "proc ${::p}::yywrap \{\} \{
    return 1
\}
"
    }
    if $::headers {
        puts $::dest "# ECHO copies yytext to the scanner's output if no arguments are
# given.  The scanner writes its ECHO output to the yyout global
# (default, stdout), which may be redefined by the user simply by
# assigning it to some other channel.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::p}::ECHO \{\{s \"\"\}\} \{
    variable yytext
    variable yyout

    if \{\$s == \"\"\} \{
        puts -nonewline \$yyout \$yytext
    \} else \{
        puts -nonewline \$yyout \$s
    \}
\}
"
    if $::headers {
        puts $::dest "# YY_FLUSH_BUFFER flushes the scanner's internal buffer so that the
# next time the scanner attempts to match a token, it will first
# refill the buffer using YY_INPUT.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::p}::YY_FLUSH_BUFFER \{\} \{
    variable yy_current_buffer
    variable index_
    variable done_

    set yy_current_buffer \"\"
    set index_ 0
    set done_ 0
\}
"
    if $::headers {
        puts $::dest "# yyrestart(new_file) may be called to point yyin at the new input
# file.  The switch-over to the new file is immediate (any previously
# buffered-up input is lost).  Note that calling yyrestart with yyin
# as an argument thus throws away the current input buffer and
# continues scanning the same input file.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::p}::yyrestart \{new_file\} \{
    variable yyin

    set yyin \$new_file
    YY_FLUSH_BUFFER
\}
"       
    if $::headers {
        puts $::dest "# The nature of how it gets its input can be controlled by defining
# the YY_INPUT macro.  YY_INPUT's calling sequence is
# \"YY_INPUT(buf,result,max_size)\".  Its action is to place up to
# max_size characters in the character array buf and return in the
# integer variable result either the number of characters read or the
# constant YY_NULL (0 on Unix systems) to indicate EOF.  The default
# YY_INPUT reads from the global file-pointer \"yyin\".
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::p}::YY_INPUT \{buf result max_size\} \{
    variable yyin

    upvar \$result ret_val
    upvar \$buf new_data
    if \{\$yyin != \"\"\} \{"
    if $::interactive {
        puts $::dest "        gets \$yyin new_data
        if \{!\[eof \$yyin\]\} \{
            append new_data \\n
        \}"
    } else {
        puts $::dest "        set new_data \[read \$yyin \$max_size\]"
    }
    puts $::dest "        set ret_val \[string length \$new_data\]
    \} else \{
        set new_data \"\"
        set ret_val 0
    \}
\}
"
    if $::headers {
        puts $::dest "# yy_scan_string sets up input buffers for scanning in-memory
# strings instead of files.  Note that switching input sources does
# not change the start condition.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::p}::yy_scan_string \{str\} \{
    variable yy_current_buffer
    variable yyin

    append yy_current_buffer \$str
    set yyin \"\"
\}
"
    if $::headers {
        puts $::dest "# unput(c) puts the character c back onto the input stream.  It will
# be the next character scanned.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::p}::unput \{c\} \{
    variable yy_current_buffer
    variable index_

    set s \[string range \$yy_current_buffer 0 \[expr \{\$index_ - 1\}\]\]
    append s \$c
    set yy_current_buffer \[append s \[string range \$yy_current_buffer \$index_ end\]\]
\}
"
    if $::headers {
        puts $::dest "# Returns all but the first n characters of the current token back to
# the input stream, where they will be rescanned when the scanner
# looks for the next match.  yytext and yyleng are adjusted
# appropriately.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::p}::yyless \{n\} \{
    variable yy_current_buffer
    variable index_
    variable yytext
    variable yyleng

    set s \[string range \$yy_current_buffer 0 \[expr \{\$index_ - 1\}\]\]
    append s \[string range \$yytext \$n end\]
    set yy_current_buffer \[append s \[string range \$yy_current_buffer \$index_ end\]\]
    set yytext \[string range \$yytext 0 \[expr \{\$n - 1\}\]\]
    set yyleng \[string length \$yytext\]
\}
"
    if $::headers {
        puts $::dest "# input() reads the next character from the input stream.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::p}::input \{\} \{
    variable yy_current_buffer
    variable index_
    variable done_

    if \{\[string length \$yy_current_buffer\] - \$index_ < $::BUFFER_SIZE\} \{
       set new_buffer \"\"
       set new_buffer_size 0
       if \{\$done_ == 0\} \{
           YY_INPUT new_buffer new_buffer_size $::BUFFER_SIZE
           append yy_current_buffer \$new_buffer
           if \{\$new_buffer_size == 0\} \{
               set done_ 1
           \}
       \}
       if \$done_ \{"
    if $::callyywrap {
        puts -nonewline $::dest "           if \{\[yywrap\] == 0\} \{
               return \[input\]
           \} else"
    } else {
        puts -nonewline $::dest "           "
    }
    puts $::dest "if \{\[string length \$yy_current_buffer\] - \$index_ == 0\} \{
               return \{\}
           \}
        \}
    \}
    set c \[string index \$yy_current_buffer \$index_\]
    incr index_
    return \$c
\}
"
    if $::startstates {
        if $::headers {
            puts $::dest "# Pushes the current start condition onto the top of the start
# condition stack and switches to new_state as though you had used
# BEGIN new_state.
#   -- from the flex(1) man page"
        }
        puts $::dest "proc ${::p}::yy_push_state \{new_state\} \{
    variable state_stack_

    lappend state_stack_ \$new_state
\}
"
        if $::headers {
            puts $::dest "# Pops off the top of the state stack; if the stack is now empty, then
# pushes the state \"INITIAL\".
#   -- from the flex(1) man page"
        }
        puts $::dest "proc ${::p}::yy_pop_state \{\} \{
    variable state_stack_

    set state_stack_ \[lrange \$state_stack_ 0 end-1\]
    if \{\$state_stack_ == \"\"\} \{
        yy_push_state INITIAL
    \}
\}
"
        if $::headers {
            puts $::dest "# Returns the top of the stack without altering the stack's contents.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::p}::yy_top_state \{\} \{
    variable state_stack_

    return \[lindex \$state_stack_ end\]
\}
"
        if $::headers {
            puts $::dest "# BEGIN followed by the name of a start condition places the scanner
# in the corresponding start condition. . . .Until the next BEGIN
# action is executed, rules with the given start condition will be
# active and rules with other start conditions will be inactive.  If
# the start condition is inclusive, then rules with no start
# conditions at all will also be active.  If it is exclusive, then
# only rules qualified with the start condition will be active.
#   -- from the flex(1) man page"
        }
        puts $::dest "proc ${::p}::BEGIN \{new_state\} \{
    variable state_stack_

    set state_stack_ \[lrange \$state_stack_ 0 end-1\]
    lappend state_stack_ \$new_state
\}"
    }
    
    if $::startstates {
        puts $::dest "
${::p}::BEGIN INITIAL
"
    }
}

# Writes the actual scanner as a function called <code>yylex</code>.
# Note that this function may be renamed if the <code>-P</code> flag
# was given at the command line.
proc write_scanner {} {
    puts $::dest "######
# autogenerated yylex function created by fickle
######

# Whenever yylex() is called, it scans tokens from the global input
# file yyin (which defaults to stdin).  It continues until it either
# reaches an end-of-file (at which point it returns the value 0) or
# one of its actions executes a return statement.
#   -- from the flex(1) man page
proc ${::p}::yylex \{\} \{
    variable yylval

    variable yytext
    variable yylineno
    variable yyleng
    variable yy_current_buffer
    variable yy_flex_debug

    variable index_
    variable done_
    variable state_table_
"
    puts $::dest $::tab
    puts $::dest "    while \{1\} \{"
    if $::startstates {
        puts $::dest "        set yy_current_state \[yy_top_state\]"
    }
    puts $::dest "        if \{\[string length \$yy_current_buffer\] - \$index_ < $::BUFFER_SIZE\} \{
            if \{\$done_ == 0\} \{
	        set buffer_size 0
                set new_buffer \"\"
                YY_INPUT new_buffer buffer_size $::BUFFER_SIZE
                append yy_current_buffer \$new_buffer
                if \{\$buffer_size == 0 && \\
                        \[string length \$yy_current_buffer\] - \$index_ == 0\} \{
                    set done_ 1
                \}
            \}
            if \$done_ \{"
    if $::debugmode {
        puts $::dest "                if \$yy_flex_debug \{
                    puts stderr \"   ${::p} --reached end of input buffer\"
                \}"
    }
    if $::callyywrap {
        puts -nonewline $::dest "                if \{\[yywrap\] == 0\} \{
                    set done_ 0
                    continue
                \} else"
    } else {
        puts -nonewline $::dest "                "
    }
    puts $::dest "if \{\[string length \$yy_current_buffer\] - \$index_ == 0\} \{
                    break
                \}
            \}            
        \}
        set yyleng 0
        set matched_rule -1"
    
    # build up the if statements to determine which rule to execute;
    # lex is greedy and will use the rule that matches the most
    # strings
    if {$::nocase} {
        set scan_args "-nocase"
    } else {
        set scan_args ""
    }
    set rule_num 0
    foreach rule $::rule_table {
        foreach {orig_pattern state_name pattern action rule_line} $rule {}
        puts $::dest "        # rule $rule_num: $orig_pattern"
        puts -nonewline $::dest "        if \{"
        if $::startstates {
            if {$state_name == ""} {
                puts -nonewline $::dest "\$state_table_(\$yy_current_state) && \\\n                "
            } elseif {$state_name != "*"} {
                puts -nonewline $::dest "\$yy_current_state == \"$state_name\" && \\\n                "
            }
        }
        puts $::dest "\[regexp -start \$index_ -indices -line $scan_args -- \{\\A($pattern)\} \$yy_current_buffer match\] > 0\ && \\
                \[lindex \$match 1\] - \$index_ + 1 > \$yyleng\} \{
            set yytext \[string range \$yy_current_buffer \$index_ \[lindex \$match 1\]\]
            set yyleng \[string length \$yytext\]
            set matched_rule $rule_num"
        if $::debugmode {
            puts $::dest "            set yyrule_num \"rule at line $rule_line\""
        }
        puts $::dest "        \}"
        incr rule_num
    }
    # now add the default case
    puts $::dest "        if \{\$matched_rule == -1\} \{
            set yytext \[string index \$yy_current_buffer \$index_\]
            set yyleng 1"
    if $::debugmode {
        puts $::dest "            set yyrule_num \"default rule\""
    }
    puts $::dest "        \}
        incr index_ \$yyleng
        # workaround for Tcl's circumflex behavior
        if \{\[string index \$yytext end\] == \"\\n\"\} \{
            set yy_current_buffer \[string range \$yy_current_buffer \$index_ end\]
            set index_ 0
        \}"
    if $::debugmode {
        puts $::dest "        if \$yy_flex_debug \{
            puts stderr \"   ${::p} --accepting \$yyrule_num (\\\"\$yytext\\\")\"
        \}"
    }
    if $::linenums {
        puts $::dest "        set numlines \[expr \{\[llength \[split \$yytext \"\\n\"\]\] - 1\}\]"
    }
    puts $::dest "        switch -- \$matched_rule \{"
    set rule_num 0
    foreach rule $::rule_table {
        puts -nonewline $::dest "            $rule_num "
        if {[string length [lindex $rule 3]] == 0} {
            # action is empty, so use next pattern's action
            puts $::dest "-"
        } else {
            puts $::dest "\{\n[lindex $rule 3]\n            \}"
        }
        incr rule_num
    }
    puts $::dest "            default"
    if {$::suppress == 0} {
        puts $::dest "                \{ ECHO \}"
    } else {
        puts -nonewline $::dest "                \{ puts stderr \"unmatched token: \$yytext"
        if $::startstates {
            puts -nonewline $::dest " in state `\$yy_current_state'"
        }
        puts $::dest "\"; exit -1 \}"
    }
    puts $::dest "        \}"
    if $::linenums {
        puts $::dest "        incr yylineno \$numlines"
    }
    puts $::dest "    \}
    return 0
\}
######
# end autogenerated fickle functions
######
"
}

######################################################################
# utility functions

# Given a line, returns a new line with any comments removed.
proc strip_comments {line} {
    regexp -- {\A([^\#]*)} $line foo line
    return $line
}

# If the first non-whitespace character on a line is a hash, then
# return an empty string; otherwise return the entire line.
proc strip_only_comments {line} {
    if [regexp -- {\A\s*\#} $line] {
        return ""
    } else {
        return $line
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
        puts stderr "fickle: option requires an argument -- $param_name"
        exit $::PARAM_ERROR
    }
    return [lindex $param_list $pn]
}

# Display an error message to standard error along with where within
# the specification file it occurred.  Then abort this program.
proc fickle_error {message returnvalue} {
    puts -nonewline stderr $message
    puts stderr " (line $::line_count)"
    exit $returnvalue
}

# Display to a channel a brief summary of fickle command line options.
proc print_fickle_help {chan} {
    puts $chan "fickle: a Tcl lexical anaylzer generator
Usage: fickle \[options\] \[FILE\]
  FILE     a fickle specification file

Options:
  -h          print this help message and quit
  -v          be verbose while generating scanner
  -o FILE     specify name to write scanner
  -d          enable debug mode while running scanner
  -i          generate a case-insensitive scanner
  -l          keep track of line numbers in global variable yylineno
  -s          suppress default rule; unmatched input aborts with errors
  -t          write scanner to standard output
  -I          read input interactively
  -P PREFIX   change default yy prefix to PREFIX
  --version   print fickle version and quit

For more information see http://mini.net/tcl/fickle"
}

# Displays to standard out the fickle version, then exits program.
proc print_fickle_version {} {
    puts "fickle version $::FICKLE_VERSION"
    exit 0
}

######################################################################
# other fickle functions

# Parse the command line and set all global options.
proc fickle_args {argv} {
    set argvp 0
    set out_filename ""
    set write_to_stdout 0
    set ::callyywrap 1
    set ::debugmode 0
    set ::headers 1
    set ::interactive 0
    set ::nocase 0
    set ::linenums 0
    set ::startstates 0
    set ::suppress 0
    set ::BUFFER_SIZE 1024
    set ::p "yy"
    set ::verbose 0
    set ::tab {}
    while {$argvp < [llength $argv]} {
        set arg [lindex $argv $argvp]
        switch -- $arg {
            "-d" { set ::debugmode 1 }
            "-h" - "--help" { print_fickle_help stdout; exit 0 }
            "-i" { set ::nocase 1 }
            "-l" { set ::linenums 1 }
            "-o" { set out_filename [get_param $argv argvp "o"] }
            "-s" { set ::suppress 1 }
            "-t" { set write_to_stdout 1 }
            "-v" { set ::verbose 1 }
            "-I" { set ::interactive 1 }
            "-P" {
                set prefix [get_param $argv argvp "P"]
                set ::p [string tolower $prefix]
            }
            "--version" { print_fickle_version }
            default {
                if {[string index $arg 0] != "-"} {
                    break
                } else {
                    puts stderr "fickle: unknown option $arg"
                    print_fickle_help stderr
                    exit $::PARAM_ERROR
                }
            }
        }
        incr argvp
    }
    if {$argvp >= [llength $argv]} {
        # read from stdin
        set ::src stdin
	set ::in_filename {}
	set ::in_dir {}
        set out_filename "lex.yy.tcl"
    } else {
        set ::in_filename [lindex $argv $argvp]
	set ::in_dir [file dirname $::in_filename]
        if {$out_filename == ""} {
            set out_filename [file rootname $::in_filename]
            append out_filename ".tcl"
        }
        if [catch {open $::in_filename r} ::src] {
            puts stderr "Could not open specification file '$::in_filename'."
            exit $::IO_ERROR
        }
    }
    if $write_to_stdout {
        set ::dest stdout
    } else {
        if [catch {open $out_filename w} ::dest] {
            puts stderr "Could not create output file '$out_filename'."
            exit $::IO_ERROR
        }
    }
}

# Actually do the scanner generation.
proc fickle_main {} {
    set ::line_count 0

    # keep track of all rules found
    set ::rule_table ""
    
    # set up the INITIAL start state to be a normal inclusionary state
    set ::state_table(INITIAL) $::INCLUSIVE

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
                fickle_error "Syntax error." $::SYNTAX_ERROR
            }
        } else {
	    if {[lindex $line 0] == "#tab"} {
		set fn [lindex $line 1]
		if {$fn != {}} {
		    if [catch {open [file join $::in_dir $fn] r} ch] {
			puts stderr "Could not open tab file '$fn'."
			exit $::IO_ERROR
		    }
		    catch {set ::tab [read $ch]}
		    catch {close $fn}
		}
            } elseif {$file_state == "definitions"} {
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
                set rules_buf [strip_only_comments $line]
                while {[gets $::src line] >= 0 && $file_state == "rules"} {
                    if {$line == "%%"} {
                        set file_state "subroutines"
                        break
		    } elseif {[lindex $line 0] == "#include"} {
			set fn [lindex $line 1]
			if {$fn != {}} {
			    if [catch {open [file join $::in_dir $fn] r} ch] {
				puts stderr "Could not open include file '$fn'."
				exit $::IO_ERROR
			    }
			    while {[gets $ch line] >= 0} {
				incr ::line_count
				append rules_buf "\n" [strip_only_comments $line]
			    }			    
			    catch {close $fn}
			}
                    } else {
                        append rules_buf "\n" [strip_only_comments $line]
                    }
                }
                build_scanner $rules_buf
                set file_state "subroutines"
            } else {
                # file_state is subroutines -- copy verbatim to output file
                puts $::dest $line
            }
        }
    }
}

######################################################################
# start of actual script

set IO_ERROR 1
set SYNTAX_ERROR 2
set PARAM_ERROR 3
set GRAMMAR_ERROR 4

# two types of start states allowed:
set INCLUSIVE 1
set EXCLUSIVE 0

fickle_args $argv
fickle_main
