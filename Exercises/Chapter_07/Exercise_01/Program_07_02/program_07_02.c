/*
 * program_07_02.c - More on Calling Functions
 */

#include <stdio.h>

void printMessage (void)
{
	printf ("Programming is fun.\n");
}

int main (void)
{
	printMessage ();
	printMessage ();

	return 0;
}
