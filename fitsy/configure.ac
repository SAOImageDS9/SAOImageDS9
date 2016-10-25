#	This file is an input file used by the GNU "autoconf" program to
#	generate the file "configure", which is run during XPA installation
#	to configure the system for the local environment.
AC_INIT(fitsy, 1.0.0, saord@cfa.harvard.edu, fitsy)

AC_CONFIG_HEADERS([conf.h])
AC_CONFIG_SRCDIR(./fitsy.h)
AC_CANONICAL_HOST

#
# checks that we use in most projects
#
AC_PROG_CC

AC_EXEEXT
if test x"${EXEEXT}" = "xno"; then
  EXEEXT=""
fi

AC_C_LONG_LONG

AC_PROG_RANLIB

AC_HEADER_STDC
AC_CHECK_HEADERS(malloc.h)
AC_CHECK_HEADERS(getopt.h)
AC_CHECK_HEADERS(values.h)
AC_CHECK_HEADERS(dlfcn.h)
AC_CHECK_HEADERS(sys/un.h)
AC_CHECK_HEADERS(sys/mman.h)
AC_CHECK_HEADERS(sys/ipc.h)
case $host_os in
    *cygwin*|*Cygwin* )
        ;;
    * )
        AC_CHECK_HEADERS(sys/shm.h)
        ;;
esac

AC_CHECK_TYPES([socklen_t], [], [], [#include <sys/socket.h>])

AC_C_CONST

AC_CHECK_FUNCS(strchr memcpy snprintf)

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

DEFLIB="libfitsy.a"
AC_MSG_CHECKING(for alternate target library)
AC_ARG_WITH(altlib, [ --with-altlib=LIB  library name],
	alt_lib=yes LIB=$withval, alt_lib=no LIB=$DEFLIB)
AC_MSG_RESULT($alt_lib ($LIB))
AC_SUBST(LIB)
AC_SUBST(DEFLIB)

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
  LLIB='$(LIB)'
fi
AC_SUBST(LLIB)
AC_MSG_RESULT($fun_ok)

AC_ARG_ENABLE(dl, [  --enable-dl    allow use of dynamic loading if available],
    [fun_ok=$enableval], [fun_ok=no])
if test "$fun_ok" = "yes"; then
AC_MSG_CHECKING([for dynamic loading (with gcc) ])
if test "$CC" = "gcc" -o `$CC -v 2>&1 | grep -c gcc` != "0" ; then
  using_dl="yes"
  AC_CHECK_LIB(dl, dlopen, have_dl=yes, have_dl=no)
  if test "$have_dl" = yes; then
    USE_DL="-DUSE_DL=1"
    fpic="yes"
    EXTRA_LIBS="$EXTRA_LIBS -ldl"  
    if test `$CC -v -rdynamic 2>&1 | grep -c unrecognized` = "0" ; then
      LDFLAGS="$LDFLAGS -rdynamic"
    fi
  else
    AC_CHECK_LIB(c, dlopen, have_dl=yes, have_dl=no)
    if test "$have_dl" = yes; then
      USE_DL="-DUSE_DL=1"
      fpic="yes"
      if test `$CC -v -rdynamic 2>&1 | grep -c unrecognized` = "0" ; then
        LDFLAGS="$LDFLAGS -rdynamic"
      fi
    else
      using_dl="no"
    fi
  fi
else
  using_dl="no"
fi
AC_MSG_RESULT([$using_dl ($CC)])
fi
AC_SUBST(USE_DL)

AC_MSG_CHECKING([$host_os configuration])
PRE=""
POST="|\& cat"
case $host_os in
    *cygwin*|*Cygwin* )
        AC_DEFINE([HAVE_CYGWIN])
        AC_MSG_RESULT(flagging Cygwin)
	PRE="sh -c {"
	POST="}"
        ;;
    *mingw32*|*Mingw32*)
        CFLAGS="$CFLAGS -mconsole"
	EXTRA_LIBS="$EXTRA_LIBS -lwsock32"
        AC_DEFINE([HAVE_MINGW32])
        AC_MSG_RESULT(flagging MinGW)
        ;;
    *darwin*|*Darwin*)
	LDFLAGS="$LDFLAGS $CFLAGS"
        G=`$CC -v 2>&1 | grep version | awk '{print $3}' | awk -F. '{print $1$2}'`
        if test x"$G" != x -a "$G" -lt 42; then
	  CFLAGS="$CFLAGS -no-cpp-precomp"
        fi
	CFLAGS="$CFLAGS -fno-common"
        if test x"$fpic" = x"yes" ; then
	  CFLAGS="$CFLAGS -fPIC"
          AC_MSG_RESULT([adding -fno-common, -fPIC to CFLAGS])
	else
          AC_MSG_RESULT([adding -fno-common to CFLAGS])
	fi
	;;
    * )
        if test x"$fpic" = x"yes" ; then
          if test "$CC" = "gcc" -o `$CC -v 2>&1 | grep -c gcc` != "0" ; then
	    CFLAGS="$CFLAGS -fPIC"
	    AC_MSG_RESULT(adding -fPIC to gcc)
	  else
            AC_MSG_RESULT(none)
	  fi
	else
            AC_MSG_RESULT(none)
	fi
        ;;
esac

AC_SUBST(EXTRA_LIBS)
AC_SUBST(EXTRA_OBJS)

AC_CONFIG_FILES(Makefile)

AC_OUTPUT
