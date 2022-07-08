#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: number of size of triangle
 * Description: only use _putchar and character # = 35 ASCII
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int v, f;
for (v = 1; v <= size; v++)
{
for (f = v; f < size; f++)
{
_putchar(' ');
}
for (f = 1; f <= v; f++)
{
_putchar(35);
}

_putchar('\n');
}
}
}
