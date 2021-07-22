#include "function_pointers.h"
/**
 *  array_iterator - function given as a parameter on each
 *  element of an array
 * @array: numbers array
 * @size: length array
 * @action: function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

int i;

if (array && size && action)
{

for (i = 0; i < size ; i++)
action(array[i]);

}

}
