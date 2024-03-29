#ifndef list_h
#define list_h

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


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

/*2-add_nodeint function*/
listint_t *add_nodeint(listint_t **head, const int n);

/*3-add_nodeint_end*/
listint_t *add_nodeint_end(listint_t **head, const int n);

/*4-free_listint function*/
void free_listint(listint_t *head);

/*5-free_listint2 function*/
void free_listint2(listint_t **head);

/*6-pop_listint function*/
int pop_listint(listint_t **head);

/*7-get_nodeint function*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/*8-sum_listint function*/
int sum_listint(listint_t *head);

/*9-insert_nodeint function*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/*10-delete_nodeint function*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/*100-reverse_listint function*/
listint_t *reverse_listint(listint_t **head);

/*101-print_listint_safe function*/
size_t print_listint_safe(const listint_t *head);

/*102-free_listint_safe function*/
size_t free_listint_safe(listint_t **h);

/*103-find_loop  function*/
listint_t *find_listint_loop(listint_t *head);





#endif
