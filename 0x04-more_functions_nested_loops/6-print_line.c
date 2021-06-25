#include "holberton.h"
/**
 * print_line - draws a straight line on the terminal
 * @n: varible
 *
 * return: void
 */
void print_line(int n)
{

int i;

if (n >= 1)
{

for (i = 1; i <= n; i++)
_putchar('_');

}

_putchar('\n');

}
