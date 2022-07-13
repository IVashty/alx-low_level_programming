#include "main.h"
#include <string.h>

/**
 * reverse_array - a function that reverses the content of\n
 * an array of integers.
 * @a:integer type pointer
 * @n:integer type of value
 * Description:n is the number of elements of the array.
 * Return:0 is always
 */

void reverse_array(int *a, int n)
{

int v;
int f;
int d;


d = n / 2;

for (v = 0; v < d; v++)
{
f = a[v];
a[v] = a[n - v - 1];
a[n - v - 1] = f;
}

}
