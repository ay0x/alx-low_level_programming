#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - Entry point
 * Description: Prints all the elements of a node.
 * @h: Head pointer
 * Return: Size of elements(nodes)
*/

size_t print_listint(const listint_t *h)
{
	listint_t *ptr = (listint_t *)h;
	int count = 0;

	if (ptr == NULL)
	{
		printf("Error\n");
		return (1);
	}

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
