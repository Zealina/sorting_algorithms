#include "sort.h"

/**
 * insertion_sort_list - Sort a list using insertion sort algorithm
 * @list: The list to be sorted
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *forward, *backward, *temp;

	if (*list == NULL)
		return;
	forward = (*list)->next;
	while (forward)
	{
		backward = forward->prev;
		while (backward)
		{
			if (forward->n < backward->n)
			{
				temp = backward;
				backward = backward->next;
				backward->prev = temp;
				temp->next = backward;
				print_list(*list);
				backward = backward->prev;
			}
		}
		forward = forward->next;
	}
}
