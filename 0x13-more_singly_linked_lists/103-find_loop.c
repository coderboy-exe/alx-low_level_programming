#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head node of the list
 *
 * Return: address of the node where the loop starts, NULL
 * if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *left;
	listint_t *right;

	left = right = head;

	while (left && right)
	{
		left = left->next;
		right = right->next->next;

		if (left == right)
		{
			left = head;

			while (left != right)
			{
				left = left->next;
				right = right->next;
			}
			return (left);
		}
	}
	return (NULL);
}
