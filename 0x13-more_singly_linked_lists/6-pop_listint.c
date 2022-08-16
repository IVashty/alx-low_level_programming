#include "lists.h"

/**
 * pop_listint-fn that deletes head.
 * @head:pointer to the first element inthe linked listint_t
 * Return:data(n) taht was deleted or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
listint_t *trash;
int node;

if (*head == NULL)
return (0);

trash = *head;
node = trash->n;
*head = trash->next;
free(trash);

return (node);
}
