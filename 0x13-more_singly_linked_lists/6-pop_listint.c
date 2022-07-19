#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the headnode of a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int key;

	if (*head == NULL)
		return (0);

	temp = *head;
	key = temp->n;

	*head = temp->next;
	free(temp);

	return (key);
}
