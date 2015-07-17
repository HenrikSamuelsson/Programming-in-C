/*
 * exercise_04_04.c
 *
 * Program that generates a table of factorials.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

int main (void)
{
	int n, factorial;


	printf ("  n         n!   \n");
	printf ("-----   ----------\n");

	factorial = 1;

	for ( n = 1; n <= 10; n++ )
	{
		factorial *= n;
		printf (" %2i       %7i \n", n, factorial);
	}

	return 0;
}
