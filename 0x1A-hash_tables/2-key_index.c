#include "hash_tables.h"

/**
 * key_index - Index key
 * @key: Key
 * @size: Size
 * Return: Depends
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size <= 0)
		return (0);
	return (hash_djb2(key) % size);
}
