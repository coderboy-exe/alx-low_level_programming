#include "lists.h"

/**
 * print_dlistint - prints all the elements in a dlistint_t list
 *
 * @h: head node
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
