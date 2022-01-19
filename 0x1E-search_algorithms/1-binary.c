#include "search_algos.h"

/**
 *
 *
 *
 *
 *
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;
	for (i = left; i < right; ++i)
		printf("%d, ", array[i]);
	printf("%d\n", array[right]);
}

/**
 *
 *
 *
 *
 */

int binary_search(int *array, size_t size, int value) {
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
