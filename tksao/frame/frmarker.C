// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <fstream>
#include "fdstream.hpp"

#include "util.h"
#include "context.h"
#include "base.h"
#include "fitsimage.h"
#include "fvcontour.h"
#include "marker.h"
#include "basemarker.h"
#include "sigbus.h"

#include "circle.h"
#include "ellipse.h"
#include "box.h"
#include "polygon.h"
#include "line.h"
#include "vect.h"
#include "projection.h"
#include "segment.h"

#include "text.h"
#include "point.h"

#include "ruler.h"
#include "compass.h"

#include "annulus.h"
#include "ellipseannulus.h"
#include "boxannulus.h"

#include "cpanda.h"
#include "epanda.h"
#include "bpanda.h"

#include "composite.h"

#define LISTBUFSIZE 8192

// NOTE: all marker traversal routines use a local ptr as opposed to the
// list current() because marker call backs may invoke another traversal 
// routine or the event loop, which may process pending events

// DS9/Funtools Marker Parser Stuff
// Parser Stuff
#undef yyFlexLexer
#define yyFlexLexer mkFlexLexer
#include <FlexLexer.h>

void* mklval;
mkFlexLexer* mklexx;
extern int mkparse(Base*, mkFlexLexer*);

int mklex(void* vval, mkFlexLexer* ll)
{
  mklval = vval;
  mklexx = ll;
  return ll ? ll->yylex() : 0;
}

void mkerror(Base* fr, mkFlexLexer* ll, const char* m)
{
  fr->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n') {
    fr->error(": ");
    fr->error(cmd);
  }
}

// CIAO Marker Parser Stuff
#undef yyFlexLexer
#define yyFlexLexer ciaoFlexLexer
#include <FlexLexer.h>

void* ciaolval;
extern int ciaoparse(Base*, ciaoFlexLexer*);

int ciaolex(void* vval, ciaoFlexLexer* ll)
{
  ciaolval = vval;
  return ll ? ll->yylex() : 0;
}

void ciaoerror(Base* fr, ciaoFlexLexer* ll, const char* m)
{
  fr->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n') {
    fr->error(": ");
    fr->error(cmd);
  }
}

// PROS Marker Parser Stuff
#undef yyFlexLexer
#define yyFlexLexer prosFlexLexer
#include <FlexLexer.h>

void* proslval;
prosFlexLexer* proslexx;
extern int prosparse(Base*, prosFlexLexer*);

int proslex(void* vval, prosFlexLexer* ll)
{
  proslval = vval;
  proslexx = ll;
  return ll ? ll->yylex() : 0;
}

void proserror(Base* fr, prosFlexLexer* ll, const char* m)
{
  fr->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n') {
    fr->error(": ");
    fr->error(cmd);
  }
}

// TNG Marker Parser Stuff
#undef yyFlexLexer
#define yyFlexLexer tngFlexLexer
#include <FlexLexer.h>

void* tnglval;
tngFlexLexer* tnglexx;
extern int tngparse(Base*, tngFlexLexer*);

int tnglex(void* vval, tngFlexLexer* ll)
{
  tnglval = vval;
  tnglexx = ll;
  return ll ? ll->yylex() : 0;
}

void tngerror(Base* fr, tngFlexLexer* ll, const char* m)
{
  fr->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n') {
    fr->error(": ");
    fr->error(cmd);
  }
}

// SAO Marker Parser Stuff
#undef yyFlexLexer
#define yyFlexLexer saoFlexLexer
#include <FlexLexer.h>

void* saolval;
saoFlexLexer* saolexx;
extern int saoparse(Base*, saoFlexLexer*);

int saolex(void* vval, saoFlexLexer* ll)
{
  saolval = vval;
  saolexx = ll;
  return ll ? ll->yylex() : 0;
}

void saoerror(Base* fr, saoFlexLexer* ll, const char* m)
{
  fr->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n') {
    fr->error(": ");
    fr->error(cmd);
  }
}

// XY Marker Parser Stuff
#undef yyFlexLexer
#define yyFlexLexer xyFlexLexer
#include <FlexLexer.h>

void* xylval;
extern int xyparse(Base*, xyFlexLexer*);

int xylex(void* vval, xyFlexLexer* ll)
{
  xylval = vval;
  return ll ? ll->yylex() : 0;
}

void xyerror(Base* fr, xyFlexLexer* ll, const char* m)
{
  fr->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n') {
    fr->error(": ");
    fr->error(cmd);
  }
}

// Basic Regions
void Base::createCircleCmd(const Vector& center, 
			   double radius, int fill,
			   const char* color, int* dash, 
			   int width, const char* font,
			   const char* text, unsigned short prop, 
			   const char* comment, 
			   const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Circle(this, center, radius, fill,
			  color, dash, width, font, text, 
			  prop, comment, tag, cb));
}

void Base::createEllipseCmd(const Vector& center, 
			    const Vector& radius,
			    double angle, int fill,
			    const char* color, int* dash, 
			    int width, const char* font,
			    const char* text, unsigned short prop,
			    const char* comment, 
			    const List<Tag>& tag,const List<CallBack>& cb)

{
  createMarker(new Ellipse(this,center, radius, angle, fill,
			   color, dash, width, font, text, 
			   prop, comment, tag, cb));
}

void Base::createBoxCmd(const Vector& center, 
			const Vector& size, 
			double angle, int fill,
			const char* color, int* dash, 
			int width, const char* font,
			const char* text, unsigned short prop,
			const char* comment, 
			const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Box(this, center, size, angle, fill,
		       color, dash, width, font, text, 
		       prop, comment, tag, cb));
}

void Base::createPolygonCmd(const Vector& center, 
			    const Vector& bb, int fill,
			    const char* color, int* dash, 
			    int width, const char* font,
			    const char* text, unsigned short prop,
			    const char* comment, 
			    const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Polygon(this, center, bb, fill,
			   color, dash, width, font, text, 
			   prop, comment, tag, cb));
}

void Base::createPolygonCmd(const List<Vertex>& list, int fill,
			    const char* color, int* dash, 
			    int width, const char* font,
			    const char* text, unsigned short prop,
			    const char* comment, 
			    const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Polygon(this, list, fill,
			   color, dash, width, font, text, 
			   prop, comment, tag, cb));
}

void Base::contourCreatePolygonCmd()
{
  // only create in the USER layer
  markerLayerCmd(USER);

  contourCreatePolygon(currentContext->fvcontour().lcontourlevel());
  contourCreatePolygon(currentContext->auxcontours());

  currentContext->contourDeleteFV();
  currentContext->contourDeleteAux();
}

void Base::contourCreatePolygon(List<ContourLevel>& cl)
{
  int dl[2];
  dl[0] = 8;
  dl[1] = 3;
  char font[] = "helvetica 10 normal roman";
  int fill =0;
  char text[] = "";
  unsigned short defaultProps = Marker::SELECT | Marker::HIGHLITE |
    Marker::EDIT | Marker::MOVE | Marker::ROTATE | 
    Marker::DELETE | Marker::INCLUDE | Marker::SOURCE;
  const List<Tag> tag;
  const List<CallBack> cb;

  // back to front for levels
  if (cl.tail()) {
    do {
      const char* color = cl.current()->colorName();
      int width = cl.current()->lineWidth();
      unsigned short prop = defaultProps;
      if (cl.current()->dash())
	prop |= Marker::DASH;

      List<Contour>& cc = cl.current()->lcontour();
      cc.head();
      while (cc.current()) {
	List<Vertex>& vv = cc.current()->lvertex();
	if (!vv.isEmpty())
	  createMarker(new Polygon(this, vv, fill, color, dl, width, font,
				   text, prop, NULL, tag, cb));
	cc.next();
      }
    }
    while (cl.previous());
  }
}

void Base::createSegmentCmd(const Vector& center, 
			    const Vector& bb,
			    const char* color, int* dash, 
			    int width, const char* font,
			    const char* text, unsigned short prop,
			    const char* comment, 
			    const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Segment(this, center, 
			   bb, 
			   color, dash, width, font, text, 
			   prop, comment, tag, cb));
}

void Base::createSegmentCmd(const List<Vertex>& list,
			    const char* color, int* dash, 
			    int width, const char* font,
			    const char* text, unsigned short prop,
			    const char* comment, 
			    const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Segment(this, list, 
			   color, dash, width, font, text, 
			   prop, comment, tag, cb));
}

void Base::createLineCmd(const Vector& center, const Vector& p2, 
			 int arrow1, int arrow2,
			 const char* color, int* dash, 
			 int width, const char* font,
			 const char* text, unsigned short prop,
			 const char* comment, 
			 const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Line(this, center, p2, arrow1, arrow2,
			color, dash, width, font, text, 
			prop, comment, tag, cb));
}

void Base::createVectCmd(const Vector& center, const Vector& p2, 
			 int arrow,
			 const char* color, int* dash, 
			 int width, const char* font,
			 const char* text, unsigned short prop,
			 const char* comment, 
			 const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Vect(this, center, p2, arrow,
			color, dash, width, font, text, 
			prop, comment, tag, cb));
}

void Base::createVectCmd(const Vector& center, double mag, double ang,
			 int arrow,
			 const char* color, int* dash, 
			 int width, const char* font,
			 const char* text, unsigned short prop,
			 const char* comment, 
			 const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Vect(this, center, mag, ang, arrow,
			color, dash, width, font, text, 
			prop, comment, tag, cb));
}

void Base::createTextCmd(const Vector& center, double angle, int rotate,
			 const char* color, int* dash, 
			 int width, const char* font,
			 const char* text, unsigned short prop,
			 const char* comment, 
			 const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Text(this, center, angle, rotate,
			color, dash, width, font, text, 
			prop, comment, tag, cb));
}

void Base::createPointCmd(const Vector& center, 
			  Point::PointShape shape, int size,
			  const char* color, int* dash, 
			  int width, const char* font,
			  const char* text, unsigned short prop,
			  const char* comment, 
			  const List<Tag>& tag, 
			  const List<CallBack>& cb)
{
  createMarker(new Point(this, center, shape, size, 
			 color, dash, width, font, text, 
			 prop, comment, tag, cb));
}

// Measurement Regions
void Base::createRulerCmd(const Vector& center, const Vector& p2,
			  Coord::CoordSystem sys, Coord::SkyFrame sky,
			  Coord::CoordSystem distsys, 
			  Coord::DistFormat distdist, const char* distspec,
			  const char* color, int* dash, 
			  int width, const char* font,
			  const char* text, unsigned short prop,
			  const char* comment, 
			  const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Ruler(this, center, p2, 
			 sys, sky, distsys, distdist, distspec,
			 color, dash, width, font, text, 
			 prop, comment, tag, cb));
}

void Base::createCompassCmd(const Vector& center, double r,
			    const char* north, const char* east, 
			    int na, int ea,
			    Coord::CoordSystem sys, Coord::SkyFrame sky,
			    const char* color, int* dash, 
			    int width, const char* font,
			    const char* text, unsigned short prop,
			    const char* comment, 
			    const List<Tag>& tag, 
			    const List<CallBack>& cb)
{
  createMarker(new Compass(this, center, r, north, east, na, ea, sys, sky, 
			   color, dash, width, font, text, 
			   prop, comment, tag, cb));
}

void Base::createProjectionCmd(const Vector& center, 
			       const Vector& p2, double w, 
			       const char* color, int* dash, 
			       int width, const char* font,
			       const char* text, unsigned short prop,
			       const char* comment, 
			       const List<Tag>& tag, 
			       const List<CallBack>& cb)
{
  createMarker(new Projection(this, center, 
			      p2, w,
			      color, dash, width, font, text, 
			      prop, comment, tag, cb));
}

// Annulus Regions
void Base::createAnnulusCmd(const Vector& center,
			    double start, double stop, int num,
			    const char* color, int* dash, 
			    int width, const char* font,
			    const char* text, unsigned short prop,
			    const char* comment, 
			    const List<Tag>& tag,const List<CallBack>& cb)
{
  createMarker(new Annulus(this, center, 
			   start, stop, num, 
			   color, dash, width, font, text, 
			   prop, comment, tag, cb));
}

void Base::createAnnulusCmd(const Vector& center,
			    int num, double* radii,
			    const char* color, int* dash, 
			    int width, const char* font,
			    const char* text, unsigned short prop,
			    const char* comment, 
			    const List<Tag>& tag,const List<CallBack>& cb)
{
  createMarker(new Annulus(this, center, 
			   num, radii,
			   color, dash, width, font, text, 
			   prop, comment, tag, cb));
}

void Base::createEllipseAnnulusCmd(const Vector& center,
				   const Vector& inner, 
				   const Vector& outer, int num, 
				   double angle,
				   const char* color, int* dash, 
				   int width, const char* font, 
				   const char* text, unsigned short prop,
				   const char* comment, 
				   const List<Tag>& tag, 
				   const List<CallBack>& cb)
{
  createMarker(new EllipseAnnulus(this, center, 
				  inner, outer, num,
				  angle, 
				  color, dash, width, font, text, 
				  prop, comment, tag, cb));
}

void Base::createEllipseAnnulusCmd(const Vector& center, 
				   int num, Vector* radii,
				   double angle,
				   const char* color, int* dash, 
				   int width, const char* font, 
				   const char* text, unsigned short prop,
				   const char* comment, 
				   const List<Tag>& tag, 
				   const List<CallBack>& cb)
{
  createMarker(new EllipseAnnulus(this, center, 
				  num, radii, 
				  angle, 
				  color, dash, width, font, text, 
				  prop, comment, tag, cb));
}

void Base::createBoxAnnulusCmd(const Vector& center,
			       const Vector& inner, const Vector& outer, 
			       int num,
			       double angle,
			       const char* color, int* dash, 
			       int width, const char* font,
			       const char* text, unsigned short prop,
			       const char* comment, 
			       const List<Tag>& tag, 
			       const List<CallBack>& cb)
{
  createMarker(new BoxAnnulus(this, center, 
			      inner, outer, num, 
			      angle, 
			      color, dash, width, font, text, 
			      prop, comment, tag, cb));
}

void Base::createBoxAnnulusCmd(const Vector& center, 
			       int num, Vector* size,
			       double angle, 
			       const char* color, int* dash, 
			       int width, const char* font, 
			       const char* text, unsigned short prop,
			       const char* comment, 
			       const List<Tag>& tag, 
			       const List<CallBack>& cb)
{
  createMarker(new BoxAnnulus(this, center, 
			      num, size, 
			      angle, 
			      color, dash, width, font, text, 
			      prop, comment, tag, cb));
}

// Panda Regions
void Base::createCpandaCmd(const Vector& center,
			   double ang1, double ang2, int an, 
			   double rad1, double rad2, int rn, 
			   const char* color, int* dash, 
			   int width, const char* font,
			   const char* text, unsigned short prop,
			   const char* comment, 
			   const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Cpanda(this, center, 
			  ang1, ang2, an, 
			  rad1, rad2, rn, 
			  color, dash, width, font, text, 
			  prop, comment, tag, cb));
}

void Base::createCpandaCmd(const Vector& center,
			   int an, double* a,
			   int rn, double* r,
			   const char* color, int* dash, 
			   int width, const char* font,
			   const char* text, unsigned short prop,
			   const char* comment, 
			   const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Cpanda(this, center, 
			  an, a,
			  rn, r,
			  color, dash, width, font, text, 
			  prop, comment, tag, cb));
}

