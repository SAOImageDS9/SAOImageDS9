dnl  Process this file with autoconf to produce a configure script
AC_REVISION($Revision$)

dnl   This configure file is known to work with autoconf-2.57,
dnl   automake versions 1.6.3 and 1.7.5, and libtool versions 1.4.2 and
dnl   1.5.  It should work with autoconf versions 2.50 or better, and
dnl   automake 1.6 or better.

dnl   Initialisation: package name and version number
dnl   Keep the canonical version in version.number so CMake and Autotools
dnl   both read the same value.
m4_define([project_version], m4_esyscmd_s([tr -d '\n' < version.number]))
m4_define([v_maj], m4_esyscmd_s([awk -F. 'NR==1 {print $1}' version.number]))
m4_define([v_min], m4_esyscmd_s([awk -F. 'NR==1 {print $2}' version.number]))
m4_define([v_mic], m4_esyscmd_s([awk -F. 'NR==1 {print $3}' version.number]))
AC_INIT([ast],[project_version],[starlink@jiscmail.ac.uk])
dnl   Expose individual version components for src/version.h.in substitution.
AC_SUBST([PACKAGE_VERSION_MAJOR], [v_maj])
AC_SUBST([PACKAGE_VERSION_MINOR], [v_min])
AC_SUBST([PACKAGE_VERSION_RELEASE], [v_mic])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

dnl   Shared library versioning
m4_define([lt_cur], [m4_eval(v_maj + v_min)])
m4_define([lt_rev], [v_mic])
m4_define([lt_age], [v_min])
version_info="lt_cur:lt_rev:lt_age"
AC_SUBST([version_info])

dnl   Require autoconf-2.50 at least
AC_PREREQ([2.69])
dnl   Require Starlink automake
AM_INIT_AUTOMAKE(m4_esyscmd([
  if command -v starconf >/dev/null 2>&1; then
    echo "1.8.2-starlink subdir-objects"
  else
    echo "foreign subdir-objects"
  fi
]))

dnl   Sanity-check: name a file in the source directory
AC_CONFIG_SRCDIR([ast_link.in])

dnl   Detect starconf: if present we're building inside Starlink infrastructure.
dnl   Used to decide whether to generate component.xml and whether to link
dnl   Fortran tests against real Starlink libraries vs standalone stubs.
AC_PATH_PROG([STARCONF], [starconf], [no])
AM_CONDITIONAL([STARLINK_BUILD], [test "x$STARCONF" != "xno"])

#   Checks for programs
AC_PROG_CC
AC_PROG_CPP
LT_INIT
AC_PROG_LN_S

#   Include defaults for Starlink configurations
STAR_DEFAULTS

#   See if the --without-topinclude option has been provided. This sets the
#   automake conditional TOPINCLUDE. By default header files are installed
#   into both includedir and includedir/star. If --without-topinclude is
#   specified when running configure, then the header files are only
#   installed into includedir/star.
AC_ARG_WITH(
      [topinclude],
      AS_HELP_STRING([--without-topinclude],[install headers only in includedir/star - not includedir]),
      if test "$withval" = "yes"; then
         topinclude="1"
      else
         topinclude="0"
      fi,
      topinclude="1")
AM_CONDITIONAL(TOPINCLUDE, test x$topinclude = x1)

#   See if the --with-starmem option has been provided. This sets the
#   preprocesor macro HAVE_STAR_MEM_H.
AC_ARG_WITH(
      [starmem],
      AS_HELP_STRING([--with-starmem],[use starmem library for memory management]),
      AC_DEFINE([HAVE_STAR_MEM_H],[1],[Use the starmem library for memory management]),
)

#   See if the --with-memdebug option has been provided. This sets the
#   preprocesor macro MEM_DEBUG which enables facilities used to track
#   down memory leaks, etc.
AC_ARG_WITH(
      [memdebug],
      AS_HELP_STRING([--with-memdebug],[enable AST memory leak debugging functions]),
      AC_DEFINE([MEM_DEBUG],[1],[enable AST memory leak debugging functions in memory.c]),
)

#   See if the --with-external_pal option has been provided. This sets the
#   preprocesor macro EXTERNAL_PAL which prevents use of the PAL & ERFA
#   library functions that are included in the AST distribution. Suitable
#   link options are used within ast_link(_adam) scripts to pull in libpal.
AC_ARG_WITH([external_pal],
            [ --with-external_pal   Use external PAL and ERFA libraries],
        if test "$withval" = "yes"; then
           external_pal="1"
        else
           external_pal="0"
        fi,
        external_pal="0")
