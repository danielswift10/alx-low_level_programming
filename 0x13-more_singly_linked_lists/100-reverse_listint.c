#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *copy, *temp;

	if (*head == NULL)
		return (NULL);

	copy = *head;
	temp = NULL;

	while (*head)
	{
		copy = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = copy;
	}
	*head = temp;

	return (*head);
}
