#include "sort.h"

/**
  * partition - this is where the real swap occurs
  *
  * @array: the array to sort.
  * @low: index for leftmost element
  * @high: index of rightmost element
  * @size: size of the array
  *
  *Return: returns i
  */
int partition(int *array, int low, int high, size_t size)
{
	int tmp, pivot = array[high];
	int j, i = low - 1;

	for (j = low; j < high; j++)
	{
			if (array[j] < pivot)
			{
				i = i + 1;
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
		}
	}
	i++;
	tmp = array[i];
	array[i] = array[high];
	array[high] = tmp;
	return (i);
}


/**
  * quick_sort_rec - the recursive function that calls partition.
  *
  * @array: the array to sort.
  * @lo: index for leftmost element
  * @hi: index of rightmost element
  * @size: size of the array
  */
void quick_sort_rec(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo > hi)
		return;
	p = partition(array, lo, hi, size);

	quick_sort_rec(array, lo, p - 1, size);
	quick_sort_rec(array, p + 1, hi, size);
}

/**
  * quick_sort - the main quick sort function
  *
  * @array: the array to sort.
  * @size: size of the array
  */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_rec(array, 0, size - 1, size);
}
