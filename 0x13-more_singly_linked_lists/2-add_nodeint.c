#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Entry point
 * Description: adds a new node at the beginning of a list.
 * @head: Head pointer
 * @n: Integer
 * Return: The address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
