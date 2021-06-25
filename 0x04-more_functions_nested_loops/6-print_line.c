#include "holberton.h"
/**
 * print_line - draws a straight line on the terminal
 *@n: varible
 *
 * return: void
 */
void print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
if (n == 0)
{
break;
}
_putchar('_');
}
_putchar('\n');
}
