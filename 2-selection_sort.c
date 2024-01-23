#include "sort.h"

/**
 * selection_sort - a function that sorts an array according to selection sort.
 *
 *@array: the array that i want to sort
 *@size: the length of the array to be sorted
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, tmp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
				if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
				tmp = array[i];
				array[i] = array[min];
				array[min] = tmp;

				print_array(array, size);
		}
	}
}
