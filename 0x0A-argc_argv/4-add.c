#include <stdio.h>
#include <stdlib.h>

/**
 * main-function that prints its name followed by a newline.
 * @argc:integer type of value
 * @argv:char type of pointer
 * Return:0
 */

int main(int argc, char *argv[])
{
int v;
int f;
char *p;
int a;

v = 0;
if (argc > 1)
{
for (f = 1; argv[f]; f++)
{
a = strtol(argv[f], &p, 10);
if (!*p)
v += a;
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", v);
return (0);
}
