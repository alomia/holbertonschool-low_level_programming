#include "holberton.h"
/**
 * rev_string - that reverses a string
 * @s: pointer
 *
 * return: void
 */
void rev_string(char *s)
{

int i;

i = 0;

while (s[i])
i++;

while (i >= 0)
{
_putchar(s[i]);
i--;
}

_putchar('\n');

}
