/* Test code for Boost.Smart Ptr.

   This file is part of boost-gdb-printers.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <boost/smart_ptr.hpp>

void stop();

using boost::scoped_array;
using boost::scoped_ptr;
using boost::shared_array;
using boost::shared_ptr;
using boost::weak_ptr;

void test_boost_smart_ptr()
{
    shared_ptr<int> sp_empty;
    shared_ptr<int> sp_set(new int(42));

    int* const sh_data(new int[2]);
    sh_data[0] = 1;
    sh_data[1] = 2;
    shared_array<int> sha_empty;
    shared_array<int> sha_set(sh_data);

    scoped_ptr<int> sc_empty;
    scoped_ptr<int> sc_set(new int(32));

    int* const sc_data(new int[2]);
    sc_data[0] = 3;
    sc_data[1] = 4;
    scoped_array<int> sca_empty;
    scoped_array<int> sca_set(sc_data);

    weak_ptr<int> wp_empty;
    weak_ptr<int> wp_set(sp_set);

    // it seems the values are somehow "optimized" out otherwise
    (void) *sc_set;
    (void) *sp_set;

    stop();
}

// vim: set shiftwidth=4 softtabstop=4 expandtab:
