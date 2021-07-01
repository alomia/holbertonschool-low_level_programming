#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: poiter
 *
 * return: void
 */
void puts_half(char *str)
{
int i;
int j;
int k;

i = 0;
j = 0;


while (str[i] != 0)
i++;

j = i / 2;

if (i % 2 == 0)
{

for (; j <= i; j++)
{
_putchar(str[j]);
}


}
else
{
k = (i - 1) / 2;
_putchar(str[k]);
}

}
