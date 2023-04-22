#include "sort.h"

/**
 * bubble_sort - sort an array of integers using the bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swapped = 0;
	int temp;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 1; j < size - i; j++)
		{
			if (array[j] < array[j - 1])
			{
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
