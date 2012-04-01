# Process this file with autoconf to create configure.

AC_PREREQ([2.65])

# ======================
# Autoconf/Automake init
# ======================
AC_INIT([boost-gdb-printers],[1])
AC_CONFIG_MACRO_DIR([m4])
AM_CONFIG_HEADER([config.h])
AC_LANG([C++])
AM_INIT_AUTOMAKE([1.11 dist-bzip2])
AM_SILENT_RULES([yes])
AM_MAINTAINER_MODE

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

# ===================
# Find gdb's data dir
# ===================
AC_MSG_CHECKING([for gdb data directory])
GDBDATADIR=[`$GDB --batch -nx -nw --eval-command='show data-directory' | $SED -e 's@[^"]*"\([^"]\+\)".*@\1@'`]
if test -d "$GDBDATADIR"; then
    AC_MSG_RESULT([$GDBDATADIR])
else
    AC_MSG_RESULT([not found])
    AC_MSG_ERROR([could not detect gdb data directory])
fi
AC_SUBST([GDBDATADIR])

# ===========================
# Find required boost headers
# ===========================
# Required for tests
local_CHECK_BOOST_HEADER([boost/optional.hpp])
local_CHECK_BOOST_HEADER([boost/ptr_container/ptr_container.hpp])
local_CHECK_BOOST_HEADER([boost/smart_ptr.hpp])
local_CHECK_BOOST_HEADER([boost/unordered_map.hpp])
local_CHECK_BOOST_HEADER([boost/unordered_set.hpp])

# Other used stuff
local_CHECK_BOOST_HEADER([boost/assign/list_inserter.hpp])

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
