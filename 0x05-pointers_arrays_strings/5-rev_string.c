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
int f;

v = 0;
for (v = 0; s[v] != '\0'; v++)
;

a = v - 1;
r = 0;
f = a / 2;
v -= 1;


for (v--; r < f; r++)
;
{
str = s[r];
s[r] = s[v];
s[v] = str;
}

_putchar('\n');
}
