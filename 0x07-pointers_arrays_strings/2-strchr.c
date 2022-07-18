#include "main.h"

/**
 * *_strchr(char *s, char c)-function that locates a character in a tring.
 * @s:string type pointer.
 * @c:character type.
 * Return:a pointer to the 1st occurence of the character c int the string s or
 * null if the characteris not found.
 */

char *_strchr(char *s, char c)
{
int v;

v = 0;
while (s[v] == c)
{
if (v == c)
return (s);
if ((s[v] + 1) == c)
{
return (s + 1);
s++;
}
}

return (s + 1);
}
