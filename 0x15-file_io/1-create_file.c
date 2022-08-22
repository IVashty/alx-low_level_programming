#include "main.h"

/**
 * create_file-function that creates a file and puts it with a text to it.
 * @filename:name of file.
 * @text_content:text to write in the file.
 * Return: -1 as fail or 1 as sucess
 *
 */

int create_file(const char *filename, char *text_content)
{
int fd;
int v = 0;
int k;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

if (text_content)
{
while (text_content[v])
v++;
k = write(fd, text_content, v);
if (k != v)
return (-1);
}

close(fd);

return (1);
}
