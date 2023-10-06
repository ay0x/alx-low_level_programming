#include "hash_tables.h"

/**
 * key_index - Function returns the index of a key
 * @key: The key
 * @size: Size of the array of the hashtable
 * Return: The index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
