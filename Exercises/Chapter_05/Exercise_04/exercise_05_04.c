/*
 * exercise_05_04.c
 *
 * Program that acts as a calculator.
 *
 * Author: Henrik Samuelsson, henrk.samuelsson(at)gmail.com
 */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	double accumulator;
	double number;
	char operator;
	bool isCalculating;

	// The accumulator shall be 0 at startup
	accumulator = 0.0;

	// Set flag indicating that calculations are ongoing
	isCalculating = true;

	printf ("Begin Calculations\n");

	// Run calculations until user indicates exit
	while (isCalculating)
	{
		// Get input from the user. Note the blank in the format string that
		// tells scanf to skip leading whitespace, and the first non-whitespace
		// character will be read with the %c conversion specifier.
		scanf ("%lf %c", &number, &operator);

		switch (operator)
		{
		case '+':
			accumulator += number;
			break;
		case '-':
			accumulator -= number;
			break;
		case '*':
			accumulator *= number;
			break;
		case '/':
			if (number == 0)
				printf ("ERROR: Division by 0 is not allowed!");
			else
				accumulator /= number;
			break;
		case 'S':
			accumulator = number;
			break;
		case 'E':
			isCalculating = false;
			break;
		default:
			printf ("ERROR: Unknown operator!\n");
			break;
		}

		printf ("= %f\n", accumulator);
	}

	printf ("End of Calculations");

	return 0;

}
