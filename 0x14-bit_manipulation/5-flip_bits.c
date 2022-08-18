#include "main.h"

/**
 * flip_bits-function that counts the bits that may flip.
 * @n:i gues the first number and
 * @m:the second number.
 * Return:the number of bits that wld flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int v, k = 0;
unsigned long int c;
unsigned long int s = n ^ m;

for (v = 63; v >= 0; v--)
{
c = s >> v;

if (c & 1)
{
_putchar('1');
k++;
}

return (k);
}

