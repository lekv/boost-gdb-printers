/* Test code for Boost.Pointer Container.

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

#include <boost/ptr_container/ptr_container.hpp>

void stop();

using std::string;

using boost::ptr_deque;
using boost::ptr_list;
using boost::ptr_map;
using boost::ptr_multimap;
using boost::ptr_multiset;
using boost::ptr_set;
using boost::ptr_unordered_map;
using boost::ptr_unordered_multimap;
using boost::ptr_unordered_multiset;
using boost::ptr_unordered_set;
using boost::ptr_vector;

template<typename T, class C>
void fill_ptr_sequence(C& seq, size_t const n)
{
    for (int i(0); i != n; ++i)
        seq.push_back(new T(i));
}

template<typename T, class C, class CA, class A>
void fill_ptr_sequence(ptr_set<T, C, CA, A>& set, size_t const n)
{
    for (int i(0); i != n; ++i)
        set.insert(new T(i));
}

template<class C>
void map_insert(C& map, typename C::key_type const& key, typename C::mapped_type value)
{
    typename C::key_type key_(key);
    map.insert(key_, value);
}

void test_boost_ptr_container()
{
    ptr_deque<int> empty_deque;
    ptr_deque<int> deque_int;
    fill_ptr_sequence<int>(deque_int, 4);

    ptr_list<int> empty_list;
    ptr_list<int> list_int;
    fill_ptr_sequence<int>(list_int, 4);

    ptr_map<string, int> empty_map;
    ptr_map<string, int> map_string_int;
    map_insert(map_string_int, "hello", new int(1));
    map_insert(map_string_int, "world", new int(2));
    map_insert(map_string_int, "foo", new int(3));
    map_insert(map_string_int, "bar", new int(4));

    ptr_multimap<string, int> empty_multimap;
    ptr_multimap<string, int> multimap_string_int;
    map_insert(multimap_string_int, "hello", new int(1));
    map_insert(multimap_string_int, "world", new int(2));
    map_insert(multimap_string_int, "foo", new int(3));
    map_insert(multimap_string_int, "bar", new int(4));
    map_insert(multimap_string_int, "world", new int(5));

    ptr_multiset<int> empty_multiset;
    ptr_multiset<int> multiset_int;
    multiset_int.insert(new int(1));
    multiset_int.insert(new int(2));
    multiset_int.insert(new int(3));
    multiset_int.insert(new int(4));
    multiset_int.insert(new int(1));

    ptr_set<int> empty_set;
    ptr_set<int> set_int;
    fill_ptr_sequence<int>(set_int, 4);

    ptr_unordered_map<string, int> empty_unordered_map;
    ptr_unordered_map<string, int> unordered_map_string_int;
    map_insert(unordered_map_string_int, "hello", new int(1));
    map_insert(unordered_map_string_int, "world", new int(2));
    map_insert(unordered_map_string_int, "foo", new int(3));
    map_insert(unordered_map_string_int, "bar", new int(4));

    ptr_unordered_multimap<string, int> empty_unordered_multimap;
    ptr_unordered_multimap<string, int> unordered_multimap_string_int;
    map_insert(unordered_multimap_string_int, "hello", new int(1));
    map_insert(unordered_multimap_string_int, "world", new int(2));
    map_insert(unordered_multimap_string_int, "foo", new int(3));
    map_insert(unordered_multimap_string_int, "bar", new int(4));
    map_insert(unordered_multimap_string_int, "world", new int(5));

    ptr_unordered_multiset<int> empty_unordered_multiset;
    ptr_unordered_multiset<int> unordered_multiset_int;
    unordered_multiset_int.insert(new int(1));
    unordered_multiset_int.insert(new int(2));
    unordered_multiset_int.insert(new int(3));
    unordered_multiset_int.insert(new int(4));
    unordered_multiset_int.insert(new int(1));

    ptr_unordered_set<int> empty_unordered_set;
    ptr_unordered_set<int> unordered_set_int;
    unordered_set_int.insert(new int(0));
    unordered_set_int.insert(new int(1));
    unordered_set_int.insert(new int(2));
    unordered_set_int.insert(new int(3));

    ptr_vector<int> empty_vector;
    ptr_vector<int> vector_int;
    fill_ptr_sequence<int>(vector_int, 4);

    stop();
}

// vim: set shiftwidth=4 softtabstop=4 expandtab:
