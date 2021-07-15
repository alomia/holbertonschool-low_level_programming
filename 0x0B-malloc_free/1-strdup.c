#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory
 * @str: pointer
 *
 * Return: ptrArray
 */
char *_strdup(char *str)
{

char *ptr_str;

int len;

len = 0;


len =  strlen(str);

ptr_str = malloc((len + 1) * sizeof(char));

if (ptr_str == NULL)
return (NULL);

strcpy(ptr_str, str);

return (ptr_str);
}