void Base::createEpandaCmd(const Vector& center,
			   double ang1, double ang2, int an,
			   const Vector& rad1, const Vector& rad2, int rn,
			   double angle,
			   const char* color, int* dash, 
			   int width, const char* font,
			   const char* text, unsigned short prop,
			   const char* comment, 
			   const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Epanda(this, center, 
			  ang1, ang2, an, 
			  rad1, rad2, rn, 
			  angle,
			  color, dash, width, font, text, 
			  prop, comment, tag, cb));
}

void Base::createEpandaCmd(const Vector& center,
			   int an, double* a,
			   int rn, Vector* r,
			   double angle,
			   const char* color, int* dash, 
			   int width, const char* font,
			   const char* text, unsigned short prop,
			   const char* comment, 
			   const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Epanda(this, center, 
			  an, a,
			  rn, r,
			  angle,
			  color, dash, width, font, text, 
			  prop, comment, tag, cb));
}

void Base::createBpandaCmd(const Vector& center,
			   double ang1, double ang2, int an,
			   const Vector& rad1, const Vector& rad2, int rn,
			   double angle,
			   const char* color, int* dash, 
			   int width, const char* font,
			   const char* text, unsigned short prop,
			   const char* comment, 
			   const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Bpanda(this, center, 
			  ang1, ang2, an, 
			  rad1, rad2, rn, 
			  angle,
			  color, dash, width, font, text, 
			  prop, comment, tag, cb));
}

void Base::createBpandaCmd(const Vector& center,
			   int an, double* a,
			   int rn, Vector* r,
			   double angle,
			   const char* color, int* dash, 
			   int width, const char* font,
			   const char* text, unsigned short prop,
			   const char* comment, 
			   const List<Tag>& tag, const List<CallBack>& cb)
{
  createMarker(new Bpanda(this, center, 
			  an, a,
			  rn, r,
			  angle,
			  color, dash, width, font, text, 
			  prop, comment, tag, cb));
}

// Composite Regions
void Base::createCompositeCmd(const Vector& center, double angle, 
			      int global,
			      const char* color, int* dash, 
			      int width, const char* font,
			      const char* text, unsigned short prop, 
			      const char* comment, 
			      const List<Tag>& tag, 
			      const List<CallBack>& cb)
{
  Composite* m = new Composite(this, center, angle, global, 
			       color, dash, width, font, text, 
			       prop, comment, tag, cb);
  if (createMarker(m))
    compositeMarker = m;
}

void Base::createCompositeCmd(
			      const char* color, int* dash, 
			      int width, const char* font,
			      const char* text, unsigned short prop, 
			      const char* comment, 
			      const List<Tag>& tag, 
			      const List<CallBack>& cb)
{
  // find center
  Vector cc;
  int cnt=0;
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected() && strncmp(mm->getType(),"composite", 9)) {
      cc += mm->getCenter();
      cnt++;
    }
    mm=mm->next();
  }
  cc /= cnt;

  // create composite
  Composite* mk = new Composite(this, cc, 0, 1, color, dash, width, font, 
				text, prop, comment, tag, cb);
  if (!createMarker(mk))
    return;

  // append members
  mm=markers->head();
  while (mm) {
    if (mm->isSelected() && strncmp(mm->getType(),"composite",9)) {
      mm->unselect();
      Marker* next = markers->extractNext(mm);
      mm->doCallBack(CallBack::DELETECB);
      mm->deleteCBs();
      mk->append(mm);
      mm = next;
    }
    else
      mm=mm->next();
  }

  // all done
  mk->updateBBox();
  mk->select();

  update(PIXMAP);
}

// Template Regions
void Base::createTemplateCmd(const Vector& center, const char* fn)
{
  ifstream str(fn);
  if (!str) {
    result = TCL_ERROR;
    return;
  }  
  createTemplate(center,str);
}

void Base::createTemplateCmd(const Vector& v, Coord::CoordSystem sys, 
			     Coord::SkyFrame sky, const char* fn)
{
  ifstream str(fn);
  if (!str) {
    result = TCL_ERROR;
    return;
  }  
  createTemplate(currentContext->cfits->mapToRef(v, sys, sky),str);
}

void Base::createTemplateVarCmd(const Vector& center, const char* var)
{
  Tcl_Obj* obj = Tcl_GetVar2Ex(interp, (char*)var, NULL, 
			       TCL_GLOBAL_ONLY | TCL_LEAVE_ERR_MSG);
  if (!obj)
    return;

  // just in case
  Tcl_ConvertToType(interp, obj, Tcl_GetObjType("bytearray"));

  typedef struct ByteArray {
    int used;			/* The number of bytes used in the byte
				 * array. */
    int allocated;		/* The amount of space actually allocated
				 * minus 1 byte. */
    unsigned char bytes[4];	/* The array of bytes.  The actual size of
				 * this field depends on the 'allocated' field
				 * above. */
  } ByteArray;

  Tcl_IncrRefCount(obj);

  // only make command string as long as needed
  // or the rest will be processed as garbage
  ByteArray* ba = (ByteArray*)(obj->internalRep.otherValuePtr);
  int len = ba->used+2;
  char* buf = new char[len];
  memcpy(buf, (char*)ba->bytes, ba->used);

  Tcl_DecrRefCount(obj);

  // add terminator to make parser happy
  buf[len-2] = '\n';
  buf[len-1] = '\0';

  string x(buf);
  istringstream istr(x);

  createTemplate(center,istr);

  delete [] buf;
}

void Base::createTemplate(const Vector& center, istream& str)
{
  FitsImage* ptr = keyContext->fits;
  while (ptr) {
    ptr->initWCS0(center);
    ptr = ptr->nextMosaic();
  }

  mkFlexLexer* ll = new mkFlexLexer(&str);
  mkparse(this, ll);
  delete ll;

  Marker* mk = compositeMarker;
  resetCompositeMarker();

  ptr = keyContext->fits;
  while (ptr) {
    ptr->resetWCS0();
    ptr = ptr->nextMosaic();
  }

  if (mk) {
    mk->moveTo(center);
    update(PIXMAP, mk->getAllBBox());

    // and return id
    printInteger(mk->getId());
  }
}

// Support

Marker* Base::createMarker(Marker* m)
{
  if (maperr) {
    Tcl_SetVar2(interp, "ds9", "msg", "Bad Coordinate mapping, unable to create some region(s).", TCL_GLOBAL_ONLY);
    Tcl_SetVar2(interp, "ds9", "msg,level", "warning", TCL_GLOBAL_ONLY);
    delete m;
    return NULL;
  }

  if (compositeMarker) {
    compositeMarker->append(m);
    compositeMarker->updateBBox();
    update(PIXMAP, compositeMarker->getAllBBox());
  }
  else {
    markers->append(m);

    // now update new marker
    update(PIXMAP, m->getAllBBox());

    // can't do this for windows, threads are weird
    // parser.Y and ds9parser.Y are not thread safe
    // *bad* exectute any Edit CallBacks
    // m->doCallBack(CallBack::EDITCB);

    // and return id
    printInteger(m->getId());
  }

  return m;
}

Vector Base::centroid(const Vector& vv)
{
  FitsImage* ptr = currentContext->cfits;
  while (ptr) {
    Vector img = vv * ptr->refToData;
    FitsBound* params = ptr->getDataParams(currentContext->secMode());

    if (img[0]>=params->xmin && img[0]<params->xmax && 
	img[1]>=params->ymin && img[1]<params->ymax)
      break;

    ptr = ptr->nextMosaic();
  }

  if (!ptr)
    return vv;

  FitsBound* params = ptr->getDataParams(currentContext->secMode());
  //  int srcw = ptr->width();

  Vector cd = vv * ptr->refToData;
  float rr = centroidRadius;
  float rr2 = rr*rr;

  // main loop

  SETSIGBUS
    for (int kk=0; kk<centroidIteration; kk++) {
      Vector sum;
      double weight =0;

      for (long jj=-rr; jj<=rr; jj++) {
	for (long ii=-rr; ii<=rr; ii++) {
	  Vector aa = cd + Vector(ii,jj);

	  if (aa[0]>=params->xmin && aa[0]<params->xmax && 
	      aa[1]>=params->ymin && aa[1]<params->ymax) {

	    if (ii*ii+jj*jj <= rr2) {
	      double val = ptr->getValueDouble(aa);

	      // check for nan
	      if (isfinite(val)) {
		sum += aa*val;
		weight += val;
	      }
	    }
	  }
	}
      }

      if (weight>0)
	cd = sum/weight;
      else
	break;
    }
  CLEARSIGBUS

    return cd * ptr->dataToRef;
}

