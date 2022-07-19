#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head node of list
 * @index: node to delete
 * Return: 1 on success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int i = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}

	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
