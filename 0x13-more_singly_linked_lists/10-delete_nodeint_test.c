#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the nth node of a linked list
 * @head: pointer to the head node of the linked list
 * @index: the index of the node
 *
 * Return: 1 on success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	i = (*head)->n;

	if(i == index)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		listint_t *current_node = *head;
		unsigned int j = current_node->next->n;

		while (current_node)
		{
			if (j == index)
			{
				temp = current_node->next;
				current_node = current_node->next->next;
				return (1);
			}
			else
			{
				current_node = current_node->next;
				free(current_node);
			}
		}
	}
	return (-1);
}