void Base::getMarkerAnalysisHistogramCmd(int id, char* xname, char* yname,
					 int num)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->analysisHistogram(xname, yname, num);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerAnalysisPlot2dCmd(int id, char* xname, char* yname, 
				      char* xcname, char* ycname,
				      Coord::CoordSystem sys, 
				      Coord::SkyFrame sky,
				      Marker::AnalysisMethod method)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->analysisPlot2d(xname, yname, xcname, ycname, sys, sky, method);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerAnalysisPlot3dCmd(int id, char* xname, char* yname,
				      Coord::CoordSystem sys,
				      Marker::AnalysisMethod method)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->analysisPlot3d(xname, yname, sys, method);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerAnalysisPandaCmd(int id, char* xname, char* yname,
				     char* yename, Coord::CoordSystem sys,
				     int angnum)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->analysisPanda(xname, yname, yename, sys, angnum);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerAnalysisRadialCmd(int id, char* xname, char* yname,
				      char* yename, Coord::CoordSystem sys)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->analysisRadial(xname, yname, yename, sys);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerAnalysisStatsCmd(int id, Coord::CoordSystem sys,
				     Coord::SkyFrame sky)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->analysisStats(sys,sky);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerAngleCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      ostringstream str;
      str << setprecision(precAngle_) << radToDeg(mm->getAngle()) << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerAngleCmd(int id, Coord::CoordSystem sys,
			     Coord::SkyFrame sky)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      printAngleFromRef(mm->getAngle(), sys, sky);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerAnnulusRadiusCmd(int id, Coord::CoordSystem sys, 
				     Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      int cnt = ((Annulus*)mm)->numAnnuli();
      Vector cc = mm->getCenter();
      for (int i=0; i<cnt; i++) {
	Vector rr = ((Annulus*)mm)->annuli(i);
	FitsImage* ptr = findFits(sys,cc);
	printLenFromRef(ptr, rr[0], sys, dist);
	Tcl_AppendResult(interp, "\n", NULL);
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerBoxFillCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (((Box*)mm)->getFill())
	Tcl_AppendResult(interp, "1", NULL);
      else
	Tcl_AppendResult(interp, "0", NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerBoxAnnulusRadiusCmd(int id, Coord::CoordSystem sys, 
					Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      int cnt = ((BoxAnnulus*)mm)->numAnnuli();
      Vector cc = mm->getCenter();
      for (int i=0; i<cnt; i++) {
	Vector rr = ((BoxAnnulus*)mm)->annuli(i);
	FitsImage* ptr = findFits(sys,cc);
	printLenFromRef(ptr, rr, sys, dist);
	Tcl_AppendResult(interp, "\n", NULL);
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerBoxRadiusCmd(int id, Coord::CoordSystem sys, 
				 Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Vector rr = ((Box*)mm)->annuli(0);
      Vector cc = mm->getCenter();
      FitsImage* ptr = findFits(sys,cc);
      printLenFromRef(ptr, rr, sys, dist);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerBpandaAnglesCmd(int id)
{
  ostringstream str;
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      int cnt = ((Bpanda*)mm)->numAngles();
      double first=0;
      for (int ii=0; ii<cnt; ii++) {
	double ang = radToDeg(((Bpanda*)mm)->angles(ii));
	if (!ii)
	  first = ang;
	else 
	  if (ang<=first+FLT_EPSILON)
	    ang += 360;
	
	str << setprecision(precAngle_) << ang << endl;
      }
      str << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerBpandaAnglesCmd(int id, Coord::CoordSystem sys,
				    Coord::SkyFrame sky)
{
  ostringstream str;
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      int cnt = ((Bpanda*)mm)->numAngles();
      double first = ((Bpanda*)mm)->angles(0);
      for (int ii=0; ii<cnt; ii++) {
	double ang = ((Bpanda*)mm)->angles(ii);
	if (!ii)
	  listAngleFromRef(str,ang,sys,sky);
	else
	  listAngleFromRef(str,ang,first,sys,sky);
	str << endl;
      }
      str << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerBpandaRadiusCmd(int id, Coord::CoordSystem sys, 
				    Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      int cnt = ((Bpanda*)mm)->numAnnuli();
      Vector cc = mm->getCenter();
      for (int i=0; i<cnt; i++) {
	Vector rr = ((Bpanda*)mm)->annuli(i);
	FitsImage* ptr = findFits(sys,cc);
	printLenFromRef(ptr, rr, sys, dist);
	Tcl_AppendResult(interp, "\n", NULL);
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerCenterCmd(int id, Coord::CoordSystem sys, 
			      Coord::SkyFrame sky, Coord::SkyFormat format)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Vector cc= mm->getCenter();
      printFromRef(findFits(sys,cc), cc, sys, sky, format);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerCircleFillCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (((Circle*)mm)->getFill())
	Tcl_AppendResult(interp, "1", NULL);
      else
	Tcl_AppendResult(interp, "0", NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerCircleRadiusCmd(int id, Coord::CoordSystem sys,
				    Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Vector rr = ((Circle*)mm)->annuli(0);
      Vector cc = mm->getCenter();
      FitsImage* ptr = findFits(sys,cc);
      printLenFromRef(ptr, rr[0], sys, dist);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerCpandaAnglesCmd(int id)
{
  ostringstream str;
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      int cnt = ((Cpanda*)mm)->numAngles();
      double first=0;
      for (int ii=0; ii<cnt; ii++) {
	double ang = radToDeg(((Cpanda*)mm)->angles(ii));
	if (!ii) 
	  first = ang;
	else
	  if (ang<=first+FLT_EPSILON)
	    ang += 360;
	
	str << setprecision(precAngle_) << ang << endl;
      }
      str << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerCpandaAnglesCmd(int id, Coord::CoordSystem sys,
				    Coord::SkyFrame sky)
{
  ostringstream str;
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      int cnt = ((Cpanda*)mm)->numAngles();
      double first = ((Cpanda*)mm)->angles(0);
      for (int ii=0; ii<cnt; ii++) {
	double ang = ((Cpanda*)mm)->angles(ii);
	if (!ii)
	  listAngleFromRef(str,ang,sys,sky);
	else
	  listAngleFromRef(str,ang,first,sys,sky);
	str << endl;
      }
      str << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerCpandaRadiusCmd(int id, Coord::CoordSystem sys, 
				    Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      int cnt = ((Cpanda*)mm)->numAnnuli();
      Vector cc = mm->getCenter();
      for (int i=0; i<cnt; i++) {
	Vector rr = ((Cpanda*)mm)->annuli(i);
	FitsImage* ptr = findFits(sys,cc);
	printLenFromRef(ptr, rr[0], sys, dist);
	Tcl_AppendResult(interp, "\n", NULL);
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerColorCmd()
{
  // return first found

  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      Tcl_AppendResult(interp,  mm->getColorName(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerColorCmd(const char* tag)
{
  // return first found

  Marker* mm=markers->head();
  while (mm) {
    if (mm->hasTag(tag)) {
      Tcl_AppendResult(interp,  mm->getColorName(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerColorCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Tcl_AppendResult(interp,  mm->getColorName(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerCompassArrowCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (((Compass*)mm)->getNorthArrow())
	Tcl_AppendResult(interp, "1", NULL);
      else
	Tcl_AppendResult(interp, "0", NULL);

      if (((Compass*)mm)->getEastArrow())
	Tcl_AppendResult(interp, " 1", NULL);
      else
	Tcl_AppendResult(interp, " 0", NULL);

      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerCompassLabelCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Tcl_AppendElement(interp, ((Compass*)mm)->getNorthText());
      Tcl_AppendElement(interp, ((Compass*)mm)->getEastText());
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerCompassRadiusCmd(int id, Coord::CoordSystem sys,
				     Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      double rr = ((Compass*)mm)->getRadius();
      Vector cc = mm->getCenter();
      FitsImage* ptr = findFits(sys,cc);
      printLenFromRef(ptr, rr, sys, dist);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerCompassSystemCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      printCoordSystem(((Compass*)mm)->getSystem());
      Tcl_AppendResult(interp, " ", NULL);
      printSkyFrame(((Compass*)mm)->getSkyFrame());
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerCompositeCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (((Composite*)mm)->getGlobal())
	Tcl_AppendResult(interp, "1", NULL);
      else
	Tcl_AppendResult(interp, "0", NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerEllipseFillCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (((Ellipse*)mm)->getFill())
	Tcl_AppendResult(interp, "1", NULL);
      else
	Tcl_AppendResult(interp, "0", NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerEllipseRadiusCmd(int id, Coord::CoordSystem sys, 
				     Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Vector rr = ((Ellipse*)mm)->annuli(0);
      Vector cc = mm->getCenter();
      FitsImage* ptr = findFits(sys,cc);
      printLenFromRef(ptr, rr, sys, dist);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerEllipseAnnulusRadiusCmd(int id, Coord::CoordSystem sys, 
					    Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      int cnt = ((EllipseAnnulus*)mm)->numAnnuli();
      Vector cc = mm->getCenter();
      for (int i=0; i<cnt; i++) {
	Vector rr = ((EllipseAnnulus*)mm)->annuli(i);
	FitsImage* ptr = findFits(sys,cc);
	printLenFromRef(ptr, rr, sys, dist);
	Tcl_AppendResult(interp, "\n", NULL);
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerEpandaAnglesCmd(int id)
{
  ostringstream str;
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      int cnt = ((Epanda*)mm)->numAngles();
      double first=0;
      for (int ii=0; ii<cnt; ii++) {
	double ang = radToDeg(((Epanda*)mm)->angles(ii));
	if (!ii)
	  first = ang;
	else
	  if (ang<=first+FLT_EPSILON)
	    ang += 360;

	str << setprecision(precAngle_) << ang << endl;
      }
      str << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerEpandaAnglesCmd(int id, Coord::CoordSystem sys,
				    Coord::SkyFrame sky)
{
  ostringstream str;
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      int cnt = ((Cpanda*)mm)->numAngles();
      double first = ((Cpanda*)mm)->angles(0);
      for (int ii=0; ii<cnt; ii++) {
	double ang = ((Cpanda*)mm)->angles(ii);
	if (!ii)
	  listAngleFromRef(str,ang,sys,sky);
	else
	  listAngleFromRef(str,ang,first,sys,sky);
	str << endl;
      }
      str << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerEpandaRadiusCmd(int id, Coord::CoordSystem sys, 
				    Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      int cnt = ((Epanda*)mm)->numAnnuli();
      Vector cc = mm->getCenter();
      for (int i=0; i<cnt; i++) {
	Vector rr = ((Epanda*)mm)->annuli(i);
	FitsImage* ptr = findFits(sys,cc);
	printLenFromRef(ptr, rr, sys, dist);
	Tcl_AppendResult(interp, "\n", NULL);
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerEpsilonCmd()
{
  ostringstream str;
  str << markerEpsilon << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getMarkerFontCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      Tcl_AppendResult(interp, mm->getFont(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerFontCmd(const char* tag)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->hasTag(tag)) {
      Tcl_AppendResult(interp, mm->getFont(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerFontCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Tcl_AppendResult(interp, mm->getFont(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerHandleCmd(const Vector& v)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      int h = mm->onHandle(v);
      if (h) {
	ostringstream str;
	str << mm->getId() << ' ' << h << ends;
	Tcl_AppendResult(interp, str.str().c_str(), NULL);
	return;
      }
    }
    mm=mm->next();
  }

  Tcl_AppendResult(interp, "0 0", NULL);
}

void Base::getMarkerIdCmd(const char* tag)
{
  // return first found

  Marker* mm=markers->head();
  while (mm) {
    if (mm->hasTag(tag)) {
      printInteger(mm->getId());
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerIdCmd(const Vector& v)
{
  // v is in canvas coords

  Marker* mm=markers->head();
  while (mm) {
    if (mm->isIn(v)) {
      printInteger(mm->getId());
      return;
    }
    mm=mm->next();
  }

  Tcl_AppendResult(interp, "0", NULL);
}

void Base::getMarkerIdAllCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    ostringstream str;
    str << mm->getId() << ' ' << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
    mm=mm->next();
  }
}

void Base::getMarkerLineCmd(int id, Coord::CoordSystem sys, 
			    Coord::SkyFrame sky, Coord::SkyFormat format)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Vector p1 = ((Line*)mm)->getP1();
      Vector p2 = ((Line*)mm)->getP2();
      Vector cc = mm->getCenter();
      printFromRef(findFits(sys,cc), p1, sys, sky, format);
      Tcl_AppendResult(interp, " ", NULL);
      printFromRef(findFits(sys,cc), p2, sys, sky, format);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerLineArrowCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (((Line*)mm)->getP1Arrow())
	Tcl_AppendResult(interp, "1", NULL);
      else
	Tcl_AppendResult(interp, "0", NULL);

      if (((Line*)mm)->getP2Arrow())
	Tcl_AppendResult(interp, " 1", NULL);
      else
	Tcl_AppendResult(interp, " 0", NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerLineLengthCmd(int id, Coord::CoordSystem sys, 
				  Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Vector p1 = ((Line*)mm)->getP1();
      Vector p2 = ((Line*)mm)->getP2();
      Vector cc = mm->getCenter();
      FitsImage* ptr = findFits(sys,cc);
      printDistFromRef(ptr,p2,p1,sys,dist);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerLineWidthCmd()
{
  // return first found
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      ostringstream str;
      str << mm->getLineWidth() << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerLineWidthCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      ostringstream str;
      str << mm->getLineWidth() << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerMapLenFromRefCmd(int id, double dd,
				     Coord::CoordSystem sys, 
				     Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      FitsImage* ptr = findFits(sys,mm->getCenter());
      printLenFromRef(ptr, dd, sys, dist);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerPointShapeCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Tcl_AppendResult(interp, ((Point*)mm)->shape(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerPointSizeCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      printInteger(((Point*)mm)->size());
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerPolygonFillCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (((Polygon*)mm)->getFill())
	Tcl_AppendResult(interp, "1", NULL);
      else
	Tcl_AppendResult(interp, "0", NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerPolygonSegmentCmd(const Vector& v)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      int s = mm->getSegment(v);
      if (s) {
	ostringstream str;
	str << mm->getId() << ' ' << s << ends;
	Tcl_AppendResult(interp, str.str().c_str(), NULL);
	return;
      }
    }
    mm=mm->next();
  }

  Tcl_AppendResult(interp, "0 0", NULL);
}

void Base::getMarkerPreserveCmd()
{
  if (preserveMarkers)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::getMarkerProjectionPointsCmd(int id, Coord::CoordSystem sys, 
					Coord::SkyFrame sky, 
					Coord::SkyFormat format)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Vector p1 = ((Projection*)mm)->getP1();
      Vector p2 = ((Projection*)mm)->getP2();
      Vector cc = mm->getCenter();
      printFromRef(findFits(sys,cc), p1, sys, sky, format);
      Tcl_AppendResult(interp, " ", NULL);
      printFromRef(findFits(sys,cc), p2, sys, sky, format);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerProjectionLengthCmd(int id, Coord::CoordSystem sys,
					Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Vector p1 = ((Projection*)mm)->getP1();
      Vector p2 = ((Projection*)mm)->getP2();
      Vector cc = mm->getCenter();
      FitsImage* ptr = findFits(sys,cc);
      printDistFromRef(ptr,p2,p1,sys,dist);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerProjectionWidthCmd(int id, Coord::CoordSystem sys, 
				       Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      double rr = ((Projection*)mm)->getWidth();
      Vector cc = mm->getCenter();
      FitsImage* ptr = findFits(sys,cc);
      printLenFromRef(ptr, rr, sys, dist);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerPropertyCmd(unsigned short which)
{
  // return first selected found

  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      mm->getProperty(which) ?
	Tcl_AppendResult(interp, "1", NULL): 
	Tcl_AppendResult(interp, "0", NULL);
      return;
    }
    mm=mm->next();
  }

  // else, return 'off'

  Tcl_AppendResult(interp, "0", NULL);
}

void Base::getMarkerPropertyCmd(const char* tag, unsigned short which)
{
  // return first selected found

  Marker* mm=markers->head();
  while (mm) {
    if (mm->hasTag(tag)) {
      mm->getProperty(which) ?
	Tcl_AppendResult(interp, "1", NULL): 
	Tcl_AppendResult(interp, "0", NULL);
      return;
    }
    mm=mm->next();
  }

  // else, return 'off'

  Tcl_AppendResult(interp, "0", NULL);
}

void Base::getMarkerPropertyCmd(int id, unsigned short which)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->getProperty(which) ?
	Tcl_AppendResult(interp, "1", NULL):
	Tcl_AppendResult(interp, "0", NULL);
      return;
    }
    mm=mm->next();
  }

  // else, return 'off'

  Tcl_AppendResult(interp, "0", NULL);
}

void Base::getMarkerRulerLengthCmd(int id, Coord::CoordSystem sys, 
				   Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Vector p1 = ((Ruler*)mm)->getP1();
      Vector p2 = ((Ruler*)mm)->getP2();
      Vector p3 = ((Ruler*)mm)->getP3();
      Vector cc = mm->getCenter();
      FitsImage* ptr = findFits(sys,cc);
      printDistFromRef(ptr,p2,p1,sys,dist);
      Tcl_AppendResult(interp, " ", NULL);
      printDistFromRef(ptr,p3,p1,sys,dist);
      Tcl_AppendResult(interp, " ", NULL);
      printDistFromRef(ptr,p3,p2,sys,dist);
      return;
    }
    mm=mm->next();
  }

}

void Base::getMarkerRulerPointCmd(int id, Coord::CoordSystem sys,
				  Coord::SkyFrame sky,
				  Coord::SkyFormat format)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Vector p1 = ((Ruler*)mm)->getP1();
      Vector p2 = ((Ruler*)mm)->getP2();
      Vector cc = mm->getCenter();
      printFromRef(findFits(sys,cc), p1, sys, sky, format);
      Tcl_AppendResult(interp, " ", NULL);
      printFromRef(findFits(sys,cc), p2, sys, sky, format);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerRulerDistSpecCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Tcl_AppendResult(interp, ((Ruler*)mm)->getDistSpec(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerRulerSystemCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      printCoordSystem(((Ruler*)mm)->getSystem());
      Tcl_AppendResult(interp, " ", NULL);
      printSkyFrame(((Ruler*)mm)->getSkyFrame());
      Tcl_AppendResult(interp, " ", NULL);
      printCoordSystem(((Ruler*)mm)->getDistSystem());
      Tcl_AppendResult(interp, " ", NULL);
      printDistFormat(((Ruler*)mm)->getDistFormat());
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerSegmentSegmentCmd(const Vector& v)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      int s = mm->getSegment(v);
      if (s) {
	ostringstream str;
	str << mm->getId() << ' ' << s << ends;
	Tcl_AppendResult(interp, str.str().c_str(), NULL);
	return;
      }
    }
    mm=mm->next();
  }

  Tcl_AppendResult(interp, "0 0", NULL);
}

void Base::getMarkerSelectedCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      ostringstream str;
      str << mm->getId() << ' ' << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
    }
    mm=mm->next();
  }
}

void Base::getMarkerSelectedCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->isSelected())
	Tcl_AppendResult(interp, "1", NULL);
      else
	Tcl_AppendResult(interp, "0", NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerSelectedCmd(const Vector& v)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isIn(v) && mm->isSelected()) {
      ostringstream str;
      str << mm->getId() << ' ' << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
      return;
    }
    mm=mm->next();
  }

  Tcl_AppendResult(interp, "0", NULL);
}

void Base::getMarkerNumberCmd()
{
  int count=0;
  Marker* mm=markers->head();
  while (mm) {
    count++;
    mm=mm->next();
  }

  printInteger(count);
}

void Base::getMarkerSelectedNumberCmd()
{
  int count=0;
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected())
      count++;
    mm=mm->next();
  }

  printInteger(count);
}

void Base::getMarkerHighlitedCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isHighlited()) {
      ostringstream str;
      str << mm->getId() << ' ' << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
    }
    mm=mm->next();
  }
}

void Base::getMarkerHighlitedCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->isHighlited())
	Tcl_AppendResult(interp, "1", NULL);
      else
	Tcl_AppendResult(interp, "0", NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerHighlitedCmd(const Vector& v)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isIn(v) && mm->isHighlited()) {
      ostringstream str;
      str << mm->getId() << ' ' << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
      return;
    }
    mm=mm->next();
  }

  Tcl_AppendResult(interp, "0", NULL);
}

void Base::getMarkerHighlitedNumberCmd()
{
  int count=0;
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isHighlited())
      count++;
    mm=mm->next();
  }

  printInteger(count);
}

void Base::getMarkerShowCmd()
{
  if (showMarkers)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::getMarkerShowTextCmd()
{
  if (showMarkersText)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::getMarkerCentroidAutoCmd()
{
  if (centroidAuto)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::getMarkerCentroidRadiusCmd()
{
  ostringstream str;
  str << centroidRadius << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getMarkerCentroidIterationCmd()
{
  ostringstream str;
  str << centroidIteration << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

// backup compatibility
void Base::getMarkerCentroidOptionCmd()
{
  ostringstream str;
  str << centroidIteration << centroidRadius << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getMarkerTagCmd(const char* tag)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->hasTag(tag)) {
      ostringstream str;
      str << mm->getId() << ' ' << ends;
      Tcl_AppendResult(interp, str.str().c_str(), NULL);
    }
    mm=mm->next();
  }
}

void Base::getMarkerTagCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      const char* r = mm->getTag();
      while (r) {
	Tcl_AppendElement(interp, r);
	r = mm->getNextTag();
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerTagCmd(int id, int num)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Tcl_AppendResult(interp,  mm->getTag(num), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerTagDefaultNameCmd()
{
  int cnt = 1;

 again:
  ostringstream str;
  str << "Group " << cnt << ends;
  Marker* mm = markers->head();
  while (mm) {
    if (mm->hasTag(str.str().c_str())) {
      cnt++;
      goto again;
    }
    mm=mm->next();
  }

  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::getMarkerTagNumberCmd(const char* tag)
{
  // return number of markers with tag
  int count=0;
  Marker* mm=markers->head();
  while (mm) {
    if (mm->hasTag(tag))
      count++;
    mm=mm->next();
  }

  printInteger(count);
}

void Base::getMarkerTagsCmd()
{
  // return all tags
  List<Tag> tags;

  // loop thru all markers
  Marker* mm=markers->head();
  while (mm) {

    // loop thru all tags in markers
    const char* t = mm->getTag();
    while (t) {
      // loop thru our current list
      int found = 0;
      Tag* tt = tags.head();
      while (tt) {
	if (!strcmp(tt->tag(), t)) {
	  found =1;
	  break;
	}
	tt = tt->next();
      }
      // didn't find it, add it to the list
      if (!found) {
	tags.append(new Tag(t));
      }

      t=mm->getNextTag();
    }
    mm=mm->next();
  }

  // now sort

  // ok, dump the tags
  Tag* tt = tags.head();
  while (tt) {
    Tcl_AppendElement(interp, tt->tag());
    tt=tt->next();
  }
}

void Base::getMarkerTextCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Tcl_AppendResult(interp, mm->getText(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerTextRotateCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (((Text*)mm)->getRotate())
	Tcl_AppendResult(interp, "1", NULL);
      else
	Tcl_AppendResult(interp, "0", NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerTypeCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Tcl_AppendResult(interp, mm->getType(), NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerVectorCmd(int id, Coord::CoordSystem sys,
			      Coord::SkyFrame sky, Coord::SkyFormat format)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Vector p1 = ((Line*)mm)->getP1();
      Vector cc = mm->getCenter();
      printFromRef(findFits(sys,cc), p1, sys, sky, format);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerVectorArrowCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (((Vect*)mm)->getArrow())
	Tcl_AppendResult(interp, "1", NULL);
      else
	Tcl_AppendResult(interp, "0", NULL);
      return;
    }
    mm=mm->next();
  }
}

void Base::getMarkerVectorLengthCmd(int id, Coord::CoordSystem sys,
				    Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      Vector p1 = ((Vect*)mm)->getP1();
      Vector p2 = ((Vect*)mm)->getP2();
      Vector cc = mm->getCenter();
      FitsImage* ptr = findFits(sys,cc);
      printDistFromRef(ptr,p2,p1,sys,dist);
      return;
    }
    mm=mm->next();
  }
}

void Base::hasMarkerHighlitedCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isHighlited()) {
      Tcl_AppendResult(interp, "1", NULL);
      return;
    }
    mm=mm->next();
  }

  Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasMarkerPasteCmd()
{
  if (!pasteMarkers->isEmpty())
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasMarkerSelectedCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      Tcl_AppendResult(interp, "1", NULL);
      return;
    }
    mm=mm->next();
  }

  Tcl_AppendResult(interp, "0", NULL);
}

void Base::hasMarkerUndoCmd()
{
  if (!undoMarkers->isEmpty()) 
    switch (undoMarkerType) {
    case MOVE:
      Tcl_AppendResult(interp, "move", NULL);
      return;
    case EDIT:
      Tcl_AppendResult(interp, "edit", NULL);
      return;
    case DELETE:
      Tcl_AppendResult(interp, "delete", NULL);
      return;
    default:
      return;
    }
}

void Base::markerLayerCmd(MarkerLayer layer) {
  switch (layer) {
  case USER:
    markers = &userMarkers;
    undoMarkers = &undoUserMarkers;
    pasteMarkers = &pasteUserMarkers;
    break;
  case CATALOG:
    markers = &catalogMarkers;
    undoMarkers = &undoCatalogMarkers;
    pasteMarkers = &pasteCatalogMarkers;
    break;
  case FOOTPRINT:
    markers = &footprintMarkers;
    undoMarkers = &undoFootprintMarkers;
    pasteMarkers = &pasteFootprintMarkers;
    break;
  default:
    // na
    break;
  }
}

void Base::markerAnalysisCmd(int id, Marker::AnalysisTask aa, int which)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->analysis(aa,which);
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerAngleCmd(int id, double angle)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canRotate()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	mm->setAngle(angle);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerAngleCmd(int id, double angle, Coord::CoordSystem sys, 
			  Coord::SkyFrame sky)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canRotate()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	mm->setAngle(mapAngleToRef(angle,sys,sky));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerAnnulusCreateRadiusCmd(int id, const Vector& vv)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	printInteger(((Annulus*)mm)->addAnnuli(mapToRef(vv,Coord::CANVAS)));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerAnnulusDeleteRadiusCmd(int id, int h)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Annulus*)mm)->deleteAnnuli(h);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::markerAnnulusRadiusCmd(int id, double inner, double outer,
				  int num, Coord::CoordSystem sys,
				  Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	double r1 = ptr->mapLenToRef(inner, sys, dist);
	double r2 = ptr->mapLenToRef(outer, sys, dist);
	((Annulus*)mm)->setAnnuli(Vector(r1,r1),Vector(r2,r2),num);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerAnnulusRadiusCmd(int id, const char* lev, 
				  Coord::CoordSystem sys, Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());

	int cnt = 0;
	Vector radii[MAXANNULI];
	string x(lev);
	istringstream str(x);
	while ((cnt<MAXANNULI) && (str >> radii[cnt][0])) {
	  radii[cnt][1] = radii[cnt][0];
	  ++cnt;
	}	

	FitsImage* ptr = findFits(sys,mm->getCenter());
	for (int i=0; i<cnt; i++)
	  radii[i] = ptr->mapLenToRef(radii[i], sys, dist);

	((Annulus*)mm)->setAnnuli(radii,cnt);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerBackCmd()
{
  Marker* mm = markers->tail();
  while (mm) {
    if (mm->isSelected()) {
      Marker* prev = markers->extractPrev(mm);
      markers->append(mm);
      update(PIXMAP, mm->getAllBBox());
      mm = prev;
    }
    else
      mm=mm->previous();
  }
}

void Base::markerBackCmd(const char* tag)
{
  Marker* mm = markers->tail();
  while (mm) {
    if (mm->hasTag(tag)) {
      Marker* prev = markers->extractPrev(mm);
      markers->append(mm);
      update(PIXMAP, mm->getAllBBox());
      mm = prev;
    }
    else
      mm=mm->previous();
  }
}

void Base::markerBackCmd(int id)
{
  Marker* mm = markers->tail();
  while (mm) {
    if (mm->getId() == id) {
      markers->extractPrev(mm);
      markers->append(mm);
      update(PIXMAP, mm->getAllBBox());
      return;
    }
    else
      mm=mm->previous();
  }
}

void Base::markerBoxFillCmd(int id, int ff)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	((Box*)(mm))->fill(ff);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerBoxAnnulusRadiusCmd(int id, const Vector& inner,
				     const Vector& outer, int num,
				     Coord::CoordSystem sys,
				     Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	Vector s1 = ptr->mapLenToRef(inner, sys, dist);
	Vector s2 = ptr->mapLenToRef(outer, sys, dist);
	((BoxAnnulus*)(mm))->setAnnuli(s1,s2,num);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerBoxAnnulusRadiusCmd(int id,const char* lev, 
				     Coord::CoordSystem sys,
				     Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());

	int cnt = 0;
	Vector size[MAXANNULI];
	string x(lev);
	istringstream str(x);
	while ((cnt<MAXANNULI) && (str >> size[cnt][0]))
	  str >> size[cnt++][1];
	
	// verify proper ratios
	for (int i=0; i<cnt; i++)
	  size[i][1] = size[i][0]*size[cnt-1][1]/size[cnt-1][0];

	// map to ref coord sys
	FitsImage* ptr = findFits(sys,mm->getCenter());
	for (int i=0; i<cnt; i++)
	  size[i] = ptr->mapLenToRef(size[i], sys, dist);

	((BoxAnnulus*)mm)->setAnnuli(size,cnt);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerBoxAnnulusCreateRadiusCmd(int id, const Vector& vv)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	printInteger(((BoxAnnulus*)mm)->addAnnuli(mapToRef(vv,Coord::CANVAS)));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerBoxAnnulusDeleteRadiusCmd(int id, int h)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((BoxAnnulus*)mm)->deleteAnnuli(h);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::markerBoxRadiusCmd(int id, const Vector& size, 
			      Coord::CoordSystem sys, Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	((Box*)(mm))->setAnnuli(ptr->mapLenToRef(size, sys, dist));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerBpandaCreateAnglesCmd(int id, const Vector& vv)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	printInteger(((Bpanda*)mm)->addAngles(mapToRef(vv,Coord::CANVAS)));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerBpandaCreateRadiusCmd(int id, const Vector& vv)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	printInteger(((Bpanda*)mm)->addAnnuli(mapToRef(vv,Coord::CANVAS)));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerBpandaDeleteCmd(int id, int h)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Bpanda*)mm)->deleteAnglesAnnuli(h);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::markerBpandaEditCmd(int id, 
			       double a1, double a2, int an, 
			       const Vector& r1, const Vector& r2, int rn)

{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Bpanda*)mm)->setAnglesAnnuli(a1,a2,an,r1,r2,rn);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerBpandaEditCmd(int id, 
			       double a1, double a2, int an, 
			       const Vector& r1, const Vector& r2, int rn,
			       Coord::CoordSystem sys, Coord::SkyFrame sky)

{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Bpanda*)mm)->setAnglesAnnuli(mapAngleToRef(a1,sys,sky),
				       mapAngleToRef(a2,sys,sky),an,r1,r2,rn);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerBpandaEditCmd(int id, 
			       const char* a, const char* r,
			       Coord::CoordSystem sys, Coord::SkyFrame sky, 
			       Coord::CoordSystem rsys, Coord::DistFormat rdist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());

	int acnt = 0;
	double angles[MAXANGLES];
	{
	  string x(a);
	  istringstream astr(x);
	  while ((acnt<MAXANGLES) && (astr >> angles[acnt]))
	    ++acnt;
	}	
	for (int i=0; i<acnt; i++)
	  angles[i] = mapAngleToRef(zeroTWOPI(degToRad(angles[i])),sys,sky);

	int rcnt = 0;
	Vector radii[MAXANNULI];
	{
	  string x(r);
	  istringstream rstr(x);
	  while ((rcnt<MAXANNULI) && (rstr >> radii[rcnt][0]))
	    rstr >> radii[rcnt++][1];
	}	
	// verify proper ratios
	for (int i=0; i<rcnt; i++)
	  radii[i][1] = radii[i][0]*radii[rcnt-1][1]/radii[rcnt-1][0];

	// map to ref coord sys
	FitsImage* ptr = findFits(sys,mm->getCenter());
	for (int i=0; i<rcnt; i++)
	  radii[i] = ptr->mapLenToRef(radii[i], rsys, rdist);

	((Bpanda*)mm)->setAnglesAnnuli(angles,acnt,radii,rcnt);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCallBackCmd(int id, CallBack::Type cb, const char* p, 
			     const char* a)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      result = mm->addCallBack(cb, p, a);
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCentroidCmd()
{
  undoMarkers->deleteAll();
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected() && mm->canMove()) {
      undoMarkers->append(mm->dup());
      undoMarkerType = MOVE;

      update(PIXMAP, mm->getAllBBox());
      mm->centroid();
      update(PIXMAP, mm->getAllBBox());
    }
    mm=mm->next();
  }
}

void Base::markerCentroidCmd(const char* tag)
{
  undoMarkers->deleteAll();
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canMove() && mm->hasTag(tag)) {
      undoMarkers->append(mm->dup());
      undoMarkerType = MOVE;

      update(PIXMAP, mm->getAllBBox());
      mm->centroid();
      update(PIXMAP, mm->getAllBBox());
    }
    mm=mm->next();
  }
}

void Base::markerCentroidCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canMove()) {
	markerUndo(mm, MOVE);

	update(PIXMAP, mm->getAllBBox());
	mm->centroid();
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::markerCentroidAutoCmd(int which)
{
  centroidAuto = which;
}

void Base::markerCentroidRadiusCmd(float rad)
{
  centroidRadius = rad;
}

void Base::markerCentroidIterationCmd(int iter)
{
  centroidIteration = iter;
}

void Base::markerCircleFillCmd(int id, int ff)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	((Circle*)(mm))->fill(ff);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCircleRadiusCmd(int id, double radius, Coord::CoordSystem sys,
				 Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	double r = ptr->mapLenToRef(radius, sys, dist);
	((Circle*)mm)->setAnnuli(Vector(r,r));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerColorCmd(const char* clr)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      mm->setColor(clr);
      update(PIXMAP, mm->getAllBBox());
    }
    mm=mm->next();
  }
}

void Base::markerColorCmd(const char* tag, const char* clr)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->hasTag(tag)) {
      mm->setColor(clr);
      update(PIXMAP, mm->getAllBBox());
    }
    mm=mm->next();
  }
}

void Base::markerColorCmd(int id, const char* clr)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->setColor(clr);
      update(PIXMAP, mm->getAllBBox());
      return;
    }
    mm=mm->next();
  }
}

void Base::markerCommandCmd(MarkerFormat fm, const char* ccmd)
{
  // only make command string as long as needed
  // or the rest will be processed as garbage
  int len = strlen(ccmd)+2;
  char* buf = new char[len];
  memcpy(buf, ccmd, len);

  // add terminator to make parser happy
  buf[len-2] = '\n';
  buf[len-1] = '\0';

  string x(buf);
  istringstream istr(x);
  parseMarker(fm, istr);
  delete [] buf;
}

void Base::markerCommandVarCmd(MarkerFormat fm, const char* var)
{
  const char* ccmd = Tcl_GetVar(interp, var, TCL_GLOBAL_ONLY|TCL_LEAVE_ERR_MSG);
  if (!ccmd) {
    result = TCL_ERROR;
    return;
  }

  // only make command string as long as needed
  // or the rest will be processed as garbage
  int len = strlen(ccmd)+2;
  char* buf = new char[len];
  memcpy(buf, ccmd, len);

  // add terminator to make parser happy
  buf[len-2] = '\n';
  buf[len-1] = '\0';

  string x(buf);
  istringstream istr(x);
  parseMarker(fm, istr);
  delete [] buf;
}

void Base::markerCompassArrowCmd(int id, int n, int e)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	((Compass*)(mm))->setArrows(n, e);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCompassLabelCmd(int id, const char* n, const char* e)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Compass*)(mm))->setLabels(n, e);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCompassRadiusCmd(int id, double r, Coord::CoordSystem sys, 
				  Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	double rr = ptr->mapLenToRef(r, sys, dist);
	((Compass*)mm)->setRadius(rr);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCompassSystemCmd(int id, Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      // it may shrink
      update(PIXMAP, mm->getAllBBox());
      ((Compass*)(mm))->setCoordSystem(sys, sky);
      update(PIXMAP, mm->getAllBBox());
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCompositeCmd(int id, int gl)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	((Composite*)(mm))->setGlobal(gl);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCompositeDeleteCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected() && !strncmp(mm->getType(),"composite",9)) {

      Marker* nn = ((Composite*)mm)->extract();
      while (nn) {
	markers->append(nn);
	nn = ((Composite*)mm)->extract();
      }
      Marker* next = markers->extractNext(mm);
      delete mm;
      mm = next;

      update(PIXMAP);
    }
    else
      mm=mm->next();
  }
}

void Base::markerCopyCmd()
{
  undoMarkers->deleteAll();
  pasteMarkers->deleteAll();
  Marker* mm = markers->head();
  while (mm) {
    if (mm->isSelected())
      pasteMarkers->append(mm->dup());
    mm=mm->next();
  }
}

void Base::markerCopyCmd(const char* tag)
{
  undoMarkers->deleteAll();
  pasteMarkers->deleteAll();
  Marker* mm = markers->head();
  while (mm) {
    if (mm->hasTag(tag))
      pasteMarkers->append(mm->dup());
    mm=mm->next();
  }
}

void Base::markerCpandaCreateAnglesCmd(int id, const Vector& vv)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	printInteger(((Cpanda*)mm)->addAngles(mapToRef(vv,Coord::CANVAS)));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCpandaCreateRadiusCmd(int id, const Vector& vv)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	printInteger(((Cpanda*)mm)->addAnnuli(mapToRef(vv,Coord::CANVAS)));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCpandaDeleteCmd(int id, int h)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Cpanda*)mm)->deleteAnglesAnnuli(h);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::markerCpandaEditCmd(int id, double a1, double a2, int an, 
			       double r1, double r2, int rn)

{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Cpanda*)mm)->setAnglesAnnuli(a1,a2,an,Vector(r1,r1),Vector(r2,r2),rn);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCpandaEditCmd(int id, double a1, double a2, int an, 
			       double r1, double r2, int rn, 
			       Coord::CoordSystem sys, Coord::SkyFrame sky)

{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());

	((Cpanda*)mm)->setAnglesAnnuli(mapAngleToRef(a1,sys,sky),
				      mapAngleToRef(a2,sys,sky),
				      an,
				      Vector(r1,r1),Vector(r2,r2),rn);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCpandaEditCmd(int id, const char* a, const char* r,
			       Coord::CoordSystem sys, Coord::SkyFrame sky, 
			       Coord::CoordSystem rsys, Coord::DistFormat rdist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());

	int acnt = 0;
	double angles[MAXANGLES];
	{
	  string x(a);
	  istringstream astr(x);
	  while ((acnt<MAXANGLES) && (astr >> angles[acnt]))
	    ++acnt;
	}	
	{
	  for (int i=0; i<acnt; i++)
	    angles[i] = mapAngleToRef(zeroTWOPI(degToRad(angles[i])),sys,sky);
	}
	int rcnt = 0;
	Vector radii[MAXANNULI];
	{
	  string x(r);
	  istringstream rstr(x);
	  while ((rcnt<MAXANNULI) && (rstr >> radii[rcnt][0])) {
	    radii[rcnt][1] = radii[rcnt][0];
	    ++rcnt;
	  }
	}	
	{
	  FitsImage* ptr = findFits(sys,mm->getCenter());
	  for (int i=0; i<rcnt; i++)
	    radii[i] = ptr->mapLenToRef(radii[i], rsys, rdist);
	}

	((Cpanda*)mm)->setAnglesAnnuli(angles,acnt,radii,rcnt);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerCutCmd()
{
  undoMarkers->deleteAll();
  pasteMarkers->deleteAll();
  Marker* mm = markers->head();
  while (mm) {
    if (mm->isSelected() && mm->canDelete()) {
      Marker* next = markers->extractNext(mm);
      update(PIXMAP);
      pasteMarkers->append(mm);
      mm->doCallBack(CallBack::DELETECB);
      mm->disableCB();
      mm = next;
    }
    else
      mm=mm->next();
  }
}

void Base::markerCutCmd(const char* tag)
{
  undoMarkers->deleteAll();
  pasteMarkers->deleteAll();
  Marker* mm = markers->head();
  while (mm) {
    if (mm->canDelete() && mm->hasTag(tag)) {
      Marker* next = markers->extractNext(mm);
      update(PIXMAP);
      pasteMarkers->append(mm);
      mm->doCallBack(CallBack::DELETECB);
      mm->disableCB();
      mm = next;
    }
    else
      mm=mm->next();
  }
}

void Base::markerDeleteCallBackCmd(int id, CallBack::Type cb, 
				   const char* p)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      result = mm->deleteCallBack(cb, p);
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerDeleteCmd(const char* tag)
{
  undoMarkers->deleteAll();
  Marker* mm = markers->head();
  while (mm) {
    if (mm->canDelete() && mm->hasTag(tag)) {
      Marker* next = markers->extractNext(mm);
      update(PIXMAP);

      mm->doCallBack(CallBack::DELETECB);
      mm->deleteCBs();
      undoMarkers->append(mm);
      undoMarkerType = DELETE;

      mm = next;
    }
    else
      mm=mm->next();
  }
}

void Base::markerDeleteCmd(int id)
{
  undoMarkers->deleteAll();
  Marker* mm = markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canDelete()) {
	markers->extractNext(mm);
	update(PIXMAP);

	mm->doCallBack(CallBack::DELETECB);
	mm->deleteCBs();
	undoMarkers->append(mm);
	undoMarkerType = DELETE;
      }
      return;
    }
    else
      mm=mm->next();
  }
}

void Base::markerDeleteAllCmd(int select)
{
  undoMarkers->deleteAll();
  Marker* mm = markers->head();
  while (mm) {
    if ((mm->isSelected() || !select) && mm->canDelete()) {
      Marker* next = markers->extractNext(mm);
      update(PIXMAP);

      mm->doCallBack(CallBack::DELETECB);
      mm->deleteCBs();
      undoMarkers->append(mm);
      undoMarkerType = DELETE;

      mm = next;
    }
    else
      mm=mm->next();
  }
}

void Base::markerDeleteLastCmd()
{
  undoMarkers->deleteAll();
  Marker* mm=markers->tail();
  if (mm && mm->canDelete()) {
    markers->extractNext(mm);
    update(PIXMAP);

    mm->doCallBack(CallBack::DELETECB);
    mm->deleteCBs();
    undoMarkers->append(mm);
    undoMarkerType = DELETE;

    return;
  }
}

void Base::markerDeleteTagCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canDelete())
	mm->deleteTags();
      return;
    }
    mm=mm->next();
  }
}

