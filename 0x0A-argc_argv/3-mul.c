#include <stdio.h>
#include <stdlib.h>

/**
 * main-function that prints its name followed by a newline.
 * @argc:integer type of value
 * @argv:char type of pointer
 * Return:1
 */

int main(int argc, char *argv[])
{
(void) argc;

if (argv[1] && argv[2])
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
printf("Error\n");
return (1);
}
