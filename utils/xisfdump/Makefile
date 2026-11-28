# Standalone build of fitsy's XISF container reader plus a dump driver.
# Not part of the ds9 build. See xisfdump.C.

TOP      = ../..
XML2CFG ?= xml2-config
CXX     ?= c++
CXXFLAGS = -std=c++17 -g -O1 -Wall -Wextra -Wno-unused-parameter -I$(TOP)/fitsy -I$(TOP)/include \
	   -I$(TOP)/openssl/include `$(XML2CFG) --cflags`
# the vendored codecs and OpenSSL, as built by the top level `make zlib lz4
# zstd openssl'
# fitsy's archive supplies FitsFile, FitsHead and the rest of what FitsXisf
# builds on (`make fitsy' first); xisf.C itself is compiled fresh, so the
# archive's copy of it is never the one tested.
LIBS     = $(TOP)/fitsy/libtcl9fitsy1.0.a \
	   $(TOP)/lib/libzstd.a $(TOP)/lib/liblz4.a $(TOP)/lib/libbz2.a \
	   $(TOP)/lib/libz.a $(TOP)/openssl/libcrypto.a `$(XML2CFG) --libs`

xisfdump: xisfdump.C $(TOP)/fitsy/xisf.C $(TOP)/fitsy/xisf.h
	$(CXX) $(CXXFLAGS) -o $@ xisfdump.C $(TOP)/fitsy/xisf.C $(LIBS)

clean:
	rm -rf xisfdump xisfdump.dSYM

.PHONY: clean
