#include "holberton.h"
/**
 * leet - function that encodes a string
 * @str: pointer
 *
 * Return: str
 */
char *leet(char *str)
{

int lower_letter[] = {97, 101, 111, 116, 108};
int upper_letter[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};

int count;
int i;

count = 0;

while (str[count] != 0)
{

for (i = 0 ; i < 5 ; i++)
{
if (str[count] == lower_letter[i] || str[count] == upper_letter[i])
{
str[count] = numbers[i];
break;
}

}
count++;
}

return (str);

}
