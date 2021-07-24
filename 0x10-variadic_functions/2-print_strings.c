#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: pointer
 * @n: variable
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

unsigned int i;
char *s;

va_list string;

va_start(string, n);

for (i = 0; i < n; i++)
{

s = va_arg(string, char*);

if (s == NULL)
printf("(nil)");

else

printf("%s", s);

if (separator != NULL && i != (n - 1))
printf("%s", separator);

}

putchar('\n');

va_end(string);
}
