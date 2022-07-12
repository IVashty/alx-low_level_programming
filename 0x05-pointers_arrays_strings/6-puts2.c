#include "main.h"
#include <string.h>

/**
 *puts2 - function that prints every other character of a string.
 *@str:string type value
 *Description:Start with the first character followed by  anewline.
 *Return: 0 always
*/

void puts2(char *str)
{
int v;
int a;

a = strlen(str);

for (v = 0; v < a; v += 2)
_putchar(str[v]);

_putchar('\n');
}
