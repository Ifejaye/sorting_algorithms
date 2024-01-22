#include "sort.h"

/**
 * bubble_sort - a functions that sorts array following the sort algorithm
 *
 * @array: the unsorted array
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		print_array(array, size);
	else
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					size_t tmp;

					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
				}
				print_array(array, size);
			}
		}
	}
}
