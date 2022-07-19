#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head node of the linked list
 * @index: the index of the node
 *
 * Return: nth node if it exists, NULL otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
