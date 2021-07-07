#include "holberton.h"
/**
 * _strstr -  function that locates a substring
 *  @haystack: pointer
 *  @needle: pointer
 *
 *
 * Return: returns a pointer to the first occurrence in haystack
 */
int compare(const char *X, const char *Y)
{

while (*X && *Y)
{
if (*X != *Y)
{
return (0);
}

X++;
Y++;

}

return (*Y == '\0');

}

char *_strstr(char *haystack, char *needle)
{

while (*haystack != '\0')
{

if ((*haystack == *needle) && compare(haystack, needle))
{

return (haystack);

}

haystack++;

}

return (0);

}
