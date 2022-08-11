#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node-function that adds a new node at the beginning of the
 * list_t list
 * @head:double pointer to the list_t list.
 * @str:string to add in the new node
 * Return:address of the new element.
 * Return:NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
int v;
list_t *f;

for (v = 0; str[v] != '\0'; v++)
;
f = malloc(sizeof(list_t));
if (f == NULL)
{
free (f);
return (NULL);
}

f->str = strdup(str);
if (f->str == NULL)
{
free (f);
return (NULL);
}
f->len = v;
f->next = (*head);

(*head) = f;
return (*head);
}
