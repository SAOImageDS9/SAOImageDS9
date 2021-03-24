// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <fstream>
#include "fdstream.hpp"
#include <libxml/xmlreader.h>
#include <libxml/xmlmemory.h>

#include "util.h"
#include "context.h"
#include "framebase.h"
#include "fitsimage.h"

static int xmlRead (void * context, char * buffer, int len)
{
  istream* str=(istream*)context;
  str->read(buffer,len);
  return str->gcount();
}

static int xmlClose (void * context)
{
  return 1;
}

void Base::xmlParse(istream& str)
{
  xmlTextReaderPtr reader =
    xmlReaderForIO(xmlRead, xmlClose, (void*)(&str), "", NULL, 0);

  if (!reader) {
    cerr << "Unable to create xmlReader" << endl;
    return;
  }

  char** cols=NULL;
  int colcnt=0;

  int id[128];
  char* unit[128];
  char* ref[128];
  char* axis[128];
  char* dir[128];
  for (int ii=0; ii<128; ii++) {
    id[ii]=0;
    unit[ii]=NULL;
    ref[ii]=NULL;
    axis[ii] =NULL;
    dir[ii]=NULL;
  }

  int cnt=0;
  int state=0;

  int ret = xmlTextReaderRead(reader);
  while (ret == 1) {
    int nodeType = xmlTextReaderNodeType(reader);
    char* key = (char*)xmlTextReaderConstName(reader);

    if (!strncmp(key,"VOTABLE",7) && (nodeType==1)) {
    } else if (!strncmp(key,"VOTABLE",7) && (nodeType==15)) {
    } else if (!strncmp(key,"DEFINITIONS",11) && (nodeType==1)) {
    } else if (!strncmp(key,"DEFINITIONS",11) && (nodeType==15)) {
    } else if (!strncmp(key,"COOSYS",6) && (nodeType==1)) {
    } else if (!strncmp(key,"COOSYS",6) && (nodeType==15)) {
    } else if (!strncmp(key,"RESOURCE",8) && (nodeType==1)) {
    } else if (!strncmp(key,"RESOURCE",8) && (nodeType==15)) {
    } else if (!strncmp(key,"TABLE",5) && (nodeType==1)) {
    } else if (!strncmp(key,"TABLE",5) && (nodeType==15)) {
    } else if (!strncmp(key,"FIELD",5) && (nodeType==1)) {
      xmlParseFIELD(reader,id,unit,ref,axis,dir,colcnt);
      state = 2;
      colcnt++;
    } else if (!strncmp(key,"FIELD",5) && (nodeType==15)) {
      state = 0;
    } else if (!strncmp(key,"DATA",4) && (nodeType==1)) {
      state = 0;
    } else if (!strncmp(key,"DATA",4) && (nodeType==15)) {
    } else if (!strncmp(key,"TABLEDATA",9) && (nodeType==1)) {
      state = 0;
    } else if (!strncmp(key,"TABLEDATA",9) && (nodeType==15)) {
    } else if (!strncmp(key,"TR",2) && (nodeType==1)) {
      if (cols) {
	for (int ii=0; ii<colcnt; ii++)
	  if (cols[ii])
	    delete [] cols[ii];
	delete [] cols;
      }  

      cols = new char*[colcnt];
      for (int ii=0; ii<colcnt; ii++)
	cols[ii] = NULL;

      cnt=0;
    } else if(!strncmp(key,"TR",2) && (nodeType==15)) {
      xmlParseTR(cols,id,unit,ref,axis,dir,colcnt);
    } else if (!strncmp(key,"TD",2) && (nodeType==1)) {
      state=1;
    } else if (!strncmp(key,"TD",2) && (nodeType==15)) {
      state=0;
      cnt++;
    } else if (!strncmp(key,"#text",5) && (nodeType==3)) {
      switch (state) {
      case 0:
	break;
      case 1:
	// td
	cols[cnt] = dupstr((char*)xmlTextReaderConstValue(reader));
	break;
      case 2:
	// field
	break;
      }
    }

    ret = xmlTextReaderRead(reader);
  }
  xmlFreeTextReader(reader);
  if (ret != 0)
    cerr << "Failed to parse xml" << endl;

  xmlCleanupParser();
  xmlMemoryDump();

  if (cols) {
    for (int ii=0; ii<colcnt; ii++)
      if (cols[ii])
	delete [] cols[ii];
    delete [] cols;
  }
  for (int ii=0; ii<128; ii++) {
    if (unit[ii])
      xmlFree(unit[ii]);
    if (ref[ii])
      xmlFree(ref[ii]);
    if (axis[ii])
      xmlFree(axis[ii]);
    if (dir[ii])
      xmlFree(dir[ii]);
  }
}

