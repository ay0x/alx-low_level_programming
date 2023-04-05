#include "lists.h"
#include "stdlib.h"

/**
 * add_nodeint_end - Entry point
 * Description: Adds a new node at the end of a list.
 * @head: Head pointer of the list
 * @n: Integer
 * Return: Address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (current == NULL)
		*head = newNode;
	return (*head);

	while (current->next != NULL)
		current = current->next;

	current->next = newNode;

	return (newNode);
}
