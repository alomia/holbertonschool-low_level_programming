#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13
 * @str: pointer
 *
 * Return: str
 */
char *rot13(char *str)
{

char set_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char replacement[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


int count;
int i;

count = 0;

while (str[count] != 0)
{

for (i = 0 ; i < 52 ; i++)
{

if (str[count] == set_letters[i])
{

str[count] = replacement[i];
break;

}

}

count++;

}

return (str);

}
