#include "holberton.h"
/**
 * _strcmp - function that compares two strings
 * @s1: pointer
 * @s2: pointer
 *
 * Return: if s1 == s2 return 0; else return s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
for ( ; *s1 == *s2 ; s1++, s2++)
{

if (*s1 == 0 && *s2 == 0)
{

return (0);

}

}

return (*s1 - *s2);

}
