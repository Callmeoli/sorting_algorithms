#include "sort.h"
void quicksort_recursion(int array[], int low, int high, int size);
int partition(int array[], int low, int high, int size);
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
* @low: low first value of array
* @high: last value of array
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
 */
int partition(int array[], int low, int high, int size)
{
	int pivot_value = array[high];
	int i = low;
	int j;


	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
swap(&array[i], &array[high]);
print_array(array, size);
return (i);
}
