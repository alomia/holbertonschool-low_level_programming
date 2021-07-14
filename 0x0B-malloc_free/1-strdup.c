#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory
 * @str: pointer
 *
 * Return: ptrArray
 */
char *_strdup(char *str)
{

int count;

char *ptrArray;

count = 0;

ptrArray = malloc(sizeof(str));

while (str[count] != 0)
{

count++;
}

if (ptrArray == NULL)
return (NULL);

count = 0;

while (str[count] != 0)
{

ptrArray[count] = str[count];
count++;
}

return (ptrArray);
}
