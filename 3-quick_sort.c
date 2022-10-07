#include "sort.h"
void quicksort_recursion(int array[], int low, int high, int size);
int partition(int *array, int low, int high, size_t size);
/**
 * swap - swap values
 * @x: value 1
 * @y: value2
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
* quick_sort - sort array using quick sort algo
* @array: array to be sorted
* @size: size of the array
*/
void quick_sort(int *array, size_t size)
{

	quicksort_recursion(array, 0, (int)size - 1, (int) size);
}
/**
 * quicksort_recursion - recursion function that do partion
 * @low: value 1
 * @high: value2
 * @size: size of array
 * @array: array
 */
void quicksort_recursion(int array[], int low, int high, int size)
{
	if (low < high)
	{
		int pivot_index = partition(array, low, high, (int) size);

		quicksort_recursion(array, low, pivot_index - 1, (int) size);
		quicksort_recursion(array, pivot_index + 1, high, (int) size);
	}
}
/**
 * partition - swap values
 * @low: value 1
 * @high: value2
 * @size: size of array
 * @array: array
 * Return: the pivote value
 */
int partition(int *array, int low, int high, size_t size)
{
	int i = (low - 1);
	int pivot = array[high];
	int j, tmp;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			tmp = array[j];
			array[j] = array[i];
			array[i] = tmp;
			if (i != j)
				print_array(array, size);
		}
	}

	if (array[i + 1] != array[high])
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		if ((i + 1) != j)
			print_array(array, size);
	}

	return (i + 1);
}
