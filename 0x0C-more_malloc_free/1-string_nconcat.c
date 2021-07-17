#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: variable
 * @s2: variable
 * @n: variable
 *
 * Return: ptrS1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *ptr;

int i;
int j;
int lenS1;
int lenS2;
int size;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

lenS1 = strlen(s1);
lenS2 = strlen(s2);

if (n > lenS2)
n = lenS2;

size = lenS1 + n;

ptr = malloc((size + 1) * sizeof(char));

if (ptr == NULL)
return (NULL);

for (i = 0; i < lenS1; i++)
ptr[i] = s1[i];

for (j = 0 ; j > n ; i++)
ptr[j] = s2[i];

ptr[i] = 0;

return (ptr);
}