void Base::xmlParseFIELD(void* rr, int* id, char** unit, 
			 char** ref, char** axis, char** dir, int colcnt)
{
  xmlTextReaderPtr reader = (xmlTextReaderPtr)rr;
  char* colname = 
    (char*)xmlTextReaderGetAttribute(reader,(const xmlChar*)("name"));
  if (!colname)
    colname = (char*)xmlTextReaderGetAttribute(reader,(const xmlChar*)("NAME"));
  if (!colname)
    return;
	
  if (STRCMP(colname,"shape",5))
    id[colcnt] = XMLSHAPE;
  else if (STRCMP(colname,"x",1))
    id[colcnt] = XMLX;
  else if (STRCMP(colname,"y",1))
    id[colcnt] = XMLY;
  else if (STRCMP(colname,"xv",2))
    id[colcnt] = XMLXV;
  else if (STRCMP(colname,"yv",2))
    id[colcnt] = XMLYV;
  else if (STRCMP(colname,"r",1))
    id[colcnt] = XMLR;
  else if (STRCMP(colname,"r2",2))
    id[colcnt] = XMLR2;
  else if (STRCMP(colname,"rv",2))
    id[colcnt] = XMLRV;
  else if (STRCMP(colname,"rv2",3))
    id[colcnt] = XMLRV2;
  else if (STRCMP(colname,"ang",3))
    id[colcnt] = XMLANG;
  else if (STRCMP(colname,"angv",4))
    id[colcnt] = XMLANGV;
  else if (STRCMP(colname,"tile",4))
    id[colcnt] = XMLTILE;
  else if (STRCMP(colname,"color",5))
    id[colcnt] = XMLCOLOR;
  else if (STRCMP(colname,"width",5))
    id[colcnt] = XMLWIDTH;
  else if (STRCMP(colname,"text",4))
    id[colcnt] = XMLTEXT;
  else if (STRCMP(colname,"font",4))
    id[colcnt] = XMLFONT;
  else if (STRCMP(colname,"select",6))
    id[colcnt] = XMLSELECT;
  else if (STRCMP(colname,"highlite",8))
    id[colcnt] = XMLHIGHLITE;
  else if (STRCMP(colname,"edit",4))
    id[colcnt] = XMLEDIT;
  else if (STRCMP(colname,"move",4))
    id[colcnt] = XMLMOVE;
  else if (STRCMP(colname,"rotate",6))
    id[colcnt] = XMLROTATE;
  else if (STRCMP(colname,"delete",6))
    id[colcnt] = XMLDELETE;
  else if (STRCMP(colname,"fixed",5))
    id[colcnt] = XMLFIXED;
  else if (STRCMP(colname,"include",7))
    id[colcnt] = XMLINCLUDE;
  else if (STRCMP(colname,"source",6))
    id[colcnt] = XMLSOURCE;
  else if (STRCMP(colname,"dash",4))
    id[colcnt] = XMLDASH;
  else if (STRCMP(colname,"dashlist",8))
    id[colcnt] = XMLDASHLIST;
  else if (STRCMP(colname,"tag",3))
    id[colcnt] = XMLTAG;
  else if (STRCMP(colname,"param",5))
    id[colcnt] = XMLPARAM;
  else if (STRCMP(colname,"param2",6))
    id[colcnt] = XMLPARAM2;
  else if (STRCMP(colname,"param3",6))
    id[colcnt] = XMLPARAM3;
  else if (STRCMP(colname,"param4",6))
    id[colcnt] = XMLPARAM4;
  else if (STRCMP(colname,"param5",6))
    id[colcnt] = XMLPARAM5;
  else if (STRCMP(colname,"comment",7))
    id[colcnt] = XMLCOMMENT;

  unit[colcnt] = 
    (char*)xmlTextReaderGetAttribute(reader,(const xmlChar*)("unit"));
  if (!unit[colcnt])
    unit[colcnt] = 
      (char*)xmlTextReaderGetAttribute(reader,(const xmlChar*)("UNIT"));

  ref[colcnt] = 
    (char*)xmlTextReaderGetAttribute(reader,(const xmlChar*)("ref"));
  if (!ref[colcnt])
    ref[colcnt] = 
      (char*)xmlTextReaderGetAttribute(reader,(const xmlChar*)("REF"));

  axis[colcnt] = 
    (char*)xmlTextReaderGetAttribute(reader,(const xmlChar*)("axis"));
  if (!axis[colcnt])
    axis[colcnt] = 
      (char*)xmlTextReaderGetAttribute(reader,(const xmlChar*)("AXIS"));

  dir[colcnt] = 
    (char*)xmlTextReaderGetAttribute(reader,(const xmlChar*)("dir"));
  if (!dir[colcnt])
    dir[colcnt] = 
      (char*)xmlTextReaderGetAttribute(reader,(const xmlChar*)("DIR"));

  if (colname)
    xmlFree(colname);
}

