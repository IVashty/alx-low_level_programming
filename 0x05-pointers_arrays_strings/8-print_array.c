#include "main.h"
#include <stdio.h>

/**
 * print_array-function that prints element n of an array
 * @n:integer type of value
 * @a:integer type array pointer
 * Description:display the numbers just as they are represented
 * in the array and you are allowed to use printf
 *Return:0 always
 */

void print_array(int *a, int n)
{
int v;
v = 0;
for (v = 0; v < n; v++)
{
printf("%d", a[v]);

if (v != (n - 1))
{
printf(", ");
}

}

printf("\n");
}
