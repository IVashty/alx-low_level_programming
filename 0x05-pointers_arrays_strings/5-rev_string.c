#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s:its an array string type.
 */

void rev_string(char *s)
{
char str;
int v;
int r;
int f;

r = 0;
f = 0;

while (s[r] != '\0')
r++;

f = r - 1;
for (v = 0; v < r / 2; v++)
{
str = s[v];
s[v] = s[f];
s[f] = str;
f -= 1;
	}
_putchar('\n');
}
