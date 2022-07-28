#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat-function that concatenate two strings
 * @s1:character pointer
 * @s2:character pointer
 * @n:integer type of value
 * Return:NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *f;
unsigned int v;
unsigned int s;

v = n;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

f = malloc(sizeof(char) * (v + 1));

if (f == NULL)
return (NULL);

v = 0;

for (s = 0; s1[s]; s++)
f[v++] = s1[s];


for (s = 0; s2[s] && s < n; s++)
f[v++] = s2[s];

f[v] = '\0';

return (f);
}
