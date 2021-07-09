#include "holberton.h"
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: variable that stores the value
 *
 * Return: prime()
 */
int is_prime_number(int n)
{
return (prime(n, 2));
}

/**
 * prime - function to know if a number is prime or not.
 * @n: variable that stores the value
 * @a: this variable stores a number to know what to divide by
 *
 * Return: 1 or 0 or prime(n, (a + 1));
 */
int prime(int n, int a)
{

if (n == a)
return (1);

else if (n < 2)
return (0);

else if (n % a == 0)
return (0);

return (prime(n, (a + 1)));

}
