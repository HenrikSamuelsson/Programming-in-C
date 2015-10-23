/*
 * program_11_03.c - Implementing a shift function
 */

#include <stdio.h>

unsigned int shift (unsigned int value, int n)
{
	if ( n > 0 )	// left shift
		value <<= n;
	else			// right shift
		value >>= -n;

	return value;
}

int main (void)
{
	unsigned int w1 = 0177777u, w2 = 0444u;
	unsigned int shift (unsigned int value, int n);

	printf("%o\t%o\t\n", shift (w1, 5), w1 << 5);
	printf("%o\t%o\t\n", shift (w1, -6), w1 >> 6);
	printf("%o\t%o\t\n", shift (w2, 0), w2 >> 0);
	printf("%o\n", shift (shift (w1, -3), 3));

	return 0;
}
