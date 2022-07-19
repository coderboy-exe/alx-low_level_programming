#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 * @head: the head of the linked list
 *
 * Return: nothing(void)
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
