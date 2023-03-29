#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value
 * @ht: If the ht is the hash table
 * @key: The key is the input
 * Return: Really depends on the hash table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	if (current == NULL)
		return (NULL);

	while (strcmp(current->key, key) && current != NULL)
	{
		current = current->next;
	}

	if (current == NULL)
		return (NULL);
	else
		return (current->value);
}
