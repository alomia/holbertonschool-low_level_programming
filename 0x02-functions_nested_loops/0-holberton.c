#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char holb[] = {"Holberton"};

int i;

for (i = 0; i <= 10 ; i++)
{
_putchar(holb[i]);
}

_putchar('\n');

return (0);
}
