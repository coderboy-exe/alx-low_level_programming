#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint -adds a new node at the beginning of a listint_t list
 * @head: the head of the linked list
 * @n: integer value
 * Return: address of the new element, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
