// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __tkwin32_h__
#define __tkwin32_h__

#include <tcl.h>
// must define vector.h before windows.h to avoid conflicts with min,max
#include <vector.h>
//#include <Windows.h>

/*
#define DEF_DOCNAME "SAO/DS9"
#define SZ_LINE 	1024

#define TYPE_FILE	1
#define TYPE_STRING	2
*/

//struct TkFont;

class TkWin32 {
 private:
  Tcl_Interp* interp;

  /*
  Tk_Window tkwin;

  // print information

  PRINTDLG pd;
  PAGESETUPDLG psd;

  HPEN hPen;
  HPEN ohPen;
  HBRUSH hBrush;
  HBRUSH ohBrush;
  int penStyle;
  int penWidth;
  COLORREF penColor;
  DWORD dwStyleCount;
  DWORD *lpStyle;
  int showDialog;

  // font info
  TkFont* font_;

  // margin info
  RECT margins;
  int iLeftAdjust;
  int iTopAdjust;
  int iRightAdjust;
  int iBottomAdjust;
  int iPhysWidth;
  int iPhysHeight;
  int iPhysOffX;
  int iPhysOffY;
  int iHorzRes;
  int iVertRes;
  int iWidth;
  int iHeight;
  int yChar;

  // doc info
  int type;
  char *buf;
  char *bptr;
  FILE *fd;
  int nline;
  int maxline;
  char **lines;

  // scaling
  double pageScale;
  double fontScale;
  Matrix canvasToPage;

  // UINT CALLBACK QueryAbort();
  UINT QueryAbort();
  BOOL DocNew();
  BOOL DocOpen(const char *s, int maxline, int type);
  int DocNextPage();
  void DocClose();
  BOOL DocFree();
  BOOL GetDocInfo(DOCINFO *di);
  BOOL GetMarginInfo();

  void SetPen(int flag);

  BOOL WinPrintPageSetup();
  BOOL WinPrintDialog();
  BOOL WinPrintText(const char *s, int type);
  BOOL WinPrintRelease();

  int pmPrint(int, const char**);
  int pmPrintBegin(int, const char**);
  int pmPrintEnd();

  int pmPrintText(int, const char**);
  int pmPageSetup();
  */
  
 public:
  TkWin32(Tcl_Interp*);
  ~TkWin32() {};

  /*
  int pm(int, const char**);

  double getPageScale() {return pageScale;}
  const Matrix& getCanvasToPage() {return canvasToPage;}
  */
  void begin();
  void end();

  void color(int, int, int);
  void width(float);
  void dash(float*,int);
  void font(Tk_Font);
  void clip(float, float, float, float);

  void newpath();
  void stroke();
  void fill();
  void arc(float, float, float, float, float);
  void curve(float, float, float, float, float, float, float, float);

  void drawText(float, float, float, const char*);
  void drawLines(float*, float*, int);
  void fillPolygon(float*, float*, int);
  void drawArc(float, float, float, float, float);
  
  void bitmapCreate(void*, int, int, float, float, float, float);
};

extern TkWin32* tkwin32;

#endif
