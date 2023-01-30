#include "search_algos.h"

/**
 * binary_search - performs binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int binary_search(int *array, size_t size, int value)
{
size_t v = 0;
int *a = array;

if (!array)
return (-1);

while (size)
{
for (v = 0, printf("Searching in array: "); v < size; v++)
printf("%d%s", a[v], i + 1 == size ? "\n" : ", ");

i = (size - 1) / 2;
if (a[i] == value)
return ((a - array) + i);
else if (a[i] > value)
size = i;
else
{
a += (i + 1);
size -= (i + 1);
}
}
return (-1);
}
