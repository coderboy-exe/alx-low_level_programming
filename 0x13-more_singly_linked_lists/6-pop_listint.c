#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 * @head: the head of the linked list
 *
 * Return: nothing(void)
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
