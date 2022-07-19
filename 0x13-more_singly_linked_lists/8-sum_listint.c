#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a list
 * @head: the head node of the list
 * Return: sum, 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
