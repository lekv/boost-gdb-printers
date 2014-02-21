# Process this file with autoconf to create configure.

AC_PREREQ([2.65])

# ======================
# Autoconf/Automake init
# ======================
AC_INIT([boost-gdb-printers],[2])
AC_CONFIG_MACRO_DIR([m4])
AM_CONFIG_HEADER([config.h])
AC_LANG([C++])
AM_INIT_AUTOMAKE([1.11 dist-bzip2])
AM_SILENT_RULES([yes])
AM_MAINTAINER_MODE

AC_ARG_WITH([boost-headers],
        [AS_HELP_STRING([--with-boost-headers=dir], [find Boost headers at nonstandard place])],
        [BOOST_CPPFLAGS=-I$with_boost_headers])
AC_SUBST([BOOST_CPPFLAGS])

# ===========================
# Find required base packages
# ===========================
AC_PROG_CPP
AC_PROG_CXX
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_PROG_SED
AC_PATH_PROG([GDB], [gdb])
AC_PATH_PROG([EXPECT], [expect])
AC_PATH_PROG([RUNTEST_BIN], [runtest])

# ===========================
# Find required boost headers
# ===========================
# Required for tests
save_CPPFLAGS="$CPPFLAGS"
CPPFLAGS="$CPPFLAGS $BOOST_CPPFLAGS"
AC_CHECK_HEADERS([\
        boost/assign/list_inserter.hpp \
        boost/optional.hpp \
        boost/ptr_container/ptr_container.hpp \
        boost/smart_ptr.hpp \
        boost/unordered_map.hpp \
        boost/unordered_set.hpp \
    ],
    [],
    [AC_MSG_ERROR([Required boost headers not found.])],
    []
)

# ======================================================================
# Get boost version and transform it into default pretty printer version
# ======================================================================
AC_MSG_CHECKING([for boost version])
AC_RUN_IFELSE([AC_LANG_SOURCE([dnl
#include <cstdio>
#include <boost/version.hpp>
int main()
{
    using namespace std;
    puts(BOOST_LIB_VERSION);
    return 0;
}dnl
])], [[boost_lib_version=`./conftest$EXEEXT | sed -e 's/^\([0-9]\+_[0-9]\+\).*/\1/'`]])
CPPFLAGS="$save_CPPFLAGS"

if ! test -n "$boost_lib_version"; then
    AC_MSG_WARN([could not determine boost version, assuming 1_44])
    boost_lib_version=1_44
fi

AS_IF([test -d $srcdir/py/boost/v$boost_lib_version],
      [PP_VERSION=v$boost_lib_version],
      [AC_MSG_ERROR([boost version $boost_lib_version is not supported])])
AC_SUBST([PP_VERSION])

# =====================
# Prepare all .in files
# =====================
AC_CONFIG_FILES([
    boost-gdb-printers.py
    Makefile
    py/Makefile
    test/Makefile
    test/src/Makefile
])
AC_OUTPUT

# vim: set shiftwidth=4 softtabstop=4 expandtab:
