#include "lists.h"

/**
 * free_listptr - frees a linked list
 * @head: head of a list
 *
 * Return: void
 */
void free_listptr(listptr_t **head)
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
 * print_listint_safe - prints a linked list (safe version)
 * @head: head node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	listptr_t *head_ptr, *tmp, *add;

	head_ptr = NULL;
	while (head)
	{
		tmp = malloc(sizeof(listptr_t));

		if (tmp == NULL)
			exit(98);

		tmp->ptr = (void *)head;
		tmp->next = head_ptr;
		head_ptr = tmp;

		add = head_ptr;

		while (add->next)
		{
			add = add->next;
			if (head == add->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listptr(&head_ptr);
				return (num_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num_nodes++;
	}

	free_listptr(&head_ptr);
	return (num_nodes);
}
