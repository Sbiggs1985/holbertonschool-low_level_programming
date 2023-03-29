#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds element to the hash table
 * @ht: Pointer to the hash table
 * @key: The key. Key can not be an empty string
 * @value: The value associated with the key and must be duplicated
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);

			if (!temp->value)
				return (0);
				return (1);
			}
			temp = temp->next;
		}

	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	new_node->key = strdup(key);

	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);

	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
