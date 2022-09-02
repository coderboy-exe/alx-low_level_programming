#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head node
 * @idx: index to add the new node
 * @n: node data
 *
 * Return: address of the new node, NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;
	unsigned int i;

	newNode = (dlistint_t *) malloc(sizeof(struct dlistint_s));

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (!(*h) || idx < 1)
	{
		return (NULL);
	}
	else if (idx == 1)
	{
		newNode->next = *h;
		(*h)->prev = newNode;
		(*h) = newNode;
	}
	else
	{
		temp = *h;
		for (i = 1; i < idx-1; i++)
		{
			if (temp)
			{
				temp = temp->next;
			}
		}

		if (temp)
		{
			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next = newNode;

			if (newNode->next != NULL)
				newNode->next->prev = newNode;
			else
				return (NULL);
		}
	}

	return (newNode);
}
