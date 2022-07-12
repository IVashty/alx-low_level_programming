#include "main.h"

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

for (v = 0; s[v] != '\0'; v++)
;

a = v;
for (v--, r = 0; r < a / 2; r++)
{
str = s[r];
s[r] = s[v];
s[v] = str;
}

_putchar('\n');
}
