#include "main.h"
#include <unistd.h>
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer
 * @text_content: pointer
 *
 * Return: fd
 */
int append_text_to_file(const char *filename, char *text_content)
{

int fd;
int nr;
int wr;

nr = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_APPEND | O_WRONLY);

if (fd == -1)
return (-1);

if (text_content == NULL)
return (1);

while (text_content[nr])
nr++;

wr = write(fd, text_content, nr);

if (wr < 0)
return (-1);

close(fd);
return (1);
}
