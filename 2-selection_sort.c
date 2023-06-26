#include "sort.h"

/**
 * selection_sort - Sorts using the selection sort algorithm
 * @array: The unsorted array
 * @size: The size of @array
 *
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, min_index;

	if (array == NULL || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_index] > array[j])
				min_index = j;
		}
		if (min_index != i)
		{
			temp = array[min_index];
			array[min_index] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
