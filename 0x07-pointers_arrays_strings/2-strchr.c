#include "main.h"
#include <stddef.h>


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
int j;

v = 1;
while (v)
j = *s++;
{
if (j == c)
{
return (s - 1);
}
if (j == 0)
{
return (NULL);
}
}
return (0);
}