void Base::xmlParseTR(char** cols, int* id, char** unit, char** ref,
		      char** axis, char**dir, int colcnt)
{
  // init region
  char* shape =NULL;
  char shapedef[] = "point";
  shape = shapedef;

  // x,y
  char* x =NULL;
  char xdef[] = "0";
  x = xdef;
  char* y =NULL;
  char ydef[] = "0";
  y = ydef;
  Coord::CoordSystem sys =Coord::PHYSICAL;
  Coord::SkyFrame sky =Coord::FK5;
  Coord::SkyFormat format =Coord::DEGREES;

  // xv,yv
  char* xv =NULL;
  char xvdef[] = "0";
  xv = xvdef;
  char* yv =NULL;
  char yvdef[] = "0";
  yv = yvdef;
  Coord::CoordSystem vsys =Coord::PHYSICAL;
  Coord::SkyFrame vsky =Coord::FK5;
  Coord::SkyFormat vformat =Coord::DEGREES;

  // r,r2
  char* r =NULL;
  char rdef[] = "0";
  r = rdef;
  char* r2 =NULL;
  char r2def[] = "0";
  r2 = r2def;
  Coord::CoordSystem rsys =Coord::PHYSICAL;
  Coord::SkyFrame rsky =Coord::FK5;
  Coord::DistFormat rdist =Coord::ARCMIN;

  // rv,rv2
  char* rv =NULL;
  char rvdef[] = "0";
  rv = rvdef;
  char* rv2 =NULL;
  char rv2def[] = "0";
  rv2 = rv2def;
  Coord::CoordSystem rvsys =Coord::PHYSICAL;
  Coord::SkyFrame rvsky =Coord::FK5;
  Coord::DistFormat rvdist =Coord::ARCMIN;

  // ang
  char* ang =NULL;
  char angdef[] = "0";
  ang = angdef;
  Coord::AngleFormat angformat =Coord::DEG;
  Coord::CoordSystem angsys =Coord::PHYSICAL;
  Coord::SkyFrame angsky =Coord::FK5;
  int angsign =1;
  double angoffset =0;

  // angv
  char* angv =NULL;
  char angvdef[] = "0";
  angv = angvdef;
  Coord::AngleFormat angvformat =Coord::DEG;
  Coord::CoordSystem angvsys =Coord::PHYSICAL;
  Coord::SkyFrame angvsky =Coord::FK5;
  int angvsign =1;
  double angvoffset =0;

  // props
  int tile =1;
  char* color =NULL;
  char colordef[] = "green";
  color = colordef;
  int width =1;
  char* text =NULL;
  char* font =NULL;
  char fontdef[] = "helvetica 10 normal roman";
  font = fontdef;
  unsigned short props = Marker::SELECT | Marker::HIGHLITE | Marker::EDIT |
    Marker::MOVE | Marker::ROTATE | Marker::DELETE | 
    Marker::SOURCE | Marker::INCLUDE;
  int dash[2] = {8,3};
  List<Tag> taglist;

  // params
  char* param =NULL;
  char* param2 =NULL;
  char* param3 =NULL;
  char* param4 =NULL;
  char* param5 =NULL;

  // comment
  char* comment=NULL;

  List<CallBack> cblist;

  // build it
  for (int ii=0; ii<colcnt; ii++) {
    if (cols[ii]) {
      switch (id[ii]) {
      case XMLSHAPE:
	shape = cols[ii];
	break;
      case XMLX:
	// only check x col, y col better be the same
	x = cols[ii];
	if (ref[ii])
	  coord.strToCoordSystem(ref[ii],wcsSystem_,&sys,&sky);
	if (unit[ii])
	  coord.strToSkyFormat(unit[ii],&format);
	break;
      case XMLY:
	y = cols[ii];
	break;
      case XMLXV:
	// only check x col, y col better be the same
	xv = cols[ii];
	if (ref[ii])
	  coord.strToCoordSystem(ref[ii],wcsSystem_,&vsys,&vsky);
	if (unit[ii])
	  coord.strToSkyFormat(unit[ii],&vformat);
	break;
      case XMLYV:
	yv = cols[ii];
	break;
      case XMLR:
	// only check r col, r2 col better be the same
	r = cols[ii];
	if (ref[ii])
	  coord.strToCoordSystem(ref[ii],wcsSystem_,&rsys,&rsky);
	if (unit[ii])
	  coord.strToDistFormat(unit[ii],&rdist);	  
	break;
      case XMLR2:
	r2 = cols[ii];
	break;
      case XMLRV:
	// only check rv col, r2 col better be the same
	rv = cols[ii];
	if (ref[ii])
	  coord.strToCoordSystem(ref[ii],wcsSystem_,&rvsys,&rvsky);
	if (unit[ii])
	  coord.strToDistFormat(unit[ii],&rvdist);	  
	break;
      case XMLRV2:
	rv2 = cols[ii];
	break;
      case XMLANG:
	ang = cols[ii];
	if (ref[ii])
	  coord.strToCoordSystem(ref[ii],wcsSystem_,&angsys,&angsky);
	if (unit[ii])
	  coord.strToAngleFormat(unit[ii],&angformat);	  
	if (dir[ii]) {
	  if (STRCMP(dir[ii],"cw",2))
	    angsign = -1;
	}
	if (axis[ii]) {
	  if (STRCMP(dir[ii],"x",1)) {
	    if (angsys == Coord::WCS) {
	      switch (angsky) {
	      case Coord::FK4:
	      case Coord::FK5:
	      case Coord::ICRS:
		angoffset = M_PI;
		break;
	      default:
		// na
		break;
	      }
	    }
	  }
	  else if (STRCMP(dir[ii],"-x",2)) {
	    if (angsys == Coord::WCS) {
	      switch (angsky) {
	      case Coord::FK4:
	      case Coord::FK5:
	      case Coord::ICRS:
		break;
	      default:
		angoffset = M_PI;
	      }
	    }
	  }
	  else if (STRCMP(dir[ii],"y",1)) {
	    angoffset = M_PI_2;
	  }
	  else if (STRCMP(dir[ii],"-y",2)) {
	    angoffset = -M_PI_2;
	  }
	}
	break;
      case XMLANGV:
	angv = cols[ii];
	if (ref[ii])
	  coord.strToCoordSystem(ref[ii],wcsSystem_,&angvsys,&angvsky);
	if (unit[ii])
	  coord.strToAngleFormat(unit[ii],&angvformat);	  
	if (dir[ii])
	  if (STRCMP(dir[ii],"cw",2))
	    angvsign = -1;
	if (axis[ii]) {
	  if (STRCMP(dir[ii],"x",1))
	    ;
	  else if (STRCMP(dir[ii],"-x",2))
	    angvoffset = M_PI;
	  else if (STRCMP(dir[ii],"y",1))
	    angvoffset = M_PI_2;
	  else if (STRCMP(dir[ii],"-y",2))
	    angvoffset = -M_PI_2;
	}
	break;
      case XMLTILE:
	tile = atoi(cols[ii]);
	break;
      case XMLCOLOR:
	color = cols[ii];
	break;
      case XMLWIDTH:
	width = atoi(cols[ii]);
	break;
      case XMLTEXT:
	text = cols[ii];
	break;
      case XMLFONT:
	font = cols[ii];
	break;
      case XMLSELECT:
	xmlSetProps(&props, Marker::SELECT, cols[ii]);
	break;
      case XMLHIGHLITE:
	xmlSetProps(&props, Marker::HIGHLITE, cols[ii]);
	break;
      case XMLEDIT:
	xmlSetProps(&props, Marker::EDIT, cols[ii]);
	break;
      case XMLMOVE:
	xmlSetProps(&props, Marker::MOVE, cols[ii]);
	break;
      case XMLROTATE:
	xmlSetProps(&props, Marker::ROTATE, cols[ii]);
	break;
      case XMLDELETE:
	xmlSetProps(&props, Marker::DELETE, cols[ii]);
	break;
      case XMLFIXED:
	xmlSetProps(&props, Marker::FIXED, cols[ii]);
	break;
      case XMLINCLUDE:
	xmlSetProps(&props, Marker::INCLUDE, cols[ii]);
	break;
      case XMLSOURCE:
	xmlSetProps(&props, Marker::SOURCE, cols[ii]);
	break;
      case XMLDASH:
	xmlSetProps(&props, Marker::DASH, cols[ii]);
	break;
      case XMLDASHLIST:
	{
	  char* cc = dupstr(cols[ii]);
	  char* tok = strtok(cc, ",");
	  if (tok)
	    dash[0] = atoi(tok);
	  tok = strtok(NULL, ",");
	  if (tok)
	    dash[1] = atoi(tok);
	  delete [] cc;
	}	
	break;
      case XMLTAG:
	{
	  char* cc = dupstr(cols[ii]);
	  char* tok = strtok(cc, " ");
	  while (tok) {
	    // look for special #160
	    char* aa = dupstr(tok);
	    char* dd = aa;
	    char* ee = aa;
	    while (*dd)
	      if (*dd == -62) {
		*ee++ = ' ';
		dd +=2;
	      }
	      else
		*ee++ = *dd++;
	    // NULL terminate if shortened
	    *ee = *dd;

	    taglist.append(new Tag(aa));
	    delete [] aa;

	    tok = strtok(NULL, " ");
	  }
	  delete [] cc;
	}	
	break;
      case XMLPARAM:
	param = cols[ii];
	break;
      case XMLPARAM2:
	param2 = cols[ii];
	break;
      case XMLPARAM3:
	param3 = cols[ii];
	break;
      case XMLPARAM4:
	param4 = cols[ii];
	break;
      case XMLPARAM5:
	param5 = cols[ii];
	break;
      case XMLCOMMENT:
	comment = cols[ii];
	break;
      }
    }
  }

  FitsImage* ptr = findFits(tile);
  // Basic Regions
  if (STRCMP(shape, "circle", 6)) {
    // will also capture circle3d
    int fill =0;
    if (param) 
      fill = atoi(param);
    createCircleCmd(xmlPoint(ptr, x, y, sys, sky, format),
		    ptr->mapLenToRef(atof(r), rsys, rdist), fill,
		    color, dash, width, font, text, props, comment, 
		    taglist, cblist);
  }
  else if (STRCMP(shape, "ellipse", 7)) {
    int fill =0;
    if (param) 
      fill = atoi(param);
    createEllipseCmd(xmlPoint(ptr, x, y, sys, sky, format),
		     ptr->mapLenToRef(Vector(atof(r),atof(r2)), rsys, rdist),
		     xmlAngle(ang, angsign, angoffset, angformat, sys, sky),
		     fill,
		     color, dash, width, font, text, props, comment, 
		     taglist, cblist);
  }
  else if (STRCMP(shape, "box", 3) || STRCMP(shape, "rotbox", 6)) {
    int fill =0;
    if (param) 
      fill = atoi(param);
    createBoxCmd(xmlPoint(ptr, x, y, sys, sky, format),
		 ptr->mapLenToRef(Vector(atof(r),atof(r2)), rsys, rdist),
		 xmlAngle(ang, angsign, angoffset, angformat, sys, sky),
		 fill,
		 color, dash, width, font, text, props, comment, 
		 taglist, cblist);
  }
  else if (STRCMP(shape, "rectang", 6) || STRCMP(shape, "rotrec", 6)) {
    int fill =0;
    if (param) 
      fill = atoi(param);
    Vector v1 = xmlPoint(ptr, xv, yv, vsys, vsky, vformat, 0);
    Vector v2 = xmlPoint(ptr, xv, yv, vsys, vsky, vformat, 1);
    Vector d = v2-v1;
    Vector c = d/2 + v1;
    createBoxCmd(c,d,
		 xmlAngle(ang, angsign, angoffset, angformat, sys, sky),
		 fill,
		 color, dash, width, font, text, props, comment, 
		 taglist, cblist);
  }
  else if (STRCMP(shape, "polygon", 7)) {
    int fill =0;
    if (param) 
      fill = atoi(param);
    List<Vertex>* list = xmlVertex(ptr, xv, yv, vsys, vsky, vformat);
    createPolygonCmd(*list, fill,
		     color, dash, width, font, text, props, comment, 
		     taglist, cblist);
    if (list)
      delete list;
  }
  else if (STRCMP(shape, "line", 4)) {
    int arrow1 =1;
    int arrow2 =1;
    if (param) 
      arrow1 = atoi(param);
    if (param2)
      arrow2 = atoi(param2);
    createLineCmd(xmlPoint(ptr, xv, yv, vsys, vsky, vformat, 0),
		  xmlPoint(ptr, xv, yv, vsys, vsky, vformat, 1),
		  arrow1, arrow2,
		  color, dash, width, font, text, props, comment, 
		  taglist, cblist);
  }
  else if (STRCMP(shape, "vector", 6)) {
    int arrow =1;
    if (param) 
      arrow = atoi(param);
    createVectCmd(xmlPoint(ptr, x, y, sys, sky, format),
		  ptr->mapLenToRef(atof(r), rsys, rdist), 
		  xmlAngle(ang, angsign, angoffset, angformat,
			   sys, sky),
		  arrow,
		  color, dash, width, font, text, props, comment, 
		  taglist, cblist);
  }
  else if (STRCMP(shape, "projection", 10)) {
    createProjectionCmd(xmlPoint(ptr, xv, yv, vsys, vsky, vformat, 0),
			xmlPoint(ptr, xv, yv, vsys, vsky, vformat, 1),
			ptr->mapLenToRef(atof(r), rsys, rdist), 
			color, dash, width, font,
			text, props, comment, taglist, cblist);
  }
  else if (STRCMP(shape, "segment", 7)) {
    List<Vertex>* list = xmlVertex(ptr, xv, yv, vsys, vsky, vformat);
    createSegmentCmd(*list,
		     color, dash, width, font, text, props, comment, 
		     taglist, cblist);
    if (list)
      delete list;
  }
  else if (STRCMP(shape, "text", 4)) {
    int rotate = 1;
    if (param)
      rotate = atoi(param);
    createTextCmd(xmlPoint(ptr, x, y, sys, sky, format),
		  xmlAngle(ang, angsign, angoffset, angformat, 
			   sys, sky),
		  rotate,
		  color, dash, width, font, text, props, comment, 
		  taglist, cblist);
  }
  else if (STRCMP(shape, "point", 5)) {
    const char* def = "circle";
    Point::PointShape shape = Point::CIRCLE;
    if (!param)
      param = (char*)def;
    int size = 11;
    if (param2)
      size = atoi(param2);

    if (STRCMP(param, "circle", 6))
      shape = Point::CIRCLE;
    else if (STRCMP(param, "box", 3))
      shape = Point::BOX;
    else if (STRCMP(param, "diamond", 7))
      shape = Point::DIAMOND;
    else if (STRCMP(param, "cross", 5))
      shape = Point::CROSS;
    else if (STRCMP(param, "x", 1))
      shape = Point::EX;
    else if (STRCMP(param, "arrow", 5))
      shape = Point::ARROW;
    else if (STRCMP(param,"boxcircle",9))
      shape = Point::BOXCIRCLE;

    createPointCmd(xmlPoint(ptr, x, y, sys, sky, format),
		   shape, size,
		   color, dash, width, font, text, props, comment, 
		   taglist, cblist);
  }

  // Measurement Regions
  else if (STRCMP(shape, "ruler", 5)) {
    Coord::CoordSystem rsys;
    Coord::SkyFrame rsky;
    coord.strToCoordSystem(param, wcsSystem_, &rsys, &rsky);
    Coord::CoordSystem dsys;
    Coord::DistFormat ddist;
    coord.strToDistSystem(param2, wcsSystem_, &dsys, &ddist);
    const char* def3 = "";
    if (!param3)
      param3 = (char*)def3;
    createRulerCmd(xmlPoint(ptr, xv, yv, vsys, vsky, vformat, 0),
		   xmlPoint(ptr, xv, yv, vsys, vsky, vformat, 1),
		   rsys, rsky, dsys, ddist, param3,
		   color, dash, width, font,
		   text, props, comment, taglist, cblist);
  }
  else if (STRCMP(shape, "compass", 7)) {
    Coord::CoordSystem csys;
    Coord::SkyFrame csky;
    coord.strToCoordSystem(param, wcsSystem_, &csys, &csky);
    const char* param2def = "N";
    if (!param2)
      param2 = (char*)param2def;
    const char* param3def = "E";
    if (!param3)
      param3 = (char*)param3def;
    int arrow1 =1;
    if (param4) 
      arrow1 = atoi(param4);
    int arrow2 =1;
    if (param5)
      arrow2 = atoi(param5);
      
    createCompassCmd(xmlPoint(ptr, x, y, sys, sky, format),
		     ptr->mapLenToRef(atof(r), rsys, rdist), 
		     param2, param3, arrow1, arrow2,
		     csys, csky,
		     color, dash, width, font, text, props, comment, 
		     taglist, cblist);
  }

  // Annulus Regions
  else if (STRCMP(shape, "annulus", 7)) {
    int num = xmlCount(rv);
    double* rr = xmlDistance(ptr, rv, num, rvsys, rvdist);
    createAnnulusCmd(xmlPoint(ptr, x, y, sys, sky, format),
		     num, rr,
		     color, dash, width, font, text, props, comment, 
		     taglist, cblist);
    if (rr)
      delete [] rr;
  }
  else if (STRCMP(shape, "ellipseannulus", 14)) {

    int num = xmlCount(rv);
    Vector* rr =xmlDistance(ptr, rv, rv2, num, rvsys, rvdist);
    createEllipseAnnulusCmd(xmlPoint(ptr, x, y, sys, sky, format), num, rr,
			    xmlAngle(ang, angsign, angoffset, 
				     angformat, sys, sky),
			    color, dash, width, font, text, props, comment, 
			    taglist, cblist);
    if (rr)
      delete [] rr;
  }
  else if (STRCMP(shape, "boxannulus", 10)) {

    int num = xmlCount(rv);
    Vector* rr = xmlDistance(ptr, rv, rv2, num, rvsys, rvdist);
    createBoxAnnulusCmd(xmlPoint(ptr, x, y, sys, sky, format), num, rr,
			xmlAngle(ang, angsign, angoffset, angformat,
				 sys, sky),
			color, dash, width, font, text, props, comment, 
			taglist, cblist);
    if (rr)
      delete [] rr;
  }

  // Panda Regions
  else if (STRCMP(shape, "panda", 5) || STRCMP(shape, "pie", 3)) {
    int anum = xmlCount(angv);
    int rnum = xmlCount(rv);
    double* rr = xmlDistance(ptr, rv, rnum, rvsys, rvdist);
    double* aa = xmlAngles(angv, angvsign, angvoffset, anum, angvformat, sys, sky);
    createCpandaCmd(xmlPoint(ptr, x, y, sys, sky, format),
		    anum, aa, rnum, rr,
		    color, dash, width, font, text, props, comment, 
		    taglist, cblist);
    if (rr)
      delete [] rr;
    if (aa)
      delete [] aa;
  }
  else if (STRCMP(shape, "epanda", 6)) {
    int anum = xmlCount(angv);
    int rnum = xmlCount(rv);
    Vector* rr = xmlDistance(ptr, rv, rv2, rnum, rvsys, rvdist);
    double* aa = xmlAngles(angv, angvsign, angoffset, anum, angvformat, sys, sky);
    createEpandaCmd(xmlPoint(ptr, x, y, sys, sky, format),
		    anum, aa, rnum, rr,
		    xmlAngle(ang, angsign, angoffset, angformat,
			     sys, sky),
		    color, dash, width, font, text, props, comment, 
		    taglist, cblist);
    if (rr)
      delete [] rr;
    if (aa)
      delete [] aa;
  }
  else if (STRCMP(shape, "bpanda", 6)) {
    int anum = xmlCount(angv);
    int rnum = xmlCount(rv);
    Vector* rr = xmlDistance(ptr, rv, rv2, rnum, rvsys, rvdist);
    double* aa = xmlAngles(angv, angvsign, angvoffset, anum, angvformat, sys, sky);
    createBpandaCmd(xmlPoint(ptr, x, y, sys, sky, format),
		    anum, aa, rnum, rr,
		    xmlAngle(ang, angsign, angoffset, angformat,
			     sys, sky),
		    color, dash, width, font, text, props, comment, 
		    taglist, cblist);
    if (rr)
      delete [] rr;
    if (aa)
      delete [] aa;
  }
}

