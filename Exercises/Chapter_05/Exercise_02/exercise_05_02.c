/*
 * exercise_05_02.c
 *
 * Program that checks if two numbers are are evenly divisible.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

int main (void)
{
	int i1, i2;

	printf ("Enter two numbers to be analyzed: ");
	scanf("%i%i", &i1, &i2);

	if (i1 % i2 == 0)
		printf("%i is evenly divisible by %i", i1, i2);
	else
		printf("%i is not evenly divisible by %i", i1, i2);

	return 0;
}
