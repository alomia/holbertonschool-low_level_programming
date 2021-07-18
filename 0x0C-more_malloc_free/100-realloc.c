#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: variable
 * @new_size: variable
 *
 * Return: ptr2
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

if (ptr == NULL)
ptr = malloc(new_size);

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{

free(ptr);
return (NULL);
}

free(ptr);

ptr = realloc(ptr, new_size * old_size);

return (ptr);
}
