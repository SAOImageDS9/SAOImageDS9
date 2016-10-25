/*
    NB: MAKE SURE YOU EDIT THE TEMPLATE FILE!!!!
*/

#ifndef FILTER_PTYPE
#include <regions.h>
#endif

#ifndef UNUSED
#ifdef __GNUC__
#  define UNUSED(x) UNUSED_ ## x __attribute__((__unused__))
#else
#  define UNUSED(x) UNUSED_ ## x
#endif
#endif

/* panda and pie incorrectly used astronomical angles. fixed 4/2004 */
#define USE_ASTRO_ANGLE 0

/* we might want to avoid (x86) extended precision problems */
#define USE_FPU_DOUBLE 0
#if USE_FPU_DOUBLE
#include <fpu_control.h>
static fpu_control_t _cw;
#define FPU_DOUBLE {fpu_control_t _cw2; _FPU_GETCW(_cw); _cw2 = _cw & ~_FPU_EXTENDED; _cw2 |= _FPU_DOUBLE; _FPU_SETCW(_cw2);}
#define FPU_RESTORE {_FPU_SETCW(_cw);}
#else
#define FPU_DOUBLE
#define FPU_RESTORE
#endif

/* add to FilterOpen to cause this module to be loaded for dynamic linking */
static int imregno=0;
void initimregions(void)
{
  imregno++;
  return;
}

static void markx(GFilt g, int UNUSED(sno), int flag, int type, int x, int y)
{
  /* don't mark exclude regions */
  if( type == TOK_EREG )
    return;
  /* for include, we might extend the x limits */
  if( flag ){
    if( x <= g->x0s[y] )
      g->x0s[y] = max(x,g->x0);
    if( x >= g->x1s[y] )
      g->x1s[y] = min(x,g->x1);
  }
  /* for exclude, we have to look at the full line */
  else{
    g->x0s[y] = g->x0;
    g->x1s[y] = g->x1;
  }
}

static void marky(GFilt g, int sno, int flag, int type)
{
  int i;
  /* don't mark exclude regions */
  if( type == TOK_EREG )
    return;
  /* mark include shape */
  if( flag ){
    for(i=max(g->y0,g->shapes[sno].ystart);
	i<=min(g->y1,g->shapes[sno].ystop);
	i++)
      g->ybuf[i] = 1;
  }
  /* mark exclude shape */
  else{
    for(i=g->y0; i<=g->shapes[sno].ystart-1; i++)
      g->ybuf[i] = 1;
    for(i=g->shapes[sno].ystop+1; i<=g->y1; i++)
      g->ybuf[i] = 1;
  }
}

static int
imagemaskcmp(const void *s1, const void *s2)
{
  FilterMask f1 = (FilterMask)s1;
  FilterMask f2 = (FilterMask)s2;
  
  if( f1->y < f2->y ){
    return -1;
  }
  else if( f1->y > f2->y ){
    return 1;
  }
  else{
    if( f1->xstart < f2->xstart ){
      return -1;
    }
    else{
      return 1;
    }
  }
}

/* ***************************** shape support ***************************** */

static void quadeq(double a, double b, double c,
		   double *x1, double *x2, int *nr, int *nc)
{
  double dis, q;
  if( feq(a,0.0) ){
    *nc = 0;
    if( feq(b,0.0) ){
      *nr = 0; *x1 = 0.0;
    }
    else{
      *nr = 1; *x1 = -c / b;
    }
    *x2 = *x1;
  }
  else{
    dis = b*b - 4.0 * a * c;
    if( dis > 0.0 ){
      *nr = 2; *nc = 0;
      dis = sqrt(dis);
      if( b < 0.0 ) dis = -dis;
      q = -0.5 * (b + dis);
      *x1 = q/a; *x2 = c/q;
      if(*x1 > *x2){
	q = *x1; *x1 = *x2; *x2 = q;
      }
    } 
    else if( feq(dis,0.0) ){
      *nr = 1; *nc = 0; *x1 = - 0.5 * b / a; *x2 = *x1;
    }
    else{
      *nr = 0; *nc = 2; *x1 = - 0.5 * b / a; *x2 = 0.5 * sqrt(-dis) / a;
    }
  }
}

static void rgs_mark(GFilt g, Scan *scanlist,
		     int sno, int flag, int type, int xval, int yval )
{
  Scan scanmark, mark;
  /* since yval is used as an index, make sure its within limits */
  if(yval < g->y0) yval = g->y0;
  if(yval > g->y1) yval = g->y1;
  mark = (Scan)calloc(1, sizeof(ScanRec));
  mark->x = xval;
  /* sanity check */
  if( !scanlist ) return;
  /* starts are installed at back of list for given x */
  if( !scanlist[yval] || ((scanlist[yval])->x > xval) ){
    mark->next = scanlist[yval];
    scanlist[yval] = mark;
  } else {
    scanmark = scanlist[yval];
    while( scanmark->next && ((scanmark->next)->x < xval) )
      scanmark = scanmark->next;
    mark->next = scanmark->next;
    scanmark->next = mark;
  }
  markx(g, sno, flag, type, xval, yval);
}

static void rgs_segment(GFilt g, Scan *scanlist, int width, int height,
			int sno, int flag, int type,
			double x1, double y1, double x2, double y2)
{
  int ystart, ystop, yval, xval;
  double invslope, xoffset;

  ystart = PIXINCL(y1);
  if( ystart < 1 ) ystart = 1;
  /* note: PIXINCL(stop) is 1st pixel not counted */
  ystop = PIXINCL(y2) - 1;
  if( ystop > height ) ystop = height;
  /* ignore segment if there is no positive slope in integer coords */
  if( (ystart > ystop) || (ystop < 1) )
    return;
  /* use inverse slope (run/rise) to get x given y with a multiply */
  invslope = (x1 - x2) / (y1 - y2);
  xoffset = x1 + ((ystart - y1) * invslope);
  for(yval=ystart; yval<=ystop; yval++){
    xval = PIXINCL(xoffset);
    /* clip line to edges of image area (actually bend line) */
    if(xval < 1)     xval = 1;
    if(xval > width) xval = width + 1;
    rgs_mark(g, scanlist, sno, flag, type, xval, yval);
    xoffset = xoffset + invslope;
  }
}

static void _polygoni(GFilt g, int qt, int UNUSED(rno), int sno, int flag,
                      int type, double *vx, double *vy, int count)
{
  int i, j;
  double xlo, xhi;
  double ylo, yhi;

#ifdef ALREADY_DONE
  /* divide by block factor to get real endpoints */
  for(i=0; i<count; i++){
    vx[i] = (vx[i] - g->xmin)/g->block + 1.0;
    vy[i] = (vy[i] - g->ymin)/g->block + 1.0;
  }
#endif
  /* find the limits */
  xlo = vx[0];
  xhi = xlo;
  ylo = vy[0];
  yhi = ylo;
  for(i=0; i<count; i++){
    if(vx[i] > xhi) xhi = vx[i];
    if(vx[i] < xlo) xlo = vx[i];
    if(vy[i] > yhi) yhi = vy[i];
    if(vy[i] < ylo) ylo = vy[i];
  }
  if( qt && (sno > 1) ){
    g->shapes[sno].ystart = g->shapes[sno-1].ystart;
    g->shapes[sno].ystop = g->shapes[sno-1].ystop;
  }
  else{
    g->shapes[sno].ystart = max(g->y0,PIXINCL(ylo));
    g->shapes[sno].ystop = min(g->y1,PIXINCL(yhi) - 1);
  }
  g->shapes[sno].scanlist = (Scan *)calloc(g->y1+1, sizeof(Scan));
  marky(g, sno, flag, type);

  /* mark all horizontal segment crossings */
  /* start with segment between last and first point */
  j = count-1;
  for(i=0; i<count; i++){
    /* make segments always run from lower y to higher y */
    if(vy[i] > vy[j]){
      rgs_segment(g, g->shapes[sno].scanlist, g->x1, g->y1,
		  sno, flag, type, vx[j], vy[j], vx[i], vy[i]);
    }
    else{
      rgs_segment(g, g->shapes[sno].scanlist, g->x1, g->y1,
		  sno, flag, type, vx[i], vy[i], vx[j], vy[j]);
    }
    j = i;
  }
}

static int corner_vertex(int index, int width, int height,
			 double *x, double *y)
{
  switch (index) {
  case 1:
    *x = 0.0;
    *y = height + 1;
    break;
  case 2:
    *x = 0.0;
    *y = 0.0;
    break;
  case 3:
    *x = width + 1;
    *y = 0.0;
    break;
  case 4:
    *x = width + 1;
    *y = height + 1;
  default:
    break;
  }
  index = index + 1;
  if(index > 4) index = 1;
  return(index);
}

