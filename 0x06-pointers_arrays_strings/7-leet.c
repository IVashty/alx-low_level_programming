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
char specs[] = {'O', 'L', ' ', 'E', 'A', ' ', ' ', 'T'};
int index;


index = (int)(strchr(specs, '0') - specs);
len = sizeof(specs) / sizeof(specs[0]);
v = 0;
while (f[v])
{
v2 = 0;
while (v2 < len)
{
if (f[v] == specs[v2] || f[v] - 32  == specs[v2])
f[v] = index[v2];
v2++;
}

v++;
}

return (f);
}
