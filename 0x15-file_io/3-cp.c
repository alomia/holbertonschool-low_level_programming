#include "main.h"
/**
 * main - function prrincipal check
 * @argc: cant arguments int
 * @argv: pointer to info argc
 *
 * Return: exit.
 */
int main(int argc, char **argv)
{

if (argc != 3)
{

dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

copy(argv[1], argv[2]);

exit(0);
}
