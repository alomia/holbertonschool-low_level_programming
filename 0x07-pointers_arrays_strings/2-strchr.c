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

while (s[i] != c)
i++;

return (&s[i]);

}
