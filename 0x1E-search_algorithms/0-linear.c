/**
 * linear_search - function that searches for a value in an array
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: first index where value is located
 *
 * return: i or -1
 */
#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{

size_t i = 0;


if (array == NULL || size == 0)
        return  (-1);

for (; i < size; ++i)
{

printf("value checked array[%ld] = [%d]\n", i, array[i]);

if (array[i] == value)
return (i);
}

return (-1);
}
