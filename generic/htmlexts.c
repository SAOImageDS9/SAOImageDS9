/*
** The extra routines for the HTML widget for Tcl/Tk
**
** Copyright (C) 1997-2000 Peter MacDonald and BrowseX Systems Inc.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Library General Public
** License as published by the Free Software Foundation; either
** version 2 of the License, or (at your option) any later version.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Library General Public License for more details.
**
** You should have received a copy of the GNU Library General Public
** License along with this library; if not, write to the
** Free Software Foundation, Inc., 59 Temple Place - Suite 330,
** Boston, MA  02111-1307, USA.
**
** Author contact information:
**   peter@browsex.com
**   http://browsex.com
*/

#include <tk.h>
#include <string.h>
#include <stdlib.h>
#include "htmlexts.h"

void HtmlTclizeAscii(Tcl_Interp *interp, HtmlIndex *s, HtmlIndex *e);

/*
** WIDGET text ascii START END
*/
int HtmlTextAsciiCmd(
  HtmlWidget *htmlPtr,   /* The HTML widget */
  Tcl_Interp *interp,    /* The interpreter */
  int argc,              /* Number of arguments */
  const char **argv            /* List of all arguments */
){
  HtmlIndex iStart, iEnd;
  char *cb, *ce;
  if (argc<=3) cb="begin"; else cb=(char*)argv[3];
  if (argc<=4) ce=cb; else ce=(char*)argv[4];

  if( HtmlGetIndex(htmlPtr, cb, &iStart.p, &iStart.i)!=0 ){
    Tcl_AppendResult(interp,"malformed index: \"", cb, "\"", 0);
    return TCL_ERROR;
  }
  if( HtmlGetIndex(htmlPtr, ce, &iEnd.p, &iEnd.i)!=0 ){
    Tcl_AppendResult(interp,"malformed index: \"", ce, "\"", 0);
    return TCL_ERROR;
  }
  if (iEnd.p && iStart.p) {
    if ((!iEnd.i) && (!strchr(ce,'.'))) {
       iEnd.p=iEnd.p->pNext;
    }
    HtmlTclizeAscii(interp,&iStart,&iEnd);
  }
  return TCL_OK;
}

/*
** Return all tokens between the two elements as a Text.
*/
void HtmlTclizeAscii(Tcl_Interp *interp, HtmlIndex *s, HtmlIndex *e){
  int j, nsub=0;
  HtmlElement* p=s->p;
  Tcl_DString str;
  if (p && p->base.type==Html_Text) {
    nsub=s->i;
  }
  Tcl_DStringInit(&str);
  while( p) {
    switch( p->base.type ){
      case Html_Block:
        break;
      case Html_Text:
        j=strlen(p->text.zText);
	if (j<nsub) nsub=j;
        if (p==e->p) {
	  j= (e->i-nsub+1);
	}
        Tcl_DStringAppend(&str, p->text.zText+nsub,j-nsub);
	nsub=0;
        break;
      case Html_Space:
        for (j=0; j< p->base.count; j++) {
	  if (nsub-->0) continue;
          Tcl_DStringAppend(&str, " ", 1);
        }
        if ((p->base.flags & HTML_NewLine)!=0)
          Tcl_DStringAppend(&str, "\n",1);
	nsub=0;
        break;
      case Html_P:
      case Html_BR:
        Tcl_DStringAppend(&str, "\n",1);
	break;
      case Html_Unknown:
        break;
      default:
        break;
    }
    if (p==e->p) break;
    p = p->pNext;
  }
  Tcl_DStringResult(interp, &str);
}
