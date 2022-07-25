#include "main.h"
#include <stdio.h>
#include  <string.h>

/**
 *_strncat  - a function that concatenates 2 strings.
*Description:
*@dest:char string type.
*@src: char string type.
*@n:integer type
*Return:0 always
*
*/

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
