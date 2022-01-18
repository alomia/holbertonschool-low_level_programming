#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
        size_t i = 0;
        for (; i <= size; ++i)
        {
                if (array[i] == value)
                        return (i);
        }

        return (-1);
}

