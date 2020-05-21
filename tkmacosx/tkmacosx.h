// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __tkmacosx_h__
#define __tkmacosx_h__

#include <tkMacOSXPrivate.h>

#include <vector.h>

@interface PMView : NSView
{
}
- (PMView*)init;
- (void)alloc;
- (void)dealloc;
- (void)drawRect: (NSRect)rect;
@end

class TkMacosx {
 private:
  Tcl_Interp* interp;

  Matrix canvasToPage;
  PMView* pmView;

  int pmPrint(int, const char**);
  int pmPrintBegin(int, const char**);
  int pmPrintEnd();
  int pmPrintText(int, const char**);
  int pmPageSetup();

 public:
  TkMacosx(Tcl_Interp*);
  ~TkMacosx();

  int pm(int, const char**);
  int sc(int, const char**);
  int locale(int, const char**);

  const Matrix& getCanvasToPage() {return canvasToPage;}
};

extern TkMacosx* tkmacosx;

#endif
