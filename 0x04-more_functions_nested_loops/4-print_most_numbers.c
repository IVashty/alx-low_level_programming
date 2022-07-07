#include "main.h"

/**
 * print_most_numbers - function prints number 0 to 9 except 2 and 4
 * Return:0 is success
 */

void print_most_numbers(void)
{
int v;
v = 0;
while (v < 10)
{
if (v != 2 && v != 4)
_putchar(v + '0');
v++;
}
_putchar('\n');
}
