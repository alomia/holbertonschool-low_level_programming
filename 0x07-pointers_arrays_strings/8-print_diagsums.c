#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer
 * @size: variable
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{

int sum1;
int sum2;

int i;
int j;

sum1 = 0;
sum2 = 0;



for (i = 0; i < size; i++)
{

sum1 += *(a + (i * size) + i);
}

for (j = 0 ; j < size ; j++)
{

sum2 += *(a + (j * size) + (size - j - 1));
}

printf("%d, %d\n", sum1, sum2);
}
