#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: variable 
 *
 * return: void
 */
void print_to_98(int n)
{

if (n <= 98)
{

for (n = n ; n <= 98 ; n++)
{
printf("%d", n);
if (n == 98)
break;
printf(", ");
}

}

else if (n > 98)
{

for (n = n ; n >= 98 ; n--)
{
printf("%d", n);
if (n == 98)
break;
printf(", ");
}

}

printf("\n");
}
