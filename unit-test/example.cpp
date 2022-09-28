#include "gmock/gmock.h"

#include "example.h"

using namespace testing;



TEST(funciones, buscarmax)
{
	int i;
	int i[] = { 10,20 };
	for (i =0;i < 20;i++)
	{
		ASSERT_THAT(maximo(), Eq(20));
	}
}
TEST(funciones, buscarmin)
{
	int i;
	int i[] = { 1,10 };
	for (i = 0; i < 10; i++)
	{
		ASSERT_THAT(minimo(), Eq(1));
		
	}
}