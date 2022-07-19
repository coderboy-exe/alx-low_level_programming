#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: head of the singly linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
