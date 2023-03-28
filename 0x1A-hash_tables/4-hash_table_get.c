#include "hash_tables.h"

/**
 * hash_table_get - Get a value
 * @ht: Hash table
 * @key: Key
 * Return: A value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	if (node == NULL)
		return (NULL);
	else
		return (node->value);
}
