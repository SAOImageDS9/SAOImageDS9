#	This file is an input file used by the GNU "autoconf" program to
#	generate the file "configure", which is run during XPA installation
#	to configure the system for the local environment.
AC_INIT(xpa, 2.1.20, eric@cfa.harvard.edu, xpa)

AC_CONFIG_HEADERS([conf.h])
AC_CONFIG_SRCDIR(./xpa.h)
AC_CANONICAL_HOST

# save LDFLAGS
XLDFLAGS="$LDFLAGS"

#
# checks that we use in most projects
#
AC_PROG_CC

AC_EXEEXT
if test x"${EXEEXT}" = "xno"; then
  EXEEXT=""
fi

AC_CHECK_SIZEOF(long)
SZ_LONG=$ac_cv_sizeof_long
AC_SUBST(SZ_LONG)

AC_PROG_RANLIB

AC_HEADER_STDC
AC_CHECK_HEADERS(malloc.h)
AC_CHECK_HEADERS(getopt.h)
AC_CHECK_HEADERS(pwd.h)
AC_CHECK_HEADERS(values.h)
AC_CHECK_HEADERS(dlfcn.h)
AC_CHECK_HEADERS(setjmp.h)
AC_CHECK_HEADERS(sys/un.h)
AC_CHECK_HEADERS(sys/shm.h)
AC_CHECK_HEADERS(sys/mman.h)
AC_CHECK_HEADERS(sys/ipc.h)
AC_CHECK_HEADERS(sys/select.h)

