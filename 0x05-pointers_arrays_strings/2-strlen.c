#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer
 *
 * Return: i, contains the length of s
 */

int _strlen(char *s)
{

int i;

i = 0;

while (s[i] != 0)
i++;

return (i);

}
