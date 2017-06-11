/*
 * exercise_06_07.c
 *
 * Program that implements the Sieve of Eratosthenes to generate prime  numbers.
 *
 * The steps are not quite the same as in the book because I did not fully
 * understand the explanation of the algorithm. Step 4 from the book should in
 * my opinion be the last step.
 *
 * Auhthor: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

int main (void)
{
	int n = 150;
	int i, j;

	// Step 1: Define an array of integers P and set all elements to 0.
	int P[n];
	for(i = 0; i < n; i++)
		P[i] = 0;

	// Step 2: Set i to 2.
	i = 2;
	j = 2;

	// Step 3: The algorithm shall terminate when when i > n.
	while(i < n)
	{
		// Step 4: For all j such that i x j <= n set element number i * j in P
		// to 1.
		while(i * j <= n)
		{
			P[i * j] = 1;
			j++;
		}

		// Step 5: Add 1 to i and goto step 3
		i++;
		j = i; 
			
	}

	// Step 6: If element i in P is 0 then i is prime, except for i = 0 and
	// i = 1.
	for (i = 2; i < n; i++)
	{
		if (P[i] == 0)
			printf("%d ", i);
	}

	return 0;
}