AC_SUBST( EXTERNAL_PAL, $external_pal )
if test "$external_pal" = "1"; then
   AC_SUBST( LIBPAL, "-lpal" )
   AC_DEFINE([EXTERNAL_PAL],[1],[use external PAL and ERFA libraries]),
else
   AC_SUBST( LIBPAL, "" )
fi
AM_CONDITIONAL(EXTERNAL_PAL, test x$external_pal = x1)

#   See if the --with-external_cminpack option has been provided. This sets the
#   preprocesor macro EXTERNAL_CMINPACK which prevents use of the CMINPACK
#   library functions that are included in the AST distribution. Suitable
#   link options are used within ast_link(_adam) scripts to pull in libcminpack.
AC_ARG_WITH([external_cminpack],
            [ --with-external_cminpack   Use external CMINPACK libraries],
        if test "$withval" = "yes"; then
           external_cminpack="1"
        else
           external_cminpack="0"
        fi,
        external_cminpack="0")
AC_SUBST( EXTERNAL_CMINPACK, $external_cminpack )
if test "$external_cminpack" = "1"; then
   AC_SUBST( LIBCMINPACK, "-lcminpack" )
   AC_DEFINE([EXTERNAL_CMINPACK],[1],[use external CMINPACK libraries]),
else
   AC_SUBST( LIBCMINPACK, "" )
fi
AM_CONDITIONAL(EXTERNAL_CMINPACK, test x$external_cminpack = x1)

#  Conditional defining whether we want to support Fortran libraries
#  (e.g. pgplot) and applications. It seems that this must come before
#  any uses of AC_CHECK_LIB as otherwise the library checked using
#  AC_CHECK_LIB is automatically added to the list of linker options
#  created by AC_FC_LIBRARY_LDFLAGS
AC_ARG_WITH([fortran],
            [ --without-fortran   Build package without Fortran support],
        if test "$withval" = "yes"; then
           use_fortran="1"
        else
           use_fortran="0"
        fi,
        use_fortran="1")
AM_CONDITIONAL(NOFORTRAN, test x$use_fortran = x0)
AC_SUBST(FORTRAN, $use_fortran)

#   ast_link needs to be able to link against the Fortran runtime if
#   necessary
if test "$use_fortran" = "1"; then
AC_PROG_FC
AC_FC_LIBRARY_LDFLAGS
dnl  Automake uses F77/FFLAGS for .f files (Fortran 77 fixed form).
dnl  Point F77 at the same compiler as FC.
AC_PROG_F77

dnl  Probe for optional Fortran flags; not all compilers support them.
AST_FFLAGS_EXTRA=
if test -n "$F77"; then
  AC_LANG_PUSH([Fortran 77])
  for flag in -fallow-argument-mismatch -fno-range-check -Wno-real-constant-widening; do
    AC_MSG_CHECKING([whether $F77 accepts $flag])
    ast_save_FFLAGS=$FFLAGS
    FFLAGS="$FFLAGS $flag"
    AC_COMPILE_IFELSE([AC_LANG_SOURCE([
          program test
          end
    ])],
      [AC_MSG_RESULT([yes])
       AST_FFLAGS_EXTRA="$AST_FFLAGS_EXTRA $flag"],
      [AC_MSG_RESULT([no])])
    FFLAGS=$ast_save_FFLAGS
  done
  AC_LANG_POP([Fortran 77])
fi
AC_SUBST([AST_FFLAGS_EXTRA])
fi

#  Prepare a version of STAR_FFLAGS with -I... removed
#  for use with ast_tester (which supplies these itself).
star_fflags_test=""
for flag in $STAR_FFLAGS; do
   case "$flag" in
      -I*) ;;
      *) star_fflags_test="$star_fflags_test $flag" ;;
   esac
done
AC_SUBST( STAR_FFLAGS_TEST, $star_fflags_test )

#   If --with-pic=no is set we should honour that.
AM_CONDITIONAL(NOPIC, test x$pic_mode = xno)

#  Conditional defining whether we build with POSIX thread support.
AC_ARG_WITH([pthreads],
            [ --without-pthreads   Build package without POSIX threads support],
        if test "$withval" = "yes"; then
           use_pthreads="1"
        else
           use_pthreads="0"
        fi,
        use_pthreads="1")
