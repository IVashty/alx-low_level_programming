#include "main.h"

/**
 * print_numbers - function  prints numbers from 0 to 9 followed
 * Description:use only _putchar twice
 * Return:0 is success
 */

void print_numbers(void)
{
int v;
v = 0;
while (v < 10)
{
_putchar(v + '0');
v++;
}
_putchar('\n');
}
