#include "main.h"

int ans(int, int);

/**
 * _sqrt_recursion -function that returns the natural square root.
 * @n:integer type of value.
 * Return:-1 if n doesnt have a natural squarerroot
 */

int _sqrt_recursion(int n)
{
return (ans(n, 1));
}

/**
 * ans- recursive function that will be indirectly represent a parent function
 * @j:integer value.
 * @v:integer value.
 * Return:parent function
 */

int ans(int j, int v)
{
int sqrt;

sqrt = v * v;
if (sqrt > j)
{
return (-1);
}
else if (sqrt == j)
{
return (v);
}
else if (sqrt < j)
return (ans(j, v + 1));
else
return (-1);
}
