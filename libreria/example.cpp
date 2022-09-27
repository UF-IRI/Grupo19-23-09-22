#include "example.h"
#define NMAX 10
int maximo(int* array)
{
	
	int max = 0, i;

	for (i = 0; i < NMAX; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	std:: cout <<" El maximo es:" << max;
	return max;
}

int minimo(int* array)
{
 int min = 0, i;
 for (i = 0; i < NMAX; i++)

	if (array[i] < min)
	{
		min = array[i];

	}
	std:: cout <<" El maximo es:" << min;
	return min;
}
