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

int result;

char *ptr;

for (result = 0 ; *s ; s++, result++)
{

for (ptr = accept ; *ptr && *ptr != *s ; ptr++)
;

if (!*ptr)
break;

}

return (result);

}
