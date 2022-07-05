#include "main.h"

/**
 * print_last_digit - print the last digit of an integer ie a number
 * @n: int type number
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
int v;
if (n < 0)
{
v = -1 * (n % 10);
_putchar(v + '0');
return (v);
}
else
{
v = n % 10;
_putchar(v + '0');
return (v);
}
}
