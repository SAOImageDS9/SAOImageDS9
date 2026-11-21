# Standalone build of fitsy's XISF container reader plus a dump driver.
# Not part of the ds9 build. See xisfdump.C.

TOP      = ../..
XML2CFG ?= xml2-config
CXX     ?= c++
CXXFLAGS = -std=c++17 -g -O1 -Wall -Wextra -I$(TOP)/fitsy `$(XML2CFG) --cflags`
LIBS     = `$(XML2CFG) --libs`

xisfdump: xisfdump.C $(TOP)/fitsy/xisf.C $(TOP)/fitsy/xisf.h
	$(CXX) $(CXXFLAGS) -o $@ xisfdump.C $(TOP)/fitsy/xisf.C $(LIBS)

clean:
	rm -rf xisfdump xisfdump.dSYM

.PHONY: clean
