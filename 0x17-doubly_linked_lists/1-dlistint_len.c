#include "lists.h"

/**
 * dlistint_len - Prints the length of a doubly linked list
 * @h: Header node
 * Return: The number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t len = 0;

while (current != NULL)
{
len++;
current = current->next;
}
return (len);
}
