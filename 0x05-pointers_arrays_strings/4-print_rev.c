#include "holberton.h"
/**
 * print_rev - prints a string, in reverse
 * @s: pointer
 *
 *return: void
 */
void print_rev(char *s)
{

int i;

i = 1;

while (s[i])
i++;

while (i >= 0)
{
_putchar(s[i]);
i--;
}

_putchar('\n');

}
