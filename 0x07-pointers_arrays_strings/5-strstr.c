#include "holberton.h"
/**
 * _strstr -  function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: returns a pointer to the first occurrence in haystack
 */
char *_strstr(char *haystack, char *needle)
{

while (*haystack)
{

char *Begin = haystack;
char *pattern = needle;

while (*haystack && *needle && *haystack == *pattern)
{

haystack++;
pattern++;

}

if (!*pattern)
{

return (Begin);

}

haystack = Begin + 1;

}

return (0);

}
