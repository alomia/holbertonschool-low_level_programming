#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: variable
 * @index: variable
 *
 *  Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{

if ((n == 0 || n == 1) && index != 0)
return (-1);

if (index > n * 8 - 1)
return (-1);

if (n & (1 << index))
return (1);

return (0);
}
