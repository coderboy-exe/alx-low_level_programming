#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given idx
 *
 * @head: pointer to head of doubly linked list
 * @index: index
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while ((index != 0) && (node->next != NULL))
	{
		index -= 1;
		node = node->next;
	}
	if (index == 0)
	{
		node->prev->next = node->next;
		if (node->next != NULL)
			node->next->prev = node->prev;
		free(node);
		return (1);
	}
	return (-1);
}
