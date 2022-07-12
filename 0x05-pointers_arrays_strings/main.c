#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _strlen(char *);

/**
 *main - check the code for Holberton School students.
 *
 *Return: Always 0.
 */
int main(void)
{
char *s;
int v;

v = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,\n sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.\n Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\n Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur.\n Excepteur sint occaecat cupidatat non proident, sunt in culpa\n qui officia deserunt mollit anim id est laborum.";
len = _strlen(v);
printf("%d\n", len);
return (0);
}
