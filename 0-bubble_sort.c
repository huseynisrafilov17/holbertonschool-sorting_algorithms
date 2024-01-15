#include "sort.h"
/**
 * bubble_sort - bubble sort.
 * @array: array of numbers.
 * @size: size of array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int time = 0, temp;

	while (1)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				time++;
				print_array(array, size);
			}
		}
		if (time == 0)
			break;
		time = 0;
	}
}
