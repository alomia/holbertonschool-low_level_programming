#include "main.h"
/**
 * binary_to_uint - converts a binary number to an decimal
 * @b: variable
 *
 * Return: 0 if index is different from 0 or 1 otherwise decimal
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i;
unsigned int lengthB;
unsigned int decimal;
unsigned int binatyTable[100];

lengthB = 0;
decimal = 0;

if (b == NULL)
return (0);


while (b[lengthB] != 0)
lengthB++;

for (i = 0 ; i < lengthB ; i++)
{

if (b[i] > 'A' || b[i] > 'a')
return (0);
}

for (i = 0 ; i < lengthB ; i++)
{

binatyTable[i] = _pow(2, i);
}

for (i = 0 ; lengthB ; i++, lengthB--)
{

if (b[i] == '1')
decimal += binatyTable[lengthB - 1];
}

return (decimal);
}
/**
 * _pow - calculate the power raised to the base value
 * @base: variable
 * @exponent: variable
 *
 * Return: result
 */
int _pow(int base, int exponent)
{

int result = 1;

for (; exponent > 0 ; exponent--)
result = result *base;

return (result);
}
