#include "main.h"

/**
 * _strlen - funtion returns the length of a string
 * @s:character type pointer
 * Return: ALways 0
 */

int _strlen(char *s)
{
int v;

for (v = 0; *s != '\0'; ++v)
v += 1;

return (v);
}
