/*
 * exercise_07_03.c
 *
 * Variant of program 7.8, epsilon is now given as an argument to the function.
 *
 * Have also changed all numbers from float to double precision to better be
 * able to see the effects of different epsilon values.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

/*
 * Function to calculate the absolute value of a number.
 */

double absoluteValue (double x)
{
	if (x < 0)
		x = -x;

	return x;
}

/*
 * Function to compute the square root of a number.
 */

double squareRoot (double x, double epsilon)
{
	double guess = 1.0;

	while (absoluteValue (guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;

	return guess;
}

int main (void)
{
	printf ("squareRoot of 2.0 with epsilon set to 0.1 = %.16f\n",
			squareRoot (2.0, 0.1));
	printf ("squareRoot of 2.0 with epsilon set to 0.001 = %.16f\n",
			squareRoot (2.0, 0.001));
	printf ("squareRoot of 2.0 with epsilon set to 0.00001 = %.16f\n",
			squareRoot (2.0, 0.00001));
	printf ("squareRoot of 2.0 with epsilon set to 0.0000001 = %.16f\n",
				squareRoot (2.0, 0.0000001));
	printf ("squareRoot of 2.0 with epsilon set to 0.000000001 = %.16f\n",
					squareRoot (2.0, 0.000000001));

	return 0;
}
