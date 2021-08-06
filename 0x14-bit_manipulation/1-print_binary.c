#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: variable
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{

/*Uso de la recursión y de los operadores binarios*/
if (n > 1)
print_binary(n >> 1);

if (n & 1)
_putchar('1');

else
_putchar('0');
}
