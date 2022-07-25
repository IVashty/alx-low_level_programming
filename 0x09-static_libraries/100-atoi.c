#include "main.h"
/**
 * _atoi - a function that converts a string to an integer.
 * Description:you are not allowed to use long,hard-code pecial values
 * take account all the - & + before the numbers
 * the number in the string can be preceded by
 * an infinite number number of characters
 * Return:0 if there is no numbers in the string.
 */

int _atoi(char *s)
{
int v;
int f;
int a;

f = 0;
a = -1;

for (v = 0; s[v] != '\0'; v++)
{
if (s[v] == '-')
a *= -1;

if (s[v] > 47 && s[v] < 58)
{
if (f < 0)
        f = (f * 10) -(s[v] - '0');
else
f = (s[v] - '0') * -1;

if (s[v + 1] <48 || s[v + 1] > 57)
break;
}

}
if (a < 0)
v *= -1;
return(v);
}
