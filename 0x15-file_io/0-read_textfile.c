#include "main.h"

/**
 * read_textfile-function that reads a text file and prints it to the POSIX
 * standard output
 * @filename:pointer of the file to be read
 * @letters:number of letters to be read and printed
 * Return:shld be 0 if it fails or nymber of letters to be printed
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int v;
int k;
char *f;

if (filename == NULL)
return (0);

fd = open(filename, O_RDWR);
if (fd == -1)
return (0);

f = malloc(sizeof(char) * letters);
if (f == NULL)
{
free(f);
return (0);
}

v = read(fd, f, letters);
if (v < 0)
{
free(f);
return (0);
}

f[v] = '\0';

close(fd);

k = write(STDOUT_FILENO, f, v);
if (k < 0)
{
free(f);
return (0);
}
free(f);
return (k);

}
