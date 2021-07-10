#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: number of words including the program name
 * @argv: vector of pointers to a string where each element
 * points to a word
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0 ; i < argc ; i++)
printf("%s\n", argv[i]);

return (0);
}