void Base::markerDeleteTagCmd(int id, const char* tag)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canDelete()) 
	mm->deleteTag(tag);
      return;
    }
    mm=mm->next();
  }
}

void Base::markerDeleteTagCmd(int id, int which)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canDelete())
	mm->deleteTag(which);
      return;
    }
    mm=mm->next();
  }
}

void Base::markerEditBeginCmd(int id, int hh)
{
  // remember which marker is being edited
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id && mm->canEdit()) {
      markerUndo(mm, EDIT);

      editMarker = mm;
      editMarker->editBegin(hh);
      return;
    }
    mm=mm->next();
  }

  editMarker = NULL;
}

void Base::markerEditBeginCmd(const Vector& vv, int hh)
{
  // remember which marker is being edited
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected() && mm->canEdit()) {
      markerUndo(mm, EDIT);

      editMarker = mm;
      editMarker->editBegin(hh);
      return;
    }
    mm=mm->next();
  }

  editMarker = NULL;
}

void Base::markerEditMotionCmd(const Vector& vv, int hh)
{
  if (editMarker) {
    editMarker->setRenderMode(Marker::XOR);
    editMarker->edit(mapToRef(vv,Coord::CANVAS), hh);
  }

  update(PIXMAP);
}

void Base::markerEditEndCmd()
{
  if (editMarker) {
    editMarker->setRenderMode(Marker::SRC);
    editMarker->editEnd();
  }

  editMarker = NULL;
  update(PIXMAP);
}