static int pie_intercept(int width, int height, double xcen, double ycen,
			 double angle, double *xcept, double *ycept)
{
  double angl, slope;	/* l: angle and slope of ray */
  angl = angle;
  /* put angles in normal range */
  while (angl < 0.0)
    angl = angl + 360.0;
  while (angl >= 360.0)
    angl = angl - 360.0;
  /* check for a horizontal angle */
#if USE_ASTRO_ANGLE
  if(fabs(angl - 90.0) < SMALL_NUMBER) {
#else
  if(fabs(angl - 180.0) < SMALL_NUMBER) {
#endif
    *xcept = 0.0;
    *ycept = ycen;
    return(2);
  }
#if USE_ASTRO_ANGLE
  if(fabs(angl - 270.0) < SMALL_NUMBER) {
#else
  if(fabs(angl - 0.0) < SMALL_NUMBER) {
#endif
    *xcept = width + 1;
    *ycept = ycen;
    return(4);
  }
#if USE_ASTRO_ANGLE
  /* convert to a Cartesian angle */
  angl = angl + 90.0;
#endif
  if(angl >= 360.0)
    angl = angl - 360.0;
  if(angl < 180.0) {
    *ycept = height + 1;
    /* rule out vertical line */
    if(fabs(angl - 90.0) < SMALL_NUMBER) {
      *xcept = xcen;
      return(1);
    }
  } else {
    *ycept = 0.0;
    /* rule out vertical line */
    if(fabs(angl - 270.0) < SMALL_NUMBER) {
      *xcept = xcen;
      return(3);
    }
  }
  /* convert to radians */
  angl = (angl / 180.0) * M_PI;
  /* calculate slope */
  slope = tan(angl);
  /* calculate intercept with designated y edge */
  *xcept = xcen + ((*ycept - ycen) / slope);
  if(*xcept < 0) {
    *ycept = (ycen - (xcen * slope));
    *xcept = 0.0;
    return(2);
  } else if(*xcept > (width + 1)) {
    *ycept = (ycen + ((width + 1 - xcen) * slope));
    *xcept = width + 1;
    return(4);
  } else {
    if(*ycept < height)
      return(3);
    else
      return(1);
  }
}

void _impiei(GFilt g, int qt, int rno, int sno, int flag, int type,
	     double UNUSED(x), double UNUSED(y),
	     double xcen, double ycen, double angle1, double angle2)
{
  int width, height;		/* l: image mask width and height */
  double sweep;			/* l: sweep between cut angles */
  double vx[7], vy[7];		/* l: arrays of vertices for polygon */
  int count;			/* l: number of polygon vertices */
  int intrcpt1, intrcpt2;	/* l: side intercepted by each cut */
  double x2, y2;		/* l: coordinates of second intercept */

  /* NB: do not use x and y variables, they have bogus values */
  /* divide by block factor to get "real" parameters */
  xcen = (xcen - g->xmin)/g->block + 1.0;
  ycen = (ycen - g->ymin)/g->block + 1.0;
  /* temps */
  width = g->x1;
  height = g->y1;
  /* start listing vertices of polygon */
  vx[0] = xcen;
  vy[0] = ycen;
  sweep = angle2 - angle1;
  /* if sweep is too small to be noticed, don't bother */
  if(fabs(sweep) < SMALL_NUMBER)
    return;
  if (sweep < 0.0) sweep = sweep + 360.0;
  intrcpt1 = pie_intercept(width, height, xcen, ycen, angle1,
			   &(vx[1]), &(vy[1]));
  intrcpt2 = pie_intercept(width, height, xcen, ycen, angle2,
			   &x2, &y2);
  count = 2;
  /* if angles intercept same side and slice is between them, no corners */
  /* else, mark corners until reaching side with second angle intercept */
  if((intrcpt1 != intrcpt2) || (sweep > 180.0)){
    do{
      intrcpt1 = corner_vertex(intrcpt1, width, height,  
			       &(vx[count]), &(vy[count]));
      count = count + 1;
    }while(intrcpt1 != intrcpt2);
  }
  vx[count] = x2;
  vy[count] = y2;
  count++;
  _polygoni(g, qt, rno, sno, flag, type, vx, vy, count);
}

/* ***************************** shapes ********************************** */

void imannulusi(GFilt g, int rno, int sno, int flag, int type,
		double x, double y,
		double xcen, double ycen, double iradius, double oradius)
{
  int yy;
  double dval;
  double xoff, yoff;
  Scan *scanlist;

  /* NB: do not use x and y variables, they have bogus values */

  if( iradius == 0 ){
    imcirclei(g, rno, sno, flag, type, x, y, xcen, ycen, oradius);
    return;
  }
  /* divide by block factor to get "real" parameters */
  xcen = (xcen - g->xmin)/g->block + 1.0;
  ycen = (ycen - g->ymin)/g->block + 1.0;
  iradius /= (double)g->block;
  oradius /= (double)g->block;
  /* set y limits */
  if( PIXSTART(ycen - oradius) < PIXSTOP(ycen + oradius) ){
    g->shapes[sno].ystart = max(g->y0,PIXSTART(ycen - oradius));
    g->shapes[sno].ystop  = min(g->y1,PIXSTOP(ycen + oradius));
  }
  else{
    g->shapes[sno].ystart = min(g->y1,PIXSTOP(ycen + oradius));
    g->shapes[sno].ystop  = max(g->y0,PIXSTART(ycen - oradius));
  }
  g->shapes[sno].scanlist = (Scan *)calloc(g->y1+1, sizeof(Scan));
  scanlist = g->shapes[sno].scanlist;
  marky(g, sno, flag, type);
  /* calculate start/stop values for each y line */
  for(yy=g->shapes[sno].ystart; yy<=g->shapes[sno].ystop; yy++){
    yoff = PIXCEN(yy) - ycen;
    if( (dval=(oradius * oradius) - (yoff * yoff)) > 0.0 ){
      xoff = sqrt(dval);
      if( PIXSTART(xcen - xoff) <= PIXSTOP(xcen + xoff)  ){
	rgs_mark(g, scanlist, sno, flag, type, PIXSTART(xcen - xoff), yy);
	rgs_mark(g, scanlist, sno, flag, type, PIXSTOP(xcen + xoff), yy);
      }
      if( (dval=(iradius * iradius) - (yoff * yoff)) > 0.0 ){
	xoff = sqrt(dval);
	if( PIXSTART(xcen - xoff) <= PIXSTOP(xcen + xoff)  ){
	  rgs_mark(g, scanlist, sno, flag, type, PIXSTART(xcen - xoff), yy);
	  rgs_mark(g, scanlist, sno, flag, type, PIXSTOP(xcen + xoff), yy);
	}
      }
    }
  }
}

int imannulus(GFilt g, int rno, int sno, int flag, int type,
	      double x, double y,
	      double xcen, double ycen, double iradius, double oradius)
{
  Scan scan;

  if( iradius == 0 ){
    return(imcircle(g, rno, sno, flag, type, x, y, xcen, ycen, oradius));
  }
  if( g->evsect ){
    if( g->usebinsiz ){
      x = (int)((x - g->tlminx)/g->binsizx + 1.0);
      y = (int)((y - g->tlminy)/g->binsizy + 1.0);
    }
    else{
      x = (int)((x - g->tlminx) + 1.0);
      y = (int)((y - g->tlminy) + 1.0);
    }
    x = (int)((x - g->xmin)/g->block + 1.0);
    y = (int)((y - g->ymin)/g->block + 1.0);
    if(y < g->y0) return 0;
    if(y > g->y1) return 0;
    if(x < g->x0) return 0;
    if(x > g->x1) return 0;
  }
  if( flag ){
    if(y < g->shapes[sno].ystart ) return 0;
    if(y > g->shapes[sno].ystop ) return 0;
  }
  scan = g->shapes[sno].scanlist[(int)y];
  if( (scan							&& 
       ((y >= g->shapes[sno].ystart) && (y <= g->shapes[sno].ystop))	&&
       (scan->next->next ?
	(((x >= scan->x) && (x <= scan->next->next->next->x))	&&
	 !((x >= scan->next->x) && (x <= scan->next->next->x))) :
	((x >= scan->x) && (x <= scan->next->x))))
      ==flag ){
    if( rno && flag ) g->rid = rno;
    return 1;
  }
  else
    return 0;
}

void imboxi(GFilt g, int rno, int sno, int flag, int type,
	    double UNUSED(x), double UNUSED(y),
	    double xcen, double ycen, double xwidth, double yheight,
	    double angle)
{
  double angl;			 /* l: Cartesian angle in radians */
  double half_width, half_height;/* l: radii (1/2 width and height) */
  double cosangl, sinangl;	 /* l: sine, cosine of the Cartesian angle */
  double hw_cos, hw_sin;	 /* l: products of half_width with sin, cos */
  double hh_cos, hh_sin;	 /* l: products of half_height with sin, cos */
  double cornerx[4], cornery[4]; /* l: arrays of x and y coords of 4 corners */

  /* NB: do not use x and y variables, they have bogus values */
  if( (xwidth == 0) && (yheight==0) ){
    return;
  }
  /* divide by block factor to get "real" parameters */
  xcen = (xcen - g->xmin)/g->block + 1.0;
  ycen = (ycen - g->ymin)/g->block + 1.0;
  xwidth /= (double)g->block;
  yheight /= (double)g->block;
#if USE_ASTRO_ANGLE
  /* convert to a Cartesian angle; save angle for use in multi or slices */
  angl = angle + 90.0;
#else
  angl = angle;
#endif
  while (angl >= 360.0) angl = angl - 360.0;
  /* convert to radians */
  angl = (angl / 180.0) * M_PI;
  sinangl = sin (angl);
  cosangl = cos (angl);
#if USE_ASTRO_ANGLE
  /* since we rotate by 90.0 degrees to get from astro angle to cartesian, */
  /* we also need to switch the width and height. we do this secretly so */
  /* that the display will turn out right, by doing it in the half terms */
  half_width = yheight / 2.0;
  half_height = xwidth / 2.0;
#else
  half_width = xwidth / 2.0;
  half_height = yheight / 2.0;
#endif
  hw_cos = half_width * cosangl;
  hw_sin = half_width * sinangl;
  hh_cos = half_height * cosangl;
  hh_sin = half_height * sinangl;
#if USE_ASTRO_ANGLE
  cornerx[0] = xcen - hw_cos - hh_sin;
  cornery[0] = ycen - hw_sin + hh_cos;
  cornerx[1] = xcen + hw_cos - hh_sin;
  cornery[1] = ycen + hw_sin + hh_cos;
  cornerx[2] = xcen + hw_cos + hh_sin;
  cornery[2] = ycen + hw_sin - hh_cos;
  cornerx[3] = xcen - hw_cos + hh_sin;
  cornery[3] = ycen - hw_sin - hh_cos;
#else
  cornerx[0] = xcen - hw_cos + hh_sin;
  cornery[0] = ycen - hh_cos - hw_sin;
  cornerx[1] = xcen - hw_cos - hh_sin;
  cornery[1] = ycen + hh_cos - hw_sin;
  cornerx[2] = xcen + hw_cos - hh_sin;
  cornery[2] = ycen + hh_cos + hw_sin;
  cornerx[3] = xcen + hw_cos + hh_sin;
  cornery[3] = ycen - hh_cos + hw_sin;
#endif
  _polygoni(g, 0, rno, sno, flag, type, cornerx, cornery, 4);
}

int imbox(GFilt g, int rno, int sno, int flag, int type,
	  double x, double y,
	  double UNUSED(xcen), double UNUSED(ycen),
	  double xwidth, double yheight,
	  double UNUSED(angle))
{
  if( (xwidth == 0) && (yheight==0) ){
    return(!flag);
  }
  return impolygon(g, rno, sno, flag, type, x, y);
}

void imcirclei(GFilt g, int UNUSED(rno), int sno, int flag, int type,
	       double UNUSED(x), double UNUSED(y),
	       double xcen, double ycen, double radius)
{
  int yy;
  double dval;
  double xoff, yoff;
  Scan *scanlist;

  /* NB: do not use x and y variables, they have bogus values */
  if( radius == 0 ){
    return;
  }
  /* divide by block factor to get "real" parameters */
  xcen = (xcen - g->xmin)/g->block + 1.0;
  ycen = (ycen - g->ymin)/g->block + 1.0;
  radius /= (double)g->block;
  /* set y limits */
  if( PIXSTART(ycen - radius) < PIXSTOP(ycen + radius) ){
    g->shapes[sno].ystart = max(g->y0,PIXSTART(ycen - radius));
    g->shapes[sno].ystop  = min(g->y1,PIXSTOP(ycen + radius));
  }
  else{
    g->shapes[sno].ystart = min(g->y1,PIXSTOP(ycen + radius));
    g->shapes[sno].ystop  = max(g->y0,PIXSTART(ycen - radius));
  }
  g->shapes[sno].scanlist = (Scan *)calloc(g->y1+1, sizeof(Scan));
  scanlist = g->shapes[sno].scanlist;
  marky(g, sno, flag, type);
  /* calculate start/stop values for each y line */
  for(yy=g->shapes[sno].ystart; yy<=g->shapes[sno].ystop; yy++){
    yoff = PIXCEN(yy) - ycen;
    if( (dval=(radius * radius) - (yoff * yoff))>=0.0 ){
      xoff = sqrt(dval);
      if( PIXSTART(xcen - xoff) <= PIXSTOP(xcen + xoff)  ){
	rgs_mark(g, scanlist, sno, flag, type, PIXSTART(xcen - xoff), yy);
	rgs_mark(g, scanlist, sno, flag, type, PIXSTOP(xcen + xoff), yy);
      }
    }
  }
}

int imcircle(GFilt g, int rno, int sno, int flag, int UNUSED(type),
	     double x, double y,
	     double UNUSED(xcen), double UNUSED(ycen), double radius)
{
  Scan scan;

  if( radius == 0 ){
    return(!flag);
  }
  if( g->evsect ){
    if( g->usebinsiz ){
      x = (int)((x - g->tlminx)/g->binsizx + 1.0);
      y = (int)((y - g->tlminy)/g->binsizy + 1.0);
    }
    else{
      x = (int)((x - g->tlminx) + 1.0);
      y = (int)((y - g->tlminy) + 1.0);
    }
    x = (int)((x - g->xmin)/g->block + 1.0);
    y = (int)((y - g->ymin)/g->block + 1.0);
    if(y < g->y0) return 0;
    if(y > g->y1) return 0;
    if(x < g->x0) return 0;
    if(x > g->x1) return 0;
  }
  if( flag ){
    if(y < g->shapes[sno].ystart ) return 0;
    if(y > g->shapes[sno].ystop ) return 0;
  }
  scan = g->shapes[sno].scanlist[(int)y];
  if( (scan 							&& 
      ((y>=g->shapes[sno].ystart) && (y<=g->shapes[sno].ystop))	&&
      ((x >= scan->x) && (x <= (scan->next)->x))) == flag ){
    if( rno && flag ) g->rid = rno;
    return 1;
  }
  else{
   return 0;
  }
}

void imellipsei(GFilt g, int rno, int sno, int flag, int type,
		double x, double y,
		double xcen, double ycen, double xrad, double yrad,
		double angle)
{
  int yy;
  int nr, nc;
  double yhi;
  double yoff;
  double xboff, xfoff;
  double angl;
  double sinangl, cosangl;
  double cossq, sinsq, xradsq, yradsq;
  double a, b_partial, c_partial;
  double b, c;
  Scan *scanlist;

  /* NB: do not use x and y variables, they have bogus values */

  if( xrad == yrad ){
    imcirclei(g, rno, sno, flag, type, x, y, xcen, ycen, xrad);
    return;
  }
  /* divide by block factor to get "real" parameters */
  xcen = (xcen - g->xmin)/g->block + 1.0;
  ycen = (ycen - g->ymin)/g->block + 1.0;
  xrad /= (double)g->block;
  yrad /= (double)g->block;
  /* set worst case limits (xrad axis parallel to vertical axis) */
#if USE_ASTRO_ANGLE
  /* convert to a Cartesian angle; save "angle" for use by other routines */
  angl = angle + 90.0;
#else
  angl = angle;
#endif
  while( angl >= 360.0 )
    angl = angl - 360.0;
  /* convert to radians */
  angl = (angl / 180.0) * M_PI;
  sinangl = sin(angl);
  cosangl = cos(angl);
  /* calculate approximate y limits */
  /* choose lesser of containing rotbox and circle */
  FPU_DOUBLE
#if USE_ASTRO_ANGLE
  yhi = fabs(sinangl * yrad) + fabs(cosangl * xrad);
#else
  yhi = fabs(sinangl * xrad) + fabs(cosangl * yrad);
#endif
  yhi = min(yhi, max(yrad, xrad));
  /* set y limits */
  if( PIXSTART(ycen - yhi) < PIXSTOP(ycen + yhi) ){
    g->shapes[sno].ystart = max(g->y0,PIXSTART(ycen - yhi));
    g->shapes[sno].ystop  = min(g->y1,PIXSTOP(ycen + yhi));
  }
  else{
    g->shapes[sno].ystart = min(g->y1,PIXSTOP(ycen + yhi));
    g->shapes[sno].ystop  = max(g->y0,PIXSTART(ycen - yhi));
  }
  FPU_RESTORE
  g->shapes[sno].scanlist = (Scan *)calloc(g->y1+1, sizeof(Scan));
  scanlist = g->shapes[sno].scanlist;
  marky(g, sno, flag, type);
  /* prepare partials for quadratic equation solutions to coordinates */
  cossq = cosangl * cosangl;
  sinsq = sinangl * sinangl;
#if USE_ASTRO_ANGLE
  /* because we rotate by 90.0 degrees to get from astro angle to */
  /* cartesian, we also need to switch the x and y axes. we do this */
  /* secretly so that the display will turn out right, by doing it in */
  /* the sq terms */
  xradsq = yrad * yrad;
  yradsq = xrad * xrad;
#else
  xradsq = xrad * xrad;
  yradsq = yrad * yrad;
#endif
  /* fill in as much of a,b,c as we can */
  a = (cossq / xradsq) + (sinsq / yradsq);
  b_partial = (2.0 * sinangl) * ((cosangl / xradsq) - (cosangl / yradsq));
  c_partial = (sinsq / xradsq) + (cossq / yradsq);
  /* calculate start/stop values for each y line */
  for(yy=g->shapes[sno].ystart; yy<=g->shapes[sno].ystop; yy++){
    yoff = yy - ycen;
    b = b_partial * yoff;
    c = (c_partial * yoff * yoff) - 1.0;
    /* solve quadratic */
    quadeq (a, b, c, &xboff, &xfoff, &nr, &nc);
    /* if real roots */
    if( nr != 0 ) {
      /* translate x coordinates */
      rgs_mark(g, scanlist, sno, flag, type, PIXSTART(xcen + xboff), yy);
      rgs_mark(g, scanlist, sno, flag, type, PIXSTOP(xcen + xfoff), yy);
    }
  }
}

int imellipse(GFilt g, int rno, int sno, int flag, int type,
	      double x, double y,
	      double xcen, double ycen, double xrad, double yrad,
	      double UNUSED(angle))
{
  Scan scan;

  if( xrad == yrad ){
    return(imcircle(g, rno, sno, flag, type, x, y, xcen, ycen, xrad));
  }
  if( g->evsect ){
    if( g->usebinsiz ){
      x = (int)((x - g->tlminx)/g->binsizx + 1.0);
      y = (int)((y - g->tlminy)/g->binsizy + 1.0);
    }
    else{
      x = (int)((x - g->tlminx) + 1.0);
      y = (int)((y - g->tlminy) + 1.0);
    }
    x = (int)((x - g->xmin)/g->block + 1.0);
    y = (int)((y - g->ymin)/g->block + 1.0);
    if(y < g->y0) return 0;
    if(y > g->y1) return 0;
    if(x < g->x0) return 0;
    if(x > g->x1) return 0;
  }
  if( flag ){
    if(y < g->shapes[sno].ystart ) return 0;
    if(y > g->shapes[sno].ystop ) return 0;
  }
  scan = g->shapes[sno].scanlist[(int)y];
  FPU_DOUBLE
  if( (scan 							&& 
      ((y>=g->shapes[sno].ystart) && (y<=g->shapes[sno].ystop))	&&
      ((x >= scan->x) && (x <= (scan->next)->x))) == flag ){
    if( rno && flag ) g->rid = rno;
    FPU_RESTORE
    return 1;
  }
  else{
    FPU_RESTORE
    return 0;
  }
}

void imfieldi(GFilt g, int UNUSED(rno), int sno, int flag, int type,
	      double UNUSED(x), double UNUSED(y))
{
  int yy;
  Scan *scanlist;

  /* NB: do not use x and y variables, they have bogus values */
  g->shapes[sno].ystart = g->y0;
  g->shapes[sno].ystop = g->y1;
  g->shapes[sno].scanlist = (Scan *)calloc(g->y1+1, sizeof(Scan));
  scanlist = g->shapes[sno].scanlist;
  marky(g, sno, flag, type);
  /* calculate start/stop values for each y line */
  for(yy=g->shapes[sno].ystart; yy<=g->shapes[sno].ystop; yy++){
    rgs_mark(g, scanlist, sno, flag, type, g->x0, yy);
    rgs_mark(g, scanlist, sno, flag, type, g->x1, yy);
  }
}

int imfield(GFilt g, int rno, int UNUSED(sno), int flag, int UNUSED(type),
	    double UNUSED(x), double UNUSED(y))
{
  if( flag ){
    if( rno && flag ) g->rid = rno;
    return 1;
  }
  else{
    return 0;
  }
}

void imlinei(GFilt g, int UNUSED(rno), int sno, int flag, int type,
	     double UNUSED(x), double UNUSED(y),
	     double x1, double y1, double x2, double y2)
{
  double vx[2];
  double vy[2];
  int xval, yval;
  double invslope, xoffset;

  /* NB: do not use x and y variables, they have bogus values */
  /* divide by block factor to get "real" parameters */
  x1 = (x1 - g->xmin)/g->block + 1.0;
  y1 = (y1 - g->ymin)/g->block + 1.0;
  x2 = (x2 - g->xmin)/g->block + 1.0;
  y2 = (y2 - g->ymin)/g->block + 1.0;
  /* order by increasing y */
  if( y1 < y2 ){
    vx[0] = x1;
    vy[0] = y1;
    vx[1] = x2;
    vy[1] = y2;
  }
  else{
    vx[0] = x2;
    vy[0] = y2;
    vx[1] = x1;
    vy[1] = y1;
  }
  /* set y limits */
  g->shapes[sno].ystart = PIXNUM(vy[0]);
  g->shapes[sno].ystop = PIXNUM(vy[1]);
  g->shapes[sno].scanlist = (Scan *)calloc(g->y1+1, sizeof(Scan));
  marky(g, sno, flag, type);
  if( feq(vy[0],vy[1]) ){
    rgs_mark(g, g->shapes[sno].scanlist, sno, flag, type,
	     (int)min(vx[0],vx[1]), (int)vy[0]);
    rgs_mark(g, g->shapes[sno].scanlist, sno, flag, type,
	     (int)max(vx[0],vx[1]), (int)vy[0]);
  }
  else{
    /* mark all horizontal segment crossings */
    invslope = (vx[0] - vx[1]) / (vy[0] - vy[1]);
    xoffset = vx[0];
    for(yval=vy[0]; yval<=vy[1]; yval++){
      xval = xoffset;
      rgs_mark(g, g->shapes[sno].scanlist, sno, flag, type, xval, yval);
      xoffset = xoffset + invslope;
    }
  }
}

int imline(GFilt g, int rno, int sno, int flag, int UNUSED(type),
	   double x, double y,
	   double UNUSED(x1), double UNUSED(y1),
	   double UNUSED(x2), double UNUSED(y2))
{
  Scan scan;

  if( g->evsect ){
    if( g->usebinsiz ){
      x = (int)((x - g->tlminx)/g->binsizx + 1.0);
      y = (int)((y - g->tlminy)/g->binsizy + 1.0);
    }
    else{
      x = (int)((x - g->tlminx) + 1.0);
      y = (int)((y - g->tlminy) + 1.0);
    }
    x = (int)((x - g->xmin)/g->block + 1.0);
    y = (int)((y - g->ymin)/g->block + 1.0);
    if(y < g->y0) return 0;
    if(y > g->y1) return 0;
    if(x < g->x0) return 0;
    if(x > g->x1) return 0;
  }
  if( flag ){
    if(y < g->shapes[sno].ystart ) return 0;
    if(y > g->shapes[sno].ystop ) return 0;
  }
  scan = g->shapes[sno].scanlist[(int)y];
  if( (scan                                     &&
      ((x==(int)scan->x) 			||
       (scan->next&&((x>=(int)scan->x)&&(x<=(int)scan->next->x)))))==flag ) {
    if( rno && flag ) g->rid = rno;
    return 1;
  }
  else
    return 0;
}

void impiei(GFilt g, int rno, int sno, int flag, int type,
	    double x, double y,
	    double xcen, double ycen, double angle1, double angle2)
{
  _impiei(g, 0, rno, sno, flag, type, x, y, xcen, ycen, angle1, angle2);
}

int impie(GFilt g, int rno, int sno, int flag, int type,
	  double x, double y,
	  double UNUSED(xcen), double UNUSED(ycen),
	  double UNUSED(angle1), double UNUSED(angle2))
{
  return impolygon(g, rno, sno, flag, type, x, y);
}

void imqtpiei(GFilt g, int rno, int sno, int flag, int type,
	      double x, double y,
	      double xcen, double ycen, double angle1, double angle2)
{
  _impiei(g, 1, rno, sno, flag, type, x, y, xcen, ycen, angle1, angle2);
}

int imqtpie(GFilt g, int rno, int sno, int flag, int type,
	    double x, double y,
	    double UNUSED(xcen), double UNUSED(ycen),
	    double UNUSED(angle1), double UNUSED(angle2))
{
  return impolygon(g, rno, sno, flag, type, x, y);
}

void impointi(GFilt g, int UNUSED(rno), int sno, int flag, int type,
	      double UNUSED(x), double UNUSED(y),
	      double xcen, double ycen)
{
  /* NB: do not use x and y variables, they have bogus values */
  /* divide by block factor to get "real" parameters */
  xcen = (xcen - g->xmin)/g->block + 1.0;
  ycen = (ycen - g->ymin)/g->block + 1.0;
  /* set y limits */
  g->shapes[sno].ystart = PIXNUM(ycen);
  g->shapes[sno].ystop = PIXNUM(ycen);
  g->shapes[sno].scanlist = (Scan *)calloc(g->y1+1, sizeof(Scan));
  marky(g, sno, flag, type);
  rgs_mark(g, g->shapes[sno].scanlist, sno, flag, type,
	   PIXNUM(xcen), PIXNUM(ycen));
}

int impoint(GFilt g, int rno, int sno, int flag, int UNUSED(type),
	    double x, double y,
	    double UNUSED(xcen), double UNUSED(ycen))
{
  Scan scan;

  if( g->evsect ){
    if( g->usebinsiz ){
      x = (int)((x - g->tlminx)/g->binsizx + 1.0);
      y = (int)((y - g->tlminy)/g->binsizy + 1.0);
    }
    else{
      x = (int)((x - g->tlminx) + 1.0);
      y = (int)((y - g->tlminy) + 1.0);
    }
    x = (int)((x - g->xmin)/g->block + 1.0);
    y = (int)((y - g->ymin)/g->block + 1.0);
    if(y < g->y0) return 0;
    if(y > g->y1) return 0;
    if(x < g->x0) return 0;
    if(x > g->x1) return 0;
  }
  if( flag ){
    if(y < g->shapes[sno].ystart ) return 0;
    if(y > g->shapes[sno].ystop ) return 0;
  }
  scan = g->shapes[sno].scanlist[(int)y];
  if( (scan                                     &&
      (y == (int)g->shapes[sno].ystart)		&& 
      (x == (int)scan->x))==flag )		{
    if( rno && flag ) g->rid = rno;
    return 1;
  }
  else
    return 0;
}

#ifdef __STDC__
void
impolygoni(GFilt g, int rno, int sno, int flag, int type,
	   double UNUSED(x), double y, ...)
{
  double *vx=NULL, *vy=NULL;
  int count, maxcount;
  va_list args;
  va_start(args, y);
#else
void impolygoni(va_alist) va_dcl
{
  GFilt g;
  int rno, sno, flag, type;
  double x, y;
  double *vx=NULL, *vy=NULL;
  int count, maxcount;
  va_list args;
  va_start(args);
  g  =  va_arg(args, GFilt);
  rno  = va_arg(args, int);
  sno  = va_arg(args, int);
  flag  = va_arg(args, int);
  type  = va_arg(args, int);
  x = va_arg(args, double);
  y = va_arg(args, double);
#endif
  /* NB: do not use x and y variables, they have bogus values */
  /* allocate space for x,y arguments */
  maxcount = MASKINC;
  vx = (double *)calloc(maxcount, sizeof(double));
  vy = (double *)calloc(maxcount, sizeof(double));
  /* look for x,y arguments */
  count = 0;
  while( 1 ){
    if( (count + 1) >= maxcount ){
      maxcount += MASKINC;
      vx = (double *)realloc(vx, maxcount*sizeof(double));
      vy = (double *)realloc(vy, maxcount*sizeof(double));
    }
    vx[count] = va_arg(args, double);
    vy[count] = va_arg(args, double);
    if( feq(vx[count],PSTOP) && feq(vy[count],PSTOP) )
      break;
    vx[count] = (vx[count] - g->xmin)/g->block + 1.0;
    vy[count] = (vy[count] - g->ymin)/g->block + 1.0;
    count ++;
  }
  va_end(args);
  /* realloc to actual size */
  vx = (double *)realloc(vx, count*sizeof(double));
  vy = (double *)realloc(vy, count*sizeof(double));
  /* call the common routine */
  _polygoni(g, 0, rno, sno, flag, type, vx, vy, count);
  if( vx ) free(vx);
  if( vy ) free(vy);
}

#ifdef __STDC__
int
impolygon(GFilt g, int rno, int sno, int flag, int UNUSED(type),
	  double x, double y, ...)
{
  int crossings;
  Scan scan;
  va_list args;
  va_start(args, y);
#else
int impolygon(va_alist) va_dcl
{
  GFilt g;
  int rno, sno, flag, type;
  double x, y;
  int crossings;
  Scan scan;
  va_list args;
  va_start(args);
  g  = va_arg(args, GFilt);
  rno  = va_arg(args, int);
  sno  = va_arg(args, int);
  flag  = va_arg(args, int);
  type  = va_arg(args, int);
  x = va_arg(args, double);
  y = va_arg(args, double);
#endif
  va_end(args);
  if( g->evsect ){
    if( g->usebinsiz ){
      x = (int)((x - g->tlminx)/g->binsizx + 1.0);
      y = (int)((y - g->tlminy)/g->binsizy + 1.0);
    }
    else{
      x = (int)((x - g->tlminx) + 1.0);
      y = (int)((y - g->tlminy) + 1.0);
    }
    x = (int)((x - g->xmin)/g->block + 1.0);
    y = (int)((y - g->ymin)/g->block + 1.0);
    if(y < g->y0) return 0;
    if(y > g->y1) return 0;
    if(x < g->x0) return 0;
    if(x > g->x1) return 0;
  }
  if( flag ){
    if(y < g->shapes[sno].ystart ) return 0;
    if(y > g->shapes[sno].ystop ) return 0;
  }
  /* no initialization of x for this row, just jump right in */
  if( (y>=g->shapes[sno].ystart)&&(y<=g->shapes[sno].ystop) ){
    crossings = 0;
    for(scan=g->shapes[sno].scanlist[(int)y]; scan; scan=scan->next){
      if( x >= scan->x )
	crossings++;
      else
	break;
    }
    if( (crossings%2) == flag ){
      if( rno && flag ) g->rid = rno;
      return 1;
    }
    else{
      return 0;
    }
  }
  else{
    return !flag;
  }
}

void imnannulusi(GFilt g, int rno, int sno, int flag, int type,
		 double x, double y,
		 double xcen, double ycen,
		 double lo, double hi, int n)
{
  int i;
  int xsno;
  double dinc;

  /* NB: do not use x and y variables, they have bogus values */

  /* get limits */
  dinc = (hi - lo)/n;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  /* init all shapes */
  imannulusi(g, 0, xsno, flag, type, x, y, xcen, ycen, lo, hi);
  for(i=0; i<n; i++){
    imannulusi(g, rno+i, sno+i, flag, type, x, y,
	       xcen, ycen, lo+(i*dinc), lo+((i+1)*dinc));
  }
}

void imnboxi(GFilt g, int rno, int sno, int flag, int type,
	     double x, double y,
	     double xcen, double ycen,
	     double lox, double loy, double hix, double hiy, int n,
	     double ang)
{
  int i;
  int xsno;
  double dincx;
  double dincy;

  /* NB: do not use x and y variables, they have bogus values */

  /* get limits */
  dincx = (hix - lox)/n;
  dincy = (hiy - loy)/n;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  /* init all shapes */
  imboxi(g, 0, xsno, flag, type, x, y, xcen, ycen, hix, hiy, ang);
  imboxi(g, 0, xsno+1, flag, type, x, y, xcen, ycen, lox, loy, ang);
  for(i=0; i<n; i++){
    imboxi(g, rno+i, sno+i, flag, type, x, y,
	   xcen, ycen, lox+((i+1)*dincx), loy+((i+1)*dincy), ang);
  }
}

void imnellipsei(GFilt g, int rno, int sno, int flag, int type,
		 double x, double y,
		 double xcen, double ycen,
		 double lox, double loy, double hix, double hiy, int n,
		 double ang)
{
  int i;
  int xsno;
  double dincx;
  double dincy;

  /* NB: do not use x and y variables, they have bogus values */

  /* get limits */
  dincx = (hix - lox)/n;
  dincy = (hiy - loy)/n;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  /* init all shapes */
  imellipsei(g, 0, xsno, flag, type, x, y, xcen, ycen, hix, hiy, ang);
  imellipsei(g, 0, xsno+1, flag, type, x, y, xcen, ycen, lox, loy, ang);
  for(i=0; i<n; i++){
    imellipsei(g, rno+i, sno+i, flag, type, x, y,
	       xcen, ycen, lox+((i+1)*dincx), loy+((i+1)*dincy), ang);
  }
}

void imnpiei(GFilt g, int rno, int sno, int flag, int type,
	     double x, double y,
	     double xcen, double ycen,
	     double lo, double hi, int n)
{
  int i;
  int xsno;
  double dinc;

  /* NB: do not use x and y variables, they have bogus values */

  /* get limits */
  while( lo > hi ) lo -= 360.0;
  dinc = (hi - lo)/n;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  /* init all shapes */
  impiei(g, 0, xsno, flag, type, x, y, xcen, ycen, lo, hi);
  for(i=0; i<n; i++){
    impiei(g, rno+i, sno+i, flag, type, x, y,
	   xcen, ycen, lo+(i*dinc), lo+((i+1)*dinc));
  }
}

void impandai(GFilt g, int rno, int sno, int flag, int type,
	      double x, double y,
	      double xcen, double ycen,
	      double anglo, double anghi, double angn,
	      double radlo, double radhi, double radn)
{
  int a, r;
  int ahi, rhi;
  int xsno;
  int n=0;
  double ainc, rinc;

  /* NB: do not use x and y variables, they have bogus values */

  /* get limits */
  while( anglo > anghi ) anglo -= 360.0;
  ainc = (anghi - anglo)/angn;
  ahi = (int)angn;
  rinc = (radhi - radlo)/radn;
  rhi = (int)radn;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  /* init pies and annuli */
  imannulusi(g, 0, xsno, flag, type, x, y, xcen, ycen, radlo, radhi);
  imqtpiei(g, 0, xsno+1, flag, type, x, y, xcen, ycen, anglo, anghi);
  for(a=0; a<ahi; a++){
    for(r=0; r<rhi; r++){
      imannulusi(g, rno+n, sno+(2*n), flag, type, x, y,
		 xcen, ycen, radlo+(r*rinc), radlo+((r+1)*rinc));
      imqtpiei(g, rno+n, sno+(2*n+1), flag, type, x, y,
	       xcen, ycen, anglo+(a*ainc), anglo+((a+1)*ainc));
      n++;
    }
  }
}

void imbpandai(GFilt g, int rno, int sno, int flag, int type,
	       double x, double y,
	       double xcen, double ycen,
	       double anglo, double anghi, double angn,
	       double xlo, double ylo, double xhi, double yhi, double radn,
	       double ang)
{
  int a, r;
  int ahi, rhi;
  int xsno;
  int n=0;
  double ainc, xinc, yinc;

  /* NB: do not use x and y variables, they have bogus values */

  /* get limits */
  anglo += ang;
  anghi += ang;
  while( anglo > anghi ) anglo -= 360.0;
  ainc = (anghi - anglo)/angn;
  ahi = (int)angn;
  xinc = (xhi - xlo)/radn;
  yinc = (yhi - ylo)/radn;
  rhi = (int)radn;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  /* init pies and ellipses */
  imboxi(g, 0, xsno, flag, type, x, y, xcen, ycen, xhi, yhi, ang);
  imqtpiei(g, 0, xsno+1, flag, type, x, y, xcen, ycen, anglo, anghi);
  imboxi(g, 0, xsno+2, flag, type, x, y, xcen, ycen, xlo, ylo, ang);
  for(a=0; a<ahi; a++){
    for(r=1; r<=rhi; r++){
      imboxi(g, rno+n, sno+(2*n), flag, type, x, y,
	     xcen, ycen, xlo+(r*xinc), ylo+(r*yinc), ang);
      imqtpiei(g, rno+n, sno+(2*n+1), flag, type, x, y,
	       xcen, ycen, anglo+(a*ainc), anglo+((a+1)*ainc));
      n++;
    }
  }
}

void imepandai(GFilt g, int rno, int sno, int flag, int type,
	       double x, double y,
	       double xcen, double ycen,
	       double anglo, double anghi, double angn,
	       double xlo, double ylo, double xhi, double yhi, double radn,
	       double ang)
{
  int a, r;
  int ahi, rhi;
  int xsno;
  int n=0;
  double ainc, xinc, yinc;

  /* NB: do not use x and y variables, they have bogus values */

  /* get limits */
  anglo += ang;
  anghi += ang;
  while( anglo > anghi ) anglo -= 360.0;
  ainc = (anghi - anglo)/angn;
  ahi = (int)angn;
  xinc = (xhi - xlo)/radn;
  yinc = (yhi - ylo)/radn;
  rhi = (int)radn;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  /* init pies and ellipses */
  imellipsei(g, 0, xsno, flag, type, x, y, xcen, ycen, xhi, yhi, ang);
  imqtpiei(g, 0, xsno+1, flag, type, x, y, xcen, ycen, anglo, anghi);
  imellipsei(g, 0, xsno+2, flag, type, x, y, xcen, ycen, xlo, ylo, ang);
  for(a=0; a<ahi; a++){
    for(r=1; r<=rhi; r++){
      imellipsei(g, rno+n, sno+(2*n), flag, type, x, y,
		 xcen, ycen, xlo+(r*xinc), ylo+(r*yinc), ang);
      imqtpiei(g, rno+n, sno+(2*n+1), flag, type, x, y,
	       xcen, ycen, anglo+(a*ainc), anglo+((a+1)*ainc));
      n++;
    }
  }
}

/* accelerator regions -- lower and upper limits are given for n regions */

int imnannulus(GFilt g, int rno, int sno, int flag, int type,
	       double x, double y, double xcen, double ycen,
	       double lo, double hi, int n)
{
  int i;
  int xsno;
  double dinc;

  /* get limits */
  dinc = (hi - lo)/(double)n;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( flag ){
    /* if its not somewhere inside the entire region we lose ... */
    if( !imannulus(g, 0, xsno, flag, type, x, y, xcen, ycen, lo, hi) ){
      return(0);
    }
    /* look through all of them to find the right one */
    for(i=0; i<n; i++){
      if( imannulus(g, rno+i, sno+i, flag, type, x, y,
		    xcen, ycen, lo+(i*dinc), lo+((i+1)*dinc)) ){
	return(1);
      }
    }
    return(0);
  }
  else{
    /* if its not somewhere inside the entire region we win ... */
    if( !imannulus(g, 0, xsno, 1, type, x, y, xcen, ycen, lo, hi) ){
      return(1);
    }
    return(0);
  }
}

int imnbox(GFilt g, int rno, int sno, int flag, int type,
	   double x, double y, double xcen, double ycen,
	   double lox, double loy, double hix, double hiy, int n,
	   double ang)
{
  int i;
  int xsno;
  double dincx;
  double dincy;

  /* get limits */
  dincx = (hix - lox)/n;
  dincy = (hiy - loy)/n;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( flag ){
    /* if its not somewhere inside the entire region we lose ... */
    if( !imbox(g, 0, xsno, flag, type, x, y, xcen, ycen, hix, hiy, ang) ){
      return(0);
    }
    /* if its in the inner region we lose */
    if( imbox(g, 0, xsno+1, flag, type, x, y, xcen, ycen, lox, loy, ang) ){
      return(0);
    }
    /* look through all of them to find the right one */
    for(i=0; i<n; i++){
      if( imbox(g, rno+i, sno+i, flag, type, x, y,
		xcen, ycen, lox+((i+1)*dincx), loy+((i+1)*dincy), ang) ){
	return(1);
      }
    }
    return(0);
  }
  /* for excludes, we have to check that we are not in any of them */
  else{
    /* if its not somewhere inside the entire region we win ... */
    if( !imbox(g, 0, xsno, 1, type, x, y, xcen, ycen, hix, hiy, ang) ){
      return(1);
    }
    /* if its in the inner region we win */
    if( imbox(g, 0, xsno+1, 1, type, x, y, xcen, ycen, lox, loy, ang) ){
      return(1);
    }
    return(0);
  }
}

int imnellipse(GFilt g, int rno, int sno, int flag, int type,
	       double x, double y, double xcen, double ycen,
	       double lox, double loy, double hix, double hiy, int n,
	       double ang)
{
  int i;
  int xsno;
  double dincx;
  double dincy;

  /* get limits */
  dincx = (hix - lox)/n;
  dincy = (hiy - loy)/n;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( flag ){
    /* if its not somewhere inside the entire region we lose ... */
    if( !imellipse(g, 0, xsno, flag, type, x, y, xcen, ycen, hix, hiy, ang) ){
      return(0);
    }
    /* if its in the inner region we lose */
    if( imellipse(g, 0, xsno+1, flag, type, x, y, xcen, ycen, lox, loy, ang) ){
      return(0);
    }
    /* look through all of them to find the right one */
    for(i=0; i<n; i++){
      if( imellipse(g, rno+i, sno+i, flag, type, x, y,
		    xcen, ycen, lox+((i+1)*dincx), loy+((i+1)*dincy), ang) ){
	return(1);
      }
    }
    return(0);
  }
  /* for excludes, we have to check that we are not in any of them */
  else{
    /* if its not somewhere inside the entire region we win ... */
    if( !imellipse(g, 0, xsno, 1, type, x, y, xcen, ycen, hix, hiy, ang) ){
      return(1);
    }
    /* if its in the inner region we win */
    if( imellipse(g, 0, xsno+1, 1, type, x, y, xcen, ycen, lox, loy, ang) ){
      return(1);
    }
    return(0);
  }
}

int imnpie(GFilt g, int rno, int sno, int flag, int type,
	   double x, double y, double xcen, double ycen,
	   double lo, double hi, int n)
{
  int i;
  int xsno;
  double dinc;

  /* get limits */
  while( lo > hi ) lo -= 360.0;
  dinc = (hi - lo)/n;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( flag ){
    /* check limits */
    if( !impie(g, 0, xsno, flag, type, x, y, xcen, ycen, lo, hi) ){
      return(0);
    }
    /* look through all of them to find the right one */
    for(i=0; i<n; i++){
      if( impie(g, rno+i, sno+i, flag, type, x, y,
		xcen, ycen, lo+(i*dinc), lo+((i+1)*dinc)) ){
	return(1);
      }
    }
    return(0);
  }
  else{
    /* if its not somewhere inside the entire region we win ... */
    if( !impie(g, 0, xsno, 1, type, x, y, xcen, ycen, lo, hi) ){
      return(1);
    }
    return(0);
  }
}

int impanda(GFilt g, int rno, int sno, int flag, int type,
	    double x, double y,
	    double xcen, double ycen,
	    double anglo, double anghi, double angn,
	    double radlo, double radhi, double radn)
{
    
  int a, r;
  int ahi, rhi;
  int xsno;
  int n=0;
  double ainc, rinc;

  /* get limits */
  while( anglo > anghi ) anglo -= 360.0;
  ainc = (anghi - anglo)/angn;
  ahi = (int)angn;
  rinc = (radhi - radlo)/radn;
  rhi = (int)radn;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( flag ){
    /* if its not somewhere inside the entire region we lose ... */
    if( !imannulus(g, 0, xsno, flag, type, x, y, xcen, ycen, radlo, radhi) ||
	!impie(g, 0, xsno+1, flag, type, x, y, xcen, ycen, anglo, anghi)   ){
      return(0);
    }
    /* look through all of them to find the right one */
    for(a=1; a<=ahi; a++){
      for(r=1; r<=rhi; r++){
	if( imannulus(g, rno+n, sno+(2*n), flag, type, x, y,
		      xcen, ycen, radlo+((r-1)*rinc), radlo+(r*rinc)) &&
	    impie(g, rno+n, sno+(2*n+1), flag, type, x, y,
		  xcen, ycen, anglo+((a-1)*ainc), anglo+(a*ainc))     ){
	  return(1);
	}
	n++;
      }
    }
    return(0);
  }
  else{
    /* if its not somewhere inside the entire region we win ... */
    if( !imannulus(g, 0, xsno, 1, type, x, y, xcen, ycen, radlo, radhi) )
      return(1);
    else if( !impie(g, 0, xsno+1, 1, type, x, y, xcen, ycen, anglo, anghi) ){
      return(1);
    }
    else{
      return(0);
    }
  }
}

int imbpanda(GFilt g, int rno, int sno, int flag, int type,
	     double x, double y,
	     double xcen, double ycen,
	     double anglo, double anghi, double angn,
	     double xlo, double ylo, double xhi, double yhi, double radn,
	     double ang)
{
    
  int a, r;
  int ahi, rhi;
  int xsno;
  int n=0;
  double ainc, xinc, yinc;

  /* get limits */
  anglo += ang;
  anghi += ang;
  while( anglo > anghi ) anglo -= 360.0;
  ainc = (anghi - anglo)/angn;
  ahi = (int)angn;
  xinc = (xhi - xlo)/radn;
  yinc = (yhi - ylo)/radn;
  rhi = (int)radn;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( flag ){
    /* if its not somewhere inside the entire region we lose ... */
    if( !imbox(g, 0, xsno, flag, type, x, y, xcen, ycen, xhi, yhi,
	       ang) ){
      return(0);
    }
    /* but if its in the inner region we lose */
    else if( imbox(g, 0, xsno+2, flag, type, x, y, xcen, ycen, xlo, ylo,
		   ang) ){
      return(0);
    }
    /* its in the box .. must also be in the pie */
    else if( !impie(g, 0, xsno+1, flag, type, x, y, xcen, ycen, anglo, anghi)){
      return(0);
    }
    /* look through all of them to find the right one */
    for(a=0; a<ahi; a++){
      for(r=1; r<=rhi; r++){
	if( imbox(g, rno+n, sno+(2*n), flag, type, x, y,
		  xcen, ycen, xlo+(r*xinc), ylo+(r*yinc), ang)   &&
	    imqtpie(g, rno+n, sno+(2*n+1), flag, type, x, y,
		    xcen, ycen, anglo+(a*ainc), anglo+((a+1)*ainc))  ){
	  return(1);
	}
	n++;
      }
    }
    return(0);
  }
  else{
    /* if its not somewhere inside the entire region we win ... */
    if( !imbox(g, 0, xsno, 1, type, x, y, xcen, ycen, xhi, yhi, ang) )
      return(1);
    /* if its in the inner region we win */
    else if( !imbox(g, 0, xsno+2, 1, type, x, y, xcen, ycen, xlo, ylo,
		    ang) )
      return(1);
    /* if its not in the pie, we win */
    else if( !impie(g, 0, xsno+1, 1, type, x, y, xcen, ycen, anglo, anghi) ){
      return(1);
    }
    else{
      return(0);
    }
  }
}

int imepanda(GFilt g, int rno, int sno, int flag, int type,
	     double x, double y,
	     double xcen, double ycen,
	     double anglo, double anghi, double angn,
	     double xlo, double ylo, double xhi, double yhi, double radn,
	     double ang)
{
    
  int a, r;
  int ahi, rhi;
  int xsno;
  int n=0;
  double ainc, xinc, yinc;

  /* get limits */
  anglo += ang;
  anghi += ang;
  while( anglo > anghi ) anglo -= 360.0;
  ainc = (anghi - anglo)/angn;
  ahi = (int)angn;
  xinc = (xhi - xlo)/radn;
  yinc = (yhi - ylo)/radn;
  rhi = (int)radn;
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( flag ){
    /* if its not somewhere inside the entire region we lose ... */
    if( !imellipse(g, 0, xsno, flag, type, x, y, xcen, ycen, xhi, yhi,
		   ang) ){
      return(0);
    }
    /* but if its in the inner region we lose */
    else if( imellipse(g, 0, xsno+2, flag, type, x, y, xcen, ycen, xlo, ylo,
		       ang) ){
      return(0);
    }
    /* its in the ellipse .. must also be in the pie */
    else if( !impie(g, 0, xsno+1, flag, type, x, y, xcen, ycen, anglo, anghi)){
      return(0);
    }
    /* look through all of them to find the right one */
    for(a=0; a<ahi; a++){
      for(r=1; r<=rhi; r++){
	if( imellipse(g, rno+n, sno+(2*n), flag, type, x, y,
		      xcen, ycen, xlo+(r*xinc), ylo+(r*yinc), ang)   &&
	    imqtpie(g, rno+n, sno+(2*n+1), flag, type, x, y,
		    xcen, ycen, anglo+(a*ainc), anglo+((a+1)*ainc))  ){
	  return(1);
	}
	n++;
      }
    }
    return(0);
  }
  else{
    /* if its not somewhere inside the entire region we win ... */
    if( !imellipse(g, 0, xsno, 1, type, x, y, xcen, ycen, xhi, yhi, ang) )
      return(1);
    /* if its in the inner region we win */
    else if( !imellipse(g, 0, xsno+2, 1, type, x, y, xcen, ycen, xlo, ylo,
			ang) )
      return(1);
    /* if its not in the pie, we win */
    else if( !impie(g, 0, xsno+1, 1, type, x, y, xcen, ycen, anglo, anghi) ){
      return(1);
    }
    else{
      return(0);
    }
  }
}

#ifdef __STDC__
void
imvannulusi(GFilt g, int rno, int sno, int flag, int type,
	    double x, double y, double xcen, double ycen, ...)
{
  int i, n;
  int maxpts;
  int xsno;
  double *xv;
  va_list args;
  va_start(args, ycen);
#else
int imvannulusi(va_alist) va_dcl
{
  GFilt g;
  int rno, sno, flag, type;
  double x, y;
  double xcen, ycen;
  double ang;
  double *xv;
  int i, n;
  int maxpts;
  int xsno;
  va_list args;
  va_start(args);
  g  = va_arg(args, GFilt);
  rno  = va_arg(args, int);
  sno  = va_arg(args, int);
  flag  = va_arg(args, int);
  type  = va_arg(args, int);
  x  = va_arg(args, double);
  y  = va_arg(args, double);
  xcen  = va_arg(args, double);
  ycen  = va_arg(args, double);
#endif
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( !g->shapes[xsno].xv ){
    maxpts = MASKINC;
    g->shapes[xsno].xv = (double *)calloc(maxpts, sizeof(double));
    g->shapes[xsno].nv = 0;
    while( 1 ){
      if( g->shapes[xsno].nv >= maxpts ){
        maxpts += MASKINC;
        g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  					      maxpts*sizeof(double));
      }
      g->shapes[xsno].xv[g->shapes[xsno].nv] = va_arg(args, double);
      if( feq(g->shapes[xsno].xv[g->shapes[xsno].nv],PSTOP)   &&
  	feq(g->shapes[xsno].xv[g->shapes[xsno].nv-1],PSTOP) ){
        g->shapes[xsno].nv--;
        break;
      }
      g->shapes[xsno].nv++;
    }
    va_end(args);
    g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  	  	        g->shapes[xsno].nv*sizeof(double));
  }
  n = g->shapes[xsno].nv;
  xv = g->shapes[xsno].xv;
  /* this should be impossible ... */
  if( n == 2 ){
    imannulusi(g, rno, sno, flag, type, x, y, xcen, ycen, xv[0], xv[1]);
    return;
  }
  imannulusi(g, 0, xsno, flag, type, x, y, xcen, ycen, xv[0], xv[n-1]);
  for(i=0; i<(n-1); i++){
    imannulusi(g, rno+i, sno+i, flag, type, x, y, xcen, ycen, xv[i], xv[i+1]);
  }
}

#ifdef __STDC__
void
imvboxi(GFilt g, int rno, int sno, int flag, int type,
	double x, double y, double xcen, double ycen, ...)
{
  int i, j, n;
  int maxpts;
  int xsno;
  double ang;
  double *xv;
  va_list args;
  va_start(args, ycen);
#else
int imvboxi(va_alist) va_dcl
{
  GFilt g;
  int rno, sno, flag, type;
  double x, y;
  double xcen, ycen;
  double ang;
  double *xv;
  int i, j, n;
  int maxpts;
  int xsno;
  va_list args;
  va_start(args);
  g  = va_arg(args, GFilt);
  rno  = va_arg(args, int);
  sno  = va_arg(args, int);
  flag  = va_arg(args, int);
  type  = va_arg(args, int);
  x  = va_arg(args, double);
  y  = va_arg(args, double);
  xcen  = va_arg(args, double);
  ycen  = va_arg(args, double);
#endif
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( !g->shapes[xsno].xv ){
    maxpts = MASKINC;
    g->shapes[xsno].xv = (double *)calloc(maxpts, sizeof(double));
    g->shapes[xsno].nv = 0;
    while( 1 ){
      if( g->shapes[xsno].nv >= maxpts ){
        maxpts += MASKINC;
        g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  					      maxpts*sizeof(double));
      }
      g->shapes[xsno].xv[g->shapes[xsno].nv] = va_arg(args, double);
      if( feq(g->shapes[xsno].xv[g->shapes[xsno].nv],PSTOP)   &&
  	feq(g->shapes[xsno].xv[g->shapes[xsno].nv-1],PSTOP) ){
        g->shapes[xsno].nv--;
        break;
      }
      g->shapes[xsno].nv++;
    }
    va_end(args);
    g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  	  	        g->shapes[xsno].nv*sizeof(double));
  }
  n = g->shapes[xsno].nv;
  xv = g->shapes[xsno].xv;
  ang = xv[--n];
  /* this should be impossible ... */
  if( n == 2 ){
    imboxi(g, rno, sno, flag, type, x, y, xcen, ycen, xv[0], xv[1], ang);
    return;
  }
  imboxi(g, 0, xsno, flag, type, x, y, xcen, ycen, xv[n-2], xv[n-1], ang);
  imboxi(g, 0, xsno+1, flag, type, x, y, xcen, ycen, xv[0], xv[1], ang);
  for(i=2, j=0; i<n; i+=2, j++){
    imboxi(g, rno+j, sno+j, flag, type, x, y, xcen, ycen, xv[i], xv[i+1], ang);
  }
}

#ifdef __STDC__
void
imvellipsei(GFilt g, int rno, int sno, int flag, int type,
	    double x, double y, double xcen, double ycen, ...)
{
  int i, j, n;
  int maxpts;
  int xsno;
  double ang;
  double *xv;
  va_list args;
  va_start(args, ycen);
#else
int imvellipsei(va_alist) va_dcl
{
  GFilt g;
  int rno, sno, flag, type;
  double x, y;
  double xcen, ycen;
  double ang;
  double *xv;
  int i, j, n;
  int maxpts;
  int xsno;
  va_list args;
  va_start(args);
  g  = va_arg(args, GFilt);
  rno  = va_arg(args, int);
  sno  = va_arg(args, int);
  flag  = va_arg(args, int);
  type  = va_arg(args, int);
  x  = va_arg(args, double);
  y  = va_arg(args, double);
  xcen  = va_arg(args, double);
  ycen  = va_arg(args, double);
#endif
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( !g->shapes[xsno].xv ){
    maxpts = MASKINC;
    g->shapes[xsno].xv = (double *)calloc(maxpts, sizeof(double));
    g->shapes[xsno].nv = 0;
    while( 1 ){
      if( g->shapes[xsno].nv >= maxpts ){
        maxpts += MASKINC;
        g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  					      maxpts*sizeof(double));
      }
      g->shapes[xsno].xv[g->shapes[xsno].nv] = va_arg(args, double);
      if( feq(g->shapes[xsno].xv[g->shapes[xsno].nv],PSTOP)   &&
  	feq(g->shapes[xsno].xv[g->shapes[xsno].nv-1],PSTOP) ){
        g->shapes[xsno].nv--;
        break;
      }
      g->shapes[xsno].nv++;
    }
    va_end(args);
    g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  	  	        g->shapes[xsno].nv*sizeof(double));
  }
  n = g->shapes[xsno].nv;
  xv = g->shapes[xsno].xv;
  ang = xv[--n];
  /* this should be impossible ... */
  if( n == 2 ){
    imellipsei(g, rno, sno, flag, type, x, y, xcen, ycen, xv[0], xv[1], ang);
    return;
  }
  imellipsei(g, 0, xsno, flag, type, x, y, xcen, ycen, xv[n-2], xv[n-1], ang);
  imellipsei(g, 0, xsno+1, flag, type, x, y, xcen, ycen, xv[0], xv[1], ang);
  for(i=2, j=0; i<n; i+=2, j++){
    imellipsei(g, rno+j, sno+j, flag, type, x, y, xcen, ycen,
	       xv[i], xv[i+1], ang);
  }
}

#ifdef __STDC__
void
imvpiei(GFilt g, int rno, int sno, int flag, int type,
	double x, double y, double xcen, double ycen, ...)
{
  int i, n;
  int maxpts;
  int xsno;
  double *xv;
  va_list args;
  va_start(args, ycen);
#else
int imvpiei(va_alist) va_dcl
{
  GFilt g;
  int rno, sno, flag, type;
  double x, y;
  double xcen, ycen;
  double ang;
  double *xv;
  int i, n;
  int maxpts;
  int xsno;
  va_list args;
  va_start(args);
  g  = va_arg(args, GFilt);
  rno  = va_arg(args, int);
  sno  = va_arg(args, int);
  flag  = va_arg(args, int);
  type  = va_arg(args, int);
  x  = va_arg(args, double);
  y  = va_arg(args, double);
  xcen  = va_arg(args, double);
  ycen  = va_arg(args, double);
#endif
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( !g->shapes[xsno].xv ){
    maxpts = MASKINC;
    g->shapes[xsno].xv = (double *)calloc(maxpts, sizeof(double));
    g->shapes[xsno].nv = 0;
    while( 1 ){
      if( g->shapes[xsno].nv >= maxpts ){
        maxpts += MASKINC;
        g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  					      maxpts*sizeof(double));
      }
      g->shapes[xsno].xv[g->shapes[xsno].nv] = va_arg(args, double);
      if( feq(g->shapes[xsno].xv[g->shapes[xsno].nv],PSTOP)   &&
  	feq(g->shapes[xsno].xv[g->shapes[xsno].nv-1],PSTOP) ){
        g->shapes[xsno].nv--;
        break;
      }
      g->shapes[xsno].nv++;
    }
    va_end(args);
    g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  	  	        g->shapes[xsno].nv*sizeof(double));
  }
  n = g->shapes[xsno].nv;
  xv = g->shapes[xsno].xv;
  /* this should be impossible ... */
  if( n == 2 ){
    impiei(g, rno, sno, flag, type, x, y, xcen, ycen, xv[0], xv[1]);
    return;
  }
  impiei(g, 0, xsno, flag, type, x, y, xcen, ycen, xv[0], xv[n-1]);
  for(i=0; i<(n-1); i++){
    impiei(g, rno+i, sno+i, flag, type, x, y, xcen, ycen, xv[i], xv[i+1]);
  }
}

