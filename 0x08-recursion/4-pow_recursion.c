#include "main.h"

/**
 * _pow_recursion - function that returns the value of x to the power of y.
 * @x: integer type of value.
 * @y:integer type of value.
 * Return:-1 if y is lower than 0.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
return (x * _pow_recursion(x, y - 1));
}
