/*
 * exercise_05_03.c
 *
 * Program that divides two given integers.
 *
 * The result is displayed with 3 decimals.
 *
 * There is a built in check to defend against division by zero.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

int main (void)
{

	int i1, i2;

	printf ("Enter two numbers to be used for division: ");
	scanf ("%i%i", &i1, &i2);

	if (i2 == 0)
		printf ("Incorrect input, the second number is not allowed to be "
				"zero.");
	else
		printf ("%i / %i = %.3f", i1, i2, (float) i1 / i2);

	return 0;
}
