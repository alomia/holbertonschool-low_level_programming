#ifndef HOLBERTON_H
#define HOLBERTON_H

/*writes the character c to stdout*/
int _putchar(char c);

/*function that checks for uppercase character*/
int _isupper(int c);

/*function that checks for a digit (0 through 9)*/
int _isdigit(int c);

/*function that multiplies two integers*/
int mul(int a, int b);

/*unction that prints the numbers, from 0 to 9*/
void print_numbers(void);

/*function that prints the numbers, from 0 to 9 not print 2 and 4*/
void print_most_numbers(void);

/*function that prints 10 times the numbers, from 0 to 14*/
void more_numbers(void);

/*function that draws a straight line in the terminal*/
void print_line(int n);

/*function that draws a diagonal line on the terminal*/
void print_diagonal(int n);

/*function that prints a square, followed by a new line*/
void print_square(int size);

#endif
