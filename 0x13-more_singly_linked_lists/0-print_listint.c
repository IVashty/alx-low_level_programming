#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint-function prints all the elements of a listint_t list.
 * @h:pointer variable of linked list listint_t.
 * Return:number of nodes.
 */

size_t print_listint(const listint_t *h)
{
size_t nodes;

nodes = 0;

while (h)
{
printf("%d\n", h->n);
nodes++;
h = h->next;

}

return (nodes);
}
