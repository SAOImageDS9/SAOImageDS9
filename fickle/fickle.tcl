#!/usr/bin/tclsh

# $Id: fickle.tcl,v 1.6 2004/11/14 02:36:28 tang Exp $

set FICKLE_VERSION 2.04

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
    if $::callyywrap {
        if $::headers {
            puts $::dest "# If ${::p}wrap() returns false (zero), then it is assumed that the
# function has gone ahead and set up ${::p}in to point to another input
# file, and scanning continues.  If it returns true (non-zero), then
# the scanner terminates, returning 0 to its caller.  Note that in
# either case, the start condition remains unchanged; it does not
# revert to INITIAL.
#   -- from the flex(1) man page"
        }
        puts $::dest "proc ${::p}wrap \{\} \{
    return 1
\}
"
    }
    if $::headers {
        puts $::dest "# ECHO copies ${::p}text to the scanner's output if no arguments are
# given.  The scanner writes its ECHO output to the ${::p}out global
# (default, stdout), which may be redefined by the user simply by
# assigning it to some other channel.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ECHO \{\{s \"\"\}\} \{
    if \{\$s == \"\"\} \{
        puts -nonewline \$::${::p}out \$::${::p}text
    \} else \{
        puts -nonewline \$::${::p}out \$s
    \}
\}
"
    if $::headers {
        puts $::dest "# ${::P}_FLUSH_BUFFER flushes the scanner's internal buffer so that the
# next time the scanner attempts to match a token, it will first
# refill the buffer using ${::P}_INPUT.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::P}_FLUSH_BUFFER \{\} \{
    set ::${::p}_buffer \"\"
    set ::${::p}_index 0
    set ::${::p}_done 0
\}
"
    if $::headers {
        puts $::dest "# ${::p}restart(new_file) may be called to point ${::p}in at the new input
# file.  The switch-over to the new file is immediate (any previously
# buffered-up input is lost).  Note that calling ${::p}restart with ${::p}in
# as an argument thus throws away the current input buffer and
# continues scanning the same input file.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::p}restart \{new_file\} \{
    set ::${::p}in \$new_file
    ${::P}_FLUSH_BUFFER
\}
"       
    if $::headers {
        puts $::dest "# The nature of how it gets its input can be controlled by defining
# the ${::P}_INPUT macro.  ${::P}_INPUT's calling sequence is
# \"${::P}_INPUT(buf,result,max_size)\".  Its action is to place up to
# max_size characters in the character array buf and return in the
# integer variable result either the number of characters read or the
# constant ${::P}_NULL (0 on Unix systems) to indicate EOF.  The default
# ${::P}_INPUT reads from the global file-pointer \"${::p}in\".
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::P}_INPUT \{buf result max_size\} \{
    upvar \$result ret_val
    upvar \$buf new_data
    if \{\$::${::p}in != \"\"\} \{"
    if $::interactive {
        puts $::dest "        gets \$::${::p}in new_data
        if \{!\[eof \$::${::p}in\]\} \{
            append new_data \\n
        \}"
    } else {
        puts $::dest "        set new_data \[read \$::${::p}in \$max_size\]"
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
    puts $::dest "proc ${::p}_scan_string \{str\} \{
    append ::${::p}_buffer \$str
    set ::${::p}in \"\"
\}
"
    if $::headers {
        puts $::dest "# unput(c) puts the character c back onto the input stream.  It will
# be the next character scanned.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc unput \{c\} \{
    set s \[string range \$::${::p}_buffer 0 \[expr \{\$::${::p}_index - 1\}\]\]
    append s \$c
    set ::${::p}_buffer \[append s \[string range \$::${::p}_buffer \$::${::p}_index end\]\]
\}
"
    if $::headers {
        puts $::dest "# Returns all but the first n characters of the current token back to
# the input stream, where they will be rescanned when the scanner
# looks for the next match.  ${::p}text and ${::p}leng are adjusted
# appropriately.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::p}less \{n\} \{
    set s \[string range \$::${::p}_buffer 0 \[expr \{\$::${::p}_index - 1\}\]\]
    append s \[string range \$::${::p}text \$n end\]
    set ::${::p}_buffer \[append s \[string range \$::${::p}_buffer \$::${::p}_index end\]\]
    set ::${::p}text \[string range \$::${::p}text 0 \[expr \{\$n - 1\}\]\]
    set ::${::p}leng \[string length \$::${::p}text\]
\}
"
    if $::headers {
        puts $::dest "# input() reads the next character from the input stream.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc input \{\} \{
    if \{\[string length \$::${::p}_buffer\] - \$::${::p}_index < $::BUFFER_SIZE\} \{
       set new_buffer_size 0
       if \{\$::${::p}_done == 0\} \{
           ${::P}_INPUT new_buffer new_buffer_size $::BUFFER_SIZE
           append ::${::p}_buffer \$new_buffer
           if \{\$new_buffer_size == 0\} \{
               set ::${::p}_done 1
           \}
       \}
       if \$::${::p}_done \{"
    if $::callyywrap {
        puts -nonewline $::dest "           if \{\[${::p}wrap\] == 0\} \{
               return \[input\]
           \} else"
    } else {
        puts -nonewline $::dest "           "
    }
    puts $::dest "if \{\[string length \$::${::p}_buffer\] - \$::${::p}_index == 0\} \{
               return \{\}
           \}
        \}
    \}
    set c \[string index \$::${::p}_buffer \$::${::p}_index\]
    incr ::${::p}_index
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
        puts $::dest "proc ${::p}_push_state \{new_state\} \{
    lappend ::${::p}_state_stack \$new_state
\}
"
        if $::headers {
            puts $::dest "# Pops off the top of the state stack; if the stack is now empty, then
# pushes the state \"INITIAL\".
#   -- from the flex(1) man page"
        }
        puts $::dest "proc ${::p}_pop_state \{\} \{
    set ::${::p}_state_stack \[lrange \$::${::p}_state_stack 0 end-1\]
    if \{\$::${::p}_state_stack == \"\"\} \{
        ${::p}_push_state INITIAL
    \}
