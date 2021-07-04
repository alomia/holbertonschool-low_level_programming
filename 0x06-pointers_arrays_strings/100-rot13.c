#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13
 * @str: pointer
 *
 * Return: str
 */
char *rot13(char *str)
{
int uppr_c1[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77};
int uppr_c2[] = {78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};

int lowr_c1[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
int lowr_c2[] = {110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

int count;
int i;

count = 0;

while (str[count] != 0)
{

for (i = 0 ; i < 13 ; i++)
{
if (str[count] == uppr_c1[i] || str[count] == lowr_c1[i])
{
str[count] += 13;
break;
}
else if (str[count] == uppr_c2[i] || str[count] == lowr_c2[i])
{
str[count] -= 13;
break;
}

}

count++;

}

return (str);

}
