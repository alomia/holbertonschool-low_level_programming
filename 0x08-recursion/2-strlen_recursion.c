#include "holberton.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: variable, pointer containing the string
 *
 * Return: count
 */
int _strlen_recursion(char *s)
{

int count;
count = 0;

if (s[count] != 0)
{

count = _strlen_recursion(s + 1);
count++;
}

return (count);
}
