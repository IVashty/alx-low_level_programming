#include "main.h"

/**
 * print_binary-function that f#prints the binary equivalent of a decimal
 * @n:number to print in binary
 */

void print_binary(unsigned long int n)
{
int v, k = 0;
unsigned long int c;

for (v = 63; v >= 0; v--)
{
c = n >> v;

if (c & 1)
{
_putchar('1');
k++;
}
else if (k)
_putchar('0');
}
if (!k)
_putchar('0');
}
