#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head of list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head;

	while (curr)
	{
		*head = (*head)->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}

	*head = prev;
	return (*head);
}
