#include "variadic_functions.h"
/**
 * sum_them_all - return sum
 * @n: variable
 *
 * Return: 0 if n == 0 else return sum
 */
int sum_them_all(const unsigned int n, ...)
{

if (n == 0)
return (0);

int i, sum;

va_list ap;
va_start(ap, n);

sum = 0;

for (i = 0; i < n ; i++)
{
sum += va_arg(ap, int);
}

return (sum);
}
