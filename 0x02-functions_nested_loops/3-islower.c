#include "holberton.h"
/**
 * _islower - search lowercase.
 *
 * Return: Always value.
 */
int _islower(int c)
{
int a;
int value = 0;

for (a = 'a' ; a <= 'z' ; a++)
{

if (c == a)
{

value += 1;
break;

}

}

return (value);
}
