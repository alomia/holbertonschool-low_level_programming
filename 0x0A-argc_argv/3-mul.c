#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: number of words including the program name
 * @argv: vector of pointers to a string where each element
 * points to a word
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

int resultMult;

if (argc != 3)
{

printf("Error\n");
return (0);
}

resultMult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", resultMult);

return (0);
}
