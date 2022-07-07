#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: number of size of triangle
 * Description: only use _putchar and character # = 35 ASCII
 */

void print_triangle(int size)
{
int v;
int f;
if (size <= 0)
_putchar('\n');
else
{
for (v = 0; v < size; v++)
{
for (f = 0; f < size; f++)
{
_putchar(' ');
}
for (f = 0; f <= v; f++)
{
_putchar(35);
}
_putchar('\n');
}
}
}


