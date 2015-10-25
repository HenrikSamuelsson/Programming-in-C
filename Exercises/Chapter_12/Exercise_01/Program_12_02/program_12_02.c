/*
 * program_12_02.c - More on working with Defines
 */

#include <stdio.h>

#define PI		3.141592654

/*
 * Function to calculate the area of a circle.
 */
double area (double r)
{
	return PI * r * r;
}

/*
 * Function to calculate the circumference of a circle.
 */
double circumference (double r)
{
	return 2.0 * PI * r;
}

/*
 * Function to calculate the volume of a circle.
 */
double volume (double r)
{
	return 4.0 / 3.0 * PI * r * r * r;
}

int main (void)
{
	double area (double r);
	double circumference (double r);
	double volume (double r);

	printf ("radius = 1: %.4f    %.4f    %.4f\n", area (1.0),
			circumference (1.0), volume (1.0));

	printf ("radius = 4.98: %.4f    %.4f    %.4f\n", area (4.98),
				circumference (4.98), volume (4.98));

	return 0;
}