#ifdef __STDC__
void
imvpointi(GFilt g, int rno, int sno, int flag, int type,
	  double x, double y, ...)
{
  int i, j, n;
  int maxpts;
  int xsno;
  double *xv;
  va_list args;
  va_start(args, y);
#else
int imvpointi(va_alist) va_dcl
{
  GFilt g;
  int rno, sno, flag, type;
  double x, y;
  double *xv;
  int i, j, n;
  int maxpts;
  int xsno;
  va_list args;
  va_start(args);
  g  = va_arg(args, GFilt);
  rno  = va_arg(args, int);
  sno  = va_arg(args, int);
  flag  = va_arg(args, int);
  type  = va_arg(args, int);
  x  = va_arg(args, double);
  y  = va_arg(args, double);
#endif
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( !g->shapes[xsno].xv ){
    maxpts = MASKINC;
    g->shapes[xsno].xv = (double *)calloc(maxpts, sizeof(double));
    g->shapes[xsno].nv = 0;
    while( 1 ){
      if( g->shapes[xsno].nv >= maxpts ){
        maxpts += MASKINC;
        g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  					      maxpts*sizeof(double));
      }
      g->shapes[xsno].xv[g->shapes[xsno].nv] = va_arg(args, double);
      if( feq(g->shapes[xsno].xv[g->shapes[xsno].nv],PSTOP)   &&
  	feq(g->shapes[xsno].xv[g->shapes[xsno].nv-1],PSTOP) ){
        g->shapes[xsno].nv--;
        break;
      }
      g->shapes[xsno].nv++;
    }
    va_end(args);
    g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  	  	        g->shapes[xsno].nv*sizeof(double));
  }
  n = g->shapes[xsno].nv;
  xv = g->shapes[xsno].xv;
  for(i=0, j=0; i<n; i+=2, j++){
    impointi(g, rno+j, sno+j, flag, type, x, y, xv[i], xv[i+1]);
  }
}

