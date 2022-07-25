#include "main.h"
#include <string.h>

/**
 * _strcmp - a function that compares two strings
 * @s1:char string type
 * @s2:char string type pointer
 * Description:use strcmp
 * Return:0 always
 */

int _strcmp(char *s1, char *s2)
{
int ans;

ans = strcmp(s1, s2);
return (ans);
}
