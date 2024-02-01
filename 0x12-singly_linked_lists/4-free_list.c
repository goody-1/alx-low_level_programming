#include "lists.h"

/**
 * free_list - adds a new node at the beginning of a list_t list.
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	while (head->next)
	{
		temp = head->next;
		head->next = (head->next)->next;

		free(temp->str);
		free(temp);
	}
	free(head->str);
	free(head);
}