/* varargs regions -- a series of lower and upper limits is specified */

#ifdef __STDC__
int
imvannulus(GFilt g, int rno, int sno, int flag, int type,
	   double x, double y, double xcen, double ycen, ...)
{
  int i, n;
  int maxpts;
  int xsno;
  double *xv;
  va_list args;
  va_start(args, ycen);
#else
int imvannulus(va_alist) va_dcl
{
  GFilt g;
  int rno, sno, flag, type;
  double x, y;
  double xcen, ycen;
  double *xv;
  int i, n;
  int maxpts;
  int xsno;
  va_list args;
  va_start(args);
  g  = va_arg(args, GFilt);
  rno  = va_arg(args, int);
  sno  = va_arg(args, int);
  flag  = va_arg(args, int);
  type  = va_arg(args, int);
  x  = va_arg(args, double);
  y  = va_arg(args, double);
  xcen  = va_arg(args, double);
  ycen  = va_arg(args, double);
#endif
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( !g->shapes[xsno].xv ){
    maxpts = MASKINC;
    g->shapes[xsno].xv = (double *)calloc(maxpts, sizeof(double));
    g->shapes[xsno].nv = 0;
    while( 1 ){
      if( g->shapes[xsno].nv >= maxpts ){
        maxpts += MASKINC;
        g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  					      maxpts*sizeof(double));
      }
      g->shapes[xsno].xv[g->shapes[xsno].nv] = va_arg(args, double);
      if( feq(g->shapes[xsno].xv[g->shapes[xsno].nv],PSTOP)   &&
  	feq(g->shapes[xsno].xv[g->shapes[xsno].nv-1],PSTOP) ){
        g->shapes[xsno].nv--;
        break;
      }
      g->shapes[xsno].nv++;
    }
    va_end(args);
    g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  	  	        g->shapes[xsno].nv*sizeof(double));
  }
  n = g->shapes[xsno].nv;
  xv = g->shapes[xsno].xv;
  /* this should be impossible ... */
  if( n == 2 ){
    return(imannulus(g, rno, sno, flag, type, x, y, xcen, ycen, xv[0], xv[1]));
  }
  if( flag ){
    /* if its not somewhere inside the entire region we lose ... */
    if( !imannulus(g, 0, xsno, flag, type, x, y, xcen, ycen, xv[0], xv[n-1]) ){
      return(0);
    }
    /* look through all of them to find the right one */
    for(i=0; i<n; i++){
      if( imannulus(g, rno+i, sno+i, flag, type, x, y, xcen, ycen,
		  xv[i], xv[i+1]) ){
	return(1);
      }
    }
    return(0);
  }
  /* for excludes, we have to check that we are not in any of them */
  else{
    /* if its not somewhere inside the entire region we win ... */
    if( !imannulus(g, 0, xsno, 1, type, x, y, xcen, ycen, xv[0], xv[n-1]) ){
      return(1);
    }
    return(0);
  }
}

