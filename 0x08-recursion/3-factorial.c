#include "main.h"

/**
 * factorial-function thatreturns the factorial of agiven number.
 * @n:integer type of value.
 * Return: -1 if n is lower than 0.
 */

int factorial(int n)
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
return (n * factorial(n - 1));
}
