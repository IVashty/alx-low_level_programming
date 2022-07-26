#include "main.h"
#include <stdlib.h>

/**
 * *_strdup-function that returns a pointer to a newly allocateddspace memory
 * which contains a copy the string given as parameter
 *
 * @str:character type of value
 * @*str:character type of pointer
 * Return:NULL if str = NULL
 */

char *_strdup(char *str)
{
int v;
char *f;
int a;

v = 1;
a = 0;

if (str == NULL)
return (NULL);
while (str[v])
v++;

f = malloc(v *sizeof(*f) + 1);
if (f == NULL)
return (NULL);

for (a = 0; a < v; a++)
f[a] = str[a];
f[a] = '\0';

return (f);
}
