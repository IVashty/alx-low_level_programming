#include "lists.h"

/**
 * sum_listint-fn that returns the sum of of all data.
 * @head:pointer to the head
 * Return:sum of int
 */
int sum_listint(listint_t *head)
{
int add = 0;
listint_t *sum = head;

while (sum != NULL)
{
add += sum->n;
sum = sum->next;
}

return (add);
}
