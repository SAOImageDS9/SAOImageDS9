#ifndef __xim_h__
#define __xim_h__

#include "ximtool.h"

void xim_initialize(XimDataPtr, int, int, int);
void GtQueryColormap(void*, int, int*, int*, int*);
void GtReadPixels(void*, int, void*, int, int, int, int, int);
void GtWritePixels(void*, int, void*, int, int, int, int, int);
void xim_cursorMode(XimDataPtr, int);
void xim_getCursorPos(XimDataPtr, float*, float*, int*, int*);
void xim_setReferenceFrame(IoChanPtr, int);
void xim_setDisplayFrame(XimDataPtr, int);
void xim_removeInput(XimDataPtr, int);
void xim_message(XimDataPtr, char*, char*);
void xim_initFrame(XimDataPtr, int, int, FbConfig*, char*);
void xim_setCursorPos(XimDataPtr, int, int);
void xim_eraseFrame(XimDataPtr, int);
int xim_addInput(XimDataPtr, int, void (*func)(IoChan*, int*, void*), IoChan*);
void xim_wcs(int, float, float, float, float, float, float, float, float, int);

#ifdef __WIN32
void setupProc(void*, int);
void checkProc(void*, int);
#endif

void default_imtoolrc (XimDataPtr xim);

#endif

