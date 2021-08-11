#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer
 * @letters: variable
 *
 * Return: nr_letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

ssize_t nr_letters;
int fd;
char *buf;

if (!filename)
return (0);

buf = malloc(sizeof(char) * letters + 1);

if (buf == NULL)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
{

free(buf);
return (0);
}

nr_letters = read(fd, buf, sizeof(char) * letters);

if (nr_letters == -1)
{

free(buf);
close(fd);
return (0);
}

nr_letters = write(STDOUT_FILENO, buf, nr_letters);

if (nr_letters == -1)
{

free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);

return (nr_letters);
}
