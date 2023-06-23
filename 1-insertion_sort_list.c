#include "sort.h"

/**
 * insertion_sort - Sorts a doubly linked list using insertion
 * 	sort algorithm
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *trav;

	trav = *list;
	while (trav != NULL && trav->next != NULL)
	{
		if (trav->n > trav->next->n)
		{
			while (

}
