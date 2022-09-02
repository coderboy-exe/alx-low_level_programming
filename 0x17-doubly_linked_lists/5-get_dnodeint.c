#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 *
 * @head: the head node
 * @index: the node of interest
 *
 * Return: Node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	if (!node)
		return (NULL);

	while (node && i < index)
	{
		node = node->next;
		i++;
	}

	return (node);
}
