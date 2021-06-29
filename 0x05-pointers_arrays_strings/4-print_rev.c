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

while (i > 0)
{
i--;
_putchar(s[i]);
}

_putchar('\n');

}
