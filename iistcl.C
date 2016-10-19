// Copyright (C) 1999-2013
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#include <iostream>
#include <sstream>
using namespace std;

#include <tcl.h>

#include "iistcl.h"

extern "C" {
#include "iis.h"
#include "xim.h"

  int Tcliis_Init(Tcl_Interp* interp);
  int TcliisCmd(ClientData data, Tcl_Interp *interp, int argc, 
	     const char* argv[]);
}

IIS* iis=NULL;

// Debug

int IISDebug= 0;

static char* dupstr(const char* str)
{
  char* copy;
  if (str) {
    copy=new char[strlen(str)+1];
    strcpy(copy,str);
  }
  else
    copy=NULL;

  return copy;
}

int Tcliis_Init(Tcl_Interp* interp) {

  if (IISDebug)
    cerr << "Iis_Init()" << endl;

  if (Tcl_InitStubs(interp, TCL_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  Tcl_CreateCommand(interp, "iis", TcliisCmd,
		    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION) != TCL_OK)
    return TCL_ERROR;

  iis = new IIS(interp);

  if (iis)
    return TCL_OK;
  else
    return TCL_ERROR;
}

int TcliisCmd(ClientData data, Tcl_Interp *interp, int argc, const char* argv[])
{
  if (argc>=2) {
    if (!strncmp(argv[1], "open", 4))
      return iis->open(argc, argv);
    else if (!strncmp(argv[1], "close", 4))
      return iis->close();
    else if (!strncmp(argv[1], "retcur", 4))
      return iis->retcur(argc, argv);
    else if (!strncmp(argv[1], "debug", 4))
      return iis->debug(argc, argv);
    else {
      Tcl_AppendResult(interp, "iis: unknown command: ", argv[1], NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: iis ?open?close?retcur?", NULL);
    return TCL_ERROR;
  }
}

IIS::IIS(Tcl_Interp* intp)
{
  interp = intp;

  {
    for (int i=0; i<MAXCHANNEL; i++) {
      chan[i] = NULL;
      func[i] = NULL;
    }
  }

  // Resources
  xim.def_config = 1;	         	 // default FB config
  xim.def_nframes = 0;	         	 // default number of frames
  xim.ncolors = DEF_NCOLORS;             // number of image pixel colors
  xim.tileBorder = DEF_TILE_BORDER;      // image border when tiling frames
  xim.borderColor = dupstr(DEF_BORDER_COLOR); // border color for tileFrames
  xim.autoscale = 0;         	         // is XY autoscaling enabled
  xim.antialias = 0;         	         // apply antialiasing when dezooming
  xim.antialiasType = (char*)DEF_ANTIALIASTYPE; // type of antialiasing
  xim.invert = 0;	         	 // use inverted colormap
  xim.tileFrames = 0;         	         // tile rather than overlay frames
  xim.highlightFrames = 0;               // highlight tiled frames
  xim.gui = dupstr("default");        	 // GUI file name
  //  xim.imtoolrc = dupstr(FBCONFIG_2);     // imtoolrc file name
  xim.memModel = dupstr("fast");         // *FB memory model
  xim.userCMap1 = dupstr("none");        // user colormap file
  xim.userCMap2 = dupstr("none");        // user colormap file
  xim.userCMapDir1 = dupstr("none");     // user colormap directory
  xim.userCMapDir2 = dupstr(CMAPCONFIG); // user colormap directory
  xim.printConfig = dupstr(PRINTCONFIG); // printer configuration file
  xim.input_fifo = dupstr(O_DEVNAME);    // *client's output, e.g. /dev/imt1o
  xim.output_fifo = dupstr(I_DEVNAME);   // *client's input, e.g. /dev/imt1i 
  xim.unixaddr = dupstr(DEF_UNIXADDR);   // *format for unix socket path
  xim.ism_addr = dupstr("none");
  xim.port = DEF_PORT;                   // *port for INET socket
  xim.ism_task = dupstr(DEF_ISM_TASK);

  // items that require 'c' style memory allocation
  xim.imtoolrc = (char *) calloc(strlen(FBCONFIG_2)+1, sizeof(char));
  strncpy (xim.imtoolrc, FBCONFIG_2, strlen(FBCONFIG_2));

  /* Internal state. */
  xim.obm = NULL;		// object manager
  {
    for (int i=0; i<MAX_CLIENTS; i++) {
      xim.chan[i].xim = NULL;     // backpointer to xim descriptor
      xim.chan[i].id = 0;      // input callback id
      xim.chan[i].type = 0;       // channel type
      xim.chan[i].datain = 0;     // input channel
      xim.chan[i].dataout = 0;    // output channel
      xim.chan[i].keepalive = 0;  // used to keep input fifo ready
      xim.chan[i].path[0] = '\0'; // for unix sockets
      xim.chan[i].reference_frame = 0;// reference (cmd i/o) frame
      xim.chan[i].rf_p = NULL;    // reference frame descriptor
    }
  }
  xim.cursor_chan = NULL;	// *cursor mode channel
  {
    xim.ism_chan.xim = (XtPointer)NULL;
    xim.ism_chan.id = 0;
    xim.ism_chan.datain = 0;
    xim.ism_chan.dataout = 0;
    xim.ism_chan.connected = 0;
    xim.ism_chan.name[0] = '\0';
    xim.ism_chan.path[0] = '\0';
    xim.ism_chan.msgbuf[0] = '\0';
  }
  {
    for (int i=0; i<MAX_ISM; i++) {
      xim.ism_client[i].xim = (XtPointer)NULL;
      xim.ism_client[i].id = 0;
      xim.ism_client[i].datain = 0;
      xim.ism_client[i].dataout = 0;
      xim.ism_client[i].connected = 0;
      xim.ism_client[i].name[0] = '\0';
      xim.ism_client[i].path[0] = '\0';
      xim.ism_client[i].msgbuf[0] = '\0';
    }
  }
  xim.toplevel = NULL;		// dummy toplevel app shell
  xim.gt = NULL;		// *imagewin gterm-image widget
  xim.cb = NULL;		// colorbar gterm-image widget
  xim.gm_border = NULL;		// border marker for tileFrames
  xim.tileFramesList = 0;	// frames to be tiled (bitmask)
  xim.nTileFrames = 0;		// number of frames to be tiled
  xim.tileRows = 1;
  xim.tileCols = 1;
  xim.tileByRows = 1;
  xim.tileTopDown = 1;
  xim.tileLabels = 0;
  xim.rop = 0;			// rasterop for mappings
  xim.display_frame = 0;	// currently displayed frame
  xim.df_p = NULL;		// *display frame descriptor

  {
    for (int i=0; i<MAX_FRAMES; i++) {
      xim.frames[i].frameno = 0;
      xim.frames[i].raster = 0;
      xim.frames[i].zoomras = 0;
      xim.frames[i].zoommap = 0;
      xim.frames[i].dispmap = 0;
      xim.frames[i].colormap = DEF_COLORMAP;
      xim.frames[i].offset = 0.5;
      xim.frames[i].scale = 1.0;
      xim.frames[i].xscale = xim.frames[i].yscale = 1.0;
      xim.frames[i].xmag = xim.frames[i].ymag = 1.0;
      xim.frames[i].xcen = xim.frames[i].ycen = 0.0;
      xim.frames[i].xoff = xim.frames[i].yoff = 0.0;
      xim.frames[i].xflip = xim.frames[i].yflip = 0;
      xim.frames[i].label[0] = '\0';
      xim.frames[i].ctran.valid = 0;
      xim.frames[i].ctran.a = xim.frames[i].ctran.b = 0;
      xim.frames[i].ctran.c = xim.frames[i].ctran.d = 0;
      xim.frames[i].ctran.tx = xim.frames[i].ctran.ty = 0;
      xim.frames[i].ctran.z1 = xim.frames[i].ctran.z2 = 0;
      xim.frames[i].ctran.zt = 0;
      xim.frames[i].ctran.format[0] = '\0';
      xim.frames[i].ctran.imtitle[0] = '\0';
      xim.frames[i].wcsbuf[0] = '\0';
      xim.frames[i].nmaps = 0;
    }
  }

  xim.fb_configno = 0;		// *current config number
  xim.nframes = 0;		// *current number of frame bufs
  xim.width = 0;
  xim.height = 0;		// *current width, height
  //xim.fb_config[MAX_FBCONFIG]; // *fb config table
  xim.clientPrivate = NULL;	// used by imtool client code

  xim.psim = NULL;		// EPS image struct pointer
  xim.pcp = NULL;		// printer config pointer
  xim.flp = NULL;	        // load disk file pointer
  xim.fsp = NULL;		// save disk file pointer
}

IIS::~IIS()
{
  if (xim.borderColor)
    delete [] xim.borderColor;
  if (xim.gui)
    delete [] xim.gui;
  //  if (xim.imtoolrc)
  //    delete xim.imtoolrc;
  if (xim.memModel)
    delete [] xim.memModel;
  if (xim.userCMap1)
    delete [] xim.userCMap1;
  if (xim.userCMap2)
    delete [] xim.userCMap2;
  if (xim.userCMapDir1)
    delete [] xim.userCMapDir1;
  if (xim.userCMapDir2)
    delete [] xim.userCMapDir2;
  if (xim.antialiasType)
    delete xim.antialiasType;
  if (xim.printConfig)
    delete [] xim.printConfig;
  if (xim.input_fifo)
    delete [] xim.input_fifo;
  if (xim.output_fifo)
    delete [] xim.output_fifo;
  if (xim.unixaddr)
    delete [] xim.unixaddr;
  if (xim.ism_addr)
    delete [] xim.ism_addr;
  if (xim.ism_task)
    delete [] xim.ism_task;

  // items that require 'c' style memory allocation
  if (xim.imtoolrc)
    free(xim.imtoolrc);
}

void IIS::eval(char* cmd)
{
  if (Tcl_Eval(interp, cmd) == TCL_ERROR)
    cerr << Tcl_GetStringResult(interp) << endl;
}

const char *IIS::evalstr(char* cmd)
{
  if (Tcl_Eval(interp, cmd) == TCL_ERROR)
    cerr << Tcl_GetStringResult(interp) << endl;

  return Tcl_GetStringResult(interp);
}

const char *IIS::result()
{
  return Tcl_GetStringResult(interp);
}

int IIS::open(int argc, const char* argv[])
{
  if (IISDebug)
    cerr << "IIS:open()" << endl;

  if (argc==6) {
    delete [] xim.input_fifo;
    xim.input_fifo = dupstr(argv[2]);    // *client's output, e.g. /dev/imt1i

    delete [] xim.output_fifo;
    xim.output_fifo = dupstr(argv[3]);   // *client's input, e.g. /dev/imt1o

    string x(argv[4]);
    istringstream str(x);
    str >> xim.port;                     // *port for INET socket

    delete [] xim.unixaddr;
    xim.unixaddr = dupstr(argv[5]); // *format for unix socket path
  }    

  xim_initialize(&xim, xim.def_config, xim.def_nframes, 1);
  xim_iisOpen(&xim);

  return TCL_OK;
}

int IIS::close()
{
  if (IISDebug)
    cerr << "IIS::close()" << endl;

  xim_iisClose(&xim);

  return TCL_OK;
}

int IIS::retcur(int argc, const char* argv[])
{
  if (IISDebug)
    cerr << "IIS::retcur()" << endl;

  if (argc==6) {
    if (xim.cursor_chan == NULL) {
      Tcl_AppendResult(interp, "iis retcur: no cursor channel", NULL);
      return TCL_ERROR;
    }

    float xx,yy;
    {
      string x(argv[2]);
      istringstream str(x);
      str >> xx;
    }
    {
      string x(argv[3]);
      istringstream str(x);
      str >> yy;
    }
    int key = argv[4][0];
    int frame;
    {
      string x(argv[5]);
      istringstream str(x);
      str >> frame;
    }

    xim_retCursorVal(&xim, xx, yy, frame, 0, key, (char*)"");

    return TCL_OK;
  }
  else {
    Tcl_AppendResult(interp, "iis retcur: wrong number of args", NULL);
    return TCL_ERROR;
  }
}

int IIS::encodewcs(int argc, const char* argv[])
{
  if (IISDebug)
    cerr << "IIS::encodewcs()" << endl;

  if (argc==4 ||  argc==5) {
    float sx,sy;
    {
      string x(argv[2]);
      istringstream str(x);
      str >> sx;
    }
    {
      string x(argv[3]);
      istringstream str(x);
      str >> sy;
    }

    int sz = 0;
    {
      string x(argv[4]);
      istringstream str(x);
      str >> sz;
    }

    char buf[SZ_LINE];
    xim_encodewcs(&xim, sx, sy, sz, buf);
    Tcl_SetResult (interp, buf, TCL_VOLATILE);

    return TCL_OK;
  }
  else {
    Tcl_AppendResult(interp, "iis encodewcs: wrong number of args", NULL);
    return TCL_ERROR;
  }
}

int IIS::debug(int argc, const char* argv[])
{
  IISDebug = !strncmp(argv[2],"1",1);

  return TCL_OK;
}