if test "$use_pthreads" = "1"; then
AC_CHECK_LIB([pthread], [pthread_create], ,[use_pthreads="0"])
fi
AM_CONDITIONAL(NOTHREADS, test x$use_pthreads = x0)
AC_SUBST(THREADS, $use_pthreads)

#  libast and libast_pal call math functions, so on platforms where those
#  live in a library of their own the shared objects have to name it. The
#  third argument keeps -lm out of LIBS: it belongs to the two libraries
#  that need it, and is added to their LIBADD in Makefile.am.
AC_CHECK_LIB([m], [sin], [LIBM=-lm], [LIBM=])
AC_SUBST([LIBM])

#  star_compat/messgen is compiled and then run during the build, so it has
#  to be an executable for the build machine and not for the host. Take the
#  compiler for it, and its flags, from the conventional *_FOR_BUILD
#  variables, which the user can set; when the build is not a cross
#  compilation the host compiler is the build compiler.
AC_ARG_VAR([CC_FOR_BUILD],
           [C compiler for programs that are run on the build machine])
AC_ARG_VAR([CFLAGS_FOR_BUILD],
           [C compiler flags for programs that are run on the build machine])
AC_ARG_VAR([LDFLAGS_FOR_BUILD],
           [linker flags for programs that are run on the build machine])
if test "x$CC_FOR_BUILD" = x; then
   if test "x$cross_compiling" = xyes; then
      AC_CHECK_PROGS([CC_FOR_BUILD], [gcc clang cc], [cc])
   else
      CC_FOR_BUILD=$CC
      test "x$CFLAGS_FOR_BUILD" = x && CFLAGS_FOR_BUILD=$CFLAGS
      test "x$LDFLAGS_FOR_BUILD" = x && LDFLAGS_FOR_BUILD=$LDFLAGS
   fi
fi

#  Conditional defining whether we build with YAML support. libyaml is
#  looked for on the compiler's default search paths, unless it is told
#  where to look: either --with-yaml=DIR, for an installation with the
#  usual DIR/include and DIR/lib layout, or the YAML_CFLAGS and YAML_LIBS
#  variables, for anything more awkward.
AC_ARG_VAR([YAML_CFLAGS], [C compiler flags for libyaml, e.g. -I/opt/foo/include])
AC_ARG_VAR([YAML_LIBS], [linker flags for libyaml, e.g. -L/opt/foo/lib -lyaml])
AC_ARG_WITH([yaml],
            [AS_HELP_STRING([--with-yaml@<:@=DIR@:>@],
                            [Build package with YAML support, taking libyaml
                             from DIR/include and DIR/lib if DIR is given
                             @<:@default=yes@:>@])],
        [yaml_explicit="1"],
        [with_yaml="yes"; yaml_explicit="0"])

#  Setting either variable by hand is as much a request for YAML support as
#  --with-yaml is, so treat it the same when the search comes up empty.
if test -n "$YAML_CFLAGS" || test -n "$YAML_LIBS"; then
    yaml_explicit="1"
fi

use_yaml="1"
case $with_yaml in
    no)
        use_yaml="0" ;;
    yes) ;;
    *)
        test -z "$YAML_CFLAGS" && YAML_CFLAGS="-I$with_yaml/include"
        test -z "$YAML_LIBS" && YAML_LIBS="-L$with_yaml/lib -lyaml" ;;
esac

if test "$use_yaml" = "1"; then
    test -z "$YAML_LIBS" && YAML_LIBS="-lyaml"

#  Both the header and the library have to be usable with these flags in
#  place, so probe with them applied. They are left applied afterwards on
#  success, since the whole package is then built against libyaml.
    yaml_save_CPPFLAGS="$CPPFLAGS"
    yaml_save_LIBS="$LIBS"
    CPPFLAGS="$CPPFLAGS $YAML_CFLAGS"
    LIBS="$YAML_LIBS $LIBS"

    AC_CHECK_HEADER([yaml.h], [], [use_yaml="0"])
    if test "$use_yaml" = "1"; then
        AC_MSG_CHECKING([for yaml_parser_initialize in libyaml])
        AC_LINK_IFELSE([AC_LANG_CALL([], [yaml_parser_initialize])],
                       [AC_MSG_RESULT([yes])],
                       [AC_MSG_RESULT([no]); use_yaml="0"])
    fi

    if test "$use_yaml" = "0"; then
        CPPFLAGS="$yaml_save_CPPFLAGS"
        LIBS="$yaml_save_LIBS"
        YAML_CFLAGS=""
        YAML_LIBS=""

