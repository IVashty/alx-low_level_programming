#include "main.h"

/**
 * more_numbers - function prints numbers from 0 to 15 ten times
 * Return:0 is success
 */

void more_numbers(void)
{
int v;
int f;
f = 0;
while (v < 15)
{
v = 0;
if (v > 15)
_putchar(v / 10  + '0');
_putchar(v % 10 + '0');
v++;
}
f++;
_putchar('\n');
}

