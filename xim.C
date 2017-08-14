// Copyright (C) 1999-2013
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <sys/time.h>

#include <iostream>
#include <sstream>
using namespace std;

#include <math.h>

#include <tcl.h>

#ifdef __WIN32
#include <Winsock2.h>
#endif

#include "iistcl.h"

extern "C" {
#include "iis.h"
#include "xim.h"

void iisIO(ClientData data, int mask)
{
#ifdef _WIN64
  int fd = (long long)data;
#else
  int fd = (long)data;
#endif

  if (IISDebug)
    cerr << "iisIO() " << fd << ' ' << mask << endl;

  int idx;
#ifdef __WIN32
  idx = fmod(fd,MAXCHANNEL);
#else
  idx = fd;
#endif

  if ((idx < MAXCHANNEL) && iis->func[idx]) {
    (*iis->func[idx])(iis->chan[idx], &fd, NULL);
  }
  else
    cerr << "Error: IIS iisIO problems" << endl;
}

} // extern 'C'

int xim_addInput(XimDataPtr xim, int fd, 
		 void (*func)(IoChan*, int*, void*), IoChanPtr chan)
{
  if (IISDebug)
    cerr << "xim_addInput() " << fd << ' ' << chan << endl;

  int idx;
#ifdef __WIN32
  idx = fmod(fd,MAXCHANNEL);
#else
  idx = fd;
#endif

  iis->func[idx] = func;
  iis->chan[idx] = chan;
#ifndef __WIN32
  Tcl_CreateFileHandler(fd, TCL_READABLE, (void (*)(ClientData,int))iisIO,
			(ClientData)long(fd));
#else
  Tcl_CreateEventSource(setupProc, checkProc, (ClientData)long(fd));
#endif

  return idx;
}

#ifdef __WIN32
void setupProc(void* fd, int flags)
{
  Tcl_Time blockTime = {0,1000};
  Tcl_SetMaxBlockTime(&blockTime);
  return;
}

void checkProc(void* fdd, int flags)
{
#ifdef __WIN32
  int fd = (long long)fdd;
#else
  int fd = (int)fdd;
#endif
  fd_set readfds;
  struct timeval tv = {0,0};

  FD_ZERO(&readfds);
  FD_SET(fd, &readfds);
  int got = select(fd+1, &readfds, NULL, NULL, &tv);

  if (got<0)
    Tcl_DeleteEventSource(setupProc, checkProc, fdd);
  else if (got>0) 
    iisIO(fdd,0);
}
#endif

void xim_removeInput(XimDataPtr xim, int fd)
{
  if (IISDebug)
    cerr << "xim_removeInput() " << fd << endl;

  if (fd < MAXCHANNEL) {
    iis->func[fd] = NULL;
    iis->chan[fd] = NULL;
#ifndef __WIN32
    Tcl_DeleteFileHandler(fd);
#endif
  }
  else
    cerr << "Error: IIS xim_removeInput-- bad fd" << endl;
}

void xim_initialize(XimDataPtr xim, int config, int nframes, int hardreset)
{
  // from ximtool xim_initialize

  get_fbconfig(xim);

  xim->fb_configno = config;
  xim->df_p = &xim->frames[0];

  FbConfigPtr cf = &xim->fb_config[config-1];
  xim->width = cf->width;
  xim->height = cf->height;

  ostringstream str;
  str << "IISInitializeCmd " << xim->width << ' ' << xim->height << ends;
  iis->eval((char*)str.str().c_str());

  if (IISDebug)
    cerr << "IISInitializeCmd " << xim->width << ' ' << xim->height << endl;
}

void xim_initFrame(XimDataPtr xim, int frame, int nframes, FbConfig* config,
		   char* memModel)
{
  // from ximtool xim_initFrame
 
  FrameBufPtr fb = &xim->frames[frame-1];
  fb->frameno = frame;
  fb->raster = frame;
  fb->zoomras = 0;
  fb->zoommap = 0;
  fb->dispmap = 0;
  fb->colormap = DEF_COLORMAP;
  fb->offset = 0.5;
  fb->scale = 1.0;
  fb->xscale = fb->yscale = 1.0;
  fb->xmag = fb->ymag = 1.0;
  fb->xcen = fb->ycen = 0.0;
  fb->xoff = fb->yoff = 0.0;
  fb->xflip = fb->yflip = 0;
  fb->label[0] = '\0';
  fb->wcsbuf[0] = '\0';
  fb->nmaps = 0;
 
   // my stuff
  ostringstream str;
  str << "IISInitFrameCmd " << frame << ends;
  iis->eval((char*)str.str().c_str());

  if (IISDebug)
    cerr << "xim_initFrame() " << str.str().c_str() << endl;
}

