#include "main.h"

int ans(int, int);

/**
 * is_prime_number -function that returns the natural square root.
 * @n:integer type of value.
 * Return:1 if n is prime number otherwise return 0.
 */

int is_prime_number(int n)
{
if (n < 2)
return (0);
if (n < 4)
return (1);
return (ans(n, 2));
}

/**
 * ans- recursive function that will be indirectly represent a parent function
 * @j:integer value.
 * @v:integer value.
 * Return:parent function
 */

int ans(int j, int v)
{
if (j <= 1)
{
return (0);
}
else if ((j % v == 0) && v > 1)
{
return (0);
}
else if ((j / v) < v)
{
return (1);
}
else
return (ans(j, v + 1));
}
