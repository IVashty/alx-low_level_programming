#include "main.h"

/**
 **times_table -prints the time table for number 9
 */
void times_table(void)
{
int v;
int a;
int z;

for (v = 0; v < 10; v++)
{
for (a = 0; a < 10; a++)
{
z = v * a;
if (a == 0)
_putchar(z + '0');
if (a != 0 && z < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
else if (z >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
}
_putchar('\n');
}
}