#  Having been told explicitly to build with libyaml, quietly building
#  without it is never what the user wanted.
        if test "$yaml_explicit" = "1"; then
            AC_MSG_ERROR([libyaml could not be found, but YAML support was
requested via --with-yaml, YAML_CFLAGS or YAML_LIBS. Use --without-yaml to
build without YAML support.])
        fi
    fi
fi
AM_CONDITIONAL(NOYAML, test x$use_yaml = x0)
AC_SUBST(YAML, $use_yaml)

# See which variadic function API to use
AC_CHECK_HEADERS(stdarg.h varargs.h, break)

# Can we use backtrace?
AC_CHECK_HEADERS([execinfo.h])
AC_CHECK_FUNCS([backtrace])

# Do we have reentrant strerror and strtok?
AC_CHECK_FUNCS([strerror_r strtok_r])

# Do we have vsnprintf?
AC_CHECK_FUNCS([vsnprintf])

#  See if we have long doubles (used by the Mapping and Region classes)
AC_CHECK_TYPES([long double])

#  See if we have 64 bit integers.
AC_CHECK_TYPES([int64_t, uint64_t])

# Calculate alternative 64 bit integer sizes
AC_CHECK_SIZEOF(long)
AC_CHECK_SIZEOF(long long)


# Decide how to get the name of the curently executing function.
# -------------------------------------------------------------
AC_DEFUN([CIT_FUNCTIONSTRING], [
  set_function_name=no



  AC_MSG_CHECKING([whether C compiler defines __func__])
  AC_COMPILE_IFELSE(
    [AC_LANG_PROGRAM([[]], [[const char* name = __func__;]])],
    [AC_MSG_RESULT(yes)
     set_function_name=yes
     AC_DEFINE([FUNCTION_NAME], [__func__], [Variable holding current function name.])],
    [AC_MSG_RESULT(no)])
  if test "$set_function_name" == no; then
    AC_MSG_CHECKING([whether C compiler defines __FUNCTION__])
    AC_COMPILE_IFELSE(
      [AC_LANG_PROGRAM([[]], [[const char* name = __FUNCTION__;]])],
      [AC_MSG_RESULT(yes)
       set_function_name=yes
       AC_DEFINE([FUNCTION_NAME], [__FUNCTION__], [Variable holding current function name.])],
      [AC_MSG_RESULT(no)])
  fi
])

CIT_FUNCTIONSTRING

#   Find an absolute path to the Perl binary, augmenting the path with the
#   location of the Starlink Perl build.  If this fails, then set @PERL@
#   to the backup `/usr/bin/env perl', which will find Perl if it exists
#   in the path at runtime.
AC_PATH_PROG(PERL, perl, [/usr/bin/env perl], [$STARLINK/Perl/bin:$PATH])

#   Function and declaration checks
AC_CHECK_FUNCS([isnan])
AC_CHECK_DECLS([isnan],,,[#include <math.h>
                         ])
AC_CHECK_FUNCS([isfinite])
AC_CHECK_DECLS([isfinite],,,[#include <math.h>
                         ])
STAR_DECLARE_DEPENDENCIES(sourceset, [sst htx])

#  Perform the check that configures f77.h.in for the return type of REAL
#  Fortran functions. On 64-bit g77 with f2c compatibility this is double
#  not float.
if test "$use_fortran" = "1"; then
STAR_CNF_F2C_COMPATIBLE

# Determine the type of Fortran character string lengths.
STAR_CNF_TRAIL_TYPE

# Determine the symbol for the Fortran blank common block.
STAR_CNF_BLANK_COMMON
fi

#   Declare the message file.
STAR_MESSGEN(ast_err.msg)

#   Test for non-ANSI behaviour in sscanf on some platforms, reported by
#   Bill Joye. Also check for bad MINGW sscanf. That returns nc=0 in the
#   System test.
AC_MSG_CHECKING([whether the sscanf function is ANSI-compatible])
AC_RUN_IFELSE([AC_LANG_SOURCE([[

#include <stdio.h>
#include <stdlib.h>

int main() {
  char foo[] = " name 1111.1 ";
  char mingw[] = "system= FK4_NO_E";

  char bar[8];
  float ff;
  int system;
  int nc;
  int r;

  nc = 0;
  r = sscanf(foo, " %s %f %n", bar, &ff, &nc);

  if ( nc == 13 ) {
     nc = 0;
     r = sscanf( mingw, "system= %n%*s %n", &system, &nc );
     if ( nc != 0 ) nc = 13;
  }
  exit( ( nc != 13 ) ? 0 : 1 );
}

]])],[
   AC_MSG_RESULT([no]);AC_DEFINE([HAVE_NONANSI_SSCANF],[1],[The sscanf shows the non-ANSI behaviour reported by Bill Joye])
],[AC_MSG_RESULT([yes])],[
   AC_DEFINE([HAVE_NONANSI_SSCANF],[1],[The sscanf may show the non-ANSI behaviour reported by Bill Joye])
])

