#include "sort.h"

/**
 * quick_sort - Implement the quick sort algorithm
 * @array: The unsorted array
 *
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	quick_sort_inner(array, 0, size - 1);
}
/**
 * quick_sort_inner - Implement the quick sort algorithm
 * @array: The unsorted array
 * @low: The Lower limit to be sorted
 * @high: The upper limit to be sorted
 */
void quick_sort_inner(int *array, size_t low, size_t high)
{
	size_t i = low, j;
	int pivot, temp;


	if (low >= high)
		return;

	pivot = array[high];
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
		}
	}
	temp = array[i];
	array[i] = array[high];
	array[high] = temp;
	print_array(array, high + 1);
	quick_sort_inner(array, low, i - 1);
	quick_sort_inner(array, i + 1, high);
}
