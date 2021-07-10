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
int countLetter;
int resultSum;

resultSum = 0;
countLetter = 0;

if (argc < 3)
printf("0\n");

for (count = 1 ; count < argc ; count++)
{

if (*argv[count] >= 'a')
{

printf("Error\n");
countLetter++;
return (1);
break;
}

resultSum += atoi(argv[count]);
}

if (countLetter == 0 && argc > 1)
printf("%d\n", resultSum);

return (0);
}
