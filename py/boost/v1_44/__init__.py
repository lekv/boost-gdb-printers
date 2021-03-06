# -*- tab-width: 4; indent-tabs-mode: nil; py-indent-offset: 4 -*-
# GDB pretty printers for Boost 1.44.
#
# This file is part of boost-gdb-printers.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

import boost.v1_44.optional
import boost.v1_44.ptr_container
import boost.v1_44.smart_ptr
import boost.v1_44.unordered

def register_pretty_printers(obj):
    boost.v1_44.optional.register_pretty_printers(obj)
    boost.v1_44.ptr_container.register_pretty_printers(obj)
    boost.v1_44.smart_ptr.register_pretty_printers(obj)
    boost.v1_44.unordered.register_pretty_printers(obj)

# vim:set filetype=python shiftwidth=4 softtabstop=4 expandtab:
