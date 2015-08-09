/*
 * program_07_04.c - Calculating the nth Triangular Number
 */

#include <stdio.h>

/*
 * Function to calculate nth triangular number.
 */

void calculateTriangularNumber (int n)
{
	int i, triangularNumber = 0;

	for (i = 1; i <= n; ++i)
		triangularNumber += i;

	printf("Triangular number %i is %i\n", n, triangularNumber);
}

int main (void)
{
	calculateTriangularNumber (10);
	calculateTriangularNumber (20);
	calculateTriangularNumber (50);

	return 0;
}
