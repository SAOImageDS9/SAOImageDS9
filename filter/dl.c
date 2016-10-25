#ifdef USE_DL

#include <stdio.h>
#include <dl.h>
#include <gio.h>
#include <prsetup.h>

int have_dl = 1;

#ifdef ANSI_FUNC
void *
DLOpen(char *name)
#else
void *DLOpen(name)
     char *name;
#endif
{
  void *d;
  if( !(d=dlopen(name, RTLD_LAZY)) )
    gerror(stderr, "%s\n", dlerror());
  return d;
}

#ifdef ANSI_FUNC
void *
DLSym(void *dl, char *name)
#else
void *DLSym(dl, name)
     void *dl;
     char *name;
#endif
{
  void *d;
  if( !(d=dlsym(dl, name)) )
    gerror(stderr, "%s\n", dlerror());
  return d;
}

#ifdef ANSI_FUNC
int
DLClose(void *dl)
#else
int DLClose(dl)
     void *dl;
#endif
{
  if( dl )
    return dlclose(dl);
  else
    return -1;
}

#else

int have_dl = 0;

#endif
