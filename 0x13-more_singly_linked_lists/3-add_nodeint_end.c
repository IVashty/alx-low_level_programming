#include "lists.h"

/**
 * add_nodeint_end-fn thats add a new node at the end of linked list listint_t
 * @head:data of the first node.
 * @n:data inserted
 * Return:address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *data;
listint_t *last;

last = *head;

data = malloc(sizeof(listint_t));
if (data == NULL)
return (NULL);

data->n = n;
data->next = NULL;

if(*head == NULL)
{
*head = data;
return (data);
}

while (last->next)
last = last->next;

last->next = data;

return (data);
}
