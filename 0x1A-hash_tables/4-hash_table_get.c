#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hashtable
 * @key: The key
 * Return: Value to the key pair
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}

	return (NULL);
}
