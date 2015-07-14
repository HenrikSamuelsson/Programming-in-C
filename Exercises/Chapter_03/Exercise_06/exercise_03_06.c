/*
 * exercise_03_06.c
 *
 * Evaluation of a polynomial.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include<stdio.h>

int main (void)
{
	float result;
	float x = 2.55;

	result = 3 * x * x * x + 5 * x * x + 6;

	printf("result = %f", result);

	return 0;
}
