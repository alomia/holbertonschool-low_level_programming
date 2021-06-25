#include "holberton.h"
/**
 * more_numbers - print the numbers from 0 to 14
 *
 * return: void
 */
void more_numbers(void)
{

int a;
int b;
int c;
int d;

for (a = 1; a <= 10 ; a++)
{

for (b = 0; b <= 14 ; b++)
{

if (b < 10)
{
c = b;
}

else
{

d = b / 10;
c = b % 10;

_putchar(d + '0');

}

_putchar(c + '0');

}

_putchar('\n');

}

}
