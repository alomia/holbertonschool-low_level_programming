#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: varible
 * @n: varible
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{

int i;

i = 0;

for (; i <= n ; i++)
{

s[i] = b;

}

return (s);

}