void Base::xmlSetProps(unsigned short* props, unsigned short prop, 
			    char* str)
{
  if (atoi(str))
    *props |= prop;
  else
    *props &= ~prop;
}

int Base::xmlCount(const char* col)
{
  int cnt=0;

  char* cc = dupstr(col);
  char* tok = strtok(cc, " ");
  while (tok) {
    cnt++;
    tok = strtok(NULL, " ");
  }
  delete [] cc;

  return cnt;
}

Vector Base::xmlPoint(FitsImage* ptr, const char* xstr, const char* ystr,
		      Coord::CoordSystem sys, Coord::SkyFrame sky, 
		      Coord::SkyFormat format, int which)
{
  if (!xstr || !ystr)
    return Vector();

  char* x =NULL;
  char* y =NULL;
  char* xcc =NULL;
  char* ycc =NULL;
  if (which>0) {
    xcc = dupstr(xstr);
    x = strtok(xcc, " ");
    for (int ii=0; ii<which; ii++)
      x = strtok(NULL, " ");

    ycc = dupstr(ystr);
    y = strtok(ycc, " ,");
    for (int ii=0; ii<which; ii++)
      y = strtok(NULL, " ");
  }
  else {
    x = (char*)xstr;
    y = (char*)ystr;
  }

  Vector rr;
  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    rr = ptr->mapToRef(Vector(atof(x),atof(y)), sys);
    break;
  default:
    if (ptr->hasWCSCel(sys)) {
      switch (format) {
      case Coord::DEGREES:
	rr =  ptr->mapToRef(Vector(atof(x),atof(y)), sys, sky);
	break;
      case Coord::SEXAGESIMAL: 
	{
	  double xx=parseSEXStr(x);
	  double yy=parseSEXStr(y);

	  switch (sky) {
	  case Coord::FK4:
	  case Coord::FK5:
	  case Coord::ICRS:
	    xx = xx/24.*360.;
	    break;
	  case Coord::GALACTIC:
	  case Coord::ECLIPTIC:
	    break;
	  }
	  rr = ptr->mapToRef(Vector(xx,yy), sys, sky);
	}
      }
    }
    else
      rr = ptr->mapToRef(Vector(atof(x),atof(y)), sys);
  }

  if (which>0) {
    if (xcc)
      delete [] xcc;
    if (ycc)
      delete [] ycc;
  }

  return rr;
}

