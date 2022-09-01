#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: head node
 * @n: node
 *
 * Return: the address of the element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	
	newNode = (dlistint_t*) malloc(sizeof(struct dlistint_s));

	newNode->n = n;

	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		(*head)->prev = newNode;
		newNode->next = *head;
		*head = newNode;
	}

	return (newNode);
}
