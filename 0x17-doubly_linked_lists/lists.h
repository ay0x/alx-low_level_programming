#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dlistint_d - singly linked list
 * @n: integer
 * @next: points to the next node
 * @prev: points to the previous node
 *
 * Description: singly linked list node structure
 * for project
 */

typedef struct dlistint_d
{
int n;
struct dlistint_d *next;
struct dlistint_d *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);


#endif
