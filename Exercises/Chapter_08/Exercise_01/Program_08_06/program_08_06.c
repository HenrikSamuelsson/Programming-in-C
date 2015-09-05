/*
 * program_08_06.c - Illustrating Arrays of Structures
 */

#include <stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};

int main (void)
{
	struct time timeUpdate (struct time now);
	struct time testTime[5] =
	{
	{ 11, 59, 59 },
	{ 12, 0, 0 },
	{ 1, 29, 59 },
	{ 23, 59, 59 },
	{ 19, 12, 27 } };

	int i;

	for (i = 0; i < 5; ++i)
	{
		printf ("Time is %.2i:%.2i:%.2i", testTime[i].hour, testTime[i].minute,
				testTime[i].second);

		testTime[i] = timeUpdate (testTime[i]);

		printf (" ...one second later it's %.2i:%.2i:%.2i\n", testTime[i].hour,
				testTime[i].minute, testTime[i].second);
	}
	return 0;
}

/*
 * Function to update the time by one second.
 */

struct time timeUpdate (struct time now)
{
	++now.second;

	if (now.second == 60) 	// if next minute
	{
		now.second = 0;
		++now.minute;

		if (now.minute == 60)	// if next hour
		{
			now.minute = 0;
			++now.hour;

			if (now.hour == 24)	// if next day
			{
				now.hour = 0;
			}
		}
	}

	return now;
}

