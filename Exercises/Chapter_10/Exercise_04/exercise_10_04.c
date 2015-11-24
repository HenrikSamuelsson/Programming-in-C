/*
 * exercise_10_04.c
 */

#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

void removeEntry(struct entry *entryToKeep)
{
	entryToKeep->next = entryToKeep->next->next;
}

int main (void)
{
	void insertEntry(struct entry *newEntry, struct entry *existingEntry);

	struct entry head, n1, n2, n3;
	struct entry *listPointer;

	head.next = &n1;
	n1.value = 100;
	n1.next = &n2;
	n2.value = 200;
	n2.next = &n3;
	n3.value = 300;
	n3.next = (struct entry *) 0;	// mark list end with null pointer

	listPointer = head.next;

	printf("Values in the list before removal of second entry: ");
	while ( listPointer != (struct entry *) 0 )
	{
			printf ("%i ", listPointer->value);
			listPointer = listPointer->next;
	}
	printf("\n");


	removeEntry(&n1);

	listPointer = head.next;

	printf("Values in the list after removal of second entry: ");
	while ( listPointer != (struct entry *) 0 )
	{
		printf ("%i ", listPointer->value);
		listPointer = listPointer->next;
	}
	printf("\n");

	return 0;
}
