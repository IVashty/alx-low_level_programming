#include "lists.h"

/**
 * free_listint2 -fn that frees a listint_t list.
 * @head:list that will be freed.
 */

void free_listint2(listint_t **head)
{
listint_t *freed;

if (head == NULL)
return;

while (*head != NULL)
{
freed = *head;
*head = (*head)->next;
free(freed);
}


}
