/*
 * program_05_07.c
 *
 * Program to generate a table of prime numbers.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int p, d;
	bool isPrime;

	for (p = 3; p <= 50; p += 2)
	{
		isPrime = true;

		for (d = 2; d < p  && isPrime; ++d)
			if (p % d == 0)
				isPrime = false;

		if (isPrime != false)
			printf ("%i ", p);
	}

	printf ("\n");

	return 0;
}
