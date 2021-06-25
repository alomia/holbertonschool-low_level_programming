#include "holberton.h"

/**
* _isdigit - function return 1 if c is digit
* @c: variable
* Return: 1 if is digit or 0 if no is a digit
*/

int _isdigit(int c)
{

if (c >= 48 && c <= 57)
return (1);

else
return (0);

}
