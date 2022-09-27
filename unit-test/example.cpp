#include "gmock/gmock.h"

#include "example.h"

using namespace testing;



	TEST(funciones, buscarmax)
	{
		int i[] = { 15,20 };
        ASSERT_STREQ(maximo(), Eq(20));
	TEST(funciones, buscarmin)
	{
		ASSERT_THAT(minimo(3, 1), Eq(1));
	}