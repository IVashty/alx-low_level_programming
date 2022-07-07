#include "main.h"

/**
 * print_numbers - function  prints numbers from 0 to 9 followed
 * Description:use only _putchar twice
 * Return:0 is success
 */

void print_numbers(void)
{
int v;
for (v = 0; v < 10; v++)
{
_putchar(v + 48);
}
_putchar('\n');
}
