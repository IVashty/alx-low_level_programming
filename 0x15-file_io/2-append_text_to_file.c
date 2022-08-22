#include "main.h"

/**
 * append_text_to_file - adds text at the end of a file
 * @filename:file to add the text to
 * @text_content:what to add into the file
 * Return:1 as sucess while -1 as fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int v = 0;
int k;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd < 0)
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
