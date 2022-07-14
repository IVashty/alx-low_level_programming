#include "main.h"

/**
 * *string_toupper -function that changes all lowercase letters of\n
 * a string to uppercase.
 * @V:string type pointer
 * Return:a string %s.
 */

char *string_toupper(char *V)
{
int v;

for (v = 0; (V[v] = '\0'); v++)
{
if (V[v] >= 'a' && V[v] <= 'z')
{
V[v] = V[v] - 32;
}
}
return (V);
}
