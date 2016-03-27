/*
 * exercise_05_06.c
 *
 * Program that takes an integer entered by the user and extracts each digit
 * into English.
 *
 * Note: The code would be way shorter if an array was used for storing the
 * number strings. But arrays have not been introduced in the book yet, hence
 * the switch statement.
 *
 * Thanks to Doug Tuttle for reporting bug in previous version of this code.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

int main (void)
{
	int input = 0, reversedInput = 0, digit;
    int numberOfDigits = 0;	// The number of digits in integer input by user

	scanf ("%d", &input);

	// Start by reversing the input number
	do
	{
		reversedInput *= 10;
		reversedInput = reversedInput + input % 10;
		input /= 10;
		numberOfDigits++;

	} while (input != 0);

	// Extract each digit from the right and print it in English
	do
	{
		digit = reversedInput % 10;
		reversedInput /= 10;
		numberOfDigits--;

		switch (digit)
		{
		case 0:
			printf ("zero ");
			break;
		case 1:
			printf ("one ");
			break;
		case 2:
			printf ("two ");
			break;
		case 3:
			printf ("three ");
			break;
		case 4:
			printf ("four ");
			break;
		case 5:
			printf ("five ");
			break;
		case 6:
			printf ("six ");
			break;
		case 7:
			printf ("seven ");
			break;
		case 8:
			printf ("eight ");
			break;
		case 9:
			printf ("nine ");
			break;
		}

	} while (numberOfDigits != 0);

	return 0;
}
