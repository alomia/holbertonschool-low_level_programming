#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: variable
 *
 * Return: n * factorial(n - 1) or 1 or -1
 */
int factorial(int n)
{

if (n > 0)
{

return (n * factorial(n - 1));
}

if (n == 0)
{

return (1);
}

else
{

return (-1);
}

}
