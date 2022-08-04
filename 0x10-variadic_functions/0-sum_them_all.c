#include "variadic_functions.h"

/**
 * sum_them_all-function that eturns the sum of all its parameter.
 * @n:number of extra parametersr
 * @...:ellipsis of undefined arguments
 * Return:0 and total i think***
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int v;
va_list alist;
int total;

va_start(alist, n);
for (v = 0, total = 0; v < n; v++)
total += va_arg(alist, int);

va_end(alist);

return (total);
}
