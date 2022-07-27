#include "main.h"
#include <stdlib.h>

/**
 * *str_concat-function that concatenates two strings
 * @s1:character type of pointer
 * @s2:character type of pointer
 * Return:NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
int v;
char *f;
int a;
int s;
int h;

v = 0;
a = 0;
s = 0;
h = 0;


if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[v] && s2[v])
v++;
while (s1[a] && s2[a])
a++;

f = malloc((v *sizeof(*s1)) + (a *sizeof(*s2) + 1));
if (f == NULL)
return (NULL);

for (s = 0, h = 0; s < (v + a + 1); s++)
{
if (s < v)
f[s] = s1[s];
else
f[s] = s2[h++];
}

return (f);
}
