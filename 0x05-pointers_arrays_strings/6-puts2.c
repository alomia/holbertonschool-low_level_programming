#include "holberton.h"
/**
 * puts2 - prints every other character of a  string to stdout
 * @str: pointer
 *
 * return: void
 */
void puts2(char *str)
{

int i;
int j;

i = 0;
j = 0;

while (str[i] != 0)
{

i++;

}

for (; j <= i ; j = j + 2)
{
_putchar(str[j]);
}

_putchar('\n');

}
