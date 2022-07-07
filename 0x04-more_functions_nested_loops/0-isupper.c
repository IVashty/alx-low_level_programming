#include "main.h"

/**
 *_isupper - function that checks for uppercase characters
 *@c: int type number integer
 *Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
if (c > 'A' && c < 'a')
return (1);

return (0);
}
