// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitschannel_h__
#define __fitschannel_h__

#include "strm.h"

class FitsChannel : public virtual FitsStream<Tcl_Channel> {
public:
  FitsChannel(Tcl_Interp*, const char*, const char*);
};

class FitsFitsChannel : public FitsChannel, public FitsFitsStream<Tcl_Channel>{
public:
  FitsFitsChannel(Tcl_Interp* interp, const char* ch, 
		  const char* ext, FlushMode flush)
    : FitsChannel(interp, ch, ext), FitsFitsStream<Tcl_Channel>(flush) {}
  FitsFitsChannel(Tcl_Interp* interp, const char* ch, 
		  const char* ext, ScanMode mode, FlushMode flush)
    : FitsChannel(interp, ch, ext), FitsFitsStream<Tcl_Channel>(mode, flush) {}
};

class FitsFitsNextChannel : public FitsFitsNextStream<Tcl_Channel> {
public:
  FitsFitsNextChannel(FitsFile* prev) 
    : FitsFitsNextStream<Tcl_Channel>(prev) {}
};

class FitsArrChannel : public FitsChannel, FitsArrStream<Tcl_Channel> {
public:
  FitsArrChannel(Tcl_Interp* interp, const char* ch, const char* ext, 
		 FlushMode flush)
    : FitsChannel(interp, ch, ext), FitsArrStream<Tcl_Channel>(flush) {}
};

class FitsNRRDChannel : public FitsChannel, FitsNRRDStream<Tcl_Channel> {
public:
  FitsNRRDChannel(Tcl_Interp* interp, const char* ch, const char* ext, 
		 FlushMode flush)
    : FitsChannel(interp, ch, ext), FitsNRRDStream<Tcl_Channel>(flush) {}
};

class FitsMosaicChannel : public FitsChannel, FitsMosaicStream<Tcl_Channel> {
public:
  FitsMosaicChannel(Tcl_Interp* interp, const char* ch, FlushMode flush)
    : FitsChannel(interp, ch, ""), FitsMosaicStream<Tcl_Channel>(flush) {}
};

class FitsMosaicNextChannel : public FitsMosaicNextStream<Tcl_Channel> {
public:
  FitsMosaicNextChannel(FitsFile* prev, FlushMode flush) 
    : FitsMosaicNextStream<Tcl_Channel>(prev, flush) {}
};

#endif

