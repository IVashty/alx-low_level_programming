#include "main.h"
#include <stdlib.h>

/**
 * *_calloc-function that allocates memory for an array using malloc.
 * @nmemb:unsigned integer type of value.
 * @size:unsigned integer type of value.
 * Description:_calloc allocates memory of an array of nmemb elements of
 * size bytes each and returns a pointer to the allocated memory.
 * memory is set to zero.
 * Return:NULL for _calloc if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

int *f;
unsigned int v;

if (nmemb <= 0 || size <= 0)
return (NULL);


f = malloc(nmemb * size);
if (f == NULL)
return (NULL);


for (v = 0; v < (nmemb * size); v++)
f[v] = 0;


return (f);

}
