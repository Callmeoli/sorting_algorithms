#include "sort.h"

/**
 * selection_sort - sort array using selection sort algo
 * @array: array to be sorted
 * @size: size of array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
	}
}
