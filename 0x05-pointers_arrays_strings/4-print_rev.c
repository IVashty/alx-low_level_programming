#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_rev- a function that prints a string in reverse.
 * followed by a new line.
 * @s:char array string type
 * Description:only use _putchar.
 * Return: 0 always
 */

void print_rev(char *s)
{
int v;

for (v = 0; s[v] != '\0'; v++)
v++;
{
for (v--; v >= 0; v--)
{
_putchar(s[v]);
}
}

_putchar('\n');
}
