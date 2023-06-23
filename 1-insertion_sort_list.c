#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion
 *	sort algorithm
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *trav, *reset, *temp;

	trav = *list;
	while (trav != NULL && trav->next != NULL)
	{
		reset = trav->next;
		while (reset->prev != NULL)
		{
			temp = reset->prev;
			if (reset->n < temp->n)
			{
				temp->next = reset->next;
				reset->next = temp;
				reset->prev = temp->prev;
				temp->prev = reset;
				if (temp->next != NULL)
					temp->next->prev = temp;
				if (reset->prev != NULL)
					reset->prev->next = reset;
				print_list(*list);
			}
			reset = reset->prev;
		}
		trav = trav->next;
	}
}
