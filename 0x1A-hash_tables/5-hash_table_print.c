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
	unsigned long int id = 1;
	char *delim = "";

	if (ht == NULL)
		return;

	printf("{");
	while (id < ht->size)
	{
		item = ht->array[id];
		while (item)
		{
			printf("%s\'%s\': \'%s\' ", delim, item->key, item->value);
			delim = ", ";
			item = item->next;
		}
		id++;
	}
	printf("}\n");
}
