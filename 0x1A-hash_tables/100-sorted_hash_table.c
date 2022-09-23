#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table, NULL on failure
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	ht = (shash_table_t *) malloc(sizeof(shash_table_t));

	if (!ht)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (ht->array == NULL)
		return (NULL);

	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - adds an element to a sorted hash table
 * @ht: the hashtable
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *item, *new;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	item = ht->shead;

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

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		item = ht->shead;
		while (item->snext != NULL && strcmp(item->snext->key, key) < 0)
			item = item->snext;
		new->sprev = item;
		new->snext = item->snext;
		if (item->snext == NULL)
			ht->stail = new;
		else
			item->snext->sprev = new;
		item->snext = new;
	}

	return (1);
}

/**
 * shash_table_get - retreives the value associated with a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: value associated with the element, NULL
 * if key could not be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *item;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	item = ht->shead;
	while (item)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: the hash table
 *
 * Return: No return
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *item;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	item = ht->shead;
	while (item)
	{
		if (flag == 1)
			printf(", ");
		flag = 1;
		printf("'%s': '%s'", item->key, item->value);
		item = item->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: the hash table
 *
 * Return: No return
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *item;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	item = ht->stail;
	while (item)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", item->key, item->value);
		item = item->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: the hash table
 *
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *node;

	if (ht == NULL || ht->array == NULL)
	{
		free(ht);
		return;
	}

	node = ht->shead;
	while (node)
	{
		tmp = node->next;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(ht->array);
	free(ht);
}
