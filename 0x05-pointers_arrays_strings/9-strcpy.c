#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src.
 * @dest:destination value string type
 * @src:source value string type
 *Description:including the terminating null byte(\0)
 *to the buffer pointed to by dest
 *Return:the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int v;

for (v = 0; src[v] != '\0'; v++)
{
dest[v] = src[v];
}
dest[v++] = '\0';
return (dest);
}