void Base::markerEllipseFillCmd(int id, int ff)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	((Ellipse*)(mm))->fill(ff);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerEllipseRadiusCmd(int id, const Vector& radius, 
				  Coord::CoordSystem sys, Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	Vector r = ptr->mapLenToRef(radius, sys, dist);
	((Ellipse*)mm)->setAnnuli(r);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerEllipseAnnulusRadiusCmd(int id, 
					 const Vector& inner,
					 const Vector& outer, int num,
					 Coord::CoordSystem sys,
					 Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	Vector r1 = ptr->mapLenToRef(inner, sys, dist);
	Vector r2 = ptr->mapLenToRef(outer, sys, dist);
	((EllipseAnnulus*)(mm))->setAnnuli(r1,r2,num);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerEllipseAnnulusRadiusCmd(int id, 
					 const char* lev,
					 Coord::CoordSystem sys,
					 Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());

	int cnt = 0;
	Vector radii[MAXANNULI];
	string x(lev);
	istringstream str(x);
	while ((cnt<MAXANNULI) && (str >> radii[cnt][0]))
	  str >> radii[cnt++][1];
	
	// verify proper ratios
	for (int i=0; i<cnt; i++)
	  radii[i][1] = radii[i][0]*radii[cnt-1][1]/radii[cnt-1][0];

	// map to ref coord sys
	FitsImage* ptr = findFits(sys,mm->getCenter());
	for (int i=0; i<cnt; i++)
	  radii[i] = ptr->mapLenToRef(radii[i], sys, dist);

	((EllipseAnnulus*)(mm))->setAnnuli(radii,cnt);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerEllipseAnnulusCreateRadiusCmd(int id, const Vector& vv)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	printInteger(((EllipseAnnulus*)mm)->addAnnuli(mapToRef(vv,Coord::CANVAS)));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerEllipseAnnulusDeleteRadiusCmd(int id, int h)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((EllipseAnnulus*)mm)->deleteAnnuli(h);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::markerEpandaCreateAnglesCmd(int id, const Vector& vv)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	printInteger(((Epanda*)mm)->addAngles(mapToRef(vv,Coord::CANVAS)));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerEpandaCreateRadiusCmd(int id, const Vector& vv)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	printInteger(((Epanda*)mm)->addAnnuli(mapToRef(vv,Coord::CANVAS)));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerEpandaDeleteCmd(int id, int h)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Epanda*)mm)->deleteAnglesAnnuli(h);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::markerEpandaEditCmd(int id, 
			       double a1, double a2, int an, 
			       const Vector& r1, const Vector& r2, int rn)

{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Epanda*)mm)->setAnglesAnnuli(a1,a2,an,r1,r2,rn);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerEpandaEditCmd(int id, 
			       double a1, double a2, int an, 
			       const Vector& r1, const Vector& r2, int rn,
			       Coord::CoordSystem sys, Coord::SkyFrame sky)

{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Epanda*)mm)->setAnglesAnnuli(mapAngleToRef(a1,sys,sky),
				      mapAngleToRef(a2,sys,sky),an,r1,r2,rn);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerEpandaEditCmd(int id, 
			       const char* a, const char* r,
			       Coord::CoordSystem sys, Coord::SkyFrame sky, 
			       Coord::CoordSystem rsys, Coord::DistFormat rdist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());

	int acnt = 0;
	double angles[MAXANGLES];
	{
	  string x(a);
	  istringstream astr(x);
	  while ((acnt<MAXANGLES) && (astr >> angles[acnt]))
	    ++acnt;
	}	
	for (int i=0; i<acnt; i++)
	  angles[i] = mapAngleToRef(zeroTWOPI(degToRad(angles[i])),sys,sky);

	int rcnt = 0;
	Vector radii[MAXANNULI];
	{
	  string x(r);
	  istringstream rstr(x);
	  while ((rcnt<MAXANNULI) && (rstr >> radii[rcnt][0]))
	    rstr >> radii[rcnt++][1];
	}	
	// verify proper ratios
	for (int i=0; i<rcnt; i++)
	  radii[i][1] = radii[i][0]*radii[rcnt-1][1]/radii[rcnt-1][0];

	// map to ref coord sys
	FitsImage* ptr = findFits(sys,mm->getCenter());
	for (int i=0; i<rcnt; i++)
	  radii[i] = ptr->mapLenToRef(radii[i], rsys, rdist);

	((Epanda*)mm)->setAnglesAnnuli(angles,acnt,radii,rcnt);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerHighliteAllCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canHighlite()) {
      mm->highlite();
      update(PIXMAP, mm->getBBox());
    }
    mm=mm->next();
  }
}

void Base::markerHighliteCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canHighlite() && mm->getId() == id) {
      mm->highlite();
      update(PIXMAP, mm->getAllBBox());
      return;
    }
    mm=mm->next();
  }
}

void Base::markerHighliteCmd(const char* tag)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canHighlite() && mm->hasTag(tag)) {
      mm->highlite();
      update(PIXMAP, mm->getBBox());
    }
    mm=mm->next();
  }
}

void Base::markerHighliteToggleCmd(const Vector& v)
{
  // toggle the highlite of the first found
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canHighlite() && mm->isIn(v)) {
      mm->toggleHighlite();
      update(PIXMAP, mm->getBBox());
      Tcl_AppendResult(interp, "1", NULL);
      return;
    }
    mm=mm->next();
  }

  Tcl_AppendResult(interp, "0", NULL);
}

void Base::markerHighliteOnlyCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canHighlite() && mm->getId() == id) { 
      if (!mm->isHighlited()) {
	mm->highlite();
	update(PIXMAP, mm->getBBox());
      }
    }
    else {
      if (mm->isHighlited()) {
	mm->unhighlite();
	update(PIXMAP, mm->getBBox());
      }
    }
    mm=mm->next();
  }
}

void Base::markerHighliteOnlyCmd(const char* tag)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canHighlite() && mm->hasTag(tag)) {
      if (!mm->isHighlited()) {
	mm->highlite();
	update(PIXMAP, mm->getBBox());
      }
      else {
	if (mm->isHighlited()) {
	  mm->unhighlite();
	  update(PIXMAP, mm->getBBox());
	}
      }
    }
    mm=mm->next();
  }
}

void Base::markerHighliteOnlyCmd(const Vector& v)
{
  // first, check to see if we clicked on an already highlited marker
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canHighlite() && mm->isIn(v) && mm->isHighlited()) {
      Tcl_AppendResult(interp, "1", NULL);
      return;
    }
    mm=mm->next();
  }

  // ok, now highlite the first found, and unhighlite the rest
  int found = 0;

  mm=markers->head();
  while (mm) {
    if (mm->canHighlite() && mm->isIn(v) && !found) {
      if (!mm->isHighlited()) {
	mm->highlite();
	update(PIXMAP, mm->getBBox());
      }
      found = 1;
    }
    else {
      if (mm->isHighlited()) {
	mm->unhighlite();
	update(PIXMAP, mm->getBBox());
      }
    }
    mm=mm->next();
  } 

  if (found)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::markerFontCmd(const char* f)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      // things can shrink, so do before and after
      update(PIXMAP, mm->getAllBBox());
      mm->setFont(f);
      update(PIXMAP, mm->getAllBBox());
    }
    mm=mm->next();
  }
}

