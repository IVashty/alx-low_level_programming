#include "main.h"

/**
 **_strcat - function that concatenates two strings.
 *@dest: char type value
 *@src: char type of value
 *Return:a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
int v;
int a;

for (v = 0; dest[v] != '\0'; v++)
;
for (a = 0; src[a] != 0; a++)
{
dest[v] = src[a];
a++;

}

dest[v]  = '\0';
return (dest);
}
