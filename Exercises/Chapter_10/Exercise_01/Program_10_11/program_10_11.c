/*
 * program_10_11.c - Working with Pointers to Arrays
 */

#include <stdio.h>

int arraySum (int array[], const int n)
{
	int sum = 0, *ptr;
	int * const arrayEnd = array + n;

	for ( ptr = array; ptr < arrayEnd; ++ptr)
	{
		sum += *ptr;
	}

	return sum;
}

int main (void)
{
	int arraySum(int array[], const int n);
	int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

	printf ("The sum is %i\n", arraySum (values, 10));

	return 0;
}
