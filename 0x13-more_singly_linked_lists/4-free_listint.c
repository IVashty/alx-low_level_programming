#include "lists.h"

/**
 * free_listint -fn that frees a listint_t list.
 * @head:list that will be freed.
 */

void free_listint(listint_t *head)
{
listint_t *freed;

while (head)
{
freed = head->next;
free(head);
head = freed;
}
}
