#include "main.h"

/**
 * *string_toupper -function that changes all lowercase letters of\n
 * a string to uppercase.
 * @f:string type pointer
 * Return:a string %s.
 */

char *string_toupper(char *f)
{
int v;

v = 0;
while (f[v])
{
if (f[v] > 96 && f[v] < 123)
{
f[v] -= 32;
v++;
}
}

return (f);
}
