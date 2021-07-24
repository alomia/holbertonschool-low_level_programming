#include "variadic_functions.h"
#include "stdarg.h"
/**
 * sum_them_all - return sum
 * @n: variable
 *
 * Return: 0 if n == 0 else return sum
 */
int sum_them_all(const unsigned int n, ...)
{

unsigned int i, sum;
va_list ap;

if (n == 0)
return (0);

va_start(ap, n);
sum = 0;

for (i = 0; i < n ; i++)
sum += va_arg(ap, int);

return (sum);
}
