#include "lists.h"

/**
 * listint_len-fn  that returns the number of elements linked listint_t list.
 * @h:pointer variable of linked list listint_len
 * Return:number of elements.
 */

size_t listint_len(const listint_t *h)
{
size_t nodes;

nodes = 0;
while (h)
{
nodes++;
h = h->next;
}

return (nodes);
}
