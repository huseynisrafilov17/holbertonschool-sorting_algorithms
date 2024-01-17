#include "sort.h"
#include <stdio.h>
/**
 * quick_sort_helper - sorts by insertion method.
 * @array: array
 * @size: size
 * @original_array: orgin arr
 * @original_size: orgin size
 */
void quick_sort_helper(int *array,
			size_t size,
			int *original_array,
			size_t original_size)
{
	size_t i, j;
	int pivot = array[size - 1];
	int temp;

	if (size < 2)
		return;

	i = -1;
	for (j = 0; j < size; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	print_array(original_array, original_size);

	quick_sort_helper(array, i, original_array, original_size);
	quick_sort_helper(array + i + 1, size - i - 1, original_array, original_size);
}
/**
 * quick_sort - sorts by insertion method.
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, size, array, size);
}