void xim_setDisplayFrame(XimDataPtr xim, int frame)
{
  // from imtool xim_setDisplayFrame

  FbConfig* config = &xim->fb_config[xim->fb_configno-1];
  xim->df_p = &xim->frames[frame-1];
  xim->width = config->width;
  xim->height = config->height;

  // and my stuff
  ostringstream str;
  str << "IISSetDisplayFrameCmd " << frame << ' '
      << config->width << ' ' << config->height << ends;
  iis->eval((char*)str.str().c_str());

  if (IISDebug) {
    cerr << "xim_setDisplayFrame() " << str.str().c_str() << endl;
  }
}

void xim_setReferenceFrame(IoChanPtr chan, int frame)
{
  // from imtool xim_setDisplayFrame

  // Ignore request if channel not active.
  if (!chan->type)
    return;

  XimDataPtr xim = (XimDataPtr)chan->xim;
  int frameno = max(1, min(MAX_FRAMES, frame));
  FrameBufPtr fb = &xim->frames[frameno-1];

  // Ignore request if not a valid frame.
  //
  // All frames are valid, ds9 frames now work with iis.
  //
  // if (fb->frameno > 0) {
  chan->reference_frame = frameno;
  chan->rf_p = fb;
  //  }

  ostringstream str;
  str << "IISSetRefFrameCmd " << frame << ends;
  const char *wcs = iis->evalstr((char*)str.str().c_str());

  if (IISDebug) {
    if (*wcs)
      cerr << "xim_setReferenceFrame() " << str.str().c_str() 
	   << " " << wcs << endl;
    else
      cerr << "xim_setReferenceFrame() " << str.str().c_str() << endl;
  }

  if (*wcs)
    strcpy(fb->wcsbuf, wcs);
}

void xim_eraseFrame(XimDataPtr xim, int frame)
{
  ostringstream str;
  str << "IISEraseFrameCmd " << frame << ends;
  iis->eval((char*)str.str().c_str());

  if (IISDebug)
    cerr << "xim_eraseFrame() " << str.str().c_str() << endl;
}

void xim_message(XimDataPtr xim, char* message, char* imtitle)
{
  ostringstream str;
  str << "IISMessageCmd {" << message << ' ' << imtitle << '}' << ends;
  iis->eval((char*)str.str().c_str());

  if (IISDebug)
    cerr << "xim_message() " << str.str().c_str() << endl;
}

void xim_wcs(int frame, float a, float b, float c, float d, 
	     float tx, float ty, float z1, float z2, int zt)
{
  ostringstream str;
  str << "IISWCSCmd " << frame << ' '
      << a << ' ' << b << ' ' << c << ' ' << d << ' ' 
      << tx << ' ' << ty << ' ' 
      << z1 << ' ' << z2 << ' ' 
      << zt << ends;
  iis->eval((char*)str.str().c_str());

  if (IISDebug)
    cerr << "xim_wcs() " << frame << ' '
      << a << ' ' << b << ' ' << c << ' ' << d << ' ' 
      << tx << ' ' << ty << ' ' 
      << z1 << ' ' << z2 << ' ' 
      << zt << endl;
}

void GtWritePixels(void* gt, int frame, void* pixels, int bits,
		   int xx, int yy, int dx, int dy)
{
  ostringstream str;
  str << "IISWritePixelsCmd " << frame << ' ' << pixels << ' ' 
      << xx << ' ' << yy << ' ' << dx << ' ' << dy << ends;
  iis->eval((char*)str.str().c_str());

  if (IISDebug)
    cerr << "GtWritePixels() " << str.str().c_str() << endl;
}

void GtReadPixels(void* gt, int frame, void* pixels, int nbits, 
		  int xx, int yy, int dx, int dy)
{
  ostringstream str;
  str << "IISReadPixelsCmd " << frame << ' ' << pixels << ' ' 
      << xx << ' ' << yy << ' ' << dx << ' ' << dy << ends;
  iis->eval((char*)str.str().c_str());

  if (IISDebug)
    cerr << "GtReadPixels() " << str.str().c_str() << endl;
}

void xim_cursorMode(XimDataPtr xim, int state)
{
  ostringstream str;
  str << "IISCursorModeCmd " << state << ends;
  iis->eval((char*)str.str().c_str());

  if (IISDebug)
    cerr << "xim_cursorMode() " << state << endl;
}

void xim_getCursorPos(XimDataPtr xim, float* xx, float* yy, 
		      int* raster, int* frame)
{
  {
    ostringstream str;
    str << "IISGetCursorPosCmd " << ends;
    iis->eval((char*)str.str().c_str());
  }
  if (IISDebug)
    cerr << "xim_getCursorPos()" << endl;
  {
    string x(iis->result());
    istringstream str(x);
    str >> *xx >> *yy  >> *frame;
    *raster = *frame;
  }
}

void xim_setCursorPos(XimDataPtr xim, int xx, int yy)
{
  ostringstream str;
  str << "IISSetCursorPosCmd " << xx << ' ' << yy << ends;
  iis->eval((char*)str.str().c_str());

  if (IISDebug)
    cerr << "xim_setCursorPos()" << endl;
}