void Base::markerFontCmd(const char* tag, const char* f)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->hasTag(tag)) {
      // things can shrink, so do before and after
      update(PIXMAP, mm->getAllBBox());
      mm->setFont(f);
      update(PIXMAP, mm->getAllBBox());
    }
    mm=mm->next();
  }
}

void Base::markerFontCmd(int id, const char* f)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      // things can shrink, so do before and after
      update(PIXMAP, mm->getAllBBox());
      mm->setFont(f);
      update(PIXMAP, mm->getAllBBox());
      return;
    }
    mm=mm->next();
  }
}

void Base::markerFrontCmd()
{
  Marker* mm = markers->head();
  while (mm) {
    if (mm->isSelected()) {
      Marker* next = markers->extractNext(mm);
      markers->insertHead(mm);
      update(PIXMAP, mm->getAllBBox());
      mm = next;
    }
    else
      mm=mm->next();
  }
}

void Base::markerFrontCmd(const char* tag)
{
  Marker* mm = markers->head();
  while (mm) {
    if (mm->hasTag(tag)) {
      Marker* next = markers->extractNext(mm);
      markers->insertHead(mm);
      update(PIXMAP, mm->getAllBBox());
      mm = next;
    }
    else
      mm=mm->next();
  }
}

void Base::markerFrontCmd(int id)
{
  Marker* mm = markers->head();
  while (mm) {
    if (mm->getId() == id) {
      markers->extractNext(mm);
      markers->insertHead(mm);
      update(PIXMAP, mm->getAllBBox());
      return;
    }
    else
      mm=mm->next();
  }
}

void Base::markerKeyCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected())
      mm->key();
    mm=mm->next();
  }
}

void Base::markerKeyCmd(const Vector& v)
{
  // v is in canvas coords
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isIn(v))
      mm->key();
    mm=mm->next();
  }
}

void Base::markerLineCmd(int id, const Vector& p1, const Vector& p2, 
			 Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	((Line*)(mm))->setPoints(ptr->mapToRef(p1,sys,sky),
				ptr->mapToRef(p2,sys,sky));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerLineArrowCmd(int id, int p1, int p2)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	((Line*)(mm))->setArrows(p1, p2);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerLineWidthCmd(int w)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      mm->setLineWidth(w);
      update(PIXMAP, mm->getAllBBox());
    }
    mm=mm->next();
  }
}

void Base::markerLineWidthCmd(int id, int w)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->setLineWidth(w);
      update(PIXMAP, mm->getAllBBox());
      return;
    }
    mm=mm->next();
  }
}

void Base::markerListCmd(MarkerFormat type, 
			 Coord::CoordSystem sys,
			 Coord::SkyFrame sky, Coord::SkyFormat format,
			 int strip, int select, 
			 unsigned short mask, unsigned short value, 
			 List<Tag>& tags)
{
  ostringstream str;

  switch (type) {
  case DS9:
    if (!strip)
      markerListHeader(str);
    str << setseparator(',');
    break;
  case XML:
    markerListXMLHeader(str, sys, sky, format);
    break;
  case CIAO:
    str << setseparator(',');
    break;
  case SAOTNG:
    if (!strip)
      markerListSAOtngHeader(str, sys, sky, format);
    str << setseparator(',');
    break;
  case PROS:
    str << setseparator(' ');
    break;
  case SAOIMAGE:
    str << setseparator(',');
    break;
  case RAWXY:
    str << setseparator(' ');
    break;
  }

  // check for wcs
  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    break;
  default:
    if (!keyContext->fits->hasWCS(sys))
      goto done;
  }

  {
    Marker* mm = markers->head();
    int first = 1;
    while (mm) {
      Tag* t;

      // selected
      if (select) {
	if (!mm->isSelected())
	  goto next;
      }

      // properties
      if (mask) {
	if (!((mm->getProperty() & mask)  == value))
	  goto next;
      }

      // tags
      if ((t=tags.head())) {
	while (t) {
	  if (!mm->hasTag(t->tag()))
	    goto next;
	  t=t->next();
	}
      }

      // ok, its passed the tests!
      switch (type) {
      case DS9:
	// only do this once
	if (first) {
	  first =0;
	  coord.listCoordSystem(str, sys, sky, keyContext->fits);
	  str << (strip ? ';' : '\n');
	}
	mm->list(str, sys, sky, format, 0, strip);
	break;
      case XML:
	mm->listXML(str, sys, sky, format);
	break;
      case CIAO:
	mm->listCiao(str, sys, strip);
	break;
      case SAOTNG:
	mm->listSAOtng(str, sys, sky, format, strip);
	break;
      case PROS:
	mm->listPros(str, sys, sky, format, strip);
	break;
      case SAOIMAGE:
	mm->listSAOimage(str, strip);
	break;
      case RAWXY:
	mm->listXY(str, sys, sky, format, strip);
	break;
      }

    next:
      mm=mm->next();
    }
  }

 done:
  switch (type) {
  case DS9:
    break;
  case XML:
    markerListXMLFooter(str);
    break;
  case CIAO:
    break;
  case SAOTNG:
    break;
  case PROS:
    break;
  case SAOIMAGE:
    break;
  case RAWXY:
    break;
  }

  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::markerLoadCmd(MarkerFormat fm, const char* fn,
			 int use, const char* color,
			 Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  useMarkerColor_ = use;
  if (markerColor_)
    delete [] markerColor_;
  markerColor_ = dupstr(color);
  xySystem_ = sys;
  xySky_ = sky;

  ifstream str(fn);
  if (!str) {
    result = TCL_ERROR;
    return;
  }  
  parseMarker(fm, str);
}

void Base::markerLoadCmd(MarkerFormat fm, int fd, 
			 int use, const char* color,
			 Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  useMarkerColor_ = use;
  if (markerColor_)
    delete markerColor_;
  markerColor_ = dupstr(color);
  xySystem_ = sys;
  xySky_ = sky;
  
  boost::fdistream str(fd);
  if (!str) {
    result = TCL_ERROR;
    return;
  }  
  parseMarker(fm, str);
}

void Base::markerLoadFitsCmd(const char* fn, const char* color)
{
  int dash[] = {8,3};
  int width =1;
  const char* font = "helvetica 10 normal roman";

  if (!keyContext->fits)
    return;

  // verify that we have an ext specified
  if (fn && (fn[strlen(fn)-1] != ']')) {
    result = TCL_ERROR;
    return;
  }

  // do we have a WCS?
  FitsImage* mkfits = NULL;
  {
    mkfits = new FitsImageFitsMMap(currentContext, interp, fn, 1);
    if (!mkfits || !mkfits->isValid() || !mkfits->isBinTable()) {
      if (mkfits)
	delete mkfits;
      result = TCL_ERROR;
      return;
    }
  }

  // recenter
  if (keyContext->fits) {
    FitsImage* ptr = keyContext->fits;
    mkfits->nextBin(ptr->getHistCursor());
  }

  FitsFile* mk = mkfits->fitsFile();
  FitsHead* mkh = mk->head();
  FitsBinTableHDU* mkhdu = (FitsBinTableHDU*)mkh->hdu();

  // determine x and y column names
  // if image, hard code 'x' and 'y'
  // however, if table, find out the columns used to bin
  FitsBinColumnB* x;
  FitsBinColumnB* y;
  if (keyContext->fits) {
    FitsImage* ptr = keyContext->fits;
    if (ptr->isHist()) {
      x = (FitsBinColumnB*)mkhdu->find(ptr->getHistX());
      y = (FitsBinColumnB*)mkhdu->find(ptr->getHistY());
    }
    else {
      x = (FitsBinColumnB*)mkhdu->find("x");
      y = (FitsBinColumnB*)mkhdu->find("y");
    }
  }
  else {
    x = (FitsBinColumnB*)mkhdu->find("x");
    y = (FitsBinColumnB*)mkhdu->find("y");
  }

  FitsBinColumn* shape = (FitsBinColumn*)mkhdu->find("shape");
  FitsBinColumnB* r = (FitsBinColumnB*)mkhdu->find("r");
  FitsBinColumnB* ang = (FitsBinColumnB*)mkhdu->find("rotang");
  
  // manatory columns x and y
  if (!x || !y) {
    if (mkfits)
      delete mkfits;
    result = TCL_ERROR;
    return;
  }

  // and width should be the same
  if (((FitsBinColumn*)x)->repeat() != ((FitsBinColumn*)y)->repeat()) {
    if (mkfits)
      delete mkfits;
    result = TCL_ERROR;
    return;
  }
  int repeat = x->repeat();

  char* ptr = (char*)mk->data();
  int rows = mkhdu->rows();
  int rowlen = mkhdu->width();

  char text[] = "";
  List<Tag> taglist;
  List<CallBack> cblist;

  for (int i=0; i<rows; i++, ptr+=rowlen) {
    char* s1;
    if (shape)
      s1 = toUpper(shape->str(ptr));
    else {
      s1 = new char[7];
      strcpy(s1,"POINT ");
    }

    // look for '!', which sets include/exclude
    char* s2 = s1;
    unsigned short props = Marker::SELECT | Marker::HIGHLITE | Marker::EDIT |
      Marker::MOVE | Marker::ROTATE | Marker::DELETE | Marker::SOURCE;
    if (s2[0]=='!')
      s2++;
    else
      props |= Marker::INCLUDE;

    Vector center(x->value(ptr,0),y->value(ptr,0));

    if (!strncmp(s2, "CIRCLE", 6) && r) {
      Vector rr(r->value(ptr),0);
      createCircleCmd(keyContext->fits->mapToRef(center, Coord::PHYSICAL),
		      keyContext->fits->mapLenToRef(rr[0], Coord::PHYSICAL), 0,
		      color, dash, width, font, text, props, NULL, taglist,cblist);

    }
    else if (!strncmp(s2, "ANNULU", 6) && r) {
      Vector rr0(r->value(ptr,0),0);
      Vector rr1(r->value(ptr,1),0);
      createAnnulusCmd(keyContext->fits->mapToRef(center ,Coord::PHYSICAL),
		       keyContext->fits->mapLenToRef(rr0[0], Coord::PHYSICAL),
		       keyContext->fits->mapLenToRef(rr1[0], Coord::PHYSICAL), 
		       1,
		       color, dash, width, font, text, props, NULL, taglist,cblist);

    }
    else if (!strncmp(s2, "BOX   ", 6) && r && ang) {
      // with angle
      Vector rr(r->value(ptr,0),r->value(ptr,1));
      createBoxCmd(keyContext->fits->mapToRef(center, Coord::PHYSICAL),
		   keyContext->fits->mapLenToRef(rr, Coord::PHYSICAL), 
		   zeroTWOPI(degToRad(ang->value(ptr))), 0,
		   color, dash, width, font, text, props, NULL, taglist,cblist);

    }
    else if (!strncmp(s2, "BOX   ", 6) && r) {
      // no angle
      Vector rr(r->value(ptr,0),r->value(ptr,1));
      createBoxCmd(keyContext->fits->mapToRef(center, Coord::PHYSICAL),
		   keyContext->fits->mapLenToRef(rr, Coord::PHYSICAL), 
		   0, 0,
		   color, dash, width, font, text, props, NULL, taglist,cblist);

    }
    else if (!strncmp(s2, "ROTBOX", 6) && r && ang) {
      Vector rr(r->value(ptr,0),r->value(ptr,1));
      createBoxCmd(keyContext->fits->mapToRef(center, Coord::PHYSICAL),
		   keyContext->fits->mapLenToRef(rr, Coord::PHYSICAL), 
		   zeroTWOPI(degToRad(ang->value(ptr))), 0,
		   color, dash, width, font, text, props, NULL, taglist,cblist);
    }
    else if (!strncmp(s2, "RECTAN", 6)) {
      Vector v1(center);
      Vector v2(x->value(ptr,1), y->value(ptr,1));

      Vector d = v2-v1;
      Vector c = d/2 + v1;

      createBoxCmd(keyContext->fits->mapToRef(c,Coord::PHYSICAL), 
		   keyContext->fits->mapLenToRef(d,Coord::PHYSICAL), 
		   0, 0,
		   color, dash, width, font, text, props, NULL, taglist,cblist);
    }

    else if (!strncmp(s2, "ROTREC", 6) && ang) {
      Vector v1(center);
      Vector v2(x->value(ptr,1), y->value(ptr,1));

      Vector d = v2-v1;
      Vector c = d/2 + v1;

      createBoxCmd(keyContext->fits->mapToRef(c,Coord::PHYSICAL), 
		   keyContext->fits->mapLenToRef(d,Coord::PHYSICAL), 
		   zeroTWOPI(degToRad(ang->value(ptr))), 0,
		   color, dash, width, font, text, props, NULL, taglist,cblist);
    }

    else if (!strncmp(s2, "ELLIPSE", 7) && r && ang) {
      Vector rr(r->value(ptr,0),r->value(ptr,1));
      createEllipseCmd(keyContext->fits->mapToRef(center, Coord::PHYSICAL),
		       keyContext->fits->mapLenToRef(rr, Coord::PHYSICAL),
		       zeroTWOPI(degToRad(ang->value(ptr))), 0,
		       color, dash, width, font, text, props, NULL, taglist,cblist);

    }
    else if (!strncmp(s2,"PIE",3) && r && ang) {
      Vector rr0(r->value(ptr,0),0);
      Vector rr1(r->value(ptr,1),0);
      createCpandaCmd(keyContext->fits->mapToRef(center,Coord::PHYSICAL),
		      zeroTWOPI(degToRad(ang->value(ptr,0))),
		      zeroTWOPI(degToRad(ang->value(ptr,1))),
		      1,
		      keyContext->fits->mapLenToRef(rr0[0],Coord::PHYSICAL),
		      keyContext->fits->mapLenToRef(rr1[0],Coord::PHYSICAL),
		      1,
		      color, dash, width, font, text, props, NULL, taglist,cblist);

    }
    else if (!strncmp(s2,"ELLIPTANN",9) && r && ang) {
      Vector rr0(r->value(ptr,0),r->value(ptr,1));
      Vector rr1(r->value(ptr,2),r->value(ptr,3));
      createEpandaCmd(keyContext->fits->mapToRef(center,Coord::PHYSICAL),
		      zeroTWOPI(degToRad(ang->value(ptr,0))),
		      zeroTWOPI(degToRad(ang->value(ptr,1))),
		      1,
		      keyContext->fits->mapLenToRef(rr0,Coord::PHYSICAL),
		      keyContext->fits->mapLenToRef(rr1,Coord::PHYSICAL),
		      1,
		      0,
		      color, dash, width, font, text, props, NULL, taglist,cblist);

    }
    else if (!strncmp(s2, "POINT ", 6))
      createPointCmd(keyContext->fits->mapToRef(center,Coord::PHYSICAL),
		     Point::BOXCIRCLE, POINTSIZE, 
		     color, dash, width, font, text, props, NULL, taglist,cblist);

    else if (!strncmp(s2, "POLYGO", 6)) {
      List<Vertex> list;
      for (int ii=0; ii<repeat; ii++) {
	Vector vv(x->value(ptr,ii), y->value(ptr,ii));
	Vertex* n = new Vertex(keyContext->fits->mapToRef(vv, Coord::PHYSICAL));

	if (ii+1 < repeat) {
	  // check for endpoints matching or endpoints NULL after first
	  if ((ii>0) && (
			 (x->value(ptr,ii) == x->value(ptr,0) && 
			  y->value(ptr,ii) == y->value(ptr,0)) ||
			 (x->value(ptr,ii) == 0 && 
			  y->value(ptr,ii) == 0)))  {
	    delete n;
	    break;
	  }
	  list.append(n);
	}
	else {
	  // check for last point equals first point
	  if (x->value(ptr,ii) != x->value(ptr,0) || 
	      y->value(ptr,ii) != y->value(ptr,0))
	    list.append(n);
	  else
	    delete n;
	}
      }

      if (!list.isEmpty())
	createPolygonCmd(list, 0, color, dash, width, font, text, props, NULL, 
			 taglist,cblist);
    }

    delete [] s1;
  }

  if (mkfits)
    delete mkfits;
}

