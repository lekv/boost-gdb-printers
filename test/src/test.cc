/* Test suite for Boost.

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

// forward decls. of tests
void test_boost_optional();
void test_boost_ptr_container();
void test_boost_smart_ptr();
void test_boost_unordered();

void stop()
{
}

int main()
{
    test_boost_optional();
    test_boost_ptr_container();
    test_boost_smart_ptr();
    test_boost_unordered();
}

// vim: set shiftwidth=4 softtabstop=4 expandtab:
