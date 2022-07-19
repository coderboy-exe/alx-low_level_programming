#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end -adds a new node at the end of a listint_t list
 * @head: the head of the linked list
 * @n: integer value
 * Return: address of the new element, NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		listint_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = temp;
	}

	return (temp);
}