void Base::markerMoveCmd(const Vector& v)
{
  // use matrix, not map()
  undoMarkers->deleteAll();
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected() && mm->canMove()) {
      undoMarkers->append(mm->dup());
      undoMarkerType = MOVE;

      Vector c = mm->getCenter() * refToCanvas;
      update(PIXMAP, mm->getAllBBox());
      mm->moveTo((c + v) * canvasToRef);
      update(PIXMAP, mm->getAllBBox());
    }
    mm=mm->next();
  }
}

void Base::markerMoveCmd(const char* tag, const Vector& v)
{
  // use matrix, not map()
  undoMarkers->deleteAll();
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canMove() && mm->hasTag(tag)) {
      undoMarkers->append(mm->dup());
      undoMarkerType = MOVE;

      Vector c = mm->getCenter() * refToCanvas;
      update(PIXMAP, mm->getAllBBox());
      mm->moveTo((c + v) * canvasToRef);
      update(PIXMAP, mm->getAllBBox());
    }
    mm=mm->next();
  }
}

void Base::markerMoveCmd(int id, const Vector& v)
{
  // use matrix, not map()
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canMove()) {
	markerUndo(mm, MOVE);

	Vector c = mm->getCenter() * refToCanvas;
	update(PIXMAP, mm->getAllBBox());
	mm->moveTo((c + v) * canvasToRef);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::markerMoveBeginCmd(const Vector& vv)
{
  markerBegin = mapToRef(vv,Coord::CANVAS);

  undoMarkers->deleteAll();
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected() && mm->canMove()) {
      undoMarkers->append(mm->dup());
      undoMarkerType = MOVE;
      mm->moveBegin();
    }
    mm=mm->next();
  }
}

void Base::markerMoveMotionCmd(const Vector& vv)
{
  Vector markerEnd = mapToRef(vv,Coord::CANVAS);
  Vector diff = markerEnd - markerBegin;
  markerBegin = markerEnd;

  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected() && mm->canMove()) {
      mm->setRenderMode(Marker::XOR);
      mm->move(diff);
    }
    mm=mm->next();
  }

  update(PIXMAP);
}

void Base::markerMoveEndCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected() && mm->canMove()) {
      mm->setRenderMode(Marker::SRC);
      mm->moveEnd();
    }
    mm=mm->next();
  }

  update(PIXMAP);
}

void Base::markerMoveToCmd(const Vector& v, Coord::CoordSystem sys,
			   Coord::SkyFrame sky)
{
  undoMarkers->deleteAll();
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected() && mm->canMove()) {
      undoMarkers->append(mm->dup());
      undoMarkerType = MOVE;

      update(PIXMAP, mm->getAllBBox());
      FitsImage* ptr = findFits(sys,mm->getCenter());
      mm->moveTo(ptr->mapToRef(v,sys,sky));
      update(PIXMAP, mm->getAllBBox());
    }
    mm=mm->next();
  }
}

void Base::markerMoveToCmd(const char* tag, const Vector& v, 
			   Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  undoMarkers->deleteAll();
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canMove() && mm->hasTag(tag)) {
      undoMarkers->append(mm->dup());
      undoMarkerType = MOVE;

      update(PIXMAP, mm->getAllBBox());
      FitsImage* ptr = findFits(sys,mm->getCenter());
      mm->moveTo(ptr->mapToRef(v,sys,sky));
      update(PIXMAP, mm->getAllBBox());
    }
    mm=mm->next();
  }
}

void Base::markerMoveToCmd(int id, const Vector& v, 
			   Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canMove()) {
	markerUndo(mm, MOVE);

	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	mm->moveTo(ptr->mapToRef(v,sys,sky));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::markerPasteCmd()
{
  // Internal copy/paste
  {
    Marker* mm=markers->head();
    while (mm) {
      mm->unselect();
      mm=mm->next();
    }
  }

  undoMarkers->deleteAll();
  Marker* mm=pasteMarkers->head();
  while (mm) {
    Marker* nn = mm->dup();
    nn->newIdentity();
    markers->append(nn);
    mm = mm->next();
  }

  update(PIXMAP);
}


void Base::markerPasteCmd(Coord::CoordSystem sys)
{
  ostringstream str;

  //  MarkerFormat type = DS9;
  markerListHeader(str);
  coord.listCoordSystem(str, sys, Coord::FK5, keyContext->fits);
  str << endl;
  str << setseparator(',');

  Marker* mm = pasteMarkers->head();
  while (mm) {
    mm->list(str, sys, Coord::FK5, Coord::DEGREES, 0, 0);
    mm=mm->next();
  }

  str << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void Base::markerPointShapeCmd(int id, Point::PointShape shape)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Point*)mm)->setShape(shape);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerPointSizeCmd(int id, int size)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Point*)mm)->setSize(size);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerPolygonFillCmd(int id, int ff)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	((Polygon*)(mm))->fill(ff);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerPolygonCreateVertexCmd(int id, int seg, const Vector& v)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	((Polygon*)(mm))->createVertex(seg, mapToRef(v,Coord::CANVAS));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerPolygonDeleteVertexCmd(int id, int h)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Polygon*)(mm))->deleteVertex(h);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::markerPolygonResetCmd(int id, const Vector& size, 
				 Coord::CoordSystem sys, Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	((Polygon*)(mm))->reset(ptr->mapLenToRef(size, sys, dist));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerProjectionCmd(int id, 
			       const Vector& p1, const Vector& p2, 
			       Coord::CoordSystem sys, Coord::SkyFrame sky,
			       double width, 
			       Coord::CoordSystem wdsys,
			       Coord::DistFormat wddist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	((Projection*)(mm))->set(ptr->mapToRef(p1,sys,sky),
				ptr->mapToRef(p2,sys,sky), 
				ptr->mapLenToRef(width, wdsys, wddist));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerPropertyCmd(unsigned short prop, int value)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected()) {
      if (prop == Marker::DASH ||
	  prop == Marker::FIXED || 
	  prop == Marker::INCLUDE || 
	  prop == Marker::SOURCE) {
	// marker will change bbox, so get before and after
	update(PIXMAP, mm->getAllBBox());
	mm->setProperty(prop, value);
	update(PIXMAP, mm->getAllBBox());
      }
      else
	mm->setProperty(prop, value);
    }
    mm=mm->next();
  }
}

void Base::markerPropertyCmd(const char* tag, unsigned short prop, int value)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->hasTag(tag)) {
      if (prop == Marker::DASH ||
	  prop == Marker::FIXED || 
	  prop == Marker::INCLUDE || 
	  prop == Marker::SOURCE) {
	// marker will change bbox, so get before and after
	update(PIXMAP, mm->getAllBBox());
	mm->setProperty(prop, value);
	update(PIXMAP, mm->getAllBBox());
      }
      else
	mm->setProperty(prop, value);
    }
    mm=mm->next();
  }
}

void Base::markerPropertyCmd(unsigned short prop, int value, const Vector& v)
{
  // v is in canvas coords

  Marker* mm=markers->head();
  while (mm) {
    if (mm->isIn(v)) {
      if (prop == Marker::DASH ||
	  prop == Marker::FIXED || 
	  prop == Marker::INCLUDE || 
	  prop == Marker::SOURCE) {
	// marker will change bbox, so get before and after
	update(PIXMAP, mm->getAllBBox());
	mm->setProperty(prop, value);
	update(PIXMAP, mm->getAllBBox());
      }
      else
	mm->setProperty(prop, value);
    }
    mm=mm->next();
  }
}

void Base::markerPropertyCmd(int id, unsigned short prop, int value)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (prop == Marker::DASH ||
	  prop == Marker::FIXED || 
	  prop == Marker::INCLUDE || 
	  prop == Marker::SOURCE) {
	// marker will change bbox, so get before and after
	update(PIXMAP, mm->getAllBBox());
	mm->setProperty(prop, value);
	update(PIXMAP, mm->getAllBBox());
      }
      else
	mm->setProperty(prop, value);

      return;
    }
    mm=mm->next();
  }
}

void Base::markerRotateBeginCmd(int id)
{
  // remember which marker is being edited
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canRotate()) {
	markerUndo(mm, EDIT);
	editMarker = mm;
	editMarker->rotateBegin();
      }
      return;
    }
    mm=mm->next();
  }

  editMarker = NULL;
}

void Base::markerRotateBeginCmd(const Vector& v)
{
  // remember which marker is being edited
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected() && mm->canRotate()) {
      markerUndo(mm, EDIT);
      editMarker = mm;
      editMarker->rotateBegin();
      return;
    }
    mm=mm->next();
  }

  editMarker = NULL;
}

void Base::markerRotateMotionCmd(const Vector& vv, int hh)
{
  if (editMarker) {
    editMarker->setRenderMode(Marker::XOR);
    editMarker->rotate(mapToRef(vv,Coord::CANVAS), hh);
  }

  update(PIXMAP);
}

void Base::markerRotateEndCmd()
{
  if (editMarker) {
    editMarker->setRenderMode(Marker::SRC);
    editMarker->rotateEnd();
  }

  editMarker = NULL;
  update(PIXMAP);
}

void Base::markerRulerPointCmd(int id, const Vector& p1, const Vector& p2,
			       Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	((Ruler*)(mm))->setPoints(ptr->mapToRef(p1,sys,sky),
				 ptr->mapToRef(p2,sys,sky));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerRulerDistSpecCmd(int id, const char* distspec)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      // it may shrink
      update(PIXMAP, mm->getAllBBox());
      ((Ruler*)(mm))->setDistSpec(distspec);
      update(PIXMAP, mm->getAllBBox());
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerRulerSystemCmd(int id, Coord::CoordSystem sys,
				Coord::SkyFrame sky,
				Coord::CoordSystem dsys, Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      // it may shrink
      update(PIXMAP, mm->getAllBBox());
      ((Ruler*)(mm))->setCoordSystem(sys, sky, dsys, dist);
      update(PIXMAP, mm->getAllBBox());
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerSaveCmd(const char* fileName, MarkerFormat type, 
			 Coord::CoordSystem sys, Coord::SkyFrame sky,
			 Coord::SkyFormat format,
			 int strip, int select)
{
  ofstream fn(fileName);
  if (!fn) {
    Tcl_AppendResult(interp, "Unable to open file ", fileName, NULL);
    result = TCL_ERROR;
    return;
  }

  switch (type) {
  case DS9:
    if (!strip)
      markerListHeader(fn);
    fn << setseparator(',');
    break;
  case XML:
    markerListXMLHeader(fn, sys, sky, format);
    break;
  case CIAO:
    fn << setseparator(',');
    break;
  case SAOTNG:
    if (!strip)
      markerListSAOtngHeader(fn, sys, sky, format);
    fn << setseparator(',');
    break;
  case SAOIMAGE:
    fn << setseparator(',');
    break;
  case PROS:
    fn << setseparator(' ');
    break;
  case RAWXY:
    fn << setseparator(' ');
    break;
  }

  // check for wcs
  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    break;
  default:
    if (!keyContext->fits->hasWCS(sys))
      goto done;
  }

  {
    Marker* mm = markers->head();
    Marker* first = mm;
    while (mm) {
      // selected
      if (select) {
	if (!mm->isSelected())
	  goto next;
      }

      switch (type) {
      case DS9:
	// only do this once
	if (mm == first) {
	  coord.listCoordSystem(fn, sys, sky, keyContext->fits);
	  fn << (strip ? ';' : '\n');
	}
	mm->list(fn, sys, sky, format, 0, strip);
	break;
      case XML:
	mm->listXML(fn, sys, sky, format);
	break;
      case CIAO:
	mm->listCiao(fn, sys, strip);
	break;
      case SAOTNG:
	mm->listSAOtng(fn, sys, sky, format, strip);
	break;
      case SAOIMAGE:
	mm->listSAOimage(fn, strip);
	break;
      case PROS:
	mm->listPros(fn, sys, sky, format, strip);
	break;
      case RAWXY:
	mm->listXY(fn, sys, sky, format, strip);
	break;
      }

    next:
      mm=mm->next();
    }
  }

 done:
  switch (type) {
  case DS9:
    break;
  case XML:
    markerListXMLFooter(fn);
    break;
  case CIAO:
    break;
  case SAOTNG:
    break;
  case SAOIMAGE:
    break;
  case PROS:
    break;
  case RAWXY:
    break;
  }
}

void Base::markerSaveTemplateCmd(const char* fileName)
{
  Marker* mm=markers->head();
  if (!keyContext->fits || !mm)
    return;

  ofstream fn(fileName);
  if (!fn) {
    Tcl_AppendResult(interp, "Unable to open file ", fileName, NULL);
    result = TCL_ERROR;
  }

  FitsImage* ptr = keyContext->fits;
  while (ptr) {
    ptr->initWCS0(mm->getCenter());
    ptr = ptr->nextMosaic();
  }

  markerListHeader(fn);
  fn << "wcs0;fk5" << endl;

  while (mm) {
    mm->list(fn, Coord::WCS0, Coord::FK5, Coord::DEGREES, 0, 0);
    mm=mm->next();
  }

  ptr = keyContext->fits;
  while (ptr) {
    ptr->resetWCS0();
    ptr = ptr->nextMosaic();
  }
}

void Base::markerSegmentCreateVertexCmd(int id, int seg, const Vector& v)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	((Segment*)(mm))->createVertex(seg, mapToRef(v,Coord::CANVAS));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerSegmentDeleteVertexCmd(int id, int h)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	((Segment*)(mm))->deleteVertex(h);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }
}

void Base::markerSegmentResetCmd(int id, const Vector& size, 
				 Coord::CoordSystem sys, Coord::DistFormat dist)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	((Segment*)(mm))->reset(ptr->mapLenToRef(size, sys, dist));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerSelectAllCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canSelect()) {
      mm->select();
      update(PIXMAP, mm->getBBox());
    }
    mm=mm->next();
  }
}

void Base::markerSelectCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canSelect() && mm->getId() == id) {
      mm->select();
      update(PIXMAP, mm->getAllBBox());
      return;
    }
    mm=mm->next();
  }
}

void Base::markerSelectCmd(const char* tag)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canSelect() && mm->hasTag(tag)) {
      mm->select();
      update(PIXMAP, mm->getBBox());
    }
    mm=mm->next();
  }
}

