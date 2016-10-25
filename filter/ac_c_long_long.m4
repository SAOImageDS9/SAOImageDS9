##### http://autoconf-archive.cryp.to/ac_c_long_long.html
#
# SYNOPSIS
#
#   AC_C_LONG_LONG
#
# DESCRIPTION
#
#   Provides a test for the existance of the long long int type and
#   defines HAVE_LONG_LONG if it is found.
#
# LAST MODIFICATION
#
#   2006-10-30
#
# COPYLEFT
#
#   Copyright (c) 2006 Caolan McNamara <caolan@skynet.ie>
#
#   Copying and distribution of this file, with or without
#   modification, are permitted in any medium without royalty provided
#   the copyright notice and this notice are preserved.

AC_DEFUN([AC_C_LONG_LONG],
[AC_CACHE_CHECK(for long long int, ac_cv_c_long_long,
[if test "$GCC" = yes; then
  ac_cv_c_long_long=yes
  else
        AC_TRY_COMPILE(,[long long int i;],
   ac_cv_c_long_long=yes,
   ac_cv_c_long_long=no)
   fi])
   if test $ac_cv_c_long_long = yes; then
     AC_DEFINE(HAVE_LONG_LONG, 1, [compiler understands long long])
   fi
])
