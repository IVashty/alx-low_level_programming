#include "main.h"

/**
 * print_square - function that prints a square followed by new line
 * @size: number size of the square
 * Description:use only _putchar and use # = 35 ASCII as the character
 */

void print_square(int size)
{
int v;
int f;
if (size <= 0)
_putchar('\n');
else
{
for (v = 0; v < size; v++)
{
for (f = 0; f < v; f++)
_putchar(35);
_putchar('\n');
}
}
}
