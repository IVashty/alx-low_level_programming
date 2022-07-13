#include <string.h>
#include "main.h"

/**
 * _strncpy - function  that copies a string.
 * @dest:char string type value
 * @src:char string type value
 * @n:integer type value
 * Description:the function should copy src to dest
 * Return:0 is always
 */

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
