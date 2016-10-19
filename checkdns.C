// Copyright (C) 1999-2015
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <setjmp.h>
#include <netdb.h>

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include <tcl.h>

#define SZ_LINE 2048
static int debug =0;

// alarm signal handler
static sigjmp_buf alarmbuf;
static void alarmHandler(int dummy)
{
  siglongjmp(alarmbuf, 1);
}

extern "C" {
  int Tclcheckdns_Init(void *vinterp);
};

static int checkdns(char *name, int delay, int cflag)
{
  int result =0;
 
  // get temp name, look for port
  char tbuf[SZ_LINE];
  unsigned int port=80;
  if (name && *name) {
    char* ss=NULL;
    strncpy(tbuf, name, SZ_LINE-1);
    if ((ss=strchr(tbuf, ':'))) {
      *ss = '\0';
      port = atoi(ss+1);
    }
  }
  else
    *tbuf = '\0';

  // start the alarm, if necessary
  struct sigaction sigact, osigact;
  if (delay>0) {
    if (sigsetjmp(alarmbuf, 1)) {
      if (debug)
	cerr << "alarm activated" << endl;

      result= 1;
      goto done;
    }
    else {
      sigact.sa_handler = alarmHandler;
      sigemptyset(&sigact.sa_mask);
      sigact.sa_flags = 0;
      sigaction(SIGALRM, &sigact, &osigact);

      alarm(delay);
    }
  }

  // get name of host we are interested in
  char host[SZ_LINE];
  if (*tbuf)
    strncpy(host, tbuf, SZ_LINE-1);
  else {
    // use current host
    if (gethostname(host, SZ_LINE) < 0) {
      result =2;
      goto done;
    }
    else if (debug)
      cerr << "gethostname: " << host << endl;
  }

  // try to get info on this host
  struct hostent* h;
  if (!(h=gethostbyname(host))) {
    result =3;
    goto done;
  }
  else if (debug)
    cerr << "gethostbyname: " << h->h_name << '(' << port << ')' << endl;

  // connect, if necessary
  if (cflag) {
    unsigned int ip;
    memcpy(&ip, h->h_addr_list[0], (size_t)h->h_length);
    ip = ntohl(ip);
    int fd;
    if ((fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
      result =4;
      goto done;
    }
    struct sockaddr_in sock_in;
    memset((char *)&sock_in, 0, sizeof(sock_in));
    sock_in.sin_family = AF_INET;
    sock_in.sin_addr.s_addr = htonl(ip);
    sock_in.sin_port = htons(port);
    int got = connect(fd, (struct sockaddr *)&sock_in, sizeof(sock_in));
    close(fd);
    if (got < 0) {
      result =5;
      goto done;
    }
    else if (debug)
      cerr << "connect succeeded" << endl;
  }

 done:
  if (delay) {
    alarm(0);
    sigaction(SIGALRM, &osigact, NULL);
  }

  return result;
}

static int TclcheckdnsCmd(ClientData clientData, Tcl_Interp *interp,
			  int objc, Tcl_Obj *CONST objv[])
{
  if (objc < 3) {
    Tcl_WrongNumArgs(interp, 1, objv, "host delay [connect]");
    return TCL_ERROR;
  }

  char* host =NULL;
  char* ss = Tcl_GetStringFromObj(objv[1], NULL);
  if (ss && *ss)
    host = ss;

  int delay=5;
  char* tt = Tcl_GetStringFromObj(objv[2], NULL);
  if (tt && *tt)
    delay = atoi(tt);

  int cflag=0;
  if (objc >= 4) {
    char* uu = Tcl_GetStringFromObj(objv[3], NULL);
    if (uu && *uu)
      cflag = atoi(uu);
  }

  ostringstream str;
  str << checkdns(host, delay, cflag) << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);

  return TCL_OK;
}

int Tclcheckdns_Init(void *vinterp)
{
  Tcl_Interp *interp = (Tcl_Interp *)vinterp;

  if (Tcl_InitStubs(interp, TCL_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  Tcl_CreateObjCommand(interp, "checkdns", TclcheckdnsCmd,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION) != TCL_OK)
    return TCL_ERROR;

  return TCL_OK;
}
