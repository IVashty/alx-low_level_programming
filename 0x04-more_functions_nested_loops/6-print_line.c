#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n:number of times _ is to be prinnted.
 * Description - use only _putchar
 */

void print_line(int n)
{
int v;
v = 0;
while (v < n)
{
_putchar('_');
v++;
}
_putchar('\n');
}
