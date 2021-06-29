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

while (s[i] != 0)
i++;

i += -1;

if (i > 0)
{

while (i >= 0)
{
_putchar(s[i]);
i--;
}

_putchar('\n');

}

}
