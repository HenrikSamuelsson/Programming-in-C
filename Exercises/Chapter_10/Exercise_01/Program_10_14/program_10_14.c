/*
 * program_10_14.c - Revised Version of the copyString()
 */

#include <stdio.h>

void copyString (char *to, char *from)
{
	while ( *from )
		*to++ = *from++;

	*to = '\0';
}

int main (void)
{
	void copyString (char *to, char *from);
	char string1[] = "A string to be copied.";
	char string2[50];

	copyString (string2, string1);
	printf ("%s\n", string2);

	copyString (string2, "So is this.");
	printf ("%s\n", string2);

	return 0;
}