List<Vertex>* Base::xmlVertex(FitsImage* ptr, 
			      const char* x, const char* y, 
			      Coord::CoordSystem sys, Coord::SkyFrame sky, 
			      Coord::SkyFormat format)
{
  List<Vertex>* list = new List<Vertex>;

  int cnt= xmlCount(x);
  for (int ii=0; ii<cnt; ii++) {
    Vector vv = xmlPoint(ptr,x,y,sys,sky,format,ii);
    Vertex* n = new Vertex(vv);
    list->append(n);
  }

  return list;
}

double* Base::xmlDistance(FitsImage* ptr, const char* r, int cnt, 
			  Coord::CoordSystem sys, Coord::DistFormat dist)
{
  double* rr = new double[cnt];

  char* cc = dupstr(r);
  char* tok = strtok(cc, " ");
  for (int ii=0; ii<cnt; ii++) {
    if (tok)
      rr[ii] = atof(tok);
    tok = strtok(NULL, " ");
  }
  delete [] cc;

  for (int ii=0; ii<cnt; ii++)
    rr[ii] = ptr->mapLenToRef(rr[ii], sys, dist);

  return rr;
}

Vector* Base::xmlDistance(FitsImage* ptr, const char* r, const char* r2,
			  int cnt, Coord::CoordSystem sys, 
			  Coord::DistFormat dist)
{
  Vector* vv = new Vector[cnt];

  {
    char* cc = dupstr(r);
    char* tok = strtok(cc, " ");
    for (int ii=0; ii<cnt; ii++) {
      if (tok)
	vv[ii][0] = atof(tok);
      tok = strtok(NULL, " ");
    }
    delete [] cc;
  }

  {
    char* cc = dupstr(r2);
    char* tok = strtok(cc, " ");
    for (int ii=0; ii<cnt; ii++) {
      if (tok)
	vv[ii][1] = atof(tok);
      tok = strtok(NULL, " ");
    }
    delete [] cc;
  }

  for (int ii=0; ii<cnt; ii++)
    vv[ii] = ptr->mapLenToRef(vv[ii], sys, dist);

  return vv;
}

