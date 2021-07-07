#include "holberton.h"
/**
 * compare - returns true if `X` and `Y` are the same
 * @X: variable
 * @Y: variable
 *
 *  Return: if x != y return 0 return y == 0
 */
int compare(const char *X, const char *Y)
{

while (*X && *Y)
{
if (*X != *Y)
{
return (0);
}

X++;
Y++;

}

return (*Y == '\0');

}
