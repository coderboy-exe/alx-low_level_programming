#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of eelements in a
 * linked listint_t list
 * @h: the head of the linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
