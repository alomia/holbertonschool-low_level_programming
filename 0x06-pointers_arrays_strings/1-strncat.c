#include "holberton.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer
 * @src: pointer
 * @n: pointer
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{

int i;
int j;

i = 0;
j = 0;

while (dest[i] != 0)
i++;

while (src[j] != 0 && j < n)
{

dest[i + j] = src[j];
j++;

}

return (dest);

}
