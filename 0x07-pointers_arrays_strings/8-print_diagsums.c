#include "main.h"
#include <stdio.h>

/**
 * print_diagsums-A function that prints the sum of the
 * two diagonal of a square matrix of integers
 * @a:integer type of pointer
 * @size:integer type of value
 * Description:allowed to use standard library
 * understandard how an array of array is stored in a memory
 * Return:0 is always
 */

void print_diagsums(int *a, int size)
{
int v;
int f;
int j;

f = 0;
j = 0;

for (v = 0; v < size; v++)
{
f += a[(size + 1) * v];
j += a[(size - 1) * (v + 1)];
}

printf("%d, %d\n", f, j);
}
