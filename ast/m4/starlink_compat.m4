dnl ============================================================
dnl Starlink fallback stubs (used when starlink macros not present)
dnl ============================================================
dnl
dnl This file is ONLY used in standalone (no-Starlink) builds.
dnl It is copied into m4/ by bootstrap.local before autoreconf.
dnl
dnl In Starlink builds, starconf.m4 from the Starlink buildsupport
dnl aclocal directory is used directly (the Starlink aclocal finds it
dnl automatically via its default search path), and this file is not
dnl present in m4/.
dnl ============================================================

m4_ifndef([STAR_DEFAULTS],
[AC_DEFUN([STAR_DEFAULTS], [
dnl Provide the minimal substitution variables needed for Makefile.am
dnl and the generated files (component.xml.in, etc.) when building
dnl without the real Starlink build infrastructure (starconf).

      AS_VAR_SET_IF([stardocsdir], [],
        [AS_VAR_SET([stardocsdir], [${datadir}/stardocs])])
      AC_SUBST([stardocsdir])

      AS_VAR_SET_IF([starnewsdir], [],
        [AS_VAR_SET([starnewsdir], [${datadir}/starnews])])
      AC_SUBST([starnewsdir])

      dnl Fortran include flags: empty for standalone builds
      AC_SUBST([STAR_FFLAGS], [""])

      dnl MANIFEST is a Starlink install tracker; 'false' makes it a no-op
      AC_SUBST([MANIFEST], [false])

      dnl STARLINK installation root: empty for standalone builds
      AC_SUBST([STARLINK], [""])

      dnl component.xml substitution variables
      AC_SUBST([STAR_DEPENDENCIES_ATTRIBUTES], [""])
      AC_SUBST([STAR_DEPENDENCIES_CHILDREN], [""])
      AC_SUBST([STAR_DOCUMENTATION], [""])

      dnl Predist status initialization, for STAR_PREDIST_SOURCES
      _star_predist_status=unknown
      PREDIST='#'  # safe default
      AC_SUBST(PREDIST)
])])

m4_ifndef([STAR_DECLARE_DEPENDENCIES],
[AC_DEFUN([STAR_DECLARE_DEPENDENCIES], [dnl
dnl no-op fallback
])])

m4_ifndef([STAR_LATEX_DOCUMENTATION],
[AC_DEFUN([STAR_LATEX_DOCUMENTATION], [dnl
dnl Ordinary standalone builds need no documentation tools. Release builders
dnl opt in explicitly; shipped documents can also be installed with this option.
  AC_ARG_WITH([stardocs],
    [AS_HELP_STRING([--with-stardocs],
      [build and install documentation (standalone default: no)])],
    [], [with_stardocs=no])
  AS_CASE([$with_stardocs],
    [yes], [STAR@&t@_LATEX_DOCUMENTATION="$2"],
    [no], [STAR@&t@_LATEX_DOCUMENTATION=""],
    [AC_MSG_ERROR([--with-stardocs expects yes or no])])
  AC_SUBST([STAR@&t@_LATEX_DOCUMENTATION])
])])

m4_ifndef([STAR_PREDIST_SOURCES],
[AC_DEFUN([STAR_PREDIST_SOURCES], [dnl
m4_ifval([$1], [], [AC_FATAL([$0: called with no stamp file])])dnl
_star_tmp='$1'
for marker in $_star_tmp
do
    if test -f "$srcdir/$marker"; then
        _star_predist_marker_present=:
        AC_MSG_NOTICE([found predist marker file $marker])
    else
        _star_predist_marker_present=false
    fi
    case $_star_predist_status in
        unknown)
            if $_star_predist_marker_present; then
                # we do want to build sourceset files
                _star_predist_status=predist
                PREDIST=
                AC_MSG_NOTICE([in pre-distribution state])
            else
                _star_predist_status=postdist
                PREDIST='#'
                AC_MSG_NOTICE([in post-distribution state])
            fi
            ;;
        predist)
            if $_star_predist_marker_present; then
                : OK
            else
                AC_MSG_WARN([Building predist, but marker file $marker is not present])
            fi
            ;;
        postdist)
            if $_star_predist_marker_present; then
                AC_MSG_WARN([In postdistribution state, but predist marker file $marker is present])
            fi
            ;;
        *)
            AC_MSG_ERROR([impossible predist status $_star_predist_status])
            ;;
    esac
done
])])

