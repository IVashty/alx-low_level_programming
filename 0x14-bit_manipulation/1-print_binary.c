#include "main.h"

/**
 * print_binary-function that f#prints the binary equivalent of a decimal
 * @n:number to print in binary
 */

void print_binary(unsigned long int n)
{
int v, c = 0;
unsigned long int current;

for (v = 63; v >= 0; v--)
{
c = n >> v;

if (c & 1)
{
_putchar('1');
c++;
}
else if (c)
_putchar('0');
}
if (!c)
_putchar('0');
}
