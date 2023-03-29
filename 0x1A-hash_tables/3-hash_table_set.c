#include "hash_tables.h"
/**
 * hash_table_set - Set a value
 * @ht: Pointer to hash table
 * @key: Key
 * @value: Value
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] && !(match_element(key, ht->array[index], value)))
		return (1);

	element = malloc(sizeof(hash_node_t));

	if (!element)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);

	if (!(element->key) || !(element->value))
	{
		if (element->key)
			free(element->key);
		free(element);
		return (0);
	}
	element->next = ht->array[index];
	ht->array[index] = element;

	return (1);
}
/**
 * match_element - Check if a key value is already in a bucket
 * @key: Key
 * @array: bucket
 * @value: Value
 * Return: 1
 */
int match_element(const char *key, hash_node_t *array, const char *value)
{
	hash_node_t *match = array;

	while (match)
	{
		if (!(strcmp(match->key, key)))
		{
			free(match->value);
			match->value = strdup(value);
			return (0);
		}
		match = match->next;
	}
	return (1);
}
