#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid-function that returns a pointer to a 2 dimensional
 * array of integers
 * @width:integer type of value
 * @height:integer type of value
 * Return:Null on failure.
 */


int **alloc_grid(int width, int height)
{
int v;
int **f;
int a;
int s;
int h;

v = 0;
a = 0;
s = 0;
h = 0;


if (width <= 0 || height <= 0)
return (NULL);

f = malloc(height * sizeof(int *));
if (f == NULL)
{
free(f);
return (NULL);
}

for (v = 0; v < height; v++)
{
f[v] = malloc(width * sizeof(int));
{
for (a = v; a >= 0; v++)
{
free(f);
return (NULL);
}
}
}

for (s = 0; s < height; s++)
{
for (h = 0; h < width; h++)
f[s][h] = 0;
}
return (f);
}
