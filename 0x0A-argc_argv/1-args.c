#include <stdio.h>

/**
 * main-function that prints its name followed by a newline.
 * @argc:integer type of value
 * @argv:char type of pointer
 * Return:0
 */

int main(int argc, char *argv[])
{
(void) argv;

printf("%d\n", argc - 1);
return (0);
}
