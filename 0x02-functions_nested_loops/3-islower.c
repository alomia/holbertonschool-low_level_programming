#include "holberton.h"
/**
 * _islower - tests whether a character is a
 * lowercase letter from the English alphabet.
 * @c: character to test.
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
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
