#include "lists.h"

/**
 * list_len-function that returns the number of elements
 * in  a linked list_t list_len
 * @h:pointer for list_t
 * Return:number of elements in h
 */
size_t list_len(const list_t *h)
{
size_t v;
const list_t *f;

v = 0;
f = h;
while (f != NULL)
{
f = f->next;
v++;
}

return (v);
}