double Base::xmlAngle(const char* angle, int sign, double offset, 
		      Coord::AngleFormat format, Coord::CoordSystem sys, 
		      Coord::SkyFrame sky)
{
  switch (format) {
  case Coord::DEG:
    return mapAngleToRef(sign*zeroTWOPI(degToRad(atof(angle)))+offset,sys,sky);
  case Coord::RAD:
    return mapAngleToRef(sign*atof(angle)+offset, sys, sky);
  default:
    return 0;
  }
}

double* Base::xmlAngles(const char* angle, int sign, double offset, int cnt,
			Coord::AngleFormat format, Coord::CoordSystem sys, 
			Coord::SkyFrame sky)
{
  double* ang = new double[cnt];

  char* cc = dupstr(angle);
  char* tok = strtok(cc, " ");
  for (int ii=0; ii<cnt; ii++) {
    if (tok)
      switch (format) {
      case Coord::DEG:
	ang[ii] =
	  mapAngleToRef(sign*zeroTWOPI(degToRad(atof(tok)))+offset,sys,sky);
	break;
      case Coord::RAD:
	ang[ii] = mapAngleToRef(sign*atof(tok)+offset, sys, sky);
	break;
      }
    tok = strtok(NULL, " ");
  }
  delete [] cc;

  return ang;
}

