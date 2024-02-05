#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, sets head to NULL
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while ((*head)->next)
	{
		temp = (*head)->next;
		(*head)->next = ((*head)->next)->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}
