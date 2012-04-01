dnl Local configure.ac macros.
dnl
dnl Copyright (C) 2012 Red Hat, Inc., David Tardon <dtardon@redhat.com>
dnl
dnl This file is part of boost-gdb-printers.
dnl
dnl This program is free software; you can redistribute it and/or modify
dnl it under the terms of the GNU General Public License as published by
dnl the Free Software Foundation; either version 3 of the License, or
dnl (at your option) any later version.
dnl
dnl This program is distributed in the hope that it will be useful,
dnl but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
dnl GNU General Public License for more details.
dnl
dnl You should have received a copy of the GNU General Public License
dnl along with this program.  If not, see <http://www.gnu.org/licenses/>.

# local_CHECK_BOOST_HEADER(header)
#
# Checks for presence of Boost header.
# --------------------------------
AC_DEFUN([local_CHECK_BOOST_HEADER],
[AC_CHECK_HEADER([$1],[],[AC_MSG_ERROR([$1][ not found. install boost >= 1.44])])dnl
])

dnl vim: set filetype=m4 shiftwidth=4 softtabstop=4 expandtab:
