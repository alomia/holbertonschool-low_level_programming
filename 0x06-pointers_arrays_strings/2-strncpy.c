#include "holberton.h"
/**
 * _strncpy - function that copies a string
 * @dest: pointer
 * @src: pointer
 * @n: varible type int
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{

int i;
int j;

i = 0;
j = 0;

while (i < n && src[i] != '\0')
{

dest[i] = src[i];
i++;

}

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);

}