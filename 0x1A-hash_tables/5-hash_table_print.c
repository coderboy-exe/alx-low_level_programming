#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: No return
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int idx = 0;
	char *delim = "";

	if (ht == NULL)
		return;

	printf("{");
	while (idx < ht->size)
	{
		item = ht->array[idx];
		while (item)
		{
			printf("%s\'%s\': \'%s\'", delim, item->key, item->value);
			delim = ", ";
			item = item->next;
		}
		idx++;
	}
	printf("}\n");
}
