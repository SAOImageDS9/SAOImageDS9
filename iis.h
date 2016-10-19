#ifndef __iis_h__
#define __iis_h__

#include "ximtool.h"

int xim_iisOpen(XimDataPtr);
void xim_iisClose(XimDataPtr);
void xim_retCursorVal(XimDataPtr, float, float, int, int, int, char*);
void xim_encodewcs(XimDataPtr, float, float, int, char*);
void get_fbconfig(XimDataPtr);
void bswap2 (char* a, char* b, int nbytes);
void wcspix_message (XimDataPtr xim, char* message);
void ism_message (XimDataPtr xim, char* object, char* command);

#endif
