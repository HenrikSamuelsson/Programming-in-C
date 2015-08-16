/*
 * program_07_14.c - Multidimensional Variable-Length Arrays
 */

#include <stdio.h>

int main (void)
{
	void scalarMultiply (int nRows, int nCols, int matrix[nRows][nCols],
			int scalar);
	void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols]);
	int sampleMatrix[3][5] =
	{
		{ 7, 16, 55, 13, 12 },
		{ 12, 10, 52, 0, 7 },
		{ -2, 1, 2, 4, 9 }
	};

	printf("Original matrix:\n");
	displayMatrix(3, 5, sampleMatrix);

	scalarMultiply(3, 5, sampleMatrix, 2);

	printf("\nMultiplied by 2:\n");
	displayMatrix(3, 5, sampleMatrix);

	scalarMultiply(3, 5, sampleMatrix, -1);

	printf("\nThen multiplied by -1:\n");
	displayMatrix(3, 5, sampleMatrix);

	return 0;
}

/*
 * Function to multiply a matrix by a scalar.
 */

void scalarMultiply (int nRows, int nCols, int matrix[nRows][nCols],
		int scalar)
{
	int row, column;

	for ( row = 0; row < nRows; ++row )
		for ( column = 0; column < nCols; ++column )
			matrix[row][column] *= scalar;
}

/*
 * Function to print content of a two dimensional array.
 */

void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols])
{
	int row, column;

	for ( row = 0; row < nRows; ++row )
	{
		for ( column = 0; column < nCols; ++column )
			printf("%5i", matrix[row][column]);

		printf ("\n");
	}
}
