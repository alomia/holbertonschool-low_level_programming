#include "holberton.h"
/**
 * print_sign - prints the sign of the number
 *
 * @n: integer to be evaluated.
 * Return: 1 if is == 0 or 0 if == 0 or -1.
 */
int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}

else if (n == 0)
{
_putchar('0');
return (0);
}

else if (n < 0)
{
_putchar('-');
return (-1);
}

return (0);
}