#ifdef __STDC__
int
imvbox(GFilt g, int rno, int sno, int flag, int type,
       double x, double y, double xcen, double ycen, ...)
{
  int i, j, n;
  int maxpts;
  int xsno;
  double ang;
  double *xv;
  va_list args;
  va_start(args, ycen);
#else
int imvbox(va_alist) va_dcl
{
  GFilt g;
  int rno, sno, flag, type;
  double x, y;
  double xcen, ycen;
  double ang;
  double *xv;
  int i, j, n;
  int maxpts;
  int xsno;
  va_list args;
  va_start(args);
  g  = va_arg(args, GFilt);
  rno  = va_arg(args, int);
  sno  = va_arg(args, int);
  flag  = va_arg(args, int);
  type  = va_arg(args, int);
  x  = va_arg(args, double);
  y  = va_arg(args, double);
  xcen  = va_arg(args, double);
  ycen  = va_arg(args, double);
#endif
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( !g->shapes[xsno].xv ){
    maxpts = MASKINC;
    g->shapes[xsno].xv = (double *)calloc(maxpts, sizeof(double));
    g->shapes[xsno].nv = 0;
    while( 1 ){
      if( g->shapes[xsno].nv >= maxpts ){
        maxpts += MASKINC;
        g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  					      maxpts*sizeof(double));
      }
      g->shapes[xsno].xv[g->shapes[xsno].nv] = va_arg(args, double);
      if( feq(g->shapes[xsno].xv[g->shapes[xsno].nv],PSTOP)   &&
  	feq(g->shapes[xsno].xv[g->shapes[xsno].nv-1],PSTOP) ){
        g->shapes[xsno].nv--;
        break;
      }
      g->shapes[xsno].nv++;
    }
    va_end(args);
    g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  	  	        g->shapes[xsno].nv*sizeof(double));
  }
  n = g->shapes[xsno].nv;
  xv = g->shapes[xsno].xv;
  ang = xv[--n];
  /* this should be impossible ... */
  if( n == 2 ){
    return(imbox(g, rno, sno, flag, type, x, y,
		 xcen, ycen, xv[0], xv[1], ang));
  }
  if( flag ){
    /* if its not somewhere inside the entire region we lose ... */
    if( !imbox(g, 0, xsno, flag, type, x, y, xcen, ycen, xv[n-2], xv[n-1],
	       ang) ){
      return(0);
    }
    /* if its in the inner region we lose */
    if( imbox(g, 0, xsno+1, flag, type, x, y, xcen, ycen, xv[0], xv[1], ang) ){
      return(0);
    }
    /* look through all of them to find the right one */
    for(i=2, j=0; i<n; i+=2, j++){
      if( imbox(g, rno+j, sno+j, flag, type, x, y, xcen, ycen,
	      xv[i], xv[i+1], ang) ){
	return(1);
      }
    }
    return(0);
  }
  /* for excludes, we have to check that we are not in any of them */
  else{
    /* if its not somewhere inside the entire region we win ... */
    if( !imbox(g, 0, xsno, 1, type, x, y, xcen, ycen, xv[n-2], xv[n-1], ang) ){
      return(1);
    }
    /* if its in the inner region we win */
    else if( imbox(g, 0, xsno+1, 1, type, x, y, xcen, ycen, xv[0], xv[1], ang) ){
      return(1);
    }
    return(0);
  }
}

