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

result = result * -1;

return (result);
}
