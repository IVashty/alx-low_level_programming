#include "main.h"

/**
 * _sqrt_recursion -function that returns the natural square root of a number.
 * @n:integer type of value.
 * Return:-1 if n doesnt have a natural squarerroot
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n <= 1)
{
return (1);
}
else
return (n / _sqrt_recursion(n - 1));
}