#ifdef __STDC__
int
imvellipse(GFilt g, int rno, int sno, int flag, int type,
	   double x, double y, double xcen, double ycen, ...)
{
  int i, j, n;
  int maxpts;
  int xsno;
  double ang;
  double *xv;
  va_list args;
  va_start(args, ycen);
#else
int imvellipse(va_alist) va_dcl
{
  GFilt g;
  int rno, sno, flag, type;
  double x, y;
  double xcen, ycen;
  double ang;
  double *xv;
  int i, j, n;
  int maxpts;
  int xsno;
  va_list args;
  va_start(args);
  g  = va_arg(args, GFilt);
  rno  = va_arg(args, int);
  sno  = va_arg(args, int);
  flag  = va_arg(args, int);
  type  = va_arg(args, int);
  x  = va_arg(args, double);
  y  = va_arg(args, double);
  xcen  = va_arg(args, double);
  ycen  = va_arg(args, double);
#endif
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( !g->shapes[xsno].xv ){
    maxpts = MASKINC;
    g->shapes[xsno].xv = (double *)calloc(maxpts, sizeof(double));
    g->shapes[xsno].nv = 0;
    while( 1 ){
      if( g->shapes[xsno].nv >= maxpts ){
        maxpts += MASKINC;
        g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  					      maxpts*sizeof(double));
      }
      g->shapes[xsno].xv[g->shapes[xsno].nv] = va_arg(args, double);
      if( feq(g->shapes[xsno].xv[g->shapes[xsno].nv],PSTOP)   &&
  	feq(g->shapes[xsno].xv[g->shapes[xsno].nv-1],PSTOP) ){
        g->shapes[xsno].nv--;
        break;
      }
      g->shapes[xsno].nv++;
    }
    va_end(args);
    g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  	  	        g->shapes[xsno].nv*sizeof(double));
  }
  n = g->shapes[xsno].nv;
  xv = g->shapes[xsno].xv;
  ang = xv[--n];
  /* this should be impossible ... */
  if( n == 2 ){
    return(imellipse(g, rno, sno, flag, type, x, y,
		     xcen, ycen, xv[0], xv[1], ang));
  }
  if( flag ){
    /* if its not somewhere inside the entire region we lose ... */
    if( !imellipse(g, 0, xsno, flag, type, x, y, xcen, ycen, xv[n-2], xv[n-1],
		   ang) ){
      return(0);
    }
    /* if its in the inner region we lose */
    if( imellipse(g, 0, xsno+1, flag, type, x, y, xcen, ycen, xv[0], xv[1],
		  ang) ){
      return(0);
    }
    /* look through all of them to find the right one */
    for(i=2, j=0; i<n; i+=2, j++){
      if( imellipse(g, rno+j, sno+j, flag, type, x, y, xcen, ycen,
		  xv[i], xv[i+1], ang) ){
	return(1);
      }
    }
    return(0);
  }
  /* for excludes, we have to check that we are not in any of them */
  else{
    /* if its not somewhere inside the entire region we lose ... */
    if( !imellipse(g, 0, xsno, 1, type, x, y, xcen, ycen, xv[n-2], xv[n-1],
		   ang) ){
      return(1);
    }
    /* if its in the inner region we win */
    if( imellipse(g, 0, xsno+1, 1, type, x, y, xcen, ycen, xv[0], xv[1], ang) ){
      return(1);
    }
    return(0);
  }
}

