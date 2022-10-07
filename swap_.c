#include <sort.h>
/**
 * swap_ - swap variables
 * @a: first variable
 * @b: second variable
 * Return: 1 if swap is not made, 0 if swap is performed
 */
int swap_(double *array[0],double *array[2])
{

    if(*array[0] != *array[0])
    {
       int temp = *array[0];
       *array[0] = *array[2];
       *array[2] = temp;
       return 0;
    }
    else
    {
        return 1;
    }
}