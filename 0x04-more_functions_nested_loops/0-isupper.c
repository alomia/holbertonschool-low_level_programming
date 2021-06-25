#include "holberton.h"

/**
* _isupper - function return 1 if c is uppercase
* @c: variable
* Return: 1 if is uppercase or 0 if is lowercase
*/

int _isupper(int c)
{

if (c >= 65 && c <= 90)
return (1);

else
return (0);
}
