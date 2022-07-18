#include "main.h"

/**
 * _memcpy-function nthat copies memory area.
 * @dest:string type pointer.
 * @src:string type pointer.
 * @n:integer type of value
 * Return:dest a pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int v;

v = 0;
while (v < n)
{
dest[v] = src[v];
}

return (dest);
}
