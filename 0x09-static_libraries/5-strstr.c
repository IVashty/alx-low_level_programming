#include "main.h"

/**
 * *_strstr -function that locates a substring.
 *@haystack:string type pointer
 *@needle:string type pointer.
 *Return:a pointer of the located string or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
int v;
int j;

v = 0;
j = 0;

while (haystack[v])
{
while (needle[j])
{
if (haystack[v + j] != needle[j])
{
break;
}
j++;

}
if (needle[j] == '\0')
{
return (haystack + v);
}
v++;
}

return ('\0');
}
