#include "sort.h"
/**
 * shell_sort - sort array in shell sort method
 * @array: array to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{

	int incr, i ,j, k;

	incr = 1;
	while (incr <= ((int)size - 1) / 9)
	{
		incr = 3 * incr + 1;
	}	
	for (; incr >= 1; incr = incr / 3)
	{
		for (j = incr; j < (int)size; j++)
		{
			for (i = j - incr; i >= 0; i = (i - incr))
			{
				if( array[i + incr] > array[i])
				{
					break;
				}
				else
				{
					k = array[i + incr];
					array[i + incr] = array[i];
					array[i] = k;
				}
			}
		}
		print_array(array, size);
	}
}