#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position
 * @head: pointer to the head node of the linked list
 * @idx: the index of the new node
 * @n: data to be added in new node
 *
 * Return: address of new node, NULL if operation fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i;

	temp = *head;

	if (idx != 0)
	{
		for (i = 0; (i < idx - 1) && (temp != NULL); i++)
			temp = temp->next;
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
