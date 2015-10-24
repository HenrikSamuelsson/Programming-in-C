/*
 * program_11_04.c - Implementing a Rotate Function
 */

#include <stdio.h>

int main (void)
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
	unsigned int rotate (unsigned int value, int n);

	printf ("%x\n", rotate(w1, 8));
	printf ("%x\n", rotate(w1, -16));
	printf ("%x\n", rotate(w2, 4));
	printf ("%x\n", rotate(w2, -2));
	printf ("%x\n", rotate(w1, 0));
	printf ("%x\n", rotate(w1, 44));

	return 0;
}

/*
 *  Function to rotate an unsigned int left or right.
 */
unsigned int rotate (unsigned int value, int n)
{
	unsigned int result, bits;

	// scale down the shift count to a defined range

	if ( n > 0 )
		n = n % 32;
	else
		n = -(-n % 32);

	if ( n == 0 )
	{
		result = value;
	}
	else if ( n > 0 )
	{
		// shall left rotate
		bits = value >> (32 - n);
		result = value << n | bits;
	}
	else
	{
		// shall right rotate
		n = -n;
		bits = value << (32 - n);
		result = value >> n | bits;
	}

	return result;
}
