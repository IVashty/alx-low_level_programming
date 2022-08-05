#include "function_pointers.h"

/**
 * print_name-function that prints a name
 * @name:character pointer
 * @f:dunction pointer with a string argument
 */


void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
