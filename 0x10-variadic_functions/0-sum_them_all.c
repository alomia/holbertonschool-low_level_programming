#include "variadic_functions.h"
/**
 * sum_them_all - return sum
 * @n: variable
 *
 * Return: 0 if n == 0 else return sum
 */
int sum_them_all(const unsigned int n, ...)
{

va_list args;
unsigned int i, sum;

va_start(args, n);

if (n == 0)
return (0);

sum = 0;

for (i = 0; i < n ; i++)
sum += va_arg(args, int);

va_end(args);

return (sum);
}
