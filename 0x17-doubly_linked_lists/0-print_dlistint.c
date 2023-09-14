#include "lists.h"


/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Header node
 * Return: The number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t len = 0;

while (current != NULL)
{
printf("%d\n", current->n);
len++;
current = current->next;
}
return (len);

}
