#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s:its an array string type.
 */

void rev_string(char *s)
{
int v;
int r;
int a;
char str;

v = 0;
for (v = 0; s[v] != '\0'; v++)
;
a = v;
for (v--, r = 0; r < a / 2; v--, r++)
{
str = s[v - r -1 ];
s[v - r - 1] = s[r];
s[r] = str;
}

_putchar('\n');
}
