#include "main.h"
#include <stdlib.h>

/**
 * *array_range-function that creates an array of integers
 * @min:integer type of value
 * @max:integer type of value
 * Return:a *p to a newly created array and
 * Null if min > max
 */

int *array_range(int min, int max)
{
int *f;
int v;

if (min > max)
return (NULL);

f = malloc((max - min + 1) * sizeof(*f));
if (f == NULL)
return (NULL);

for (v = 0; min <= max; v++, min++)
f[v] = min;

return (f);
}
