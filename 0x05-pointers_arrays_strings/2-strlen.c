#include "main.h"

/**
 * _strlen - funtion returns the length of a string
 * @s:character type pointer
 * Return: ALways 0
 */

int _strlen(char *s)
{
/*
 * char s[] = "Return String's length
 */
int v;

for (v = 0; s[v] != '\0'; ++v)
v += 1;

return (v);
}
