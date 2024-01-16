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
	size_t i;
	size_t j;
	int min;
	int min_i;

	for (i = 0; i < size; i++)
	{
		min = arr[i];
		for (j = i + 1; j < size; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				min_i = j;
			}
			if (j == size - 1)
			{
				arr[min_i] = arr[i];
				arr[i] = min;
				print_array(arr, size);
			}
		}
	}
}
