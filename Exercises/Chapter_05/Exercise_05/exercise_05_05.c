/*
 * program_05_05.c
 *
 * Program to reverse the digits of a number.
 *
 * Can handle both positive and negative numbers.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

int main (void)
{
	int number, right_digit;
	_Bool isNegative = 0;

	printf ("Enter your number.\n");
	scanf ("%i", &number);

	if (number < 0)
	{
		number *= -1;
		isNegative = 1;
	}

	do
	{
		right_digit = number % 10;
		printf ("%i", right_digit);
		number = number / 10;
	}
	while (number != 0);

	if (isNegative)
	{
		printf ("-");
	}
	
	printf ("\n");
	return 0;
}
