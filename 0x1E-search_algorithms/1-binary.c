#include "search_algos.h"
/**
 * print_array - print elements of array
 * @array: array of integers
 * @left: start array
 * @right: final array
 *
 * Return: void
 */
void print_array(int *array, size_t left, size_t right)
{
size_t i;
for (i = left; i < right; ++i)
printf("%d, ", array[i]);
printf("%d\n", array[right]);
}

/**
 * binary_search - function that searches for a value in a sorted array
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search
 *
 * Return: middle or -1
 */

int binary_search(int *array, size_t size, int value)
{
size_t middle;
size_t start = 0;
size_t end = size - 1;

if (array == NULL || size == 0)
return (-1);

while (start <= end)
{
printf("Searching in array: ");
print_array(array, start, end);
middle = (start + end) / 2;

if (array[middle] < value)
{
start = middle + 1;
}
else if (array[middle] > value)
{
end = middle - 1;
}
else
return (middle);
}

return (-1);
}
