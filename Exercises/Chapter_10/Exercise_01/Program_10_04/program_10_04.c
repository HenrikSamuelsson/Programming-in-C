/*
 * program_10_04.c - Using Pointers to Structures
 */

#include <stdio.h>

int main (void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};

	struct date today, *datePtr;

	datePtr = &today;

	datePtr->month = 10;
	datePtr->day = 12;
	datePtr->year = 2015;

	printf ("Today's date is %i/%i/%.2i.\n", datePtr->month, datePtr->day,
			datePtr->year % 100);

	return 0;
}
