#include "lists.h"
#include <stdlib.h>

/**
 * free_list-function that frees list_t list.
 * @head:pointer head of list_t
 */
void free_list(list_t *head)
{
list_t *a;
list_t *f;

a = head;

while (a != NULL)
{
f = a->next;
free(a->str);
free(a);
a = f;
}
}
