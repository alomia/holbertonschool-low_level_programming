#include "holberton.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: varible
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
int result;

int r = 1;

result = (_sqrt_root(n, r));

return (result);
}
/**
 * _sqrt_root - function to obtain the square root
 * @n: varible
 * @r: varible
 *
 * Return: r
 */
int _sqrt_root(int n, int r)
{

if (n > (r * r))
r = _sqrt_root(n, r + 1);

else if (n < (r *r))
return (-1);

return (r);

}
