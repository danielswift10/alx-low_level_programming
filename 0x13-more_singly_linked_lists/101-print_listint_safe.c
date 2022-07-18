#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 */

void free_listp(listp_t **head)
{
	listp_t *temp, *curr;

	if (head)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;
	listp_t *hptr, *new, *add;

	nodes = 0;
	hptr = NULL;

	while (head)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;
		add = hptr;

		while (add->next)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_listp(&hptr);

	return (nodes);
}
