#include "holberton.h"
/**
 * print_numbers - prints on the screen the numbers from 1 to 9 | - 2 and 4
 *
 * return: void
 */
void print_numbers(void)
{
int i;
for (i = 0; i <= 9 ; i++)
{
if (i == 2 || i == 4)
continue;

_putchar(i + '0');
}
_putchar('\n');
}
