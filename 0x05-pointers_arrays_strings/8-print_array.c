#include "holberton.h"
#include <stdio.h>
/**
 * print_array -  function that prints n elements
 * @a: pointer
 * @n: pointer
 *
 * return: void
 */
void print_array(int *a, int n)
{

int i;

i = 0;

for (; i <= n ; i++)
{

printf("%d", a[i]);

if (i < n)
printf(", ");

}

}
