#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - A function that creates a hash table
 * @size: Size
 * Return: A pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	hash_table_t *new_hash_table = malloc(sizeof(hash_table_t));

	if (!new_hash_table)
		return (NULL);
	new_hash_table->array = malloc(sizeof(hash_node_t **) * size);

	if (!new_hash_table->array)
	{
		free(new_hash_table);
		return (NULL);
	}

	while (index < size)
	{
		new_hash_table->array[index] = NULL;
		index++;
	}
	new_hash_table->size = size;
	return (new_hash_table);
}
