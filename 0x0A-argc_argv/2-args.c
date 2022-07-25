#include <stdio.h>

/**
 * main-function that prints its name followed by a newline.
 * @argc:integer type of value
 * @argv:char type of pointer
 * Return:0
 */

int main(int argc, char *argv[])
{
int v;

for (v = 0; v < argc; v++)
{
printf("%s\n", argv[v]);
}
return (0);
}
