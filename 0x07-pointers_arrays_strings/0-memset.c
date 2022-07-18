#include "main.h"

/**
 * _memset(char *s, char b, unsigned int n)-function tha fills memory
 * with a constant byte.
 * @s:string type value-pointer
 * @b:string type value-pointer
 * @n:integer type value
 * Return:dest
 */

char *_memset(char *s, char b, unsigned int n)
{
int v;

v = 0;
while (n > 0)
{
s[v] = b;
v++;
}

return (s);
}
