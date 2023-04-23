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
		temp = forward;
		while (backward)
		{
			if (temp->n < backward->n)
			{
				backward->next = temp->next;
				if (temp->next->prev)
					temp->next->prev = backward;
				backward->prev = temp;
				temp->next = backward;
				print_list(*list);
			}
			backward = backward->prev;
		}
		forward = forward->next;
	}
}
