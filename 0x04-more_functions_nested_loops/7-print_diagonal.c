#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: variable
 *
 * return: void
 */
void print_diagonal(int n)
{
int i;
int j;

if (n >= 1)
{

for (i = 1; i <= n ; i++)
{
_putchar(j);
_putchar(92);

j += ' ';

}

}
_putchar('\n');

}
