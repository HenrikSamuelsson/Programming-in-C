/*
 * exercise_06_03.c
 *
 * Program that calculates and prints the first 15 Fibonacci numbers.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

int main (void)
{
	int fibA, fibB, fibC, i;

	fibA = 0;	// by definition
	printf("%i\n", fibA);

	fibB = 1;	// by definition
	printf("%i\n", fibB);

	for (i = 2; i < 15; ++i)
	{
		// calculate and then print the next number
		fibC = fibA + fibB;
		printf("%i\n", fibC);

		// update the numbers as preparation for calculation of next number
		fibA = fibB;
		fibB = fibC;
	}

	return 0;
}
