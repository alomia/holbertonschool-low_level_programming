#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: number of words including the program name
 * @argv: vector of pointers to a string where each element
 * points to a word
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int count;
int resultSum;

resultSum = 0;

for (count = 1 ; count < argc ; count++)
{

if (atoi(argv[count]))
{

printf("Error\n");
return (1);
}

resultSum += atoi(argv[count]);
}

printf("%d\n", resultSum);

return (0);
}
