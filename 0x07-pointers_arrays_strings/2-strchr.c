#include "holberton.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer
 * @c: variable
 *
 * Return: s[i]
 */

char *_strchr(char *s, char c)
{

int i;

i = 1;

while (s[i])
{

if (s[i] == c)
{

return (&s[i]);
break;

}

i++;

}

return (0);

}
