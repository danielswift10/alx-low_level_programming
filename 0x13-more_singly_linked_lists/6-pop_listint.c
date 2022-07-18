#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */

int pop_listint(listint_t **head)
{
	int node_data;

	listint_t *new;

	if (*head == NULL)
		return (0);

	node_data = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (node_data);
}
