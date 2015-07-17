/*
 * exercise_04_03.c
 *
 * Program that generates a table of triangular numbers.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

int main (void)
{
	int n;

		printf ("  n        t \n");
		printf ("-----   -------\n");

		for (n = 5; n <= 50 ; n = n + 5)
		{
			printf(" %2i      %4i \n", n, n * (n + 1) / 2);
		}

		return 0;
}
