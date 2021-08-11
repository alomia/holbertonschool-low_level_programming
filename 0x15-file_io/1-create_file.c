#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: pointer
 * @text_content: pointer
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{

int fd;
int nr;

nr = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

if (fd == -1)
return (-1);

if (text_content == NULL)
return (1);

if (text_content !=  NULL)
{

while (text_content[nr] != '\0')
nr++;
}

write(fd, text_content, nr);

close(fd);

return (1);
}
