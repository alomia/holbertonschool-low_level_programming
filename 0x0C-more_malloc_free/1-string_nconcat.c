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

char *ptrS1;
char *ptrS2;

int i;
int len1;
int len2;
int lenSUM;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);
lenSUM = len1 + len2;



ptrS1 = malloc((len1 + 1) * sizeof(char));

strcpy(ptrS1, s1);

ptrS2 = realloc(ptrS1, lenSUM * sizeof(char));

if (n >= len2)
{

strcat(ptrS2, s2);
}

else
{
char arr[n];

for (i = 0; i < n ; i++)
arr[i] = s2[i];

strcat(ptrS2, arr);
}

return (ptrS2);
}
