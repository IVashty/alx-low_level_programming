#ifndef list_h
#define list_h

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/*0-print_listint.c function*/
size_t print_listint(const listint_t *h);

/*1-listint_len function*/
size_t listint_len(const listint_t *h);



#endif
