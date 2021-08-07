#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer
 * @index: variable
 *
 *  Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

unsigned long int number = (1 << index);

if (index > sizeof(8) * 8)
return (-1);

*n = (*n & ~number) | (0 << index);
return (1);
}
