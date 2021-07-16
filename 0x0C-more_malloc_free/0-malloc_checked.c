#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: variable
 *
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{

int *ptr;

ptr = malloc(b * sizeof(int));

return (ptr);
}
