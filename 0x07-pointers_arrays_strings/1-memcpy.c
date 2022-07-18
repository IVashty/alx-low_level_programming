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
char *v;

v = dest;
while (n > 0)
{
dest = src;
dest++;
src++;
n--;
}

return (v);
}