#ifdef __STDC__
int
imvpie(GFilt g, int rno, int sno, int flag, int type,
       double x, double y, double xcen, double ycen, ...)
{
  int i, n;
  int maxpts;
  int xsno;
  double *xv;
  va_list args;
  va_start(args, ycen);
#else
int imvpie(va_alist) va_dcl
{
  GFilt g;
  int rno, sno, flag, type;
  double x, y;
  double xcen, ycen;
  double *xv;
  int i, n;
  int maxpts;
  int xsno;
  va_list args;
  va_start(args);
  g  = va_arg(args, GFilt);
  rno  = va_arg(args, int);
  sno  = va_arg(args, int);
  flag  = va_arg(args, int);
  type  = va_arg(args, int);
  x  = va_arg(args, double);
  y  = va_arg(args, double);
  xcen  = va_arg(args, double);
  ycen  = va_arg(args, double);
#endif
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( !g->shapes[xsno].xv ){
    maxpts = MASKINC;
    g->shapes[xsno].xv = (double *)calloc(maxpts, sizeof(double));
    g->shapes[xsno].nv = 0;
    while( 1 ){
      if( g->shapes[xsno].nv >= maxpts ){
        maxpts += MASKINC;
        g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  					      maxpts*sizeof(double));
      }
      g->shapes[xsno].xv[g->shapes[xsno].nv] = va_arg(args, double);
      if( feq(g->shapes[xsno].xv[g->shapes[xsno].nv],PSTOP)   &&
  	feq(g->shapes[xsno].xv[g->shapes[xsno].nv-1],PSTOP) ){
        g->shapes[xsno].nv--;
        break;
      }
      g->shapes[xsno].nv++;
    }
    va_end(args);
    g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  	  	        g->shapes[xsno].nv*sizeof(double));
  }
  n = g->shapes[xsno].nv;
  xv = g->shapes[xsno].xv;
  /* this should be impossible ... */
  if( n == 2 ){
    return(impie(g, rno, sno, flag, type, x, y,
		 xcen, ycen, xv[0], xv[1]));
  }
  if( flag ){
    /* if its not somewhere inside the entire region we lose ... */
    if( !impie(g, 0, xsno, flag, type, x, y, xcen, ycen, xv[0], xv[n-1]) ){
      return(0);
    }
    /* look through all of them to find the right one */
    for(i=0; i<n; i++){
      if( impie(g, rno+i, sno+i, flag, type, x, y, xcen, ycen, xv[i], xv[i+1]) ){
	return(1);
      }
    }
    return(0);
  }
  /* for excludes, we have to check that we are not in any of them */
  else{
    /* if its not somewhere inside the entire region we lose ... */
    if( !impie(g, 0, xsno, 1, type, x, y, xcen, ycen, xv[0], xv[n-1]) ){
      return(1);
    }
    return(1);
  }
}

