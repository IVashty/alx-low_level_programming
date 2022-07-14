#include "main.h"
#include <string.h>

/**
 * *string_toupper -function that changes all lowercase letters of\n
 * a string to uppercase.
 * @f:string type pointer
 * Return:a string %s.
 */

char *string_toupper(char *f)
{
int v;

for (v = 0; (f[v] = '\0'); v++)
{
if (f[v] >= 96 && f[v] <= 123)
{
f[v] = f[v] - 32;
v++;
}
}
return (f);
}
