#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet x10.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char i;
int counter = 1;

while (counter <= 10)
{

for (i = 'a' ; i <= 'z'; i++)
_putchar(i);

_putchar('\n');
counter += 1;

}

}
