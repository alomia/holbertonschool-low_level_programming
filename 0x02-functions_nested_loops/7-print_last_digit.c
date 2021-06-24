#include "holberton.h"
/**
 * print_last_digit - return the last digit
 *
 * @n: integer to be evaluated.
 * Return: result
 */
int print_last_digit(int n)
{

int result;

result = n % 10;

if (n < 0)
{
result = result * -1;
}
_putchar(result);
return (result);
}


