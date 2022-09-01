#include "lists.h"

/**
 * dlistint_len - prints the length of a dlistint_t list
 *
 * @h: head node
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i += 1;
	}

	return (i);
}
