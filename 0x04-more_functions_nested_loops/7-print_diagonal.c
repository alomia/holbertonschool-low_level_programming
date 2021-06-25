#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: variable
 *
 * return: void
 */
void print_diagonal(int n)
{
int i, j;

if (n >= 1)
{

for (i = 1; i <= n ; i++)
{

for (j = 0 ; j < i ; j++)
{
_putchar(' ');
}

_putchar(92);
_putchar('\n');

}

}

_putchar('\n');

}
