#include "main.h"

/**
 * get_bit-function that returns the value of a bit at a given index.
 * @n:the number to search.
 * @index:bit's index.
 * Return:value of the bit at index  or -1 if error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int gbit;

if (index > 63)
return (-1);

gbit = (n >> index) & 1;i

return (gbit);
}

