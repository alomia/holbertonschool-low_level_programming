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
char  s3[10];

int i;
int len1;
int len2;

len1 = strlen(s1);
len2 = strlen(s2);

ptrS1 = malloc((len1 + 1) * sizeof(char));

if (ptrS1 == NULL)
return (NULL);

strcpy(ptrS1, s1);

if (n >= len2){

for (i = 0; i < len2; i++)
{
s3[i] = s2[i];
}
}
else
{
  
for (i = 0; i < n ; i++)
s3[i] = s2[i];
}
  
strcat(ptrS1, s3);

return (ptrS1);
}
