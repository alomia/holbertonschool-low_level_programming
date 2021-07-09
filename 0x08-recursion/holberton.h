#ifndef HOLBERTON_H
#define HOLBERTON_H

/*writes the character c to stdout*/
int _putchar(char c);

/*function that prints a string, followed by a new line*/
void _puts_recursion(char *s);

/*function that prints a string in reverse*/
void _print_rev_recursion(char *s);

/*function that returns the length of a string*/
int _strlen_recursion(char *s);

/*function that returns the factorial of a given number*/
int factorial(int n);
/*function that returns the value of x raised to the power of y*/
int _pow_recursion(int x, int y);

/*function that returns the natural square root of a number*/
int _sqrt_recursion(int n);

/*function to obtain the square root*/
int _sqrt_root(int n, int r);

/*returns 1 if prime 0 if not prime*/
int is_prime_number(int n);

/**/
int prime(int n, int a);

#endif
