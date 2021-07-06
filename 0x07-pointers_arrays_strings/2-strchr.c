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

do {

if (*s == c)

{
return ((char *) s);
}

}

while (*s++);

return (0);

}
