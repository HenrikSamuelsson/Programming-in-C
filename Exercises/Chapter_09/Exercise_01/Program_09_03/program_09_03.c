/*
 * program_09_03.c - Concatenating Character Strings
 */

#include <stdio.h>

int main (void)
{
	void concat (char result[], const char str1[], const char str2[]);
	const char s1[] = { "Test " };
	const char s2[] = { "works." };
	char s3[20];

	concat (s3, s1, s2);

	printf ("%s\n", s3);

	return 0;
}

/*
 * Function to concatenate two character strings.
 */
void concat (char result[], const char str1[], const char str2[])
{
	int i, j;

	// copy str1 to result
	for ( i = 0; str1[i] != '\0'; ++i)
		result[i] = str1[i];

	// copy str2 to result
	for ( j = 0; str2[j] != '\0'; ++j)
		result[i + j] = str2[j];

	// add a null character to the concatenated string to terminate it
	result[i + j] = '\0';
}
