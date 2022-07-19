#include "lists.h"

/**
 * reverse_listint - reverse a singly linked list
 * @head: the head node
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *after = NULL;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = after;
	}
	*head = prev;
	return (*head);
}
