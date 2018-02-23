#define BOOST_TEST_MODULE HelloTest

#include <boost/test/unit_test.hpp>

#include "version.h"
#include "lib.h"

BOOST_AUTO_TEST_SUITE(HelloTest)

BOOST_AUTO_TEST_CASE(test_version)
{
	BOOST_CHECK(version() > 0);
}

}