#ifdef __STDC__
int
imvpoint(GFilt g, int rno, int sno, int flag, int type,
	 double x, double y, ...)
{
  int i, j, n;
  int maxpts;
  int xsno;
  double *xv;
  va_list args;
  va_start(args, y);
#else
int imvpoint(va_alist) va_dcl
{
  GFilt g;
  int rno, sno, flag, type;
  double x, y;
  double *xv;
  int i, j, n;
  int maxpts;
  int xsno;
  va_list args;
  va_start(args);
  g  = va_arg(args, GFilt);
  rno  = va_arg(args, int);
  sno  = va_arg(args, int);
  flag  = va_arg(args, int);
  type  = va_arg(args, int);
  x  = va_arg(args, double);
  y  = va_arg(args, double);
#endif
  xsno = (g->nshapes+1)+((sno-1)*XSNO);
  if( !g->shapes[xsno].xv ){
    maxpts = MASKINC;
    g->shapes[xsno].xv = (double *)calloc(maxpts, sizeof(double));
    g->shapes[xsno].nv = 0;
    while( 1 ){
      if( g->shapes[xsno].nv >= maxpts ){
        maxpts += MASKINC;
        g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  					      maxpts*sizeof(double));
      }
      g->shapes[xsno].xv[g->shapes[xsno].nv] = va_arg(args, double);
      if( feq(g->shapes[xsno].xv[g->shapes[xsno].nv],PSTOP)   &&
  	feq(g->shapes[xsno].xv[g->shapes[xsno].nv-1],PSTOP) ){
        g->shapes[xsno].nv--;
        break;
      }
      g->shapes[xsno].nv++;
    }
    va_end(args);
    g->shapes[xsno].xv = (double *)realloc(g->shapes[xsno].xv,
  	  	        g->shapes[xsno].nv*sizeof(double));
  }
  n = g->shapes[xsno].nv;
  xv = g->shapes[xsno].xv;
  /* look through all of them to find the right one */
  for(i=0, j=0; i<n; i+=2, j++){
    if( impoint(g, rno+j, sno+j, flag, type, x, y, xv[i], xv[i+1]) ){
      return(1);
    }
  }
  return(0);
}

void imimagemaski(GFilt g, int UNUSED(rno), int UNUSED(sno),
                  int UNUSED(flag), int UNUSED(type),
		  double UNUSED(x), double UNUSED(y))
{
  int i, j;
  int got;
  int fsize;
  int mblock;
  FilterMask xmasks;

  /* NB: do not use x and y variables, they have bogus values */
  /* scale mask x, y values to match the incoming image section */
  mblock = (int)(((double)((g->xmax - g->xmin + 1)/g->block)/(double)g->maskdim) + 0.5);
  if( mblock < 1 ){
    g->masks = NULL;
    g->nmask = 0;
  }
  /* copy all masks and translate x,y positions as needed */
  fsize = g->nmask * sizeof(FilterMaskRec) * mblock;
  xmasks = (FilterMask)calloc(1, fsize);
  for(got=0, i=0; i<g->nmask; i++){
    xmasks[got].region = g->masks[i].region;
    xmasks[got].y = (g->masks[i].y - 1.0) * mblock + 1.0;
    xmasks[got].xstart = (g->masks[i].xstart - 1.0) * mblock + 1.0;
    xmasks[got].xstop = (g->masks[i].xstop - 1.0) * mblock + 1.0;
    /* replicate the segment up to the block factor */
    for(j=1; j<mblock; j++){
      xmasks[got+j].region = xmasks[got].region;
      xmasks[got+j].y = xmasks[got].y+j;
      xmasks[got+j].xstart = xmasks[got].xstart;
      xmasks[got+j].xstop = xmasks[got].xstop;
    }
    got += mblock;
  }
  /* sort by y and x */
  qsort(xmasks, got, sizeof(FilterMaskRec), imagemaskcmp);
  /* we don't free previous masks, just overwrite, because they were not
     allocated in the first place */
  /* if( g->masks ) free(g->masks); */
  /* set up new mask records */
  g->masks = xmasks;
  g->nmask = got;

  /* now mark each y line that has a y mask value */
  for(i=0; i<got; i++){
    if( !g->ybuf[g->masks[i].y] )
      g->ybuf[g->masks[i].y] = i+1;
  }
}

int imimagemask(GFilt g, int UNUSED(rno), int UNUSED(sno),
                int UNUSED(flag), int UNUSED(type),
		double x, double y)
{
  int i;
  int ix, iy;

  if( g->nmask == 0 )
    return(0);
  if( g->evsect ){
    if( g->usebinsiz ){
      x = (int)((x - g->tlminx)/g->binsizx + 1.0);
      y = (int)((y - g->tlminy)/g->binsizy + 1.0);
    }
    else{
      x = (int)((x - g->tlminx) + 1.0);
      y = (int)((y - g->tlminy) + 1.0);
    }
    x = (int)((x - g->xmin)/g->block + 1.0);
    y = (int)((y - g->ymin)/g->block + 1.0);
    if(y < g->y0) return 0;
    if(y > g->y1) return 0;
    if(x < g->x0) return 0;
    if(x > g->x1) return 0;
  }
  ix = (int)x;
  iy = (int)y;
  /* look for mask segment containing ix, iy */
  i = g->ybuf[iy];
  /* ybuf contains offset+1 of first mask record containing iy */
  if( i != 0 ){
    i--;
    for(; i<g->nmask; i++){
      if( g->masks[i].y > iy ){
	return(0);
      }
      if( (ix >= g->masks[i].xstart) && (ix <= g->masks[i].xstop) ){
	g->rid = g->masks[i].region;
	return(1);
      }
    }
  }
  return(0);
}

