#include "holberton.h"
/**
 * _strstr -  function that locates a substring
 *  @haystack: pointer
 *  @needle: pointer
 *
 *
 * Return: returns a pointer to the first occurrence in haystack
 */
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
