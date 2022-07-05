#include "main.h"

/**
 *print_sign -> checks if the character n is positive or negative
 * @n: a character argument
 * ** Return: returns 1,-1 and 0 depending on condition
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
