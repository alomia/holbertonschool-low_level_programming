#include "holberton.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: variable containing the string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{

if (*s != 0)
{

s++;
_print_rev_recursion(s);
_putchar(*s);
}

else
{

_putchar('\n');
}
}
