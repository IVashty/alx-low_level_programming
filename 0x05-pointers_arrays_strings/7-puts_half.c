#include "main.h"

/**
 * puts_half -function that prints half of a string followed by  anew line
 * @str:string type value
 * Description:use only _putchar anf if the number of characters is odd,
 * the funciton should print the last n characters of the string
 */

void puts_half(char *str)
{
int v;

for (v = 0; str[v] != '\0'; v++)
;

v++;
for (v /= 2; str[v] != '\0'; v++)
{
_putchar(str[v]);
}

_putchar('\n');
}
