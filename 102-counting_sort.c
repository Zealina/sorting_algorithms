#include "sort.h"
#include <stdio.h>
/**
 * counting_sort - Sorts an array using the counting sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 */
void counting_sort(int *array, size_t size)
{
	size_t i;
	int high, j;
	int *counting_array, *result;

	if (array == NULL || size <= 1)
		return;

	high = array[0];
	for (i = 1; i < size; i++)
	{
		if (array[i] > high)
			high = array[i];
	}
	counting_array = malloc(sizeof(int) * (high + 1));
	if (counting_array == NULL)
		return;
	for (j = 0; j < (high + 1); j++)
		counting_array[j] = 0;
	for (i = 0; i < size; i++)
		counting_array[array[i]]++;
	for (j = 1; j < (high + 1); j++)
		counting_array[j] += counting_array[j - 1];
	print_array(counting_array, high + 1);
	result = malloc(sizeof(int) * size);
	if (result == NULL)
	{
		free(counting_array);
		return;
	}
	for (j = size - 1; j >= 0; j--)
	{
		counting_array[array[j]]--;
		result[counting_array[array[j]]] = array[j];
	}
	free(counting_array);
	for (i = 0; i < size; i++)
		array[i] = result[i];
	free(result);
}
