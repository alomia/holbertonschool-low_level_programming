#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: variable
 * @size: variable
 *
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

int *ptr;

ptr = malloc(nmemb * size);

return (ptr);
}
