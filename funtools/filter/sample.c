
#define min(x,y)	(((x)<(y))?(x):(y))
#define max(x,y)	(((x)>(y))?(x):(y))


#define CONVERT 0
#define FILTER (pha==1&&pi>3)
#define ESIZE 20
#define GET_pha LoadColumn(eptr+4,2,1,CONVERT,&pha)
#define GET_pi LoadColumn(eptr+6,2,1,CONVERT,&pi)
#define GET GET_pha;GET_pi;
short pha;
short pi;

#define  RADIAN          57.295779513082320877
#define  RADTODEG(r)     ((r)*RADIAN)
#define  DEGTORAD(d)     ((d)/RADIAN)
#define  INSIDE(a,r1,r2) (((a)>(r1))&&((a)<=((r2)<(r1)?(r2+360.0):(r2))))

static double d;

#define Annulus(X,Y,x,y,ri,ro)  ((((X-x)*(X-x))+((Y-y)*(Y-y))<=(ro*ro))&& (((X-x)*(X-x))+((Y-y)*(Y-y))>(ri*ri)))
#define annulus(x,y,ri,ro) Annulus(_X_,_Y_,x,y,ri,ro)

#define Circle(X,Y,x,y,r) (((X-x)*(X-x))+((Y-y)*(Y-y))<=(r*r))
#define circle(x,y,r) Circle(_X_,_Y_,x,y,r)

#define Ellipse(X,Y,x,y,a,b) (((X-x)*(X-x))/(double)(a*a))+(((Y-y)*(Y-y))/(double)(b*b))<=1.0)
#define ellipse(x,y,a,b)  Ellipse(_X_,_Y_,x,y,a,b)

#define Pie(X,Y,x,y,r1,r2) ((X==x)&&(Y==y)?1:(INSIDE(((d=RADTODEG(atan2(Y-y,X-x)))<90?d+270.0:d-90.0),r1,r2)))
#define pie(x,y,r1,r2) Pie(_X_,_Y_,x,y,r1,r2)

#define Point(X,Y,x,y) ((X==x)&&(Y==y))
#define point(x,y) Point(_X_,_Y_,x,y)

#define Box(X,Y,x,y,w,h) ((X>(x-(double)(w/2)))&&(X<=(x+(double)(w/2)))&&(Y>(y-(double)(h/2)))&&(Y<=(y+(double)(h/2))))
#define box(x,y,w,h)  Box(_X_,_Y_,x,y,w,h)

LoadColumn(eptr, bytes, iter, convert, obuf)
     char *eptr;
     int bytes, iter, convert;
     char *obuf;
{
  char *optr=obuf;
  int i, j;
  for(i=0; i<iter; i++){  
    optr = obuf + (i*bytes);
    if( convert ){
      for(j=0; j<bytes; j++)
        optr[j] = *(eptr+bytes-1-j);
    }
    else{
      for(j=0; j<bytes; j++)
        optr[j] = *(eptr+j);
    }
  }
}

main(argc, argv)
     int argc;
     char **argv;
{
  char *ebuf=(char *)0, *eptr, *etop, *rptr;
  int get, got;
  while( read(0, &get, 4) >0 ){
    ebuf = (char *)malloc(get);
    for(etop=ebuf; get>0; etop += got, get -= got){
      if( (got=read(0, etop, get)) <=0 )
	break;
    }
    for(rptr=ebuf, eptr=ebuf; eptr<etop; rptr++, eptr += ESIZE){
      GET;
      *rptr = FILTER;
    }
    got = ((etop - ebuf)/ESIZE);
    write(1, &got, 4);
    write(1, ebuf, got);
    free(ebuf);
  }
  unlink(argv[0]);
}

