// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <math.h>

#include "util.h"
#include "magnifier.h"

// Parser Stuff
#undef yyFlexLexer
#define yyFlexLexer mgFlexLexer
#include <FlexLexer.h>

void* mglval;
extern int mgparse(Magnifier*, mgFlexLexer*);

int mglex(void* vval, mgFlexLexer* ll)
{
  mglval = vval;
  return ll ? ll->yylex() : 0;
}

void mgerror(Magnifier* mg, mgFlexLexer* ll, const char* m)
{
  mg->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n') {
    mg->error(": ");
    mg->error(cmd);
  }
}

// Public Member Functions

Magnifier::Magnifier(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item) 
  : Widget(i, c, item)
{
  // no XCreateGC() at this level
  thumbnail = 0;
  needsUpdate = 0;
}

int Magnifier::parse(istringstream& istr)
{
  result = TCL_OK;
  mgFlexLexer* ll = new mgFlexLexer(&istr);
  mgparse(this, ll);
  delete ll;

  return result;
}

void Magnifier::update()
{
  needsUpdate = 1;
  redraw();
}

// Required Virtual Functions

// UpdatePixmap. This function is responsable for creating a valid 
// pixmap the size of the current Magnifier

int Magnifier::updatePixmap(const BBox& bb)
{
  if (!widgetGC)
    widgetGC = XCreateGC(display, Tk_WindowId(tkwin), 0, NULL);

  // create a valid pixmap if needed
  // bb is in canvas coords

  if (!pixmap)
    if (!(pixmap = Tk_GetPixmap(display, Tk_WindowId(tkwin),
				options->width, options->height, depth))) {
      internalError("Magnifier: Unable to Create Pixmap");
      return TCL_OK;
    }

  if (needsUpdate) {
    if (thumbnail) {
      XSetClipOrigin(display, widgetGC, 0, 0);
      XCopyArea(display, thumbnail, pixmap, widgetGC, 0, 0, 
		options->width, options->height, 0, 0);
    }
    else
      clearPixmap();
  }

  return TCL_OK;
}

void Magnifier::invalidPixmap()
{
  Widget::invalidPixmap();
  update();
}

// Command Functions

void Magnifier::getBBoxCmd()
{
  ostringstream str;
  str << options->width << " " << options->height << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);  
}

void Magnifier::updateCmd(void* pp)
{
  thumbnail = (Pixmap)pp;
  update();
}

