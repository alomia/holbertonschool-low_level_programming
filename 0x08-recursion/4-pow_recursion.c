#include "holberton.h"
/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: variable
 * @y: variable
 *
 * Return: result or 1 or -1
 */
int _pow_recursion(int x, int y)
{

int result;

if (y > 0)
{

result = (x * (_pow_recursion(x, y - 1)));
return (result);
}

if (y == 0)
return (1);

else
return (-1);

}
