/* Test code for Boost.Optional.

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

#include <string>
#include <vector>

#include <boost/assign/list_inserter.hpp>

#include <boost/optional.hpp>

void stop();

using std::string;
using std::vector;

namespace assign = boost::assign;
using boost::optional;

void test_boost_optional()
{
    optional<int> empty_opt;
    optional<int> opt_int(42);
    optional<string> opt_string("hello world");
    vector<int> tmp_vec;
    assign::push_back(tmp_vec)(1)(2)(3)(4);
    optional<vector<int> > opt_vector(tmp_vec);

    stop();
}

// vim: set shiftwidth=4 softtabstop=4 expandtab:
