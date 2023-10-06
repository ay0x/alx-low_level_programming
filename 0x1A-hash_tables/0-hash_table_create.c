#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a new Hash Table
 * @size: This is the size of the new table
 * Return: Pointer to the new table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	/* Defining a new table and initializing it to NULL */
	hash_table_t *new_table = NULL;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	/*Assigning new memory allocation to the new table*/
	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);
    /**
	 * Assigning table size and allocating memory to the
     * slots or buckets of the hash table
    */
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
