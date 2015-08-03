/*
 * exercise_06_04.c
 *
 * Program that calculates the average of some values taken from an array.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

int main (void)
{
	float values[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
	float sum, average;
	int n;

	sum = 0.0;
	for (n = 0; n < 10; ++n)
		sum += values[n];
	average = sum / 10;

	printf("%f", average);

	return 0;
}
