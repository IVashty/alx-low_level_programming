#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked-function that allocates memory using malloc.
 * @b:unsigned integer type of value.
 * Return:apointer and in fail should return 98
 */

void *malloc_checked(unsigned int b)
{
void *v = malloc(b);

if (v == NULL)
exit(98);

return (v);
}
