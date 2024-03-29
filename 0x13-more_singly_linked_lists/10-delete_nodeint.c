#include "lists.h"

/**
 * delete_nodeint_at_index-function that deletes node at a given index.
 * @head:pointer to the first element in the list.
 * @index:index of node that is to be deleted.
 * Return:1 if it suceeds else return 0 meaning fail.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (i < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
i++;
}


current = temp->next;
temp->next = current->next;
free(current);

return (1);
}
