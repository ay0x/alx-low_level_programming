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


#endif
