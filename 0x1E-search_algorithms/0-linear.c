#include "search_algos.h"

/**
 * linear_search - Searches a value in an array using a linear search algorithm
 * @array: pointer to search in.
 * @size: number of elements in the array.
 * @value: value to search for
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
size_t v;

for (v = 0; (v < size) && (array); v++)
{
if (*(array + v) == value)
{
printf("Value checked array[%d] = [%d]\n", (int)v, *(array + v));
return (v);
}
else
{
printf("Value checked array[%d] = [%d]\n", (int)v, *(array + v));
}
}
return (-1);
}
