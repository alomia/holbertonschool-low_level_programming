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
int lenArr;
int i;

lenArr = 0;

ptr = malloc((min + max + 1) * sizeof(int));

if (ptr == NULL)
return (NULL);

if (min > max)
return (NULL);

for (i = min; i <= max ; i++)
lenArr++;

for (i = 0 ; i <= lenArr ; i++)
{

ptr[i] = min;
min++;
}

return (ptr);
}