void Base::markerListXMLHeader(ostream& str, Coord::CoordSystem sys, 
			       Coord::SkyFrame sky, Coord::SkyFormat format)
{
  str << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl
      << "<VOTABLE version=\"1.1\">" << endl
      << "<DEFINITIONS>" << endl
      << "<COOSYS ID=\"fk5\" system=\"eq_FK5\" equinox=\"J2000\"/>" << endl
      << "<COOSYS ID=\"fk4\" system=\"eq_FK4\" equinox=\"B1950\"/>" << endl
      << "</DEFINITIONS>" << endl
      << "<RESOURCE>" << endl
      << "<TABLE>" << endl
      << "<DESCRIPTION>DS9 version 4.1</DESCRIPTION>" << endl;

  str << "<FIELD ID=\"shape\" name=\"shape\" datatype=\"char\" arraysize=\"*\"/>" << endl;

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    str << "<FIELD ID=\"x\" name=\"x\" datatype=\"float\" precision=\"8\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
    str << "<FIELD ID=\"y\" name=\"y\" datatype=\"float\" precision=\"8\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
    str << "<FIELD ID=\"xv\" name=\"xv\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
    str << "<FIELD ID=\"yv\" name=\"yv\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
    str << "<FIELD ID=\"r\" name=\"r\" datatype=\"float\" precision=\"8\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
    str << "<FIELD ID=\"r2\" name=\"r2\" datatype=\"float\" precision=\"8\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
    str << "<FIELD ID=\"rv\" name=\"rv\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
    str << "<FIELD ID=\"rv2\" name=\"rv2\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
    str << "<FIELD ID=\"ang\" name=\"ang\" datatype=\"float\" precision=\"8\" unit=\"deg\" ref=\"" << coord.coordSystemStr(sys) << "\" axis=\"x\" dir=\"ccw\"/>" << endl;
    str << "<FIELD ID=\"angv\" name=\"angv\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"deg\" ref=\"" << coord.coordSystemStr(sys) << "\" axis=\"x\" dir=\"ccw\"/>" << endl;
    break;

  default:
    if (keyContext->fits->hasWCS(sys)) {
      if (keyContext->fits->hasWCSCel(sys)) {
	// determine ucd
	char* xucd=NULL;
	char* yucd=NULL;
	switch (sky) {
	case Coord::FK4:
	case Coord::FK5:
	case Coord::ICRS:
	  xucd = dupstr("pos.eq.ra;meta.main");
	  yucd = dupstr("pos.eq.dec;meta.main");
	  break;
	case Coord::GALACTIC:
	  xucd = dupstr("pos.galactic.lon;meta.main");
	  yucd = dupstr("pos.galactic.lat;meta.main");
	  break;
	case Coord::ECLIPTIC:
	  xucd = dupstr("pos.ecliptic.lon;meta.main");
	  yucd = dupstr("pos.ecliptic.lat;meta.main");
	  break;
	}

	switch (format) {
	case Coord::DEGREES:
	  str << "<FIELD ID=\"x\" name=\"x\" datatype=\"float\" precision=\"8\" unit=\"deg\" ref=\"" << coord.skyFrameStr(sky) << "\" ucd=\"" << xucd << "\"/>" << endl;
	  str << "<FIELD ID=\"y\" name=\"y\" datatype=\"float\" precision=\"8\" unit=\"deg\" ref=\"" << coord.skyFrameStr(sky) << "\" ucd=\"" << yucd << "\"/>" << endl;
	  str << "<FIELD ID=\"xv\" name=\"xv\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"deg\" ref=\"" << coord.skyFrameStr(sky) << "\"/>" << endl;
	  str << "<FIELD ID=\"yv\" name=\"yv\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"deg\" ref=\"" << coord.skyFrameStr(sky) << "\"/>" << endl;
	  break;
	case Coord::SEXAGESIMAL:
	  str << "<FIELD ID=\"x\" name=\"x\" datatype=\"char\" arraysize=\"*\" unit=\"&quot;h:m:s&quot;\" ref=\"" << coord.skyFrameStr(sky) << "\" ucd=\"" << xucd << "\"/>" << endl;
	  str << "<FIELD ID=\"y\" name=\"y\" datatype=\"char\" arraysize=\"*\" unit=\"&quot;d:m:s&quot;\" ref=\"" << coord.skyFrameStr(sky) << "\" ucd=\"" << yucd << "\"/>" << endl;
	  str << "<FIELD ID=\"xv\" name=\"xv\" datatype=\"char\" arraysize=\"*\" unit=\"&quot;h:m:s&quot;\" ref=\"" << coord.skyFrameStr(sky) << "\"/>" << endl;
	  str << "<FIELD ID=\"yv\" name=\"yv\" datatype=\"char\" arraysize=\"*\" unit=\"&quot;d:m:s&quot;\" ref=\"" << coord.skyFrameStr(sky) << "\"/>" << endl;
	  break;
	}

	str << "<FIELD ID=\"r\" name=\"r\" datatype=\"float\" precision=\"8\" unit=\"arcsec\" ref=\"" << coord.skyFrameStr(sky) << "\"/>" << endl;
	str << "<FIELD ID=\"r2\" name=\"r2\" datatype=\"float\" precision=\"8\" unit=\"arcsec\" ref=\"" << coord.skyFrameStr(sky) << "\"/>" << endl;
	str << "<FIELD ID=\"rv\" name=\"rv\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"arcsec\" ref=\"" << coord.skyFrameStr(sky) << "\"/>" << endl;
	str << "<FIELD ID=\"rv2\" name=\"rv2\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"arcsec\" ref=\"" << coord.skyFrameStr(sky) << "\"/>" << endl;
	str << "<FIELD ID=\"ang\" name=\"ang\" datatype=\"float\" precision=\"8\" unit=\"deg\" ref=\"" << coord.skyFrameStr(sky) << "\" axis=\"-x\" dir=\"ccw\"/>" << endl;
	str << "<FIELD ID=\"angv\" name=\"angv\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"deg\" ref=\"" << coord.skyFrameStr(sky) << "\" axis=\"-x\" dir=\"ccw\"/>" << endl;

	if (xucd)
	  delete [] xucd;
	if (yucd)
	  delete [] yucd;
      }
      else {
	str << "<FIELD ID=\"x\" name=\"x\" datatype=\"float\" precision=\"8\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
	str << "<FIELD ID=\"y\" name=\"y\" datatype=\"float\" precision=\"8\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
	str << "<FIELD ID=\"xv\" name=\"xv\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
	str << "<FIELD ID=\"yv\" name=\"yv\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
	str << "<FIELD ID=\"r\" name=\"r\" datatype=\"float\" precision=\"8\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
	str << "<FIELD ID=\"r2\" name=\"r2\" datatype=\"float\" precision=\"8\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
	str << "<FIELD ID=\"rv\" name=\"rv\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
	str << "<FIELD ID=\"rv2\" name=\"rv2\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"pix\" ref=\"" << coord.coordSystemStr(sys) << "\"/>" << endl;
	str << "<FIELD ID=\"ang\" name=\"ang\" datatype=\"float\" precision=\"8\" unit=\"deg\" ref=\"" << coord.coordSystemStr(sys) << "\" axis=\"x\" dir=\"ccw\"/>" << endl;
	str << "<FIELD ID=\"angv\" name=\"angv\" datatype=\"float\" precision=\"8\" arraysize=\"*\" unit=\"deg\" ref=\"" << coord.coordSystemStr(sys) << "\" axis=\"x\" dir=\"ccw\"/>" << endl;
      }
    }
  }

  str << "<FIELD ID=\"tile\" name=\"tile\" datatype=\"int\"/>" << endl;
  str << "<FIELD ID=\"color\" name=\"color\" datatype=\"char\" arraysize=\"*\"/>" << endl;
  str << "<FIELD ID=\"width\" name=\"width\" datatype=\"int\"/>" << endl;
  str << "<FIELD ID=\"text\" name=\"text\" datatype=\"char\" arraysize=\"*\"/>" << endl;
  str << "<FIELD ID=\"font\" name=\"font\" datatype=\"char\" arraysize=\"*\"/>" << endl;
  str << "<FIELD ID=\"select\" name=\"select\" datatype=\"boolean\"/>" << endl;
  str << "<FIELD ID=\"highlite\" name=\"highlite\" datatype=\"boolean\"/>" << endl;
  str << "<FIELD ID=\"edit\" name=\"edit\" datatype=\"boolean\"/>" << endl;
  str << "<FIELD ID=\"move\" name=\"move\" datatype=\"boolean\"/>" << endl;
  str << "<FIELD ID=\"rotate\" name=\"rotate\" datatype=\"boolean\"/>" << endl;
  str << "<FIELD ID=\"delete\" name=\"delete\" datatype=\"boolean\"/>" << endl;
  str << "<FIELD ID=\"fixed\" name=\"fixed\" datatype=\"boolean\"/>" << endl;
  str << "<FIELD ID=\"include\" name=\"include\" datatype=\"boolean\"/>" << endl;
  str << "<FIELD ID=\"source\" name=\"source\" datatype=\"boolean\"/>" << endl;
  str << "<FIELD ID=\"dash\" name=\"dash\" datatype=\"boolean\"/>" << endl;
  str << "<FIELD ID=\"dashlist\" name=\"dashlist\" datatype=\"char\" arraysize=\"*\"/>" << endl;
  str << "<FIELD ID=\"tag\" name=\"tag\" datatype=\"char\" arraysize=\"*\"/>" << endl;
  str << "<FIELD ID=\"param\" name=\"param\" datatype=\"char\" arraysize=\"*\"/>" << endl;
  str << "<FIELD ID=\"param2\" name=\"param2\" datatype=\"char\" arraysize=\"*\"/>" << endl;
  str << "<FIELD ID=\"param3\" name=\"param3\" datatype=\"char\" arraysize=\"*\"/>" << endl;
  str << "<FIELD ID=\"param4\" name=\"param4\" datatype=\"char\" arraysize=\"*\"/>" << endl;
  str << "<FIELD ID=\"param5\" name=\"param5\" datatype=\"char\" arraysize=\"*\"/>" << endl;
  str << "<FIELD ID=\"comment\" name=\"comment\" datatype=\"char\" arraysize=\"*\"/>" << endl;

  str << "<DATA>" << endl
      << "<TABLEDATA>" << endl;
}

void Base::markerListXMLFooter(ostream& str)
{
  str << "</TABLEDATA>" << endl 
      << "</DATA>" << endl 
      << "</TABLE>" << endl 
      << "</RESOURCE>" << endl 
      << "</VOTABLE>" << endl;
}
