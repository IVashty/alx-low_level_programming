#include "main.h"
#include <stdlib.h>

/**
 * *create_array-function that creates ab array of chars and initiaalises it
 * with a specific char.
 * @c:character type of value
 * @size:unsigned integer type of value
 * Return:NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
unsigned int v;
char *f;

if (size == 0)
return (NULL);

f = (char *)malloc(size * sizeof(*f));
if (f == NULL)
return (NULL);

for (v = 0; v < size; v++)
f[v] = c;

return (f);
}
