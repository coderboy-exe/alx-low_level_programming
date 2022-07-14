#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to be duplicated/stored.
 * Return: address of the new element(head).
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
