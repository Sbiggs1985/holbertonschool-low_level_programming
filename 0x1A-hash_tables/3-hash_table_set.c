#include "hash_tables.h"

/**
 * free_node - Free a node.
 * @node: node
 * Return: void
 */

void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_set - Set a value
 * @ht: Hash
 * @key: Key
 * @value: Value
 * Return: 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
