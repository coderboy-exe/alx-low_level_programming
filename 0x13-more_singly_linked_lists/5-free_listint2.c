#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 * @head: the head of the linked list
 *
 * Return: nothing(void)
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
