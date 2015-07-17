/*
 * exercise_04_02.c
 *
 * Program that generates a table of squared numbers.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

int main (void)
{
	int n;

	printf ("  n      n^2 \n");
	printf ("-----   -----\n");

	for ( n = 1; n < 11; n++ )
	{
		printf (" %2i     %3i \n", n, n * n);
	}

	return 0;
}
