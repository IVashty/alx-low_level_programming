#include "main.h"

/**
 * _strpbrk -function that searches a string for any of a set of bytes.
 * @s:string type pointer
 * @accept:string type pointer
 * Return:apointer in s that matches one of the bytes in @accept or null
 */

char *_strpbrk(char *s, char *accept)
{
int v;
int j;

v = 0;

while (s[v])
{
j = 0;
while (accept[j])
{
if (accept[j] == s[v])
{
s += v;
return (s);
}
j++;

}
v++;
}

return ('\0');
}
