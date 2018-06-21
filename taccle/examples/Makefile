# $Id: Makefile,v 1.2 2004/09/29 16:23:28 tang Exp $

TCL=tclsh
FICKLE=~/fickle/fickle.tcl
TACCLE=../taccle.tcl
EXAMPLES=interactive_calculator.tcl simple_calculator.tcl infix_calc.tcl

all: $(EXAMPLES) simple_scanner.tcl

%.tcl: %.fcl
	$(TCL) $(FICKLE) $<

%.tcl: %.tac
	$(TCL) $(TACCLE) -d -v -w $<

clean:
	-rm -f *tcl *output
