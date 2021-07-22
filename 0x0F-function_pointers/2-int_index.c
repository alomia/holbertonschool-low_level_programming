#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array number
 * @size: length array
 * @cmp: functions
 *
 * Return: if is NULL -1 else return i
 */
int int_index(int *array, int size, int (*cmp)(int))
{

unsigned int i;
int result;

if (array && size && cmp)
{

for (i = 0 ; i < size ; i++)
{

result = cmp(array[i]);
if (result)
return (i);
}

}

return (-1);

}
