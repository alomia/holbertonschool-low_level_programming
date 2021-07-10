#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: number of words including the program name
 * @argv: vector of pointers to a string where each element
 * points to a word
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

(void) argv;
printf("%d\n",argc - 1);

return (0);
}
