#include "holberton.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: result
 */
unsigned int _strspn(char *s, char *accept)
{

unsigned int i;
unsigned int j;

for (i = 0; s[i]; i++)
{

for (j = 0; accept[j]; j++)
{

if (s[i] == accept[j])

break;

}

if (!accept[j])

break;

}

return (i);

}
