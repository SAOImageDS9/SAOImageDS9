# $Id: Makefile,v 1.1.1.1 2004/07/23 19:22:41 tang Exp $

# A simple Makefile that calls fickle upon the example specification
# files.

TCL=/usr/bin/tclsh
FICKLE=../fickle.tcl
FCL_EXS=cat.tcl verbs.tcl wc.tcl wc2.tcl cl.tcl csa.tcl tsa.tcl

all: fcl_exs

fcl_exs: $(FCL_EXS)

%.tcl: %.fcl
	-$(TCL) $(FICKLE) $<

clean:
	-rm -f $(FCL_EXS:.fcl=.tcl)

.PHONY: clean
