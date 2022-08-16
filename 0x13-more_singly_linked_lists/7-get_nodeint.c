#include "lists.h"

/**
 * get_nodeint_at_index-fn that returns the nth node index of listint_t
 * @head:first node in listint_t.
 * @index:index of node in integer type.
 * Return:0 if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int v = 0;
listint_t *blank = head;


while (blank && v < index)
{
if (blank)
blank = blank->next;
else
return (NULL);
v++;
}

if (blank)
return (blank);
else
return (NULL);

}
