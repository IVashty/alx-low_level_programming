#include "main.h"

/**
 * *leet-a function that capitalises all word of a string.
 * @f:a string type pointer
 * Description:dont use switch and ternary operators,
 * Return:f
 */

char *leet(char *f)
{
int v;
int len;
int v2;
char specs[] = {'O', 'L', ' ', 'E', 'A', ' ', ' ', 'T',};


v = 0;
len = sizeof(specs) / sizeof(specs[0]);
while (f[v])
{
v2 = 0;
while (v2 < len && v2++)
{
if (f[v] == specs[v2] || f[v] - 32  == specs[v2])
f[v] = v2 + '0';
}
v++;
}


return (f);
}
