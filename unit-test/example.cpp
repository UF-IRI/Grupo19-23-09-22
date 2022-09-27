#include "gmock/gmock.h"

#include "example.h"

using namespace testing;



	TEST(funciones, buscarmax)
	{
        ASSERT_STREQ(maximo(15,20), Eq(20));
	}
	TEST(funciones, buscarmin)
	{
		ASSERT_THAT(minimo(3, 1), Eq(1));
	}