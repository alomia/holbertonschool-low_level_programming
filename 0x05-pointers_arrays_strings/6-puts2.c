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

i = 0;

while (str[i])
{

_putchar(str[i]);
i = i + 2;

if (str[i] == '.')
{
break;
}

}

_putchar('\n');

}
