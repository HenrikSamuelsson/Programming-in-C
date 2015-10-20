/*
 * program_10_15.c - Using Pointers to Find the Length of a String
 */

#include <stdio.h>

int stringLength (const char *string)
{
	const char *cptr = string;

	while ( *cptr )
		++cptr;
	return cptr - string;
}

int main (void)
{
	int stringLength (const char *string);

	printf("%i  ", stringLength ("stringLength test"));
	printf("%i  ", stringLength (""));
	printf("%i  ", stringLength ("complete"));

	return 0;
}
