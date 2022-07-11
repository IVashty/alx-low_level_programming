#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a:swaps an integer type pointer
 * @b:swaps an integer type pointer
 */

void swap_int(int *a, int *b)
{

int v;

v = *a;
*a = *b;
*b = v;

}
