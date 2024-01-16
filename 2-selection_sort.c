#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - selection sort function
 * @arr: array
 * @size: size of array
 *
 * Return: void
 */
void selection_sort(int *arr, size_t size)
{
	size_t i, j, min_i;
	int min;

	for (i = 0; i < size - 1; i++)
	{
		min = arr[i];
		min_i = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				min_i = j;
			}
		}
		if (min_i != i)
		{
			arr[min_i] = arr[i];
			arr[i] = min;
			print_array(arr, size);
		}
	}
}
