#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a
 * listint_t list
 * @h: the head of the linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nums = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nums++;
	}
	return (nums);
}
