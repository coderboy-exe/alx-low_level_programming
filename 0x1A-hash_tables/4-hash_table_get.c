#include "hash_tables.h"

/**
 * hash_table_get - retreives the value associated with a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: value associated with the element, NULL
 * if key could not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	item = ht->array[idx];

	while (item)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
