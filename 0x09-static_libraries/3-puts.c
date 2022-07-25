#include "main.h"

/**
 * _puts- a function that prints a string followed by a new line.
 * @str:char arra string type
 * Description:only use _putchar.
 * Return: 0 always
 */

void _puts(char *str)
{
int v;

for (v = 0; str[v] != '\0'; v++)
{
_putchar(str[v]);
}
_putchar('\n');
}
