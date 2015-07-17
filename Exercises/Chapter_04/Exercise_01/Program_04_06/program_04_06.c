/*
 * program_04_06.c - Introducing the while Statement
 *
 * Program to introduce the while statement.
 */

#include <stdio.h>

int main (void)
{
	int count = 1;

	while (count <= 5)
	{
		printf ("%i\n", count);
		++count;
	}

	return 0;
}
