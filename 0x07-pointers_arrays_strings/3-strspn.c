#include "main.h"

/**
 * _strspn(char *s, char *accept)-funtion that gets
 * the length of a prefix substring.
 * @s:string type pointer.
 * @accept:string type pointer.
 * Return:number of bytes in an intial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int v;
unsigned int f;
unsigned int j;

v = 0;
j = 0;

while (accept[v])
{
f = 0;
while (s[f] != 32)
{
if (accept[v] == s[f])
{
j++;
}
f++;

}
v++;
}
return (j);
}
