#include "main.h"
#include <string.h>

/**
 * _strlen - funtion returns the length of a string
 * @s:character type pointer
 * Return: ALways 0
 */

int _strlen(char *s)
{
int v;

for (; *s != '\0'; ++v)
v += 1;

return (v);
}
