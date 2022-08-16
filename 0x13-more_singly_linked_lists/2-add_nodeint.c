#include "lists.h"

/**
 * add_nodeint-fn that adds a new node at the beginningof a listint_t list
 * @head:data for the first node.
 * @n:data to be inserted in the head.
 * Return:address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *data;

data = malloc(sizeof(listint_t));
if (data == NULL)
return (NULL);

data->n = n;
data->next = *head;
*head = data;

return (data);
}
