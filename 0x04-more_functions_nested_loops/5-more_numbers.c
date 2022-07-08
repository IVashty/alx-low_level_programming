#include "main.h"

/**
 * more_numbers - function prints numbers from 0 to 15 ten times
 * Return:0 is success
 */

void more_numbers(void)
{
int v;
int f;

v = 0;
while (v < 10)
{
f = 0;
while (f < 15)
{
if (f > 9)
_putchar(f / 10 + '0');
_putchar(f % 10 + '0');
f++;
}
v++;
_putchar('\n');
}
}
