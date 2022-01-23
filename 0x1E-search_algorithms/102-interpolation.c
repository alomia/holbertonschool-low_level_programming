#include "search_algos.h"
/**
* interpolation_search - function that searches for a value in a
* sorted array of integers
* @array: pointer to the first element of the array
* @size: is the number of elements in array
* @value: is the value to search
* Return: is not present in array or if array is NULL or -1
*/
int interpolation_search(int *array, size_t size, int value)
{

unsigned int l = 0, h = size - 1, p;

if (!array || size == 0)
return (-1);

while (1)
{

p = l + (((double)(h - l) / (array[h] - array[l])) *
(value - array[l]));
printf("Value checked array[%d] ", p);
if (p >= size)
{

printf("is out of range\n");
return (-1);
}

else
printf("= [%d]\n", array[p]);

if (array[p] == value)
return (p);

if (l == h)
return (-1);

if (array[p] < value)
l = p + 1;

else
h = p - 1;
}
}
