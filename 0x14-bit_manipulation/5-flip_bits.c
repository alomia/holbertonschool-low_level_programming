#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get
 * @n: variable
 * @m: variable
 *
 * Return: i
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

unsigned long int sum;
unsigned int i;

i = 0;

sum = n ^ m;

while (sum > 0)
{

if ((sum & 1) == 1)
i++;

sum >>= 1;
}

return (i);
}
