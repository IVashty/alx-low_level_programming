#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>

/*data structure for this project*/
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/*0-print_list.c function*/
size_t print_list(const list_t *h);

/*1-list_len function*/
size_t list_len(const list_t *h);

/*2-add_node function*/
list_t *add_node(list_t **head, const char *str);

/*3-add_node_end function*/
list_t *add_node_end(list_t **head, const char *str);

/*4-free_list function*/
void free_list(list_t *head);

#endif
