#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet x10.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int counter;
char i;

while (counter <= 9)
{

for (i = 'a' ; i <= 'z'; i++)
_putchar(i);

_putchar('\n');
counter += 1;
}

}
