#include "main.h"

/**
 * print_diagonal -function draws a diagonal line on the terminal
 * @n: number of times the \ = 92 in ASCII should be printed
 * Description:use only _putchar
 * should end with a new line
 */

void print_diagonal(int n)
{
int v;
int f;
if (n <= 0)
_putchar('\n');
else
{
for (v = 0; v < n; v++)
{
for (f = 0; f < v; f++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
