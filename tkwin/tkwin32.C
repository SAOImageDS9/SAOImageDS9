// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
using namespace std;

#include <string.h>

#include <tk.h>

#include "tkwin32.h"

extern "C" {
  int Tkwin32_Init(Tcl_Interp* interp);
  int Tkwin32Cmd(ClientData data, Tcl_Interp *interp, int argc, 
		 const char* argv[]);
}

/*
#define R2D(x) ((x*180)/M_PI)
extern "C" {
  HWND Tk_GetHWND(Window window);
}
*/

TkWin32* tkwin32=NULL;

int Tkwin32_Init(Tcl_Interp* interp) {

  if (Tcl_InitStubs(interp, TCL_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  if (Tk_InitStubs(interp, TK_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  Tcl_CreateCommand(interp, "win32", Tkwin32Cmd,
		    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION))
    return TCL_ERROR;

  tkwin32 = new TkWin32(interp);

  return tkwin32 ? TCL_OK : TCL_ERROR;
}

int Tkwin32Cmd(ClientData data,Tcl_Interp *interp,int argc,const char* argv[])
{
  if (argc>=2) {
    /*
    if (!strncmp(argv[1], "pm", 2))
      return tkwin32->pm(argc, argv);
    else {
      Tcl_AppendResult(interp, "tkwin32: unknown command: ", argv[1], NULL);
      return TCL_ERROR;
    }
    */
    ;
  }
  else {
    Tcl_AppendResult(interp, "usage: tkwin32 ?pm?", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

TkWin32::TkWin32(Tcl_Interp* intp)
{
  interp = intp;
  /*
  tkwin = Tk_MainWindow(interp);
  // page setup dialog
  ZeroMemory(&psd, sizeof(psd));
  psd.lStructSize = sizeof(psd);
  psd.Flags = PSD_RETURNDEFAULT;
  PageSetupDlg(&psd);

  // print dialog
  ZeroMemory(&pd, sizeof(pd));
  pd.lStructSize = sizeof(pd);
  pd.Flags = PD_RETURNDEFAULT;
  PrintDlg(&pd);

  // reasonable defaults
  penStyle = PS_SOLID;
  penWidth = 1;
  penColor = RGB(0,0,0);
  font_ = NULL;
  dwStyleCount = 0;
  lpStyle = NULL;

  pageScale =1;
  fontScale =1;
  */
}

/*
// Image Print Mangager
int TkWin32::pm(int argc, const char* argv[])
{
  if (argc >= 3) {
    if (!strncmp(argv[2], "print", 3))
      //      return tkwin32->pmPrint(argc, argv);
      return TCL_OK;
    else if (!strncmp(argv[2], "pagesetup", 3))
      //      return tkwin32->pmPageSetup();
      return TCL_OK;
    else {
      Tcl_AppendResult(interp, "tkwin32 pm: unknown command: ", argv[2], NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: tkwin32 pm ?print?pagesetup?", NULL);
    return TCL_ERROR;
  }
  return TCL_OK;
}

int TkWin32::pmPrint(int argc, const char* argv[])
{
  if (argc >= 4) {
    if (!strncmp(argv[3], "begin", 3))
      return tkwin32->pmPrintBegin(argc, argv);
    else if (!strncmp(argv[3], "end", 3))
      return tkwin32->pmPrintEnd();
    else if (!strncmp(argv[3], "text", 3))
      return tkwin32->pmPrintText(argc, argv);
    else {
      Tcl_AppendResult(interp, "tkwin32 pm print: unknown command: ", argv[2],
		       NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: tkwin32 pm print: ?begin?end?text?",
		     NULL);
    return TCL_ERROR;
  }
  return TCL_OK;
}

int TkWin32::pmPrintBegin(int argc, const char* argv[])
{
  DOCINFO di;
  HFONT hfont;
  TEXTMETRIC tm;
  int iLinesPerPage;
  int iHeaderHeight=0;
  // canvas width and height
  double width =0;
  double height =0;

  if (argc >= 7) {
    string w(argv[4]);
    istringstream ww(w);
    ww >> width;

    string h(argv[5]);
    istringstream hh(h);
    hh >> height;

    if (width <=0 || height <=0) {
      Tcl_AppendResult(interp, "Invalid width and/or height.", NULL);
      return TCL_ERROR;
    }

    if (!strncmp(argv[6], "yes", 2))
      showDialog = 1;
    else if (!strncmp(argv[6], "no", 2)) 
      showDialog = 0;
  }
  else {
    Tcl_AppendResult(interp, 
		     "usage: tkwin32 pm print begin: ?width height yes|no?",
		     NULL);
    return TCL_ERROR;
  }

  // show dialog, if necessary
  pd.nFromPage =0;
  pd.nToPage =0;
  pd.nMinPage =0;
  pd.nMaxPage =0;
  if (!WinPrintDialog()) {
    Tcl_AppendResult(interp, "0", NULL);
    return TCL_OK;
  }

  // get document info
  GetDocInfo(&di);

  // calculate margins
  GetMarginInfo();

  // get font
  hfont = (HFONT)GetStockObject(ANSI_FIXED_FONT);
  SelectObject(pd.hDC, hfont);

  // scaling factors
  {
    Vector canvas(width,height);
    Vector page(iWidth, iHeight);
    Vector paper(iPhysWidth, iPhysHeight);
    if (page[0]/canvas[0] < page[1]/canvas[1]) {
      pageScale = page[0]/canvas[0];
      fontScale = double(iWidth)/iHorzRes;
    }    
    else {
      pageScale = page[1]/canvas[1];
      fontScale = double(iHeight)/iVertRes;
    }

    // build coordinate matrix
    canvasToPage = 
      Translate(-canvas/2)
      * Scale(pageScale)
      * Translate(paper/2);
  }

  // work out the character and line dimensions for the current font
  GetTextMetrics(pd.hDC, &tm);
  yChar = tm.tmHeight;
  iLinesPerPage   = (iHeight - iHeaderHeight) / yChar;

  // start document and page
  if (StartDoc(pd.hDC, &di) <= 0)
    return TCL_ERROR;
  if (StartPage(pd.hDC) <= 0)
    return TCL_ERROR;

  // ok, we are good for go
  Tcl_AppendResult(interp, "1", NULL);
  return TCL_OK;
}

int TkWin32::pmPrintEnd()
{
  // end of page -- send to printer
  if (EndPage(pd.hDC) <= 0)
    return TCL_ERROR;
  if (EndDoc(pd.hDC) <= 0)
    return TCL_ERROR;

  // close file and release graphics context
  WinPrintRelease();

  return TCL_OK;
}

int TkWin32::pmPrintText(int argc, const char* argv[])
{
  // text
  if( argc < 5 ){
    Tcl_AppendResult(interp, "usage: tkwin32 pm print text: ?text?", NULL);
    return TCL_ERROR;
  }

  // show dialog
  pd.nFromPage =1;
  pd.nToPage = 0xFFFF;
  pd.nMinPage =1;
  pd.nMaxPage = 0xFFFF;
  if (!WinPrintDialog()) {
    // user cancelled
    Tcl_AppendResult(interp, "0", NULL);
    return TCL_OK;
  }

  if (!WinPrintText(argv[4], TYPE_STRING))
    return TCL_ERROR;

  //  Tcl_AppendResult(interp, "1", NULL);
  return TCL_OK;
}

int TkWin32::pmPageSetup()
{
  if (WinPrintPageSetup())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);

  return TCL_OK;
}

UINT TkWin32::QueryAbort()
{
  MSG msg;
  BOOL bAbort = FALSE;

  while (!bAbort && PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
    TranslateMessage(&msg);
        
    switch(msg.message){
    case WM_QUIT:
      PostQuitMessage(0);
      bAbort = TRUE;
      break;

    case WM_KEYDOWN:
      if(msg.wParam == VK_ESCAPE){
	bAbort = TRUE;
      }
      break;
    }
    DispatchMessage(&msg);
  }
  return !bAbort;
}

// routines for handling documents (files or string buffers)

BOOL TkWin32::DocOpen(const char *s, int xmaxline, int xtype)
{
  // sanity check
  if( !s || !*s ){
    return FALSE;
  }
  type = xtype;
  switch(type){
  case TYPE_FILE:
    if( !(fd= fopen(s, "r")) ){
      return FALSE;
    }
    break;
  case TYPE_STRING:
    buf = strdup(s);
    bptr = buf;
    break;
  default:
    return FALSE;
  }

  // allocate space for individual lines
  maxline = xmaxline;
  if( !(lines=(char **)calloc(maxline, sizeof(char *))) ){
    return FALSE;
  }
  nline = 0;
  return TRUE;
}

int TkWin32::DocNextPage()
{
  int i;
  char lbuf[SZ_LINE];

  nline = 0;
  switch(type){
  case TYPE_FILE:
    for(i=0; i<maxline && fgets(lbuf, SZ_LINE, fd); i++){
      lines[nline++] = strdup(lbuf);
    }
    break;
  case TYPE_STRING:
    for(i=0; i<maxline; i++){
      if( !*bptr ) break;
      // start of new line
      lines[nline++] = bptr;
      // skip to end of line or end of string
      while( *bptr && (*bptr != '\n') ){
	bptr++;
      }
      // remove CR from string and bump ptr
      if( *bptr == '\n' ){
	*bptr++ = '\0';
      }
    }
    break;
  default:
    break;
  }
  return nline;
}

void TkWin32::DocClose()
{
  int i;
  switch(type){
  case TYPE_FILE:
    if( nline ){
      for(i=0; i<nline; i++){
	if( lines[i] ){
	  free(lines[i]);
	  lines[i] = NULL;
	}
      }
      nline = 0;
    }
    maxline = 0;
    if(  fd ){
      fclose(fd);
      fd = NULL;
    }
    break;
  case TYPE_STRING:
    if( buf ) free(buf);
    bptr = NULL;
    break;
  default:
    break;
  }
  type = 0;
}

BOOL TkWin32::GetDocInfo(DOCINFO *di)
{
  // document information
  ZeroMemory(di, sizeof(*di));
  di->cbSize = sizeof(DOCINFO);
  di->lpszDocName = DEF_DOCNAME;
  di->lpszOutput = (LPTSTR) NULL;
  di->lpszDatatype = (LPTSTR) NULL;
  di->fwType = 0;
  return TRUE;
}

BOOL TkWin32::GetMarginInfo()
{
  RECT rc;

  // physical properties of paper
  iPhysWidth = GetDeviceCaps(pd.hDC, PHYSICALWIDTH);
  iPhysHeight = GetDeviceCaps(pd.hDC, PHYSICALHEIGHT);
  iPhysOffX = GetDeviceCaps(pd.hDC, PHYSICALOFFSETX);
  iPhysOffY = GetDeviceCaps(pd.hDC, PHYSICALOFFSETY);
  iHorzRes = GetDeviceCaps(pd.hDC, HORZRES);
  iVertRes = GetDeviceCaps(pd.hDC, VERTRES);

  // raw margins
  rc = psd.rtMargin;
  margins.left = MulDiv(rc.left, GetDeviceCaps(pd.hDC, LOGPIXELSX), 1000);
  margins.top = MulDiv(rc.top, GetDeviceCaps(pd.hDC, LOGPIXELSY), 1000);
  margins.right = MulDiv(rc.right, GetDeviceCaps(pd.hDC, LOGPIXELSX), 1000);
  margins.bottom = MulDiv(rc.bottom,GetDeviceCaps(pd.hDC, LOGPIXELSY),1000);

  // adjusted margins
  iLeftAdjust = margins.left - iPhysOffX;
  iTopAdjust  = margins.top  - iPhysOffY;
  iRightAdjust  = margins.right - (iPhysWidth  - iPhysOffX - iHorzRes);
  iBottomAdjust = margins.right - (iPhysHeight - iPhysOffY - iVertRes);

  // size of printable area
  iWidth  = iHorzRes - (iLeftAdjust + iRightAdjust);
  iHeight = iVertRes - (iTopAdjust + iBottomAdjust);
  return TRUE;
}

BOOL TkWin32::WinPrintPageSetup()
{
  Tk_MakeWindowExist(tkwin);
  psd.hwndOwner = Tk_GetHWND(Tk_WindowId(tkwin));
  psd.Flags = PSD_MARGINS;
  if (PageSetupDlg(&psd))
    return TRUE;
  else
    return FALSE;
}

BOOL TkWin32::WinPrintDialog()
{
  Tk_MakeWindowExist(tkwin);
  pd.hwndOwner = Tk_GetHWND(Tk_WindowId(tkwin));
  pd.Flags = PD_RETURNDC | PD_ALLPAGES | PD_NOSELECTION;
  pd.nCopies =1;
  if (PrintDlg(&pd)) {
    psd.hDevMode = pd.hDevMode;
    psd.hDevNames = pd.hDevNames;
    return TRUE;
  }
  else
    return FALSE;
}

BOOL TkWin32::WinPrintText(const char *s, int type)
{
  int iLine;
  int iCurPage;
  int iColCopy, iColCopies;
  int iNonCopy, iNonColCopies;

  int iLinesPerPage;
  int yChar;
  int iHeaderHeight=0;

  BOOL bSuccess=TRUE, bUserAbort=FALSE;
  DOCINFO di;
  HFONT hfont;
  TEXTMETRIC tm;
  HANDLE hold;

  // get document info
  GetDocInfo(&di);

  // calculate margins
  GetMarginInfo();

  // get font
  hfont = (HFONT)GetStockObject(ANSI_FIXED_FONT);

  // Setup the current device context
  SetMapMode(pd.hDC, MM_TEXT);
  SelectObject(pd.hDC, hfont);

  // work out the character and line dimensions for the current font
  GetTextMetrics(pd.hDC, &tm);
  yChar = tm.tmHeight;
  iLinesPerPage   = (iHeight - iHeaderHeight) / yChar;

  // print loop
  if(StartDoc(pd.hDC, &di) > 0){
    // loop for collated printing: print multiple copies of the whole doc
    iColCopies = ((pd.Flags & PD_COLLATE) ? pd.nCopies : 1);
    for(iColCopy = 0; iColCopy < iColCopies; iColCopy++){
      // open or re-open the document
      if( DocOpen(s, iLinesPerPage, type) == FALSE ){
	return FALSE;
      }
      // get next page
      for(iCurPage=1; DocNextPage(); iCurPage++){
	// skip if we are not up to first desired page
	if( iCurPage < pd.nFromPage ) continue;
	// done if we are past the last desired page
	if( iCurPage > pd.nToPage )   break;
	// loop for non-collated printing: print each page multiple times
	iNonColCopies = ((pd.Flags & PD_COLLATE) ? 1 : pd.nCopies);
	for(iNonCopy = 0; iNonCopy < iNonColCopies; iNonCopy++){
	  if(StartPage(pd.hDC) <= 0) {
	    bSuccess = FALSE;
	    break;
	  }
	  // printing is offset by the amount specified for the margins
	  SetViewportOrgEx(pd.hDC, iLeftAdjust, iTopAdjust, NULL);
	  // select the fixed-width font into the printer DC
	  hold = SelectObject(pd.hDC, hfont);
	  // print the current file line by line
	  for(iLine=0; iLine < nline; iLine++) {
	    // output a line of text to the printer
	    TextOut(pd.hDC, 0, yChar * iLine + iHeaderHeight, 
		    lines[iLine], lstrlen(lines[iLine]) - 1);
	    bUserAbort = !QueryAbort();
	  }
	  SelectObject(pd.hDC, hold);
	  if( EndPage(pd.hDC ) < 0){
	    bSuccess = FALSE;
	    break;
	  }
	  bUserAbort = !QueryAbort();
	  if(bUserAbort) break;
	}
	if(!bSuccess || bUserAbort) break;
      }
      // close the document, free up internal memory
      DocClose();
      if(!bSuccess || bUserAbort) break;
    }
  }
  else{
    bSuccess = FALSE;
  }

  // send to printer
  if(bSuccess && !bUserAbort) {
    EndDoc(pd.hDC);
    return TRUE;
  }
  // abort print job
  else{
    AbortDoc(pd.hDC);
    return FALSE;
  }
}

BOOL TkWin32::WinPrintRelease()
{
  if (pd.hDC) {
    DeleteDC(pd.hDC);
    return TRUE;
  }
  else
    return FALSE;
}

void TkWin32::SetPen(int flag)
{
  LOGBRUSH lb;
  int mystyle;
  DWORD mydwStyleCount=0;
  DWORD *mylpStyle=NULL;
  if( flag ){
    // CreatePen: non-solid lines must be width 1
    // hPen = CreatePen(penStyle, penWidth, penColor);
    lb.lbStyle = BS_SOLID;
    lb.lbColor = penColor;
    lb.lbHatch = 0;
    mystyle = penStyle;
    // don't use userstyle unless width is small
    if( mystyle == PS_USERSTYLE ){
      if( (penWidth / pageScale) < 2 ){
	mydwStyleCount = dwStyleCount;
	mylpStyle = lpStyle;
      }
      else {
	mystyle = PS_DOT;
      }
    }
    mystyle |= PS_GEOMETRIC;
    mystyle |= PS_ENDCAP_SQUARE; 
    mystyle |= PS_JOIN_BEVEL; 
    hPen = ExtCreatePen(mystyle, penWidth, &lb, mydwStyleCount, mylpStyle);
    ohPen = (HPEN)SelectObject(pd.hDC, hPen);
    hBrush = CreateSolidBrush(penColor);
    ohBrush = (HBRUSH)SelectObject(pd.hDC, hBrush);
    SetTextColor(pd.hDC, penColor);
  }
  else{
    SelectObject(pd.hDC, ohPen);
    DeleteObject(hPen);
    SelectObject(pd.hDC, ohBrush);
    DeleteObject(hBrush);
  }
}

// drawing routines called by routines in win32lib.C

void TkWin32::begin()
{
  SaveDC(pd.hDC);
}

void TkWin32::end()
{
  RestoreDC(pd.hDC, -1);
}

void TkWin32::color(int red, int green, int blue)
{
  penColor = RGB(red, green, blue);
}

void TkWin32::width(float ww)
{
  penWidth = (int)ww;
}

void TkWin32::dash(float* dd, int nn)
{
  int i;
  if(nn){
    penStyle = PS_USERSTYLE;
    if(lpStyle) 
      free(lpStyle);
    if((lpStyle = (DWORD *)calloc(nn, sizeof(DWORD)))) {
      dwStyleCount = nn;
      for(i=0; i<nn; i++)
	lpStyle[i] = (DWORD)dd[i];
    }
  }
  else{
    penStyle = PS_SOLID;
    if(lpStyle)
      free(lpStyle);
    lpStyle = NULL;
    dwStyleCount = 0;
  }
}

void TkWin32::font(Tk_Font ff)
{
  font_ = (TkFont*)ff;
}

void TkWin32::clip(float x, float y, float w, float h)
{
  // sigh ... the subtracted offets were determine empirically: they are
  // what is required to remove unwanted edges 

  HRGN hRgn = CreateRectRgn((int)x, (int)y, (int)(x+w-1), (int)(y+h-3));
  SelectClipRgn(pd.hDC, hRgn);
  DeleteObject(hRgn);
}

void TkWin32::drawText(float x, float y, float angle, const char* text)
{
  Vector vv(x,y);
  long angle10 = R2D(angle)*10;
  if (!font_)
    return;

  //  TkWinDCState state;
  //  HDC hdc = TkWinGetDrawableDC(display, drawable, &state);

  // logfont
  LOGFONT logfont;
  ZeroMemory(&logfont, sizeof(logfont));
  //  int size = MulDiv(font_->fa.size, GetDeviceCaps(hdc, LOGPIXELSY), 72);
  int size = MulDiv(font_->fa.size, 96, 72) * pageScale;
  logfont.lfHeight = -size;
  logfont.lfWidth = 0;
  logfont.lfEscapement = angle10;
  logfont.lfOrientation = angle10;
  logfont.lfWeight = (font_->fa.weight == TK_FW_NORMAL) ? FW_NORMAL : FW_BOLD;
  logfont.lfItalic = font_->fa.slant;
  logfont.lfUnderline = font_->fa.underline;
  logfont.lfStrikeOut = font_->fa.overstrike;

  logfont.lfCharSet = DEFAULT_CHARSET;
  logfont.lfOutPrecision = OUT_TT_PRECIS;
  logfont.lfClipPrecision = CLIP_DEFAULT_PRECIS;
  //  logfont.lfQuality = PROOF_QUALITY;
  logfont.lfQuality = DEFAULT_QUALITY;
  logfont.lfPitchAndFamily = DEFAULT_PITCH | FF_DONTCARE;
  strcpy(logfont.lfFaceName, font_->fa.family);

  // hfont
  HFONT hfont = CreateFontIndirect(&logfont);
  if (!hfont)
    return;
  HFONT ohfont = (HFONT)SelectObject(pd.hDC, hfont);

  // We need a slight shift in Y, I don't know why
  Matrix mm = Translate(-vv) * 
    Rotate(-angle) * 
    Translate(0,-int(size/10.)) *
    Rotate(angle) *
    Translate(vv);
  Vector tt = vv*mm;

  // do it
  SetTextAlign(pd.hDC, TA_LEFT | TA_BASELINE);
  SetTextColor(pd.hDC, penColor);
  SetBkMode(pd.hDC, TRANSPARENT);
  TextOut(pd.hDC, (int)tt[0], (int)tt[1], text, strlen(text));

  // cleanup
  SelectObject(pd.hDC, ohfont);
  DeleteObject(hfont);
  //  TkWinReleaseDrawableDC(drawable, hdc, &state);
}

void TkWin32::drawLines(float* x, float* y, int n)
{
  int ii;
  SetPen(1);
  MoveToEx(pd.hDC, (int)x[0], (int)y[0], NULL);
  for (int ii=1; ii<n; ii++){
    LineTo(pd.hDC, (int)x[ii], (int)y[ii]);
  }
  SetPen(0);
}

void TkWin32::fillPolygon(float* x, float* y, int n)
{
  int ii;
  POINT *apt;
  if( !(apt=(POINT *)calloc(n+1, sizeof(POINT))) ){
    return;
  }
  for(ii=0; ii<n; ii++){
    apt[ii].x = (int)x[ii];
    apt[ii].y = (int)y[ii];
  }
  SetPen(1);
  Polygon(pd.hDC, apt, n);
  SetPen(0);
  free(apt);
}

void TkWin32::drawArc(float x, float y, float rad, float ang1, float ang2)
{
  double xscal1, yscal1, xscal2, yscal2;
  ang1 += M_PI/2;
  ang2 += M_PI/2;
  xscal1 = sin(ang1);
  yscal1 = cos(ang1);
  xscal2 = sin(ang2);
  yscal2 = cos(ang2);
  SetPen(1);
  Arc(pd.hDC, (int)(x-rad), (int)(y-rad), (int)(x+rad), (int)(y+rad),
      (int)(x+(xscal1*rad)), (int)(y+(yscal1*rad)),
      (int)(x+(xscal2*rad)), (int)(y+(yscal2*rad)));
  SetPen(0);
}

void TkWin32::fillArc(float x, float y, float rad, float ang1, float ang2)
{
}

void TkWin32::drawCurve(float x0, float y0, 
			float u0, float v0, 
			float u1, float v1,
			float x1, float y1)
{
  POINT apt[4];
  apt[0].x = (int)x0;
  apt[0].y = (int)y0;
  apt[1].x = (int)u0;
  apt[1].y = (int)v0;
  apt[2].x = (int)u1;
  apt[2].y = (int)v1;
  apt[3].x = (int)x1;
  apt[3].y = (int)y1;
  SetPen(1);
  PolyBezier(pd.hDC, apt, 4);
  SetPen(0);
}

void TkWin32::fillCurve(float x0, float y0, 
                        float u0, float v0, 
			float u1, float v1,
			float x1, float y1)
{
}

void TkWin32::bitmapCreate(void* data, int width, int height, 
			    float x, float y, float w, float h)
{
  HDC dcMem;
  BITMAPINFO *infoPtr;
  HBITMAP hBitmap;
  XFORM xForm;
  int ogm;
  // create in-memoy DIB bitmap
  dcMem = CreateCompatibleDC(pd.hDC);
  infoPtr = (BITMAPINFO*) ckalloc(sizeof(BITMAPINFOHEADER));
  infoPtr->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
  infoPtr->bmiHeader.biWidth = (int)width;
  infoPtr->bmiHeader.biHeight = (int)height;
  infoPtr->bmiHeader.biPlanes = 1;
  infoPtr->bmiHeader.biBitCount = 24;
  infoPtr->bmiHeader.biCompression = BI_RGB;
  infoPtr->bmiHeader.biSizeImage = 0;
  infoPtr->bmiHeader.biXPelsPerMeter = 0;
  infoPtr->bmiHeader.biYPelsPerMeter = 0;
  infoPtr->bmiHeader.biClrImportant = 0;
  infoPtr->bmiHeader.biClrUsed = 0;
  hBitmap = CreateDIBitmap(pd.hDC, &infoPtr->bmiHeader, CBM_INIT,
			   data, infoPtr, DIB_RGB_COLORS);
  hBitmap = (HBITMAP)SelectObject(dcMem, hBitmap);
  // set up scale and translation of bitmap on to page
  ogm = SetGraphicsMode(pd.hDC, GM_ADVANCED);
  xForm.eM11 = (FLOAT) pageScale;
  xForm.eM12 = (FLOAT) 0.0; 
  xForm.eM21 = (FLOAT) 0.0; 
  xForm.eM22 = (FLOAT) pageScale;
  xForm.eDx  = (FLOAT) x;
  xForm.eDy  = (FLOAT) y;
  SetWorldTransform(pd.hDC, &xForm);
  // send to printer
  BitBlt(pd.hDC, 0, 0, (int)w, (int)h, dcMem, 0, 0, SRCCOPY);
  // reset scale and translation
  xForm.eM11 = (FLOAT) 1.0; 
  xForm.eM12 = (FLOAT) 0.0; 
  xForm.eM21 = (FLOAT) 0.0; 
  xForm.eM22 = (FLOAT) 1.0; 
  xForm.eDx  = (FLOAT) 0; 
  xForm.eDy  = (FLOAT) 0; 
  SetWorldTransform(pd.hDC, &xForm); 
  SetGraphicsMode(pd.hDC, ogm);
  // clean up
  DeleteObject(SelectObject(dcMem, hBitmap));
  DeleteDC(dcMem);
}
*/
