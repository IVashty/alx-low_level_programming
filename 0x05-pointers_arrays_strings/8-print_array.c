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
for (n--; n >= 0; v++)
{
printf("%d", a[v]);

if (n > 0)
{
printf(", ");
}

}

printf("\n");
}
