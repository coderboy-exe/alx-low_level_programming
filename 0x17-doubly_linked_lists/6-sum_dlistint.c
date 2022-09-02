#include "lists.h"

/**
 * sum_dlistint -  a doubly linked list
 *
 * @head: the head node
 *
 * Return: Node
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (!node)
		return (0);

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
