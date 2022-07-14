#include "main.h"

/**
 * *cap_string-a function that capitalises all word of a string.
 * @f:a string type pointer
 * Return:f
 */

char *cap_string(char *f)
{
int v;
int len;
int v2;
char specs[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

v = 0;
len = sizeof(specs) / sizeof(specs[0]);
while (f[v])
{
v2 = 0;
while (v2 < len)
{
if ((v == 0 || f[v - 1]  == specs[v2]) && (f[v] >= 'a' && f[v] <= 'z'))
f[v] -= 32;
v2++;
}
v++;
}


return (f);
}
