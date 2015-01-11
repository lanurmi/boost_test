//  (C) Copyright Andrzej Krzemienski 2015.
//  Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/test for the library home page.

//[example_code
#define BOOST_TEST_MODULE example
#include <boost/test/unit_test.hpp>

namespace utf = boost::unit_test;
const int I = 1;

BOOST_TEST_DECORATOR(
  + utf::enable_if(I == 1)
)
BOOST_AUTO_TEST_CASE( test_case1 )
{
  BOOST_TEST(false);
}

BOOST_TEST_DECORATOR(
  + utf::disable_if(I == 1)
)
BOOST_AUTO_TEST_CASE( test_case2 )
{
  BOOST_TEST(false);
}
//]
