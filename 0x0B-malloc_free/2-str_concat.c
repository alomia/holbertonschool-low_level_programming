#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: pointer
 * @s2: pointer
 *
 * Return: ptr_str
 */
char *str_concat(char *s1, char *s2)
{

char *ptr_str;
int len;

len = 0;

len = strlen(s1) + strlen(s2);

ptr_str = malloc((len + 1) * sizeof(char));

if (ptr_str == NULL)
return (NULL);

strcat(ptr_str, s1);
strcat(ptr_str, s2);

return (ptr_str);
}
