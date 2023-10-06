#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 * Return: nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (current->next)
				printf(", ");
			current = current->next;
		}
	}
	printf("}\n");
}