\}
"
        if $::headers {
            puts $::dest "# Returns the top of the stack without altering the stack's contents.
#   -- from the flex(1) man page"
    }
    puts $::dest "proc ${::p}_top_state \{\} \{
    return \[lindex \$::${::p}_state_stack end\]
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
        puts $::dest "proc BEGIN \{new_state\ \{prefix $::p\}\} \{
    eval set ::\${prefix}_state_stack \[lrange \\\$::\${prefix}_state_stack 0 end-1\]
    eval lappend ::\${prefix}_state_stack \$new_state
\}
"
    }
    
    puts $::dest "# initialize values used by the lexer
set ::${::p}text {}
set ::${::p}leng 0
set ::${::p}_buffer \{\}
set ::${::p}_index 0
set ::${::p}_done 0"
    if $::startstates {
        puts $::dest "set ::${::p}_state_stack \{\}
BEGIN INITIAL
array set ::${::p}_state_table \{[array get ::state_table]\}"
    }
    if $::linenums {
        puts $::dest "set ::${::p}lineno 1"
    }
    if $::debugmode {
        puts $::dest "set ::${::p}_flex_debug 1"
    }
    puts $::dest "if \{!\[info exists ::${::p}in\]\} \{
    set ::${::p}in \"stdin\"
\}
if \{!\[info exists ::${::p}out\]\} \{
    set ::${::p}out \"stdout\"
\}
"
}


