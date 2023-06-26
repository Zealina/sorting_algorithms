#include "sort.h"
#include <stdio.h>

/**
 * shell_sort - Sort an array using shell sort
 * @array: The array to be sorted
 * @size: The size of the array
 *
 */
void shell_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, gap = 1;

	while (gap < size)
		gap = gap * 3 + 1;
	for (gap = gap / 3; gap > 0; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; (j >= gap) && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = temp;
		}
		print_array(array, size);
	}
}

