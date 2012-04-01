/* Test code for Boost.Unordered.

   Copyright (C) 2012 Red Hat, Inc., David Tardon <dtardon@redhat.com>

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

#include <boost/assign/list_inserter.hpp>

#include <boost/unordered_map.hpp>
#include <boost/unordered_set.hpp>

void stop();

using std::string;

namespace assign = boost::assign;
using boost::unordered_map;
using boost::unordered_multimap;
using boost::unordered_multiset;
using boost::unordered_set;

void test_boost_unordered()
{
    unordered_set<int> empty_set;
    unordered_set<int> set_int;
    assign::insert(set_int)(1)(2)(3)(4);
    unordered_set<string> set_string;
    assign::insert(set_string)("hello")("world")("foo")("bar");

    unordered_map<string, int> empty_map;
    unordered_map<string, int> map_string_int;
    assign::insert(map_string_int)("hello", 1)("foo", 2)("bar", 3);

    unordered_multiset<int> empty_multiset;
    unordered_multiset<int> multiset_int;
    assign::insert(multiset_int)(1)(2)(3)(4)(1);

    unordered_multimap<string, int> empty_multimap;
    unordered_multimap<string, int> multimap_string_int;
    assign::insert(multimap_string_int)("hello", 1)("foo", 2)("bar", 3)("foo", 4);

    stop();
}

// vim: set shiftwidth=4 softtabstop=4 expandtab:
