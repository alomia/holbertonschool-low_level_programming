#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: variable:
 * @max: variable
 *
 * Return: ptr
 */
int *array_range(int min, int max)
{

int *ptr;
int i;

if (min > max)
return (NULL);

ptr = malloc((min + max + 1) * sizeof(*ptr));

if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
{

ptr[i] = min;
}

return (ptr);
}
