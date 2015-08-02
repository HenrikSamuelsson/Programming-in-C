/*
 * exercise_06_03.c - Demonstrating an Array of Counters
 *
 * Based on program 6.2 but without fixed number of responses.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

int main (void)
{
	int ratingCounters[11], i, response;

	for (i = 1; i <= 10; ++i)
		ratingCounters[i] = 0;

	printf ("Enter your responses, enter 999 when done.\n");

	for (i = 1; i <= 20; ++i)
	{
		scanf ("%i", &response);

		if (response == 999)
			break;
		else if (response < 1 || response > 10)
			printf ("Bad response: %i\n", response);
		else
			++ratingCounters[response];
	}

	printf ("\n\n");
	printf ("Rating   Number of Responses\n");
	printf ("------   -------------------\n");

	for (i = 1; i <= 10; ++i)
		printf ("%4i%14i\n", i, ratingCounters[i]);

	return 0;
}
