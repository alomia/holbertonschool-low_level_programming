#include "holberton.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{

char *stringChars = 0;
if (s == 0 || accept == 0)
{

return (0);

}

while (*s != 0)
{

stringChars = accept;

while (*stringChars != 0)
{

if (*s == *stringChars)
{

return ((char *)s);

}

stringChars++;

}

s++;

}

return (s);

}
