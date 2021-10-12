#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 *
 * @head: starting node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		listint_t *temp;

		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
