/*
 * exercise_03_09.c
 *
 * Finds the next largest even multiple for some pairs of sample data.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */
#include<stdio.h>

int main (void)
{
	printf("The next largest even multiple of %i and %i is %i.\n", 365, 7,
			365 + 7 - 365 % 7);
	printf("The next largest even multiple of %i and %i is %i.\n", 12258, 23,
				12258 + 23 - 12258 % 23);
	printf("The next largest even multiple of %i and %i is %i.\n", 996, 4,
				996 + 4 - 996 % 4);

	return 0;
}