AC_CHECK_TYPES([socklen_t], [], [], [#include <sys/socket.h>])

AC_C_CONST

AC_CHECK_FUNCS(strchr memcpy snprintf atexit setenv getaddrinfo)

AC_CHECK_FUNC(connect)
if test $ac_cv_func_connect = no; then
  AC_CHECK_LIB(socket, connect,  EXTRA_LIBS="$EXTRA_LIBS -lsocket")
fi                                                                          
AC_CHECK_FUNC(gethostbyname)
if test $ac_cv_func_gethostbyname = no; then
  AC_CHECK_LIB(nsl, gethostbyname, EXTRA_LIBS="$EXTRA_LIBS -lnsl")
fi                                                                          
# AC_CHECK_LIB(db, snprintf, EXTRA_LIBS="$EXTRA_LIBS -ldb")

#
# checks specific to this project
# 

AC_MSG_CHECKING(for threaded xpans)
AC_ARG_ENABLE(threaded-xpans, [  --enable-threaded-xpans    build threaded xpans],
    [fun_ok=$enableval], [fun_ok=no])
if test "$fun_ok" = "yes"; then
  AC_MSG_RESULT($fun_ok)
  AC_CHECK_LIB(pthread, pthread_create, have_pthread=yes)
  if test  x"${have_pthread}" = x"yes"; then
    AC_DEFINE(HAVE_LIBPTHREAD)
    AC_DEFINE(_REENTRANT)
    TLIB="-lpthread"
  else
    AC_MSG_ERROR([no threads found ... can't use enable-threaded-xpans], 1)
  fi
else
  AC_MSG_RESULT($fun_ok)
fi
AC_SUBST(TLIB)

AC_MSG_CHECKING(for shared library build)
AC_ARG_ENABLE(shared, [  --enable-shared    build shared libraries],
    [fun_ok=$enableval], [fun_ok=no])
if test "$fun_ok" != "no"; then
  fpic="yes"
  DOSHARED=shlib
  AC_SUBST(DOSHARED)
  if test "$fun_ok" = "link"; then
    LLIB="-L. -l$PACKAGE_NAME"
  else
    LLIB='$(LIB)'
  fi
else
  DOSHARED=""
  LLIB='$(LIB)'
fi
AC_SUBST(LLIB)
AC_MSG_RESULT($fun_ok)

AC_MSG_CHECKING(for request to use posix_spawn)
AC_ARG_ENABLE(posix_spawn, [  --enable-posix_spawn    use posix_spawn() if available],
    [fun_ok=$enableval], [fun_ok=no])
AC_MSG_RESULT($fun_ok)
if test "$fun_ok" = "yes"; then
  AC_CHECK_FUNCS(posix_spawn _NSGetEnviron)
  AC_CHECK_HEADERS(crt_externs.h)
fi

AC_PATH_XTRA
if test x"${have_x}" = "xyes"; then
    AC_DEFINE(HAVE_XT)
fi

SC_PATH_TCLCONFIG
if test x"${no_tcl}" = x ; then
    SC_LOAD_TCLCONFIG
    if test -r $TCL_PREFIX/include/tcl.h; then
      TCL_CFLAGS="$TCL_INCLUDE_SPEC"
      if test x"$DOSHARED" != x -a x"$TCL_SUPPORTS_STUBS" = x1; then
        TCL_LIBS="$TCL_STUB_LIB_SPEC"
        TCL_CFLAGS="$TCL_CFLAGS -DUSE_TCL_STUBS=1"
        AC_MSG_RESULT([Tcl support will utilize stubs library: $TCL_LIBS])
      else
        TCL_LIBS="$TCL_LIB_SPEC"
        AC_MSG_RESULT([Tcl support will utilize library: $TCL_LIBS])
      fi
      AC_DEFINE(HAVE_TCL)
    else
      if test x"${with_tclconfig}" != x ; then
        TCL_CFLAGS="$TCL_INCLUDE_SPEC"
        TCL_LIBS="$TCL_LIB_SPEC"
        AC_DEFINE(HAVE_TCL)
        AC_MSG_RESULT([warning: tcl.h not found with --with-tcl ... tcl build might fail])
      else
        AC_MSG_RESULT([$TCL_PREFIX/include/tcl.h not found ... use --with-tcl to build tcl explicitly])
      fi
    fi
fi
AC_SUBST(TCL_CFLAGS)
AC_SUBST(TCL_LIBS)

AC_MSG_CHECKING(for incorporation of thread support)
AC_ARG_WITH(threads,
    [  --with-threads          build for use in threaded programs], thr=1, thr=0)
if test x"$thr" = x1 ; then
  AC_MSG_RESULT(yes)
  CFLAGS="$CFLAGS -D_REENTRANT"
else
  AC_MSG_RESULT(no)
fi

AC_MSG_CHECKING(for gtk)
AC_ARG_WITH(gtk,
    [  --with-gtk=<path>       include directory for gtk e.g. /usr/include/gtk-1.2], havelib=1, havelib=0)
if test x"$havelib" = x1 ; then
  AC_MSG_RESULT(yes ($withval))
  GTK_CFLAGS="`pkg-config gtk+-2.0 --cflags` -DHAVE_GTK=1"
  GTK_LIBS="`pkg-config gtk+-2.0 --libs`"
  AC_DEFINE(HAVE_GTK)
else
  GTK_CFLAGS=""
  GTK_LIBS=""
  AC_MSG_RESULT(no)
fi
AC_SUBST(GTK_CFLAGS)
AC_SUBST(GTK_LIBS)

# restore LDFLAGS
LDFLAGS="$LDFLAGS $XLDFLAGS"

AC_MSG_CHECKING([$host_os configuration])
case $host_os in
    *cygwin*|*Cygwin* )
        AC_DEFINE(HAVE_CYGWIN)
        AC_MSG_RESULT([flagging Cygwin])
        ;;
    *mingw32*|*Mingw32*)
        CFLAGS="$CFLAGS -mconsole"
	EXTRA_LIBS="$EXTRA_LIBS -lwsock32"
        AC_DEFINE(HAVE_MINGW32)
        AC_MSG_RESULT([flagging MinGW])
        ;;
    *darwin*|*Darwin*)
	LDFLAGS="$LDFLAGS $CFLAGS"
        if test x"$TCL_PREFIX" = x"/usr/local"; then
	  TCL_CFLAGS=""
          AC_MSG_RESULT([removing -I/usr/local/include])
        fi
	;;
    *osf*|*Osf*)
	  AC_CHECK_LIB(db, snprintf, EXTRA_LIBS="$EXTRA_LIBS -ldb")
        ;;
    * )
        if test x"$fpic" = x"yes" ; then
          if test "$CC" = "gcc" -o `$CC -v 2>&1 | grep -c gcc` != "0" ; then
	    CFLAGS="$CFLAGS -fPIC"
	    AC_MSG_RESULT([adding -fPIC to gcc])
	  else
            AC_MSG_RESULT(none)
	  fi
	else
            AC_MSG_RESULT(none)
	fi
        ;;
esac

AC_SUBST(EXTRA_LIBS)

AC_CONFIG_FILES(Makefile)

# generate pkg-config meta-data file
AC_CONFIG_FILES(xpa.pc)

AC_OUTPUT
