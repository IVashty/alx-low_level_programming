#include "main.h"

/**
 * *cap_string-a function that capitalises all word of a string.
 * @char f:a string type pointer
 * Return:a char
 */

char *cap_string(char *f)
{
int v;
int a;
int ch;
char specs[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

v = 0;
while (f[v])
v++;
{
while (f[v] >= 'a' && f[v] <= 'z')
{
if (f[v - 1]  == f[specs] && v == 0)
{
f[v] -= 32;
}
v++;
}
}

return (f);
}
