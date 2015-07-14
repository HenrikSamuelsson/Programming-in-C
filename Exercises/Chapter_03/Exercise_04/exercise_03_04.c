/*
 * exercise_03_04.c
 *
 * Converts from Fahrenheit to Celsius.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include<stdio.h>

int main (void)
{
	float c;
	float f = 27.0;

	c = (f - 32) / 1.8;

	printf("%f degrees Fahrenheit equals %f Celsius", f, c);

	return 0;
}
