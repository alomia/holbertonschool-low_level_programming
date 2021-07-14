#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: variable
 * @c: variable
 *
 * Return: ptr
 */
char *create_array(unsigned int size, char c)
{

unsigned int i;
char *ptr;

i = 0;

if (size == 0)
return (0);

ptr = malloc(size * sizeof(char));

if (ptr == NULL)
return (0);

while (i < size)
{

ptr[i] = c;
i++;
}

return (ptr);
}
