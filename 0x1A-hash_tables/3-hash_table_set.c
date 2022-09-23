#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: the hashtable
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *new;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	item = ht->array[idx];

	while (item)
	{
		if (strcmp(item->key, key) == 0)
		{
			free(item->value);
			strcpy(item->value, value);
			return (1);
		}
		item = item->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);

	/* Set node at beginning of linked list */
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