m4_ifndef([STAR_CHECK_PROGS],
[AC_DEFUN([STAR_CHECK_PROGS], [dnl
dnl Match the real macro's interface: $1 is a list of program names and $2 an
dnl optional Starlink subdirectory to search, which is meaningless here as
dnl there is no Starlink tree.  Each program's path lands in the upper-cased
dnl variable, defaulting to the bare program name when not found, so callers
dnl can distinguish the two with `test -x' exactly as with the real macro.
m4_foreach_w([ProgramName], [$1],
   [AC_PATH_PROG(m4_toupper(m4_bpatsubst(ProgramName, [[^0-9a-zA-Z_]], [_])),
                 ProgramName, ProgramName)])
])])

m4_ifndef([STAR_CNF_F2C_COMPATIBLE],
[AC_DEFUN([STAR_CNF_F2C_COMPATIBLE], [dnl
dnl Determine whether the Fortran compiler returns a REAL function result as a
dnl double, the way f2c does, or as a float.  Sets REAL_FUNCTION_TYPE, which is
dnl substituted into src/f77.h as F77_REAL_FUNCTION_TYPE.
dnl
dnl This cannot be read off the compiler's identity: it is a property of the
dnl calling convention, and gfortran uses the f2c one only when given -ff2c.
dnl So measure it, as the real macro does -- define a C function returning a
dnl float, call it from Fortran as a REAL function, and see what arrives.  A
dnl float-returning convention hands back the 1.0 that was sent; a
dnl double-returning one reads the float's bits as a double and gets something
dnl else, which the test detects by the result comparing equal to zero.  That
dnl is indirect, but it is the original's test and it distinguishes the two
dnl conventions in practice.
AC_REQUIRE([AC_PROG_CC])dnl
AC_REQUIRE([AC_PROG_FC])dnl
AC_CACHE_CHECK([if $FC is in strict f2c compatible mode],
   [star_cv_cnf_f2c_compatible],
   [star_cv_cnf_f2c_compatible=no
    if test "$ac_cv_fc_compiler_gnu" = yes; then
       AC_LANG_PUSH([C])
       AC_LANG_CONFTEST([AC_LANG_SOURCE([[
float fred_() {
   return 1.0f;
}
]])])
       if (eval $ac_compile) 2>&AS_MESSAGE_LOG_FD; then
          mv conftest.$ac_objext c-conftest.$ac_objext
       else
          AC_MSG_FAILURE([cannot compile a C function])
       fi
       AC_LANG_POP([C])

       AC_LANG_PUSH([Fortran])
       AC_LANG_CONFTEST([AC_LANG_SOURCE([
      PROGRAM F2CTEST
      REAL FRED
      REAL R
      R = FRED()
      IF ( R .NE. 0.0 ) THEN
         WRITE(*,*) 'no'
      ELSE
         WRITE(*,*) 'yes'
      ENDIF
      END
])])
dnl    Link by hand rather than through AC_RUN_IFELSE: the C object has to
dnl    join the link line, and the Fortran driver is what must be run.
       if $FC $FCFLAGS -o conftest conftest.$ac_ext c-conftest.$ac_objext \
             >&AS_MESSAGE_LOG_FD 2>&1 && test -x ./conftest; then
          if test "$cross_compiling" = yes; then
             AC_MSG_WARN([cross compiling: assuming REAL functions return float])
          else
dnl          Fortran list-directed output is padded, so keep only the letters.
             star_cv_cnf_f2c_compatible=`./conftest 2>/dev/null | sed 's/[[^a-z]]//g'`
          fi
       else
          AC_MSG_WARN([f2c compatibility probe would not link; assuming
REAL functions return float])
       fi
       AC_LANG_POP([Fortran])
dnl    -r as well as -f: a debug build leaves a conftest.dSYM directory.
       rm -rf conftest* c-conftest*
    fi])
if test "x$star_cv_cnf_f2c_compatible" = xyes; then
   AC_SUBST([REAL_FUNCTION_TYPE], [double])
else
   AC_SUBST([REAL_FUNCTION_TYPE], [float])
fi
])])

m4_ifndef([STAR_CNF_TRAIL_TYPE],
[AC_DEFUN([STAR_CNF_TRAIL_TYPE], [dnl
dnl Determine the C type used for hidden Fortran character string length
dnl arguments (the "TRAIL" type).  gfortran >= 8 uses size_t; older versions
dnl use int.  This substitutes TRAIL_TYPE into src/f77.h.
dnl
dnl The version test is by major number rather than the real macro's pair of
dnl regexps, which only match gfortran 8-19 and so would silently fall back to
dnl int for gfortran 20.
dnl
dnl Known gap, shared with the CMake build: the real macro additionally uses
dnl long for 64-bit Intel and Sun Fortran and probes anything else non-GNU,
dnl whereas every non-GNU compiler gets int here.
  AC_CACHE_CHECK([type used for Fortran string lengths],
    [star_cv_cnf_trail_type],
    [star_cv_cnf_trail_type=int
     if test "$ac_cv_fc_compiler_gnu" = yes; then
       star_gfortran_major=$("$FC" -dumpversion 2>/dev/null | sed 's/\..*//')
       if test -n "$star_gfortran_major" && test "$star_gfortran_major" -ge 8 2>/dev/null; then
         star_cv_cnf_trail_type=size_t
       fi
     fi])
  TRAIL_TYPE=$star_cv_cnf_trail_type
  AC_SUBST([TRAIL_TYPE])
])])

m4_ifndef([STAR_CNF_BLANK_COMMON],
[AC_DEFUN([STAR_CNF_BLANK_COMMON], [dnl
dnl Determine the symbol for the Fortran blank common block.
dnl gfortran >= 4.x uses __BLNK__; older/other compilers use _BLNK__.
  if test "$ac_cv_fc_compiler_gnu" = yes; then
    AC_SUBST([BLANK_COMMON_SYMBOL], [__BLNK__])
  else
    AC_SUBST([BLANK_COMMON_SYMBOL], [_BLNK__])
  fi
])])

m4_ifndef([STAR_MESSGEN],
[AC_DEFUN([STAR_MESSGEN], [dnl
dnl no-op fallback
])])
