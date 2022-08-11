#include "lists.h"
#include <stdio.h>
#include <stddef.h>


/**
 * print_list-function that prints all the elements of a list_t
 * @h:pointer- head of list_t
 * Return:amount of nodes
 */
size_t print_list(const list_t *h)
{
size_t v;
const list_t *f;

v = 0;
f = h;
while (f != NULL)
{
printf("[%d] %s\n", f->len, f->str);
f = f->next;
v++;
}

return (v);
}