void Base::markerSelectToggleCmd()
{
  // toggle the select of the first found
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canSelect()) {
      mm->toggleSelect();
      update(PIXMAP, mm->getBBox());
    }
    mm=mm->next();
  }
}

void Base::markerSelectToggleCmd(const Vector& v)
{
  // toggle the select of the first found
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canSelect() && mm->isIn(v)) {
      mm->toggleSelect();
      update(PIXMAP, mm->getBBox());
      Tcl_AppendResult(interp, "1", NULL);
      return;
    }
    mm=mm->next();
  }

  Tcl_AppendResult(interp, "0", NULL);
}

void Base::markerSelectOnlyCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canSelect() && mm->getId() == id) {
      if (!mm->isSelected()) {
	mm->select();
	update(PIXMAP, mm->getBBox());
      }
    }
    else {
      if (mm->isSelected()) {
	mm->unselect();
	update(PIXMAP, mm->getBBox());
      }
    }
    mm=mm->next();
  }
}

void Base::markerSelectOnlyCmd(const char* tag)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canSelect() && mm->hasTag(tag)) {
      if (!mm->isSelected()) {
	mm->select();
	update(PIXMAP, mm->getBBox());
      }
      else {
	if (mm->isSelected()) {
	  mm->unselect();
	  update(PIXMAP, mm->getBBox());
	}
      }
    }
    mm=mm->next();
  }
}

void Base::markerSelectOnlyCmd(const Vector& v)
{
  // first, check to see if we clicked on an already selected marker
  Marker* mm=markers->head();
  while (mm) {
    if (mm->canSelect() && mm->isIn(v) && mm->isSelected()) {
      Tcl_AppendResult(interp, "1", NULL);
      return;
    }
    mm=mm->next();
  }

  // ok, now select the first found, and unselect the rest
  int found = 0;

  mm=markers->head();
  while (mm) {
    if (mm->canSelect() && mm->isIn(v) && !found) {
      if (!mm->isSelected()) {
	mm->select();
	update(PIXMAP, mm->getBBox());
      }
      found = 1;
    }
    else {
      if (mm->isSelected()) {
	mm->unselect();
	update(PIXMAP, mm->getBBox());
      }
    }
    mm=mm->next();
  } 

  if (found)
    Tcl_AppendResult(interp, "1", NULL);
  else
    Tcl_AppendResult(interp, "0", NULL);
}

void Base::markerShowCmd(int which)
{
  showMarkers = which;
  update(PIXMAP);
}

void Base::markerShowTextCmd(int which)
{
  showMarkersText = which;
  update(PIXMAP);
}

void Base::markerTagCmd(const char* tag)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->isSelected())
      mm->addTag(tag);
    mm=mm->next();
  }
}

void Base::markerTagCmd(int id, const char* tag)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->addTag(tag);
      return;
    }
    mm=mm->next();
  }
}

void Base::markerTagEditCmd(const char* from, const char* to)
{
  Marker* mm=markers->head();
  while (mm) {
    mm->editTag(from, to);
    mm=mm->next();
  }
}

void Base::markerTagDeleteCmd(const char* t)
{
  Marker* mm=markers->head();
  while (mm) {
    mm->deleteTag(t);
    mm=mm->next();
  }
}

void Base::markerTagDeleteAllCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    mm->deleteTags();
    mm=mm->next();
  }
}

void Base::markerTagUpdateCmd(const char* t)
{
  markerTagDeleteCmd(t);
  markerTagCmd(t);
}

void Base::markerTextCmd(int id, const char* text)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      // things can shrink, so do before and after
      update(PIXMAP,mm->getAllBBox());
      mm->setText(text);
      update(PIXMAP,mm->getAllBBox());
      return;
    }
    mm=mm->next();
  }
}

void Base::markerTextRotateCmd(int id, int rot)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	((Text*)(mm))->setRotate(rot);
	update(PIXMAP);
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerUndoCmd()
{
  Marker* nn=undoMarkers->head();
  while (nn) {
    Marker* next = nn->next();
    undoMarkers->extractPrev(nn);
    
    switch (undoMarkerType) {
    case NONE:
      break;
    case DELETE:
      markers->append(nn);
      nn->updateBBox();
      update(PIXMAP,nn->getAllBBox());
      break;
    case EDIT:
    case MOVE:
      {
	Marker* mm=markers->head();
	while (mm) {
	  if (mm->getId() == nn->getId()) {
	    nn->enableCB();
	    mm->updateBBox();
	    update(PIXMAP,mm->getAllBBox());

	    markers->insertNext(mm,nn);
	    markers->extractNext(mm);

	    nn->updateBBox();
	    update(PIXMAP,nn->getAllBBox());
	    switch (undoMarkerType) {
	    case EDIT:
	      nn->doCallBack(CallBack::EDITCB);
	      break;
	    case MOVE:
	      nn->doCallBack(CallBack::MOVECB);
	      break;
	    default:
	      // na
	      break;
	    }

	    mm->disableCB();
	    delete mm;
	    break;
	  }
	  mm=mm->next();
	}
      }
      break;
    }

    nn=next;
  }

  undoMarkerType = NONE;
}

void Base::markerUnhighliteAllCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    mm->unhighlite();
    update(PIXMAP, mm->getBBox());
    mm=mm->next();
  } 
}

void Base::markerUnhighliteCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->unhighlite();
      update(PIXMAP, mm->getBBox());
      return;
    }
    mm=mm->next();
  }
}

void Base::markerUnhighliteCmd(const char* tag)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->hasTag(tag)) {
      mm->unhighlite();
      update(PIXMAP, mm->getBBox());
    }
    mm=mm->next();
  }
}

void Base::markerUnselectAllCmd()
{
  Marker* mm=markers->head();
  while (mm) {
    mm->unselect();
    update(PIXMAP, mm->getBBox());
    mm=mm->next();
  } 
}

void Base::markerUnselectCmd(int id)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      mm->unselect();
      update(PIXMAP, mm->getBBox());
      return;
    }
    mm=mm->next();
  }
}

void Base::markerUnselectCmd(const char* tag)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->hasTag(tag)) {
      mm->unselect();
      update(PIXMAP, mm->getBBox());
    }
    mm=mm->next();
  }
}

void Base::markerVectorCmd(int id, const Vector& p,
			   Coord::CoordSystem sys, Coord::SkyFrame sky,
			   double mag,
			   Coord::CoordSystem dsys, Coord::DistFormat dist,
			   double ang)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	markerUndo(mm, EDIT);

	// it may shrink
	update(PIXMAP, mm->getAllBBox());
	FitsImage* ptr = findFits(sys,mm->getCenter());
	((Vect*)(mm))->setPoints(ptr->mapToRef(p,sys,sky),
				ptr->mapLenToRef(mag,dsys,dist),
				mapAngleToRef(ang,sys,sky));
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::markerVectorArrowCmd(int id, int p)
{
  Marker* mm=markers->head();
  while (mm) {
    if (mm->getId() == id) {
      if (mm->canEdit()) {
	((Vect*)(mm))->setArrow(p);
	update(PIXMAP, mm->getAllBBox());
      }
      return;
    }
    mm=mm->next();
  }

  result = TCL_ERROR;
}

void Base::regionHighliteEndCmd()
{
  doAnts = 0;

  BBox bb(antsBegin, antsEnd);
  Marker* mm=markers->head();
  while (mm) {
    if (bb.isIn(mm->getBBox())==4 && mm->canHighlite())
      mm->highlite();
    else
      mm->unhighlite();
    mm=mm->next();
  } 

  update(PIXMAP);
}

void Base::regionHighliteShiftEndCmd()
{
  doAnts = 0;

  BBox bb(antsBegin, antsEnd);
  Marker* mm=markers->head();
  while (mm) {
    if (bb.isIn(mm->getBBox())==4 && mm->canHighlite())
      mm->highlite();
    mm=mm->next();
  }

  update(PIXMAP);
}

void Base::regionSelectBeginCmd(const Vector& vv)
{
  doAnts =1;
  antsBegin = vv;
  antsEnd = vv;
}

void Base::regionSelectMotionCmd(const Vector& vv)
{
  antsEnd = vv;
  update(PIXMAP);
}

void Base::regionSelectEndCmd()
{
  doAnts = 0;

  BBox bb(antsBegin, antsEnd);
  Marker* mm=markers->head();
  while (mm) {
    if (bb.isIn(mm->getBBox())==4 && mm->canSelect())
      mm->select();
    else
      mm->unselect();
    mm=mm->next();
  } 

  update(PIXMAP);
}

void Base::regionSelectShiftEndCmd()
{
  doAnts = 0;

  BBox bb(antsBegin, antsEnd);
  Marker* mm=markers->head();
  while (mm) {
    if (bb.isIn(mm->getBBox())==4 && mm->canSelect())
      mm->select();
    mm=mm->next();
  }

  update(PIXMAP);
}

// Marker Support

void Base::markerListHeader(ostream& str)
{
  str << "# Region file format: DS9 version 4.1" << endl;
  str << "global color=green dashlist=8 3 width=1 font=\"helvetica 10 normal roman\" select=1 highlite=1 dash=0 fixed=0 edit=1 move=1 delete=1 include=1 source=1" << endl;
}

void Base::markerListSAOtngHeader(ostream& str, Coord::CoordSystem sys, 
				  Coord::SkyFrame sky, Coord::SkyFormat format)
{
  // don't output filename anymore
  //  if (keyContext->fits)
  //    str << "# filename: " << keyContext->fits->getRootFileName() << endl;

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::AMPLIFIER:
  case Coord::DETECTOR:
    str << "# format: pixels (physical)" << endl;
    break;

  default:
    str << "# format: ";
    switch (sky) {
    case Coord::FK4:
    case Coord::FK5:
    case Coord::ICRS:
    case Coord::GALACTIC:
    case Coord::ECLIPTIC:
      switch (format) {
      case Coord::DEGREES:
	str << "degrees (";
	break;
      case Coord::SEXAGESIMAL:
	str << "hms (";
	break;
      }

      switch (sky) {
      case Coord::FK4:
	str << "fk4";
	break;
      case Coord::FK5:
	str << "fk5";
	break;
      case Coord::ICRS:
	str << "icrs";
	break;
      case Coord::GALACTIC:
	str << "galactic";
	break;
      case Coord::ECLIPTIC:
	str << "ecliptic";
	break;
      }

      str << ')' << endl;
      break;
    }
  }
}

void Base::markerUndo(Marker* m, UndoMarkerType t)
{
  undoMarkers->deleteAll();
  undoMarkers->append(m->dup());
  undoMarkerType = t;
}

void Base::parseMarker(MarkerFormat fm, istream& str)
{
  switch (fm) {
  case DS9: 
    {
      mkFlexLexer* ll = new mkFlexLexer(&str);
      mkparse(this, ll);
      delete ll;

      resetCompositeMarker();
    }
    break;
  case XML:
    xmlParse(str);
    break;
  case CIAO:
    {
      ciaoFlexLexer* ll = new ciaoFlexLexer(&str);
      ciaoparse(this, ll);
      delete ll;
    }
    break;
  case PROS:
    {
      prosFlexLexer* ll = new prosFlexLexer(&str);
      prosparse(this, ll);
      delete ll;
    }
    break;
  case SAOTNG:
    {
      tngFlexLexer* ll = new tngFlexLexer(&str);
      tngparse(this, ll);
      delete ll;
    }
    break;

  case SAOIMAGE:
    {
      saoFlexLexer* ll = new saoFlexLexer(&str);
      saoparse(this, ll);
      delete ll;
    }
    break;

  case RAWXY:
    {
      xyFlexLexer* ll = new xyFlexLexer(&str);
      xyparse(this, ll);
      delete ll;
    }
    break;
  }
}

void Base::psMarkers(List<Marker>* ml, PSColorSpace mode,
		     MarkerRenderOrder order)
{
  // bbox is in canvas coords
  const BBox bb = BBox(0, 0, options->width-1, options->height-1) * 
    widgetToCanvas;

  switch (order) {
  case HEAD:
    {
      Marker* mm=ml->head();
      while (mm) {
	if (mm->isVisible(bb))
	  mm->ps(mode, showMarkersText);
	mm=mm->next();
      }
    }
    return;
  case TAIL:
    {
      Marker* mm=ml->tail();
      while (mm) {
	if (mm->isVisible(bb))
	  mm->ps(mode, showMarkersText);
	mm=mm->previous();
      }
    }
    return;
  }
}

void Base::x11MagnifierMarkers(List<Marker>* ml, const BBox& bb)
{
  // render from back to front
  // bbox is in canvas coords
  Marker* mm=ml->tail();
  while (mm) {
    if (mm->isVisible(bb))
      mm->x11(magnifierPixmap, Coord::MAGNIFIER, showMarkersText,
	      Marker::NOHANDLES);
    mm=mm->previous();
  }
}

void Base::x11Markers(List<Marker>* ml, const BBox& bb, MarkerRenderOrder order)
{
  // bbox is in canvas coords
  switch (order) {
  case HEAD:
    {
      Marker* mm=ml->head();
      while (mm) {
	if (mm->isVisible(bb))
	  mm->x11(pixmap, Coord::WIDGET, showMarkersText, Marker::HANDLES);
	mm=mm->next();
      }
    }
    return;
  case TAIL:
    {
      Marker* mm=ml->tail();
      while (mm) {
	if (mm->isVisible(bb))
	  mm->x11(pixmap, Coord::WIDGET, showMarkersText, Marker::HANDLES);
	mm=mm->previous();
      }
    }
    return;
  }
}

void Base::unselectMarkers(List<Marker>* ml)
{
  Marker* mm=ml->head();
  while (mm) {
    mm->unselect();
    mm=mm->next();
  }
}

void Base::unhighliteMarkers()
{
  Marker* mm=markers->head();
  while (mm) {
    mm->unhighlite();
    mm=mm->next();
  }
}

void Base::updateCBMarkers(List<Marker>* ml)
{
  Marker* mm=ml->head();
  while (mm) {
    mm->doCallBack(CallBack::UPDATECB);
    mm->doCallBack(CallBack::UPDATE3DCB);
    mm=mm->next();
  }
}

void Base::updateMarkers(List<Marker>* ml)
{
  Marker* mm=ml->head();
  while (mm) {
    mm->updateBBox();
    mm=mm->next();
  }
}

void Base::updateMarkerCoords(List<Marker>* ml, const Matrix& mx)
{
  Marker* mm=ml->head();
  while (mm) {
    mm->updateCoords(mx);
    mm=mm->next();
  }
}

void Base::updateMarkerCBs(List<Marker>* ml)
{
  Marker* mm=ml->head();
  while (mm) {
    mm->doCallBack(CallBack::MOVECB);
    mm->doCallBack(CallBack::EDITCB);
    mm->doCallBack(CallBack::ROTATECB);
    mm=mm->next();
  }
}

#ifdef __WIN32
void Base::win32Markers(List<Marker>* ml)
{
  // render from back to front
  // bbox is in canvas coords
  const BBox bb = BBox(0, 0, options->width-1, options->height-1) * 
    widgetToCanvas;

  Marker* mm=ml->tail();
  while (mm) {
    if (mm->isVisible(bb))
      mm->win32(showMarkersText);
    mm=mm->previous();
  }
}
#endif

