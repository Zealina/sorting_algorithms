#include "sort.h"

/**
 * selection_sort - sort using selection sort algorithm
 * @array: The unsorted array
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, *min;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		min = &array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *min)
				min = &array[j];
		}
		temp = array[i];
		array[i] = *min;
		*min = temp;
		print_array(array, size);
	}
}
