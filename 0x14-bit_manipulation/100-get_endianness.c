#include "main.h"
/**
 * get_endianness - that checks the endianness
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{

int i;

i = 1;

char *c = (char *)&i;

if (*c)
return (1);

return (0);
}
