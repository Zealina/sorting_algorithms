#include "sort.h"
#include <stdio.h>

/**
 * cocktail_sort_list - Sort using bidirectional bubble sort
 * @list: The unsorted list
 *
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current;
	int swapped = 1;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = *list;
	while (swapped)
	{
		swapped = 0;
		while (current != NULL && current->next != NULL)
		{
			if (current->n > current->next->n)
			{
				swap_nodes(current->next, current);
				if (current->prev == NULL)
					(*list) = current;
				swapped = 1;
				print_list(*list);
			}
			else
				current = current->next;
		}
		swapped = 0;
		while (current->prev != NULL)
		{
			if (current->n < current->prev->n)
			{
				swap_nodes(current, current->prev);
				if (current->prev == NULL)
					*list = current;
				swapped = 1;
				print_list(*list);
			}
			else
				current = current->prev;
		}
	}
}
/**
 * swap_nodes - Swaps two nodes in a doubly linked list
 * @a_node: The first node in the list
 * @b_node: The second node in the list
 */
void swap_nodes(listint_t *a_node, listint_t *b_node)
{
	if (a_node->next != NULL)
		a_node->next->prev = b_node;
	if (b_node->prev != NULL)
		b_node->prev->next = a_node;
	b_node->next = a_node->next;
	a_node->next = b_node;
	a_node->prev = b_node->prev;
	b_node->prev = a_node;
}