#   Declare the documentation.  We need to do complicated things to
#   satisfy these targets, so give a non-null value
#   for the second argument, to suppress automatic generation of
#   rules.
#
#   Prologue extraction prefers starprolog, falling back to getatt/prolat.
#   Typesetting needs TeX plus the class and style files vendored in
#   star_compat/latexsupport.  The .htx_tar hypertext products
#   additionally need the Starlink star2html program, so they are built only
#   when it is available; a build without it still produces the PDFs, which is
#   what nearly every reader wants.  Historically the hypertext was always
#   included, so warn rather than pass over it silently.
#
#   Only a pre-distribution tree can build any of this.  An unpacked
#   distribution has no rules for the documents, so there the set is fixed by
#   what was shipped rather than by what the host happens to have installed.
STAR_CHECK_PROGS(star2html)
AC_ARG_VAR([STARPROLOG], [starprolog command, optionally with arguments])
AS_IF([test -z "$STARPROLOG"], [AC_PATH_PROG([STARPROLOG], [starprolog])])
AC_ARG_VAR([PDFLATEX], [pdflatex command])
AC_ARG_ENABLE([hyperdocs],
    [AS_HELP_STRING([--disable-hyperdocs],
        [omit the .htx_tar hypertext documentation even when star2html is
         available])],
    [], [enable_hyperdocs=yes])

STAR_PREDIST_SOURCES(sun_master.tex)

ast_documentation="sun210.pdf sun210.tex sun211.pdf sun211.tex"
if test "x$enable_hyperdocs" = xno; then
    AC_MSG_NOTICE([hypertext documentation disabled by request])
elif test -n "$PREDIST"; then
    for ast_htx in sun210.htx_tar sun211.htx_tar; do
        if test -f "$srcdir/$ast_htx"; then
            ast_documentation="$ast_documentation $ast_htx"
        fi
    done
elif test -x "$STAR2HTML"; then
    ast_documentation="$ast_documentation sun210.htx_tar sun211.htx_tar"
elif test "x$STARCONF" != "xno"; then
#  Ordinary standalone builds do not request documentation.
    AC_MSG_WARN([star2html not found: building PDF documentation only, with
no .htx_tar hypertext. A full release has historically included it.])
fi

STAR_LATEX_DOCUMENTATION([sun210 sun211], [$ast_documentation])
STAR_CHECK_PROGS(prolat, sst)   # prolat is part of SST
if test -n "$STAR@&t@_LATEX_DOCUMENTATION" && test -z "$PREDIST"; then
    AS_IF([test -z "$PDFLATEX"], [AC_PATH_PROG([PDFLATEX], [pdflatex])])
    AS_IF([test -z "$PDFLATEX"],
        [AC_MSG_ERROR([documentation requires pdflatex; use --without-stardocs to omit it])])
    AS_IF([test -z "$STARPROLOG" && test ! -x "$PROLAT" &&
           test ! -x "$SST_DIR/prolat"],
        [AC_MSG_ERROR([documentation requires starprolog (preferred) or prolat; set STARPROLOG or use --without-stardocs])])
fi

AC_CONFIG_HEADERS(config.h)

AC_CONFIG_FILES(Makefile ast_link ast_link_adam ast_tester/Makefile src/object.h)
if test "$use_fortran" = "1"; then
AC_CONFIG_FILES(src/f77.h)
fi

if test "x$STARCONF" != "xno"; then
AC_CONFIG_FILES(component.xml)
fi

AC_CONFIG_FILES([ast_cpp], [chmod +x ast_cpp])
#   Following are files which are substituted by the Makefile at
#   distribution time, rather than by configure.  They are not distributed.
STAR_PREDIST_SOURCES(src/version.h.in builddocs.in addversion.in)

#  ast_err.h and AST_ERR are among those files: messgen's translation of
#  ast_err.msg is machine independent, so they are generated here and
#  shipped, and only a pre-distribution tree needs the rules that make them.
AM_CONDITIONAL([PREDIST_BUILD], [test -z "$PREDIST"])

AC_OUTPUT
