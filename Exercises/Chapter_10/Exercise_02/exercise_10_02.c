/*
 * exercise_10_02.c
 */

#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

void insertEntry(struct entry *newEntry, struct entry *existingEntry)
{
	newEntry->next = existingEntry->next;
	existingEntry->next = newEntry;
}

int main (void)
{
	void insertEntry(struct entry *newEntry, struct entry *existingEntry);

	struct entry n1, n2, nE;
	struct entry *listPointer;

	n1.value = 100;
	n1.next = &n2;

	nE.value = 150;

	n2.value = 200;
	n2.next = (struct entry *) 0;	// mark list end with null pointer

	listPointer = &n1;

	printf("Values in the list before insert of new entry: ");
	while ( listPointer != (struct entry *) 0 )
	{
			printf ("%i ", listPointer->value);
			listPointer = listPointer->next;
	}
	printf("\n");

	insertEntry(&nE, &n1);

	listPointer = &n1;

	printf("Values in the list after insert of new entry: ");
	while ( listPointer != (struct entry *) 0 )
	{
		printf ("%i ", listPointer->value);
		listPointer = listPointer->next;
	}
	printf("\n");

	return 0;
}
