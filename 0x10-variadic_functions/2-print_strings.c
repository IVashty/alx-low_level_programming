#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers-function that prints numbers followed by a new line
 * @separator:string to be printed between numbers
 * @n:number of para,eters to be passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int v;
va_list alist;
char *f;

va_start(alist, n);
for (v = 0; v < n; v++)
{
f = va_arg(alist, char*);
if (f == NULL)
printf("(nil)");

else
printf("%s", f);

if (v != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(alist);
}
