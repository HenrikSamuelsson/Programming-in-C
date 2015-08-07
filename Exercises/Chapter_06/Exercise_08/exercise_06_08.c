/*
 * exercise_06_08.c
 *
 * Program that calculates the dot product of two vectors.
 *
 * Author: Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 */

#include <stdio.h>

int main (void)
{
	int i, length, dotProduct;
	
	printf("Enter length of the vectors");
	scanf("%d", &length);
	
	int vector1[length];
	printf("Enter values for vector 1: ");
	for(i = 0; i < length; ++i)
		scanf("%d", &vector1[i]);
	
	int vector2[length];
	printf("Enter values for vector 2: ");
	for(i = 0; i < length; ++i)
		scanf("%d", &vector2[i]);
	
	dotProduct = 0;
	for(i = 0; i < length; i++)
		dotProduct += vector1[i] * vector2[i];

	printf("The dot product of the two vectors is %d", dotProduct);

	return 0;
}