# Writes the actual scanner as a function called <code>yylex</code>.
# Note that this function may be renamed if the <code>-P</code> flag
# was given at the command line.
proc write_scanner {} {
    puts $::dest "######
# autogenerated ${::p}lex function created by fickle
######

# Whenever yylex() is called, it scans tokens from the global input
# file yyin (which defaults to stdin).  It continues until it either
# reaches an end-of-file (at which point it returns the value 0) or
# one of its actions executes a return statement.
#   -- from the flex(1) man page
proc ${::p}lex \{\} \{
    upvar #0 ::${::p}text ${::p}text
    upvar #0 ::${::p}leng ${::p}leng
    while \{1\} \{"
    if $::startstates {
        puts $::dest "        set ${::p}_current_state \[${::p}_top_state\]"
    }
    puts $::dest "        if \{\[string length \$::${::p}_buffer\] - \$::${::p}_index < $::BUFFER_SIZE\} \{
            if \{\$::${::p}_done == 0\} \{
                set ${::p}_new_buffer \"\"
                ${::P}_INPUT ${::p}_new_buffer ${::p}_buffer_size $::BUFFER_SIZE
                append ::${::p}_buffer \$${::p}_new_buffer
                if \{\$${::p}_buffer_size == 0 && \\
                        \[string length \$::${::p}_buffer\] - \$::${::p}_index == 0\} \{
                    set ::${::p}_done 1
                \}
            \}
            if \$::${::p}_done \{"
    if $::debugmode {
        puts $::dest "                if \$::${::p}_flex_debug \{
                    puts stderr \"   --reached end of input buffer\"
                \}"
    }
    if $::callyywrap {
        puts -nonewline $::dest "                if \{\[${::p}wrap\] == 0\} \{
                    set ::${::p}_done 0
                    continue
                \} else"
    } else {
        puts -nonewline $::dest "                "
    }
    puts $::dest "if \{\[string length \$::${::p}_buffer\] - \$::${::p}_index == 0\} \{
                    break
                \}
            \}            
        \}
        set ::${::p}leng 0
        set ${::p}_matched_rule -1"
    
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
                puts -nonewline $::dest "\$::${::p}_state_table(\$${::p}_current_state) && \\\n                "
            } elseif {$state_name != "*"} {
                puts -nonewline $::dest "\$${::p}_current_state == \"$state_name\" && \\\n                "
            }
        }
        puts $::dest "\[regexp -start \$::${::p}_index -indices -line $scan_args -- \{\\A($pattern)\} \$::${::p}_buffer ${::p}_match\] > 0\ && \\
                \[lindex \$${::p}_match 1\] - \$::${::p}_index + 1 > \$::${::p}leng\} \{
            set ::${::p}text \[string range \$::${::p}_buffer \$::${::p}_index \[lindex \$${::p}_match 1\]\]
            set ::${::p}leng \[string length \$::${::p}text\]
            set ${::p}_matched_rule $rule_num"
        if $::debugmode {
            puts $::dest "            set ${::p}rule_num \"rule at line $rule_line\""
        }
        puts $::dest "        \}"
        incr rule_num
    }
    # now add the default case
    puts $::dest "        if \{\$${::p}_matched_rule == -1\} \{
            set ::${::p}text \[string index \$::${::p}_buffer \$::${::p}_index\]
            set ::${::p}leng 1"
    if $::debugmode {
        puts $::dest "            set ${::p}rule_num \"default rule\""
    }
    puts $::dest "        \}
        incr ::${::p}_index \$::${::p}leng
        # workaround for Tcl's circumflex behavior
        if \{\[string index \$::${::p}text end\] == \"\\n\"\} \{
            set ::${::p}_buffer \[string range \$::${::p}_buffer \$::${::p}_index end\]
            set ::${::p}_index 0
        \}"
    if $::debugmode {
        puts $::dest "        if \$::${::p}_flex_debug \{
            puts stderr \"   --accepting \$${::p}rule_num (\\\"\$::${::p}text\\\")\"
        \}"
    }
    if $::linenums {
        puts $::dest "        set numlines \[expr \{\[llength \[split \$::${::p}text \"\\n\"\]\] - 1\}\]"
    }
    puts $::dest "        switch -- \$${::p}_matched_rule \{"
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
        puts -nonewline $::dest "                \{ puts stderr \"unmatched token: \$::${::p}text"
        if $::startstates {
            puts -nonewline $::dest " in state `\$${::p}_current_state'"
        }
        puts $::dest "\"; exit -1 \}"
    }
    puts $::dest "        \}"
    if $::linenums {
        puts $::dest "        incr ::${::p}lineno \$numlines"
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
    set ::P "YY"
    set ::verbose 0
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
                set ::P [string toupper $prefix]
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
        set out_filename "lex.yy.tcl"
    } else {
        set in_filename [lindex $argv $argvp]
        if {$out_filename == ""} {
            set out_filename [file rootname $in_filename]
            append out_filename ".tcl"
        }
        if [catch {open $in_filename r} ::src] {
            puts stderr "Could not open specification file '$in_filename'."
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
            if {$file_state == "definitions"} {
                handle_defs $line
            } elseif {$file_state == "rules"} {
                # keep reading the rest of the file until EOF or
                # another '%%' appears
                set rules_buf [strip_only_comments $line]
                while {[gets $::src line] >= 0 && $file_state == "rules"} {
                    if {$line == "%%"} {
                        set file_state "subroutines"
                        break
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
