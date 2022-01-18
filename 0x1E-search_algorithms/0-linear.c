#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: is not present in array or if array is NULL or -1
 */
int linear_search(int *array, size_t size, int value)
{

size_t i;

if (array == NULL || size == 0)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);

if (array[i] == value)
return (i);

}

return (-1);
}
