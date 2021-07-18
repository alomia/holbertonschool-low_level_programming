#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int num1;
int num2;

int i;
int j;

num1 = 0;
num2 = 1;

for (i = num1 ; i <= 9 ; i++)
{

for (j = num2 ; j <= 9 ; j++)
{
putchar(num1 + '0');
putchar(j + '0');

if (num1 < 8 && num2 < 9)
{

putchar(',');
putchar(' ');
}

}

num1++;
num2++;
}

putchar('\n');

return (0);
}
