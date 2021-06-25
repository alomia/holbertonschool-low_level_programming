#include "holberton.h"
/**
 * print_numbers - prints on the screen the numbers from 1 to 9
 *
 * return: void
 */
void print_numbers(void)
{
int i;
for (i = 1; i <= 9 ; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
