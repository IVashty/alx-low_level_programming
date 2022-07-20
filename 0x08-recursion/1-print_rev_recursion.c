#include "main.h"

/**
 * _print_rev_recursion -funtion that prints a string in reverse.
 * @s:string type pointer.
 * Return:0 always=sucess
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
