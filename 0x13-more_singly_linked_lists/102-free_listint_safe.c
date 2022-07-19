#include "lists.h"

/**
 * free_listptr2 - frees a linked list
 * @head: head of a list
 *
 * Return: void
 */
void free_listptr2(listptr_t **head)
{
	listptr_t *temp;
	listptr_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list (safe version)
 * @head: head node of the list
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_nodes = 0;
	listptr_t *head_ptr, *tmp, *add;
	listint_t *current;

	head_ptr = NULL;
	while (*h)
	{
		tmp = malloc(sizeof(listptr_t));

		if (tmp == NULL)
			exit(98);

		tmp->ptr = (void *)*h;
		tmp->next = head_ptr;
		head_ptr = tmp;

		add = head_ptr;

		while (add->next)
		{
			add = add->next;
			if (*h == add->ptr)
			{
				*h = NULL;
				free_listptr2(&head_ptr);
				return (num_nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		num_nodes++;
	}

	*h = NULL;
	free_listptr2(&head_ptr);
	return (num_nodes);
}
